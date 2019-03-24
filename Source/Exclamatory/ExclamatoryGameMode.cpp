// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ExclamatoryGameMode.h"
#include "ExclamatoryCharacter.h"
#include "UObject/ConstructorHelpers.h"

AExclamatoryGameMode::AExclamatoryGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ExclamatoryCharacter_BP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
