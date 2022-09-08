// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"

/**
 *
 */
UCLASS()
class ARENABATTLE_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AABPlayerController();
	class UABHUDWidget* GetHUDWidget() const;
	void NPCKill(class AABCharacter* killedNPC) const;
	void AddGameScore() const;
protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UABHUDWidget> mHUDWidgetClass;

private:
	UPROPERTY()
		class UABHUDWidget* mHUDWidget;

	UPROPERTY()
		class AABPlayerState* mPlayerState;
};
