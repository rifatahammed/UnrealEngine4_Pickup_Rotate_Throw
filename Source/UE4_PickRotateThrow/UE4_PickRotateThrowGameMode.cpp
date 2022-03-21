// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4_PickRotateThrowGameMode.h"
#include "UE4_PickRotateThrowHUD.h"
#include "UE4_PickRotateThrowCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4_PickRotateThrowGameMode::AUE4_PickRotateThrowGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUE4_PickRotateThrowHUD::StaticClass();
}
