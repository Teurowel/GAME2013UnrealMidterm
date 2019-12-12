// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Midterm_Jang_DoosungGameMode.h"
#include "Midterm_Jang_DoosungCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMidterm_Jang_DoosungGameMode::AMidterm_Jang_DoosungGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
