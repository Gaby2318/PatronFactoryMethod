// Copyright Epic Games, Inc. All Rights Reserved.

#include "PatronFactoryMethodGameMode.h"
#include "PatronFactoryMethodCharacter.h"
#include "UObject/ConstructorHelpers.h"

APatronFactoryMethodGameMode::APatronFactoryMethodGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
