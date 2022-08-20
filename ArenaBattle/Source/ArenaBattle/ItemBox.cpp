// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBox.h"
#include "ABWeapon.h"

// Sets default values
AItemBox::AItemBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("TRIGGER"));
	mBox = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BOX"));

	RootComponent = mTrigger;
	mBox->SetupAttachment(RootComponent);

	mTrigger->SetBoxExtent(FVector(40.0f, 42.0f, 30.0f));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_BOX(TEXT("/Game/InfinityBladeGrassLands/Environments/Breakables/StaticMesh/Box/SM_Env_Breakables_Box1.SM_Env_Breakables_Box1"));
	if (SM_BOX.Succeeded())
	{
		mBox->SetStaticMesh(SM_BOX.Object);
	}
	mBox->SetRelativeScale3D(FVector(1.5f,1.5f,1.5f));	
	mBox->SetRelativeLocation(FVector(0.0f, -3.5f, -30.0f));

	mTrigger->SetCollisionProfileName(TEXT("ItemBox"));
	mBox->SetCollisionProfileName(TEXT("NoCollision"));

	mWeapon = AABWeapon::StaticClass();
}

// Called when the game starts or when spawned
void AItemBox::BeginPlay()
{
	Super::BeginPlay();
	
}

void AItemBox::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	mTrigger->OnComponentBeginOverlap.AddDynamic(this, &AItemBox::Overlap);
}

// Called every frame
void AItemBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItemBox::Overlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ABLOG_S(Warning);
}

