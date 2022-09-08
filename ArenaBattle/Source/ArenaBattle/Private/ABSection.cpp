// Fill out your copyright notice in the Description page of Project Settings.


#include "ABSection.h"
#include "ABCharacter.h"
#include "ItemBox.h"
#include "ABPlayerController.h"
#include "ABGameMode.h"

// Sets default values
AABSection::AABSection()
	: mbNoBattle(false)
	, mCurState(ESectionState::READY)
	, mEnemySpawnTime(2.0f)
	, mItemBoxSpawnTime(5.0f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	mMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MESH)"));
	RootComponent = mMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_SQUARE(TEXT("/Game/Book/StaticMesh/SM_SQUARE.SM_SQUARE"));
	if (SM_SQUARE.Succeeded())
	{
		mMesh->SetStaticMesh(SM_SQUARE.Object);
	}

	mTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("TRIGGER"));
	mTrigger->SetBoxExtent(FVector(775.0f, 775.0f, 300.0f));
	mTrigger->SetupAttachment(RootComponent);
	mTrigger->SetRelativeLocation(FVector(0.0f, 0.0f, 250.0f));
	mTrigger->SetCollisionProfileName(TEXT("ABTrigger"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_GATE(TEXT("/Game/Book/StaticMesh/SM_GATE.SM_GATE"));
	if (SM_GATE.Succeeded())
	{
		static FName gateSockets[] = { TEXT("+XGate") ,  TEXT("-XGate") ,  TEXT("+YGate")  ,TEXT("-YGate") };
		for (FName gateSocket : gateSockets)
		{
			ABCHECK(mMesh->DoesSocketExist(gateSocket));
			UStaticMeshComponent* newGate = CreateDefaultSubobject<UStaticMeshComponent>(*gateSocket.ToString());
			newGate->SetStaticMesh(SM_GATE.Object);
			newGate->SetupAttachment(RootComponent, gateSocket);
			newGate->SetRelativeLocation(FVector(0.0f, -80.5f, 0.0f));
			mGateMeshes.Add(newGate);

			UBoxComponent* newGateTrigger = CreateDefaultSubobject<UBoxComponent>(*gateSocket.ToString().Append(TEXT("Trigger")));
			newGateTrigger->SetBoxExtent(FVector(100.0f, 100.0f, 300.0f));
			newGateTrigger->SetupAttachment(RootComponent, gateSocket);
			newGateTrigger->SetRelativeLocation(FVector(70.0f, 0.0f, 250.0f));
			newGateTrigger->SetCollisionProfileName(TEXT("ABTrigger"));
			mGateTriggers.Add(newGateTrigger);

			newGateTrigger->OnComponentBeginOverlap.AddDynamic(this, &AABSection::OnGateBeginOverlap);
			newGateTrigger->ComponentTags.Add(gateSocket);
		}
	}

	mTrigger->OnComponentBeginOverlap.AddDynamic(this, &AABSection::OnTriggerBeginOverlap);
}

// Called when the game starts or when spawned
void AABSection::BeginPlay()
{
	Super::BeginPlay();
	
	SetState(mbNoBattle ? ESectionState::COMPLETE : ESectionState::READY);
}

// Called every frame
void AABSection::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AABSection::OnConstruction(const FTransform& transform)
{
	Super::OnConstruction(transform);
	SetState(mbNoBattle ? ESectionState::COMPLETE : ESectionState::READY);
}

void AABSection::SetState(ESectionState newState)
{
	switch (newState)
	{
	case ESectionState::READY:
		mTrigger->SetCollisionProfileName(TEXT("ABTrigger"));
		for (auto gateTrigger : mGateTriggers)
		{
			gateTrigger->SetCollisionProfileName(TEXT("NoCollision"));			
		}
		OperateGates(true);
		break;
	case ESectionState::BATTLE:
		mTrigger->SetCollisionProfileName(TEXT("NoCollision"));
		for (auto gateTrigger : mGateTriggers)
		{
			gateTrigger->SetCollisionProfileName(TEXT("NoCollision"));			
		}
		OperateGates(false);
		GetWorld()->GetTimerManager().SetTimer(SpawnNPCTimerHandle, FTimerDelegate::CreateUObject(this, &AABSection::OnNPCSpawn), mEnemySpawnTime, false);
		GetWorld()->GetTimerManager().SetTimer(SpawnItemBoxTimerHandle, FTimerDelegate::CreateLambda([this]() {
			FVector2D RandXY = FMath::RandPointInCircle(600.0f);
			GetWorld()->SpawnActor<AItemBox>(GetActorLocation() + FVector(RandXY, 30.0f), FRotator::ZeroRotator);
			}), mItemBoxSpawnTime, false);
		break;
	case ESectionState::COMPLETE:
		mTrigger->SetCollisionProfileName(TEXT("NoCollision"));
		for (auto gateTrigger : mGateTriggers)
		{
			gateTrigger->SetCollisionProfileName(TEXT("ABTrigger"));
		}
		OperateGates(true);
		break;
	default:
		break;
	}

	mCurState = newState;
}


void AABSection::OperateGates(bool bOpen)
{
	for (auto gate : mGateMeshes)
	{
		gate->SetRelativeRotation(bOpen ? FRotator(0.0f, -90.0f, 0.0f) : FRotator::ZeroRotator);
	}
}

void AABSection::OnNPCSpawn()
{
	GetWorld()->GetTimerManager().ClearTimer(SpawnNPCTimerHandle);
	auto keyNPC = GetWorld()->SpawnActor<AABCharacter>(GetActorLocation() + FVector::UpVector * 88.0f, FRotator::ZeroRotator);
	if (keyNPC != nullptr)
	{
		keyNPC->OnDestroyed.AddDynamic(this, &AABSection::OnKeyNPCDestroyed);
	}
}

void AABSection::OnGateBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ABCHECK(OverlappedComponent->ComponentTags.Num() == 1);
	FName componentTag = OverlappedComponent->ComponentTags[0];
	FName socketName = FName(componentTag.ToString().Left(2));
	if (!mMesh->DoesSocketExist(socketName))
	{
		return;
	}

	FVector newLocation = mMesh->GetSocketLocation(socketName);

	TArray<FOverlapResult> overlapResults;
	FCollisionQueryParams params(NAME_None, false, this);
	FCollisionObjectQueryParams objParams(FCollisionObjectQueryParams::InitType::AllObjects);
	bool result = GetWorld()->OverlapMultiByObjectType(
		overlapResults,
		newLocation,
		FQuat::Identity,
		objParams,
		FCollisionShape::MakeSphere(775.0f),
		params
	);

	if (!result)
	{
		auto newSection = GetWorld()->SpawnActor<AABSection>(newLocation, FRotator::ZeroRotator);
	}
}

void AABSection::OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (mCurState == ESectionState::READY)
	{
		SetState(ESectionState::BATTLE);
	}
}

void AABSection::OnKeyNPCDestroyed(AActor* destroyedActor)
{
	auto character = Cast<AABCharacter>(destroyedActor);
	auto playerController = Cast<AABPlayerController>(character->LastHitBy);
	auto gameMode = Cast<AABGameMode>(GetWorld()->GetAuthGameMode());
	gameMode->AddScore(playerController);
	SetState(ESectionState::COMPLETE);
}

