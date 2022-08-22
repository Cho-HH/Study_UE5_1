// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/Actor.h"
#include "ItemBox.generated.h"

UCLASS()
class ARENABATTLE_API AItemBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, Category = Box)
		UBoxComponent* mTrigger;

	UPROPERTY(VisibleAnywhere, Category = Box)
		UStaticMeshComponent* mBox;

	UPROPERTY(EditAnywhere, Category = Box)
		TSubclassOf<class AABWeapon> mWeapon;
		
	//UPROPERTY(VisibleAnywhere, Category = Box)
		//class AABWeapon* mWeapon;

	UPROPERTY(EditAnywhere, Category = Box)
		UParticleSystemComponent* mEffect;

private:
	UFUNCTION()
	void Overlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void EffectFinished(class UParticleSystemComponent* PSystem);
};
