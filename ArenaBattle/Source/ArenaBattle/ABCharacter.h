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

	//���� �޺����� �̵� ���� ����
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		bool bCanNextCombo;

	//�޺� �Է� ����
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		bool bComboInputOn;

	//���� ���� ���� �޺� ī����
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		int32 mCurrentCombo;

	//�޺�ī������ �ִ�ġ
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

	//������ ���۵� ��
	void AttackStartComboState();
	//������ ������ ��
	void AttackEndComboState();

	void AttackCheck();
	virtual float TakeDamage(float DamageAmount, const FDamageEvent& DamageEvent, AController* 
		EventInstigator, AActor* DamageCauser) override;
};
