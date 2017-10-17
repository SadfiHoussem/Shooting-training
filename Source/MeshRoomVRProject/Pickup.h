// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class MESHROOMVRPROJECT_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup")
		class UStaticMeshComponent* PickupMesh;

	bool bIsActive;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return PickupMesh; }
	
	UFUNCTION(BlueprintPure, Category = "Pickup")
	bool IsActive();
	
	UFUNCTION(BlueprintCallable, Category = "Pickup")
	void SetIsActive(bool NewPickupState);

	UFUNCTION(BlueprintNativeEvent)
	void Collected();
	virtual void Collected_Implementation();

};
