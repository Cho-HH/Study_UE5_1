// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "Blueprint/UserWidget.h"
#include "ABCharacterWidget.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API UABCharacterWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void BindCharacterStat(class UABCharacterStatComponent* CharStat);

protected:
	virtual void NativeConstruct() override;
	void UpdateHPBar();
	
private:
	TWeakObjectPtr<class UABCharacterStatComponent> mCurCharStat;

	UPROPERTY()
		class UProgressBar* mHPBar;
};
