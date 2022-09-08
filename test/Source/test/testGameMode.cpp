// Copyright Epic Games, Inc. All Rights Reserved.

#include "testGameMode.h"
#include "testPlayerController.h"
#include "testCharacter.h"
#include "UObject/ConstructorHelpers.h"

AtestGameMode::AtestGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AtestPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/BattleWizardPolyart/CharacterBP/WizardSM_BP"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}