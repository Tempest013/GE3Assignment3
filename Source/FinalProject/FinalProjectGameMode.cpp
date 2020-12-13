// Copyright Epic Games, Inc. All Rights Reserved.

#include "FinalProjectGameMode.h"
#include "FinalProjectPlayerController.h"
#include "FinalProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFinalProjectGameMode::AFinalProjectGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AFinalProjectPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}