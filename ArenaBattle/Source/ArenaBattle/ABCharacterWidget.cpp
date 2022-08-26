// Fill out your copyright notice in the Description page of Project Settings.


#include "ABCharacterWidget.h"
#include "ABCharacterStatComponent.h"
#include "Components/ProgressBar.h"

void UABCharacterWidget::BindCharacterStat(UABCharacterStatComponent* CharStat)
{
	ABCHECK(CharStat != nullptr);

	mCurCharStat = CharStat;
	CharStat->OnHPChange.AddUObject(this, &UABCharacterWidget::UpdateHPBar);
}

void UABCharacterWidget::NativeConstruct()
{
	Super::NativeConstruct();
	mHPBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PB_HPBar")));
	if (mHPBar != nullptr)
	{
		UpdateHPBar();
	}
}

void UABCharacterWidget::UpdateHPBar()
{
	mHPBar->SetPercent(mCurCharStat->GetHPRatio());
}
