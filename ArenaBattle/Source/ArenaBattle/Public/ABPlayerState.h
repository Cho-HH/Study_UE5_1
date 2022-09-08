// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/PlayerState.h"
#include "ABPlayerState.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnPlayerStateChangedDelegate);
/**
 * 
 */
UCLASS()
class ARENABATTLE_API AABPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	AABPlayerState();

	int32 GetGameScore() const;
	int32 GetCharacterLevel() const;
	int32 GetGameHighScore() const;
	
	float GetExpRatio() const;
	bool AddExp(int32 IncomeExp);
	void AddGameScore();

	void SavePlayerData();
	void InitPlayerData();

	FOnPlayerStateChangedDelegate mOnPlayerStateChanged;

	FString mSaveSlotName;

private:
	UPROPERTY(Transient)
		int32 mGameScore;

	UPROPERTY(Transient)
		int32 mGameHighScore;

	UPROPERTY(Transient)
		int32 mCharacterLevel;

	UPROPERTY(Transient)
		int32 mExp;

	void SetCharacterLevel(int32 newCharacterLevel);
	struct FABCharacterData* mCurStatData;
	
};
