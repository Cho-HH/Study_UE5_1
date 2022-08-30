// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskNode_Attack.h"
#include "ABAIController.h"
#include "ABCharacter.h"

UBTTaskNode_Attack::UBTTaskNode_Attack()
	:mbAttacking(false)
{
	bNotifyTick = true;
}

EBTNodeResult::Type UBTTaskNode_Attack::ExecuteTask(UBehaviorTreeComponent& ownerComp, uint8* nodeMemory)
{
	EBTNodeResult::Type result = Super::ExecuteTask(ownerComp, nodeMemory);

	AABCharacter* ABCharacter = Cast<AABCharacter>(ownerComp.GetAIOwner()->GetPawn());
	if (ABCharacter == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	ABCharacter->Attack();
	mbAttacking = true;
	ABCharacter->mOnAttackEnd.AddLambda([this]() {
		mbAttacking = false;
		});

	return EBTNodeResult::InProgress;
}

void UBTTaskNode_Attack::TickTask(UBehaviorTreeComponent& ownerComp, uint8* nodeMemory, float deltaSeconds)
{
	Super::TickTask(ownerComp, nodeMemory, deltaSeconds);
	if (!mbAttacking)
	{
		FinishLatentTask(ownerComp, EBTNodeResult::Succeeded);
	}
}
