// Fill out your copyright notice in the Description page of Project Settings.

#include "ABPlayerController.h"
#include <Blueprint/AIBlueprintHelperLibrary.h>
 
AABPlayerController::AABPlayerController()
{
}

void AABPlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);
}