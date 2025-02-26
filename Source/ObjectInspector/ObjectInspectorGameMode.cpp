// Copyright Epic Games, Inc. All Rights Reserved.

#include "ObjectInspectorGameMode.h"
#include "ObjectInspectorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AObjectInspectorGameMode::AObjectInspectorGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
