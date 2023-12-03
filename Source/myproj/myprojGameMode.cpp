// Copyright Epic Games, Inc. All Rights Reserved.

#include "myprojGameMode.h"
#include "myprojCharacter.h"
#include "UObject/ConstructorHelpers.h"

AmyprojGameMode::AmyprojGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
