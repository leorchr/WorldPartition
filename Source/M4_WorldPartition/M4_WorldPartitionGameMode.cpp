// Copyright Epic Games, Inc. All Rights Reserved.

#include "M4_WorldPartitionGameMode.h"
#include "M4_WorldPartitionCharacter.h"
#include "UObject/ConstructorHelpers.h"

AM4_WorldPartitionGameMode::AM4_WorldPartitionGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
