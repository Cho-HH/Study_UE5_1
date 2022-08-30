// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_Detect.h"
#include "ABAIController.h"
#include "ABCharacter.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "DrawDebugHelpers.h"

UBTService_Detect::UBTService_Detect()
{
	NodeName = TEXT("Detect");
	Interval = 1.0f;
}

void UBTService_Detect::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	APawn* controllingPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (controllingPawn == nullptr)
	{
		return;
	}

	UWorld* world = controllingPawn->GetWorld();
	if (world == nullptr)
	{
		return;
	}
	FVector center = controllingPawn->GetActorLocation();
	float DetectRadius = 600.0f;

	TArray<FOverlapResult> overlapResults;
	FCollisionQueryParams collisionParam(NAME_None, false, controllingPawn);
	bool result = world->OverlapMultiByChannel(
		overlapResults,
		center,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel12,
		FCollisionShape::MakeSphere(DetectRadius),
		collisionParam);

	if (result)
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(AABAIController::TargetKey, nullptr);
		for (const auto& overlapResult : overlapResults)
		{
			AABCharacter* character = Cast<AABCharacter>(overlapResult.GetActor());
			if (character && character->GetController()->IsPlayerController())
			{
				OwnerComp.GetBlackboardComponent()->SetValueAsObject(AABAIController::TargetKey, character);
				DrawDebugSphere(world, center, DetectRadius, 16, FColor::Green, false, 0.2f);
				DrawDebugPoint(world, character->GetActorLocation(), 10.0f, FColor::Blue, false, 0.2f);
				DrawDebugLine(world, controllingPawn->GetActorLocation(), character->GetActorLocation(), FColor::Blue, false, 0.2f);
				return;
			}
		}
	}

	DrawDebugSphere(world, center, DetectRadius, 16, FColor::Red, false, 0.2f);
}
