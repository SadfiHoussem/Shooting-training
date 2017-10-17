// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MeshRoomVRProjectGameMode.h"
#include "MeshRoomVRProjectHUD.h"
#include "MeshRoomVRProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMeshRoomVRProjectGameMode::AMeshRoomVRProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMeshRoomVRProjectHUD::StaticClass();
}
