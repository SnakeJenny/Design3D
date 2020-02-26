// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HEADMOUNTEDDISPLAY_HeadMountedDisplayTypes_generated_h
#error "HeadMountedDisplayTypes.generated.h already included, missing '#pragma once' in HeadMountedDisplayTypes.h"
#endif
#define HEADMOUNTEDDISPLAY_HeadMountedDisplayTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h


#define FOREACH_ENUM_EXRTRACKEDDEVICETYPE(op) \
	op(EXRTrackedDeviceType::HeadMountedDisplay) \
	op(EXRTrackedDeviceType::Controller) \
	op(EXRTrackedDeviceType::TrackingReference) \
	op(EXRTrackedDeviceType::Other) \
	op(EXRTrackedDeviceType::Invalid) \
	op(EXRTrackedDeviceType::Any) 

enum class EXRTrackedDeviceType : uint8;
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EXRTrackedDeviceType>();

#define FOREACH_ENUM_ESPECTATORSCREENMODE(op) \
	op(ESpectatorScreenMode::Disabled) \
	op(ESpectatorScreenMode::SingleEyeLetterboxed) \
	op(ESpectatorScreenMode::Undistorted) \
	op(ESpectatorScreenMode::Distorted) \
	op(ESpectatorScreenMode::SingleEye) \
	op(ESpectatorScreenMode::SingleEyeCroppedToFill) \
	op(ESpectatorScreenMode::Texture) \
	op(ESpectatorScreenMode::TexturePlusEye) 

enum class ESpectatorScreenMode : uint8;
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<ESpectatorScreenMode>();

#define FOREACH_ENUM_EHMDWORNSTATE(op) \
	op(EHMDWornState::Unknown) \
	op(EHMDWornState::Worn) \
	op(EHMDWornState::NotWorn) 
#define FOREACH_ENUM_EHMDTRACKINGORIGIN(op) \
	op(EHMDTrackingOrigin::Floor) \
	op(EHMDTrackingOrigin::Eye) 
#define FOREACH_ENUM_EORIENTPOSITIONSELECTOR(op) \
	op(EOrientPositionSelector::Orientation) \
	op(EOrientPositionSelector::Position) \
	op(EOrientPositionSelector::OrientationAndPosition) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
