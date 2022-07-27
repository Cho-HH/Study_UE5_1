// Fill out your copyright notice in the Description page of Project Settings.

#include "ABCharacter.h"

// Sets default values
AABCharacter::AABCharacter()
	: mArmLengthSpeed(3.f)
	, mArmRotationSpeed(5.f)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	mCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

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

	SetControlMode(mCurrentConotrol);
}

// Called when the game starts or when spawned
void AABCharacter::BeginPlay()
{
	Super::BeginPlay();
	
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
