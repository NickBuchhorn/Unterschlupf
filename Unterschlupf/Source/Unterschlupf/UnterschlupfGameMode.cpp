// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "UnterschlupfGameMode.h"
#include "UnterschlupfHUD.h"
#include "UnterschlupfCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnterschlupfGameMode::AUnterschlupfGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnterschlupfHUD::StaticClass();
}
