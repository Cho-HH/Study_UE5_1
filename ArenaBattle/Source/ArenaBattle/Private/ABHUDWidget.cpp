// Fill out your copyright notice in the Description page of Project Settings.


#include "ABHUDWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "ABCharacterStatComponent.h"
#include "ABPlayerState.h"

void UABHUDWidget::BindCharacterStat(UABCharacterStatComponent* characterStat)
{
	mCurCharacterStat = characterStat;
	mCurCharacterStat->OnHPChange.AddUObject(this, &UABHUDWidget::UpdateCharacterStat);
}

void UABHUDWidget::BindPlayerState(AABPlayerState* playerState)
{
	mCurPlayerState = playerState;
	mCurPlayerState->mOnPlayerStateChanged.AddUObject(this, &UABHUDWidget::UpdatePlayerState);
}

void UABHUDWidget::NativeConstruct()
{
	Super::NativeConstruct();
	mHPBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("pbHP")));
	mExpBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("pbExp")));
	mPlayerName = Cast<UTextBlock>(GetWidgetFromName(TEXT("txtPlayerName")));
	mPlayerLevel = Cast<UTextBlock>(GetWidgetFromName(TEXT("txtLevel")));
	mCurScore = Cast<UTextBlock>(GetWidgetFromName(TEXT("txtCurrentScore")));
	mHighScore = Cast<UTextBlock>(GetWidgetFromName(TEXT("txtHighScore")));
}

void UABHUDWidget::UpdateCharacterStat()
{
	if (mCurCharacterStat.IsValid())
	{
		mHPBar->SetPercent(mCurCharacterStat->GetHPRatio());
	}
}

void UABHUDWidget::UpdatePlayerState()
{
	if (mCurPlayerState.IsValid())
	{
		mExpBar->SetPercent(mCurPlayerState->GetExpRatio());
		mPlayerName->SetText(FText::FromString(mCurPlayerState->GetPlayerName()));
		mPlayerLevel->SetText(FText::FromString(FString::FromInt(mCurPlayerState->GetCharacterLevel())));
		mCurScore->SetText(FText::FromString(FString::FromInt(mCurPlayerState->GetGameScore())));
		mHighScore->SetText(FText::FromString(FString::FromInt(mCurPlayerState->GetGameHighScore())));
	}
}
