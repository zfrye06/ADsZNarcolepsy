// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ADsZNarcolepsyGameMode.h"
#include "ADsZNarcolepsyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AADsZNarcolepsyGameMode::AADsZNarcolepsyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Character/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
