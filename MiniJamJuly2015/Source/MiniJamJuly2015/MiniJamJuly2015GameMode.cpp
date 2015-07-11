// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "MiniJamJuly2015.h"
#include "MiniJamJuly2015GameMode.h"
#include "MiniJamJuly2015HUD.h"
#include "MiniJamJuly2015Character.h"

AMiniJamJuly2015GameMode::AMiniJamJuly2015GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMiniJamJuly2015HUD::StaticClass();
}
