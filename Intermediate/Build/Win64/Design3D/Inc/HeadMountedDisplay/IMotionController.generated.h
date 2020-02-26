// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HEADMOUNTEDDISPLAY_IMotionController_generated_h
#error "IMotionController.generated.h already included, missing '#pragma once' in IMotionController.h"
#endif
#define HEADMOUNTEDDISPLAY_IMotionController_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_HeadMountedDisplay_Public_IMotionController_h


#define FOREACH_ENUM_ETRACKINGSTATUS(op) \
	op(ETrackingStatus::NotTracked) \
	op(ETrackingStatus::InertialOnly) \
	op(ETrackingStatus::Tracked) 

enum class ETrackingStatus : uint8;
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<ETrackingStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
