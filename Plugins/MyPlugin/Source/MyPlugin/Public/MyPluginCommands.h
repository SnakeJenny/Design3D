// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "MyPluginStyle.h"

class FMyPluginCommands : public TCommands<FMyPluginCommands>
{
public:

	FMyPluginCommands()
		: TCommands<FMyPluginCommands>(TEXT("MyPlugin"), NSLOCTEXT("Contexts", "MyPlugin", "MyPlugin Plugin"), NAME_None, FMyPluginStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};