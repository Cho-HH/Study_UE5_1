// Fill out your copyright notice in the Description page of Project Settings.


#include "ABCharacter.h"
#include "ABAnimInstance.h"
#include "DrawDebugHelpers.h"
#include "ABWeapon.h"
#include "ABCharacterStatComponent.h"
#include "Components/WidgetComponent.h"
#include "ABCharacterWidget.h"
#include "ABAIController.h"
#include "ABCharacterSetting.h"
#include "ABGameInstance.h"
#include "ABPlayerController.h"
#include "ABPlayerState.h"
#include "ABHUDWidget.h"

#include <cassert>

// Sets default values
AABCharacter::AABCharacter()
	: mArmLengthSpeed(3.f)
	, mArmRotationSpeed(5.f)
	, bAttacking(false)
	, mMaxCombo(4)
	, AttackRange(200.f)
	, AttackRadius(50.f)
	, isHoldingWeapon(false)
	, mAssetIdx(4)
	, mDeadTimer(5.0f)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	mCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
	mCharStat = CreateDefaultSubobject<UABCharacterStatComponent>(TEXT("STAT"));
	mHPBar = CreateDefaultSubobject<UWidgetComponent>(TEXT("HPBAR"));

	mHPBar->SetupAttachment(GetMesh());
	mHPBar->SetRelativeLocation(FVector(0.0f, 0.0f, 180.0f));
	mHPBar->SetWidgetSpace(EWidgetSpace::Screen);
	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD(TEXT("/Game/Book/UI/UI_HPBar.UI_HPBar_C"));
	if (UI_HUD.Succeeded())
	{
		mHPBar->SetWidgetClass(UI_HUD.Class);
		mHPBar->SetDrawSize(FVector2D(150.0f, 50.0f));
	}

	mSpringArm->SetupAttachment(GetCapsuleComponent());
	mCamera->SetupAttachment(mSpringArm);

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0, 0.0, -88.0), FRotator(0.0, -90.0, 0.0));
	//mSpringArm->TargetArmLength = 400.0f;
	//mSpringArm->SetRelativeRotation(FRotator(-15.0, 0.0, 0.0));

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_MESH(TEXT("/Game/InfinityBladeWarriors/Character/CompleteCharacters/SK_CharM_Cardboard.SK_CharM_Cardboard"));
	if (SK_MESH.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(SK_MESH.Object);
	}

	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);

	static ConstructorHelpers::FClassFinder<UAnimInstance> ANIM(TEXT("/Game/Animation/WarriorAnimBlueprint.WarriorAnimBlueprint_C"));
	if (ANIM.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(ANIM.Class);
	}

	AIControllerClass = AABAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	SetControlMode(mCurrentConotrol);
	AttackEndComboState();

	auto DefaultSetting = GetDefault<UABCharacterSetting>();
	if (DefaultSetting->CharacterAssets.Num() > 0)
	{
		for (auto asset : DefaultSetting->CharacterAssets)
		{
			ABLOG(Warning, TEXT("Character Asset : %s"), *asset.ToString());
		}
	}

	SetActorHiddenInGame(true);
	mHPBar->SetHiddenInGame(true);
	SetCanBeDamaged(false);
}

// Called when the game starts or when spawned
void AABCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	auto DefaultSetting = GetDefault<UABCharacterSetting>();

	mbIsPlayer = IsPlayerControlled();
	if (mbIsPlayer)
	{
		mPlayerController = Cast<AABPlayerController>(GetController());
		ABCHECK(mPlayerController != nullptr);
		mAssetIdx = 4;
	}
	else
	{
		mAIController = Cast<AABAIController>(GetController());
		ABCHECK(mAIController != nullptr);
		mAssetIdx = FMath::RandRange(0, DefaultSetting->CharacterAssets.Num() - 1);
	}

	
	mCharacterAssetToLoad = DefaultSetting->CharacterAssets[mAssetIdx];
	auto gameIns = Cast<UABGameInstance>(GetGameInstance());
	if (gameIns != nullptr)
	{
		mAssetStreamingHandle = gameIns->mStreamMng.RequestAsyncLoad(mCharacterAssetToLoad, FStreamableDelegate::CreateUObject(this, &AABCharacter::OnAssetLoadCompleted));
	}
	SetCharacterState(ECharacterState::LOADING);

	GetCapsuleComponent()->SetCollisionProfileName(TEXT("ABCharacter1"));
}

void AABCharacter::SetControlMode(EControlMode ControlMode)
{
	mCurrentConotrol = ControlMode;

	switch (ControlMode)
	{
	case EControlMode::GTA:		
		//mSpringArm->TargetArmLength = 450.f;
		//mSpringArm->SetRelativeRotation(FRotator::ZeroRotator);
		mArmLengthTo = 450.f;
		mArmRotationTo = FRotator::ZeroRotator;

		mSpringArm->bUsePawnControlRotation = true;
		mSpringArm->bInheritPitch = true;
		mSpringArm->bInheritRoll = true;
		mSpringArm->bInheritYaw = true;
		mSpringArm->bDoCollisionTest = true;
		bUseControllerRotationYaw = false;

		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->RotationRate = FRotator(0.f, 720.f, 0.f);
		GetCharacterMovement()->bUseControllerDesiredRotation = false;
		break;

	case EControlMode::DIABLO:
		//mSpringArm->TargetArmLength = 800.f;
		//mSpringArm->SetRelativeRotation(FRotator(-45.0, 0.0, 0.0));
		mArmLengthTo = 800.f;
		mArmRotationTo = FRotator(-45.0, 0.0, 0.0);

		mSpringArm->bUsePawnControlRotation = true;
		mSpringArm->bInheritPitch = false;
		mSpringArm->bInheritRoll = false;
		mSpringArm->bInheritYaw = false;
		mSpringArm->bDoCollisionTest = false;

		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bUseControllerDesiredRotation = true;
		GetCharacterMovement()->RotationRate = FRotator(0.f, 720.f, 0.f);
		break;
	case EControlMode::NPC:
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bUseControllerDesiredRotation = false;
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 480.0f, 0.0f);
		break;
	default:
		break;
	}
}

// Called every frame
void AABCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	mSpringArm->TargetArmLength = FMath::FInterpTo(mSpringArm->TargetArmLength, mArmLengthTo, DeltaTime, mArmLengthSpeed);
	
	switch (mCurrentConotrol)
	{
	case EControlMode::DIABLO:
		mSpringArm->SetRelativeRotation(FMath::RInterpTo(mSpringArm->GetRelativeRotation(), mArmRotationTo, DeltaTime, mArmRotationSpeed));
		if (mMoveDirect.SizeSquared() > 0.f)
		{
			GetController()->SetControlRotation(FRotationMatrix::MakeFromX(mMoveDirect).Rotator());
			AddMovementInput(mMoveDirect);
		}
		break;
	default:
		break;
	}

	/*if (!bAttacking)
	{
		switch (mCurrentConotrol)
		{
		case EControlMode::DIABLO:
			mSpringArm->SetRelativeRotation(FMath::RInterpTo(mSpringArm->GetRelativeRotation(), mArmRotationTo, DeltaTime, mArmRotationSpeed));
			if (mMoveDirect.SizeSquared() > 0.f)
			{
				GetController()->SetControlRotation(FRotationMatrix::MakeFromX(mMoveDirect).Rotator());
				AddMovementInput(mMoveDirect);
			}
			break;
		default:
			break;
		}
	}*/
}

// Called to bind functionality to input
void AABCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AABCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AABCharacter::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AABCharacter::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AABCharacter::Turn);	

	PlayerInputComponent->BindAction(TEXT("ViewChange"), EInputEvent::IE_Pressed, this, &AABCharacter::ViewChange);

	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this, &AABCharacter::Attack);
	PlayerInputComponent->BindAction(TEXT("PutDown"), EInputEvent::IE_Pressed, this, &AABCharacter::PutDownWeapon);
}

void AABCharacter::PutDownWeapon()
{
	if (!isHoldingWeapon)
	{
		return;
	}

	isHoldingWeapon = false;
	curWeapon->Destroy();
}

void AABCharacter::OnAssetLoadCompleted()
{
	USkeletalMesh* assetLoaded = Cast<USkeletalMesh>(mAssetStreamingHandle->GetLoadedAsset());
	mAssetStreamingHandle.Reset();
	ABCHECK(assetLoaded != nullptr);
	if (assetLoaded != nullptr)
	{
		GetMesh()->SetSkeletalMesh(assetLoaded);
		SetCharacterState(ECharacterState::READY);
	}
}

void AABCharacter::UpDown(float NewAxisValue)
{
	switch (mCurrentConotrol)
	{
	case EControlMode::GTA:
		AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X), NewAxisValue);
		break;
	case EControlMode::DIABLO:
		mMoveDirect.X = NewAxisValue;
		break;
	default:
		break;
	}
	
}

void AABCharacter::LeftRight(float NewAxisValue)
{
	switch (mCurrentConotrol)
	{
	case EControlMode::GTA:
		AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y), NewAxisValue);
		break;
	case EControlMode::DIABLO:
		mMoveDirect.Y = NewAxisValue;
		break;
	default:
		break;
	}
	
}

void AABCharacter::LookUp(float NewAxisValue)
{
	switch (mCurrentConotrol)
	{
	case EControlMode::GTA:
		AddControllerPitchInput(NewAxisValue);
		break;
	default:
		break;
	}
}

void AABCharacter::Turn(float NewAxisValue)
{
	switch (mCurrentConotrol)
	{
	case EControlMode::GTA:
		AddControllerYawInput(NewAxisValue);
		break;
	default:
		break;
	}
	
}

void AABCharacter::ViewChange()
{
	switch (mCurrentConotrol)
	{
	case EControlMode::DIABLO:
		GetController()->SetControlRotation(mSpringArm->GetRelativeRotation());
		SetControlMode(EControlMode::GTA);
		break;
	case EControlMode::GTA:
		GetController()->SetControlRotation(GetActorRotation());
		SetControlMode(EControlMode::DIABLO);
		break;
	default:
		break;
	}
}

void AABCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	mABAnim = Cast<UABAnimInstance>(GetMesh()->GetAnimInstance());
	assert(mABAnim != nullptr);

	mABAnim->OnMontageEnded.AddDynamic(this, &AABCharacter::OnAttackMontageEnded);

	mABAnim->OnNextAttackCheck.AddLambda([this]() -> void {
		bCanNextCombo = false;

		if (bComboInputOn)
		{
			AttackStartComboState();
			mABAnim->JumpToAttackMotageSection(mCurrentCombo);
		}
		});

	mABAnim->OnAttackHitCheck.AddUObject(this, &AABCharacter::AttackCheck);
	mCharStat->OnHPIsZero.AddLambda([this]() {
		mABAnim->SetDeadAnim();
		SetActorEnableCollision(false);
		});
}

void AABCharacter::Attack()
{
	if (bAttacking)
	{
		ABCHECK(FMath::IsWithinInclusive<int32>(mCurrentCombo, 1, mMaxCombo));
		if (bCanNextCombo)
		{
			bComboInputOn = true;
		}	
	}
	else
	{
		ABCHECK(mCurrentCombo == 0);
		AttackStartComboState();
		mABAnim->PlayAttackMontage();
		//mABAnim->JumpToAttackMotageSection(mCurrentCombo);
		bAttacking = true;
	}	
}

void AABCharacter::SetCharacterState(ECharacterState newState)
{
	mCurState = newState;

	switch (mCurState)
	{
	case ECharacterState::LOADING:
	{
		if (mbIsPlayer)
		{
			DisableInput(mPlayerController);
			mPlayerController->GetHUDWidget()->BindCharacterStat(mCharStat);
			auto playerState = Cast<AABPlayerState>(GetPlayerState());
			if (playerState != nullptr)
			{
				mCharStat->SetNewLevel(playerState->GetCharacterLevel());
			}
		}
		SetActorHiddenInGame(true);
		mHPBar->SetHiddenInGame(true);
		SetCanBeDamaged(false);
		break;
	}
	case ECharacterState::READY:
	{
		SetActorHiddenInGame(false);
		mHPBar->SetHiddenInGame(false);
		SetCanBeDamaged(true);

		mCharStat->OnHPIsZero.AddLambda([this]() {
			SetCharacterState(ECharacterState::DEAD);
			});

		UABCharacterWidget* charWidget = Cast<UABCharacterWidget>(mHPBar->GetUserWidgetObject());
		if (charWidget != nullptr)
		{
			charWidget->BindCharacterStat(mCharStat);
		}

		if (mbIsPlayer)
		{
			SetControlMode(EControlMode::DIABLO);
			GetCharacterMovement()->MaxWalkSpeed = 600.0f;
			EnableInput(mPlayerController);
		}
		else
		{
			SetControlMode(EControlMode::NPC);
			GetCharacterMovement()->MaxWalkSpeed = 400.0f;
			mAIController->RunAI();
		}
		break;
	}
	case ECharacterState::DEAD:
	{
		SetActorEnableCollision(false);
		GetMesh()->SetHiddenInGame(false);
		mHPBar->SetHiddenInGame(true);
		SetCanBeDamaged(false);
		mABAnim->SetDeadAnim();

		if (mbIsPlayer)
		{
			DisableInput(mPlayerController);
		}
		else
		{
			mAIController->StopAI();
		}

		GetWorld()->GetTimerManager().SetTimer(DeadTimerHandle, FTimerDelegate::CreateLambda([this]() {
			if (mbIsPlayer)
			{
				mPlayerController->RestartLevel();
			}
			else
			{
				Destroy();
			}
			}), mDeadTimer, false);
		break;
	}
	default:
		break;
	}

}

ECharacterState AABCharacter::GetCharacterState() const
{
	return mCurState;
}

int32 AABCharacter::GetExp() const
{
	return mCharStat->GetDropExp();
}

void AABCharacter::OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	ABCHECK(bAttacking);
	bAttacking = false;
	AttackEndComboState();
	mOnAttackEnd.Broadcast();
}


void AABCharacter::AttackStartComboState()
{
	bCanNextCombo = true;
	bComboInputOn = false;
	ABCHECK(FMath::IsWithinInclusive<int32>(mCurrentCombo, 0, mMaxCombo - 1));
	mCurrentCombo = FMath::Clamp<int32>(mCurrentCombo + 1, 1, mMaxCombo);
}

void AABCharacter::AttackEndComboState()
{
	bComboInputOn = false;
	bCanNextCombo = false;
	mCurrentCombo = 0;
}

void AABCharacter::AttackCheck()
{
	FHitResult result;
	FCollisionQueryParams params(NAME_None, false, this);
	bool bResult = GetWorld()->SweepSingleByChannel(
		result,
		GetActorLocation(),
		GetActorLocation() + GetActorForwardVector() * AttackRange,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel2,
		FCollisionShape::MakeSphere(AttackRadius),
		params);

#if ENABLE_DRAW_DEBUG

	DrawDebugCapsule(GetWorld(),
		GetActorLocation() + GetActorForwardVector() * AttackRange * 0.5f,
		AttackRange * 0.5f + AttackRadius,
		AttackRadius,
		FRotationMatrix::MakeFromZ(GetActorForwardVector() * AttackRange).ToQuat(),
		bResult ? FColor::Green : FColor::Red,
		false,
		5.0f);

#endif
	if (bResult)
	{
		if (result.GetActor())
		{
			ABLOG(Warning, TEXT("Hit Actor Name : %s"), *result.GetActor()->GetName());

			FDamageEvent DamageEvent;
			result.GetActor()->TakeDamage(mCharStat->GetAttack(), DamageEvent,
					GetController(), this);
		}
	}
}

float AABCharacter::TakeDamage(float DamageAmount, const FDamageEvent& DamageEvent,
	AController* EventInstigator, AActor* DamageCauser)
{
	float FinalDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	mCharStat->SetDamage(FinalDamage);
	if (mCurState == ECharacterState::DEAD && EventInstigator->IsPlayerController())
	{
		auto playerController = Cast<AABPlayerController>(EventInstigator);
		playerController->NPCKill(this);
	}
	ABLOG(Warning, TEXT("Actor : %s took Damage : %f, remain HP :%f"), *GetName(), FinalDamage, mCharStat->GetCurHP());
	return FinalDamage;
}

void AABCharacter::SetWeapon(UClass* newWeapon)
{
	if (isHoldingWeapon)
	{
		ABLOG(Warning, TEXT("%s already has weapon"), *GetName());
		return;
	}
	isHoldingWeapon = true;
	FName WeaponSocket(TEXT("hand_rSocket"));
	AABWeapon* tmp = GetWorld()->SpawnActor<AABWeapon>(newWeapon, FVector::ZeroVector, FRotator::ZeroRotator);
	tmp->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponSocket);
	curWeapon = tmp;
	tmp->SetOwner(this);
}

bool AABCharacter::getHoldingWeapon() const
{
	return isHoldingWeapon;
}

void AABCharacter::PossessedBy(AController* newController)
{
	Super::PossessedBy(newController);
}
