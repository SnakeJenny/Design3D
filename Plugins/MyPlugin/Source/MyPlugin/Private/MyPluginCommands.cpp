// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MyPluginCommands.h"

#define LOCTEXT_NAMESPACE "FMyPluginModule"

void FMyPluginCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "MyPlugin", "Bring up MyPlugin window", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
