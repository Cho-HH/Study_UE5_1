// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGameState.h"

AABGameState::AABGameState()
	: mTotalGameScore(0)
{
}

int32 AABGameState::GetTotalGameScore() const
{
	return mTotalGameScore;
}

void AABGameState::AddGameScore()
{
	mTotalGameScore++;
}
