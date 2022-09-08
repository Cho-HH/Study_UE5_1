// Fill out your copyright notice in the Description page of Project Settings.


#include "ABPlayerState.h"
#include "ABGameInstance.h"
#include "ABSaveGame.h"

AABPlayerState::AABPlayerState()
	:mCharacterLevel(1)
	, mGameScore(0)
	, mExp(0)
	, mGameHighScore(0)
	, mSaveSlotName(TEXT("Player1"))
{
}

int32 AABPlayerState::GetGameScore() const
{
	return mGameScore;
}

int32 AABPlayerState::GetCharacterLevel() const
{
	return mCharacterLevel;
}

int32 AABPlayerState::GetGameHighScore() const
{
	return mGameHighScore;
}

float AABPlayerState::GetExpRatio() const
{
	if (mCurStatData->NextExp <= KINDA_SMALL_NUMBER)
	{
		return 0.0f;
	}

	float result = static_cast<float>(mExp) / static_cast<float>(mCurStatData->NextExp);
	ABLOG(Warning, TEXT("Ratio : %f, Current : %d, Next : %d"), result, mExp, mCurStatData->NextExp);
	return result;
}

bool AABPlayerState::AddExp(int32 IncomeExp)
{
	if (mCurStatData->NextExp == -1)
	{
		return false;
	}

	bool didLevelUp = false;
	mExp += IncomeExp;
	if (mExp >= mCurStatData->NextExp)
	{
		mExp -= mCurStatData->NextExp;
		SetCharacterLevel(mCharacterLevel + 1);
		didLevelUp = true;
	}

	mOnPlayerStateChanged.Broadcast();
	SavePlayerData();
	return didLevelUp;
}

void AABPlayerState::AddGameScore()
{
	mGameScore++;
	if (mGameHighScore <= mGameScore)
	{
		mGameHighScore = mGameScore;
	}
	mOnPlayerStateChanged.Broadcast();
	SavePlayerData();
}

void AABPlayerState::SavePlayerData()
{
	UABSaveGame* newData = NewObject<UABSaveGame>();
	newData->mPlayerName = GetPlayerName();
	newData->mLevel = mCharacterLevel;
	newData->mExp = mExp;
	newData->mHighScore = mGameHighScore;

	if (!UGameplayStatics::SaveGameToSlot(newData, mSaveSlotName, 0))
	{
		ABLOG(Error, TEXT("SaveGame Error"));
	}
}

void AABPlayerState::InitPlayerData()
{
	auto save = Cast<UABSaveGame>(UGameplayStatics::LoadGameFromSlot(mSaveSlotName, 0));
	if (save == nullptr)
	{
		save = GetMutableDefault<UABSaveGame>();
	}

	SetPlayerName(save->mPlayerName);
	mCharacterLevel = save->mLevel;
	mGameScore = 0;
	mExp = save->mExp;
	SetCharacterLevel(save->mLevel);
	mGameHighScore = save->mHighScore;
	SavePlayerData();
}

void AABPlayerState::SetCharacterLevel(int32 newCharacterLevel)
{
	auto gameInstance = Cast<UABGameInstance>(GetGameInstance());
	mCurStatData = gameInstance->getABCharacterData(newCharacterLevel);
	mCharacterLevel = newCharacterLevel;
}
