// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "MyTestProject_VS.h"
#include "MyTestProject_VSGameMode.h"
#include "MyTestProject_VSCharacter.h"

AMyTestProject_VSGameMode::AMyTestProject_VSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
