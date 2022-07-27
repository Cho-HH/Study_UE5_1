// Fill out your copyright notice in the Description page of Project Settings.

#include "ABGameMode.h"
#include "ABCharacter.h"
#include "ABPlayerController.h"

AABGameMode* AABGameMode::getInstance()
{
	static AABGameMode instance;
	return &instance;
}

AABGameMode::AABGameMode()
{	
	DefaultPawnClass = AABCharacter::StaticClass();	
	PlayerControllerClass = AABPlayerController::StaticClass();
}


AABGameMode::~AABGameMode()
{
}

