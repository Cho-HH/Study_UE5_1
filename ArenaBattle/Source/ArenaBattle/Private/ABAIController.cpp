// Fill out your copyright notice in the Description page of Project Settings.


#include "ABAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

const FName AABAIController::HomePosKey(TEXT("HomePos"));
const FName AABAIController::PatrolPosKey(TEXT("PatrolPos"));
const FName AABAIController::TargetKey(TEXT("Target"));

AABAIController::AABAIController()
{
	static ConstructorHelpers::FObjectFinder<UBlackboardData> BB_Obj(TEXT("/Game/Book/AI/BB_ABCharacter.BB_ABCharacter"));
	if (BB_Obj.Succeeded())
	{
		mBBAsset = BB_Obj.Object;
	}

	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BT_Obj(TEXT("/Game/Book/AI/BT_ABCharacter.BT_ABCharacter"));
	if (BT_Obj.Succeeded())
	{
		mBTAsset = BT_Obj.Object;
	}
}

void AABAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
}

void AABAIController::RunAI()
{
	if (UseBlackboard(mBBAsset, (UBlackboardComponent*)Blackboard))
	{
		Blackboard->SetValueAsVector(HomePosKey, GetPawn()->GetActorLocation());
		if (!RunBehaviorTree(mBTAsset))
		{
			ABLOG(Error, TEXT("AIController couldn't run behavior tree!"), 1);
		}
	}
}

void AABAIController::StopAI()
{
	auto treeComponent = Cast<UBehaviorTreeComponent>(BrainComponent);
	if (treeComponent != nullptr)
	{
		treeComponent->StopTree(EBTStopMode::Safe);
	}
}
