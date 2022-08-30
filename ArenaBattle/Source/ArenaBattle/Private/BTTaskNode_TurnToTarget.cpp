// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskNode_TurnToTarget.h"
#include "ABAIController.h"
#include "ABCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTTaskNode_TurnToTarget::ExecuteTask(UBehaviorTreeComponent& ownerComp, uint8* nodeMemory)
{
	EBTNodeResult::Type result = Super::ExecuteTask(ownerComp, nodeMemory);

	AABCharacter* npc = Cast<AABCharacter>(ownerComp.GetAIOwner()->GetPawn());
	if (npc == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	AABCharacter* target = Cast<AABCharacter>(ownerComp.GetBlackboardComponent()->GetValueAsObject(AABAIController::TargetKey));
	if (target == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	FVector lookVec = target->GetActorLocation() - npc->GetActorLocation();
	lookVec.Z = 0.0f;
	FRotator targetRot = FRotationMatrix::MakeFromX(lookVec).Rotator();
	npc->SetActorRotation(FMath::RInterpTo(npc->GetActorRotation(), targetRot, GetWorld()->GetDeltaSeconds(), 2.0f));

	return EBTNodeResult::Succeeded;
}
