// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGameInstance.h"

UABGameInstance::UABGameInstance()
{
	static ConstructorHelpers::FObjectFinder<UDataTable> DT_CHAR(TEXT("/Game/Book/GameData/ABCharacterData.ABCharacterData"));
	if (DT_CHAR.Succeeded())
	{
		mABCharacterTable = DT_CHAR.Object;
	}
}

void UABGameInstance::Init()
{
	int32 tmp = 20;
	ABLOG(Warning, TEXT("DropExp of Level %d ABCharacter : %d"), tmp, getABCharacterData(tmp)->DropExp) ;
}

FABCharacterData* UABGameInstance::getABCharacterData(int32 Level)
{
	return mABCharacterTable->FindRow<FABCharacterData>(*FString::FromInt(Level), TEXT(""));
}
