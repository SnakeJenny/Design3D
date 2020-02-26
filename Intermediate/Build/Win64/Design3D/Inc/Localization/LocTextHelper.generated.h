// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOCALIZATION_LocTextHelper_generated_h
#error "LocTextHelper.generated.h already included, missing '#pragma once' in LocTextHelper.h"
#endif
#define LOCALIZATION_LocTextHelper_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_Localization_Public_LocTextHelper_h


#define FOREACH_ENUM_ELOCTEXTPLATFORMSPLITMODE(op) \
	op(ELocTextPlatformSplitMode::None) \
	op(ELocTextPlatformSplitMode::Restricted) \
	op(ELocTextPlatformSplitMode::All) 

enum class ELocTextPlatformSplitMode : uint8;
template<> LOCALIZATION_API UEnum* StaticEnum<ELocTextPlatformSplitMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
