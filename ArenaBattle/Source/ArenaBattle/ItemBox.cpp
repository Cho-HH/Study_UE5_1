// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBox.h"
#include "ABWeapon.h"
#include "ABCharacter.h"

// Sets default values
AItemBox::AItemBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("TRIGGER"));
	mBox = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BOX"));
	mEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PARTICLE"));

	RootComponent = mTrigger;
	mBox->SetupAttachment(RootComponent);
	mEffect->SetupAttachment(RootComponent);

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
	//mWeapon = CreateDefaultSubobject<AABWeapon>(TEXT("WEAPON"));

	static ConstructorHelpers::FObjectFinder<UParticleSystem> P_CHESTOPEN(TEXT("/Game/InfinityBladeGrassLands/Effects/FX_Treasure/Chest/P_TreasureChest_Open_Mesh.P_TreasureChest_Open_Mesh"));
	if (P_CHESTOPEN.Succeeded())
	{
		mEffect->SetTemplate(P_CHESTOPEN.Object);
		mEffect->bAutoActivate = false;
	}
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
	if (mWeapon == nullptr)
	{
		ABLOG(Warning, TEXT("%s ItemBox is Empty!"), *GetName());
		return;
	}

	
	AABCharacter* character = Cast<AABCharacter>(OtherActor);
	if (character->getHoldingWeapon())
	{
		ABLOG(Warning, TEXT("%s already holding weapon"), *character->GetName());
		return;
	}

	mEffect->Activate(true);
	mBox->SetHiddenInGame(true, true);
	this->SetActorEnableCollision(false);
	mEffect->OnSystemFinished.AddDynamic(this, &AItemBox::EffectFinished);	
	character->SetWeapon(mWeapon);
}

void AItemBox::EffectFinished(UParticleSystemComponent* PSystem)
{
	this->Destroy();
}
