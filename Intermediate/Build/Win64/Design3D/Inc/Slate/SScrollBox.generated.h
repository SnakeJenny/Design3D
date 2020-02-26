// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATE_SScrollBox_generated_h
#error "SScrollBox.generated.h already included, missing '#pragma once' in SScrollBox.h"
#endif
#define SLATE_SScrollBox_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Slate_Public_Widgets_Layout_SScrollBox_h


#define FOREACH_ENUM_EDESCENDANTSCROLLDESTINATION(op) \
	op(EDescendantScrollDestination::IntoView) \
	op(EDescendantScrollDestination::TopOrLeft) \
	op(EDescendantScrollDestination::Center) 

enum class EDescendantScrollDestination : uint8;
template<> SLATE_API UEnum* StaticEnum<EDescendantScrollDestination>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
