// Fill out your copyright notice in the Description page of Project Settings.

#include "PuzzlePickup.h"
#include "Engine/StaticMesh.h"


APuzzlePickup::APuzzlePickup()
{
	// Enable physics for Puzzle pickup
	GetMesh()->SetSimulatePhysics(true);
}

void APuzzlePickup::Collected_Implementation()
{
	Super::Collected_Implementation();
	GEngine->AddOnScreenDebugMessage(-1, 5.0, FColor::Green, "Item Collected");
	Destroy();
}
