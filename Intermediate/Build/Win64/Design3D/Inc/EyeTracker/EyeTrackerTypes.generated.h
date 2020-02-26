// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EYETRACKER_EyeTrackerTypes_generated_h
#error "EyeTrackerTypes.generated.h already included, missing '#pragma once' in EyeTrackerTypes.h"
#endif
#define EYETRACKER_EyeTrackerTypes_generated_h

#define Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics; \
	EYETRACKER_API static class UScriptStruct* StaticStruct();


template<> EYETRACKER_API UScriptStruct* StaticStruct<struct FEyeTrackerStereoGazeData>();

#define Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics; \
	EYETRACKER_API static class UScriptStruct* StaticStruct();


template<> EYETRACKER_API UScriptStruct* StaticStruct<struct FEyeTrackerGazeData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h


#define FOREACH_ENUM_EEYETRACKERSTATUS(op) \
	op(EEyeTrackerStatus::NotConnected) \
	op(EEyeTrackerStatus::NotTracking) \
	op(EEyeTrackerStatus::Tracking) 

enum class EEyeTrackerStatus : uint8;
template<> EYETRACKER_API UEnum* StaticEnum<EEyeTrackerStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
