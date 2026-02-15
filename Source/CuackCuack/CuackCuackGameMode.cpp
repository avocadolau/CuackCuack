// Copyright Epic Games, Inc. All Rights Reserved.

#include "CuackCuackGameMode.h"
#include "CuackCuackCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACuackCuackGameMode::ACuackCuackGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
