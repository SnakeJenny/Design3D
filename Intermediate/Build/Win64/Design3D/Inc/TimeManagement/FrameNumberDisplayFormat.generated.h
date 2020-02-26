// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TIMEMANAGEMENT_FrameNumberDisplayFormat_generated_h
#error "FrameNumberDisplayFormat.generated.h already included, missing '#pragma once' in FrameNumberDisplayFormat.h"
#endif
#define TIMEMANAGEMENT_FrameNumberDisplayFormat_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_TimeManagement_Public_FrameNumberDisplayFormat_h


#define FOREACH_ENUM_EFRAMENUMBERDISPLAYFORMATS(op) \
	op(EFrameNumberDisplayFormats::NonDropFrameTimecode) \
	op(EFrameNumberDisplayFormats::DropFrameTimecode) \
	op(EFrameNumberDisplayFormats::Seconds) \
	op(EFrameNumberDisplayFormats::Frames) \
	op(EFrameNumberDisplayFormats::MAX_Count) 

enum class EFrameNumberDisplayFormats : uint8;
template<> TIMEMANAGEMENT_API UEnum* StaticEnum<EFrameNumberDisplayFormats>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
