// Fill out your copyright notice in the Description page of Project Settings.


#include "ABCharacterStatComponent.h"
#include "ABGameInstance.h"

// Sets default values for this component's properties
UABCharacterStatComponent::UABCharacterStatComponent()
	: mCurStatData(nullptr)
	, mLevel(1)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	bWantsInitializeComponent = true;
	// ...
}


// Called when the game starts
void UABCharacterStatComponent::BeginPlay()
{
	Super::BeginPlay();
	// ...
}

void UABCharacterStatComponent::InitializeComponent()
{
	Super::InitializeComponent();
	SetNewLevel(mLevel);
}

void UABCharacterStatComponent::SetNewLevel(int32 NewLevel)
{
	UABGameInstance* gameIns = Cast<UABGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	ABCHECK(gameIns != nullptr);
	mCurStatData = gameIns->getABCharacterData(mLevel);
	if (mCurStatData != nullptr)
	{
		mLevel = NewLevel;
		mCurHP = mCurStatData->MaxHP;
		OnHPChange.Broadcast();
	}
	else
	{
		ABLOG(Error, TEXT("Level (%d) data doesn't exist"), NewLevel);
	}
}

void UABCharacterStatComponent::SetDamage(float NewDamage)
{
	mCurHP = FMath::Clamp<float>(mCurHP - NewDamage, 0.0f, mCurStatData->MaxHP);
	OnHPChange.Broadcast();
	if (mCurHP <= KINDA_SMALL_NUMBER)
	{
		mCurHP = 0.0f;
		OnHPIsZero.Broadcast();
	}
}

float UABCharacterStatComponent::GetAttack() const
{
	return mCurStatData->Attack;
}

float UABCharacterStatComponent::GetCurHP() const
{
	return mCurHP;
}

float UABCharacterStatComponent::GetHPRatio() const
{
	return mCurHP / mCurStatData->MaxHP;
}

int32 UABCharacterStatComponent::GetDropExp() const
{
	return mCurStatData->DropExp;
}
