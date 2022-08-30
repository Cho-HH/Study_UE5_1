// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTaskNode_TurnToTarget.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API UBTTaskNode_TurnToTarget : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTaskNode_TurnToTarget() = default;
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& ownerComp, uint8* nodeMemory) override;
};
