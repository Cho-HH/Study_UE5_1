// Fill out your copyright notice in the Description page of Project Settings.


#include "ABAnimInstance.h"
#include <cassert>

UABAnimInstance::UABAnimInstance()
	: mCurrentPawnSpeed(0.f)
	, bInAir(false)
	, IsDead(false)
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> ATTACK_MONTAGE(TEXT("/Game/Animation/SK_Mannequin_Skeleton_Montage.SK_Mannequin_Skeleton_Montage"));
	if (ATTACK_MONTAGE.Succeeded())
	{
		mAttackMontage = ATTACK_MONTAGE.Object;
	}
}

void UABAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	
	auto Pawn = TryGetPawnOwner();
	auto Character = Cast<ACharacter>(Pawn);
	if (::IsValid(Pawn) && !IsDead)
	{
		mCurrentPawnSpeed = Pawn->GetVelocity().Size();
		if (Character)
		{
			bInAir = Character->GetMovementComponent()->IsFalling();
		}
	}
}

void UABAnimInstance::PlayAttackMontage()
{
	if (IsDead)
	{
		return;
	}
	Montage_Play(mAttackMontage, 1.f);
}

void UABAnimInstance::JumpToAttackMotageSection(int32 NewSection)
{
	if (IsDead)
	{
		return;
	}
	ABCHECK(Montage_IsPlaying(mAttackMontage));
	Montage_JumpToSection(GetAttackMontageSection(NewSection), mAttackMontage);
}

void UABAnimInstance::AnimNotify_AttackHitCheck()
{
	OnAttackHitCheck.Broadcast();
}

void UABAnimInstance::AnimNotify_NextAttackCheck()
{
	OnNextAttackCheck.Broadcast();
}

FName UABAnimInstance::GetAttackMontageSection(int32 Section)
{
	ABCHECK(FMath::IsWithinInclusive<int32>(Section, 1, 4), NAME_None);
	return FName(*FString::Printf(TEXT("Attack%d"), Section));
}
