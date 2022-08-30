// Fill out your copyright notice in the Description page of Project Settings.


#include "ABPawn.h"
#include "GameFramework/FloatingPawnMovement.h"

// Sets default values
AABPawn::AABPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CAPSULE"));
	mMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MESH"));
	mMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MOVEMENT"));
	mSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	mCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	RootComponent = mCapsule;
	mMesh->SetupAttachment(mCapsule);
	mMesh->SetupAttachment(mCapsule);
	mSpringArm->SetupAttachment(mCapsule);
	mCamera->SetupAttachment(mSpringArm);

	mCapsule->SetCapsuleHalfHeight(88.0f);
	mCapsule->SetCapsuleRadius(34.0f);
	mMesh->SetRelativeLocationAndRotation(FVector(0.0, 0.0, -88.0), FRotator(0.0, -90.0, 0.0));
	mSpringArm->TargetArmLength = 400.0f;
	mSpringArm->SetRelativeRotation(FRotator(-15.0, 0.0, 0.0));

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_MESH(TEXT("/Game/InfinityBladeWarriors/Character/CompleteCharacters/SK_CharM_Cardboard.SK_CharM_Cardboard"));
	if (SK_MESH.Succeeded())
	{
		mMesh->SetSkeletalMesh(SK_MESH.Object);
	}

	mMesh->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	static ConstructorHelpers::FClassFinder<UAnimInstance> ANIM(TEXT("/Game/Animation/WarriorAnimBlueprint.WarriorAnimBlueprint_C"));
	if (ANIM.Succeeded())
	{
		mMesh->SetAnimInstanceClass(ANIM.Class);
	}
}

// Called when the game starts or when spawned
void AABPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AABPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AABPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AABPawn::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AABPawn::LeftRight);
}

void AABPawn::UpDown(float NewAxisValue)
{
	AddMovementInput(GetActorForwardVector(), NewAxisValue);
}

void AABPawn::LeftRight(float NewAxisValue)
{
	AddMovementInput(GetActorRightVector(), NewAxisValue);
}

