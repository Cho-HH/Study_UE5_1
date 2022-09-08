// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "Blueprint/UserWidget.h"
#include "ABHUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API UABHUDWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	//UABHUDWidget() = default;
	void BindCharacterStat(class UABCharacterStatComponent* characterStat);
	void BindPlayerState(class AABPlayerState* playerState);

protected:
	virtual void NativeConstruct() override;
	void UpdateCharacterStat();
	void UpdatePlayerState();

private:
	TWeakObjectPtr<class UABCharacterStatComponent> mCurCharacterStat;
	TWeakObjectPtr<class AABPlayerState> mCurPlayerState;

	UPROPERTY()
		class UProgressBar* mHPBar;

	UPROPERTY()
		class UProgressBar* mExpBar;

	UPROPERTY()
		class UTextBlock* mPlayerName;

	UPROPERTY()
		class UTextBlock* mPlayerLevel;

	UPROPERTY()
		class UTextBlock* mCurScore;

	UPROPERTY()
		class UTextBlock* mHighScore;
};
