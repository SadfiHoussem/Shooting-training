// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "PuzzlePickup.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class ETypePickupEnum : uint8
{
	PU_SPHERE 	UMETA(DisplayName = "Sphere"),
	PU_CUBE 	UMETA(DisplayName = "Cube")
};

UCLASS()
class MESHROOMVRPROJECT_API APuzzlePickup : public APickup
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	APuzzlePickup();
	
	void Collected_Implementation() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
		ETypePickupEnum TypePickupEnum;

};
