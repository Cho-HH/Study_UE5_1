// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/Character.h"
#include "ABCharacter.generated.h"

UCLASS()
class ARENABATTLE_API AABCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AABCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		USpringArmComponent* mSpringArm;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		UCameraComponent* mCamera;

	UPROPERTY(VisibleAnywhere, Category = Stat)
		class UABCharacterStatComponent* mCharStat;

	UPROPERTY(VisibleAnywhere, Category = UI)
		class UWidgetComponent* mHPBar;

	void SetWeapon(UClass* newWeapon);

	bool getHoldingWeapon() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	enum class EControlMode
	{
		GTA,
		DIABLO
	};

	void SetControlMode(EControlMode ControlMode);
	EControlMode mCurrentConotrol = EControlMode::DIABLO;

	FVector mMoveDirect = FVector::ZeroVector;

	float mArmLengthTo = 0.f;
	FRotator mArmRotationTo = FRotator::ZeroRotator;
	float mArmLengthSpeed = 0.f;
	float mArmRotationSpeed = 0.f;

private:
	bool isHoldingWeapon;

	UPROPERTY(VisibleAnywhere, Category = Weapon)
	class AABWeapon* curWeapon;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	bool bAttacking;

	UPROPERTY()
	class UABAnimInstance* mABAnim;

	//다음 콤보로의 이동 가능 여부
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		bool bCanNextCombo;

	//콤보 입력 여부
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		bool bComboInputOn;

	//현재 실행 중인 콤보 카운터
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		int32 mCurrentCombo;

	//콤보카운터의 최대치
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		int32 mMaxCombo;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		float AttackRange;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		float AttackRadius;

	void PutDownWeapon();
private:
	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	void LookUp(float NewAxisValue);
	void Turn(float NewAxisValue);

	void ViewChange();
	void Attack();


	UFUNCTION()
		void OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	//공격이 시작될 때
	void AttackStartComboState();
	//공격이 끝났을 때
	void AttackEndComboState();

	void AttackCheck();
	virtual float TakeDamage(float DamageAmount, const FDamageEvent& DamageEvent, AController* 
		EventInstigator, AActor* DamageCauser) override;
};
