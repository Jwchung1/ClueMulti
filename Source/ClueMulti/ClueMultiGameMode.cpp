// Copyright Epic Games, Inc. All Rights Reserved.

#include "ClueMultiGameMode.h"
#include "ClueMultiCharacter.h"
#include "UObject/ConstructorHelpers.h"

AClueMultiGameMode::AClueMultiGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
