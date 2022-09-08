// Fill out your copyright notice in the Description page of Project Settings.

#include "ABPlayerController.h"
#include "ABHUDWidget.h"
#include "ABPlayerState.h"
#include "ABCharacter.h"

AABPlayerController::AABPlayerController()
{
	static ConstructorHelpers::FClassFinder<UABHUDWidget> UI_HUD_C(TEXT("/Game/Book/UI/UI_HUD.UI_HUD_C"));
	if (UI_HUD_C.Succeeded())
	{
		mHUDWidgetClass = UI_HUD_C.Class;
	}
}

void AABPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);

	mHUDWidget = CreateWidget<UABHUDWidget>(this, mHUDWidgetClass);
	mHUDWidget->AddToViewport();

	mPlayerState = Cast<AABPlayerState>(PlayerState);
	if (mPlayerState != nullptr)
	{
		mHUDWidget->BindPlayerState(mPlayerState);
		mPlayerState->mOnPlayerStateChanged.Broadcast();
	}

}


UABHUDWidget* AABPlayerController::GetHUDWidget() const
{
	return mHUDWidget;
}

void AABPlayerController::NPCKill(AABCharacter* killedNPC) const
{
	mPlayerState->AddExp(killedNPC->GetExp());
}

void AABPlayerController::AddGameScore() const
{
	mPlayerState->AddGameScore();
}
