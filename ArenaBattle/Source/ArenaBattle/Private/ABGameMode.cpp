// Fill out your copyright notice in the Description page of Project Settings.

#include "ABGameMode.h"
#include "ABCharacter.h"
#include "ABPlayerController.h"
#include "ABPlayerState.h"
#include "ABGameState.h"

AABGameMode* AABGameMode::getInstance()
{
	static AABGameMode instance;
	return &instance;
}

AABGameMode::AABGameMode()
{	
	DefaultPawnClass = AABCharacter::StaticClass();	
	PlayerControllerClass = AABPlayerController::StaticClass();
	PlayerStateClass = AABPlayerState::StaticClass();
	//GameStateClass = AABGameState::StaticClass();
}

void AABGameMode::PostLogin(APlayerController* newPlayer)
{
	Super::PostLogin(newPlayer);
	auto playerState = Cast<AABPlayerState>(newPlayer->PlayerState);
	if (playerState != nullptr)
	{
		playerState->InitPlayerData();
	}
}

void AABGameMode::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	mGameState = Cast<AABGameState>(GameState);
}

void AABGameMode::AddScore(AABPlayerController* scoredPlayer)
{
	for (auto iter = GetWorld()->GetPlayerControllerIterator(); iter; ++iter)
	{
		const auto playerController = Cast<AABPlayerController>(iter->Get());
		if ((playerController != nullptr) && (scoredPlayer == playerController))
		{
			playerController->AddGameScore();
			break;
		}
	}
	//mGameState->AddGameScore();
}

