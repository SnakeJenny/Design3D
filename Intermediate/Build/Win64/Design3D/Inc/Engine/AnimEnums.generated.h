// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimEnums_generated_h
#error "AnimEnums.generated.h already included, missing '#pragma once' in AnimEnums.h"
#endif
#define ENGINE_AnimEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimEnums_h


#define FOREACH_ENUM_ANIMATIONCOMPRESSIONFORMAT(op) \
	op(ACF_None) \
	op(ACF_Float96NoW) \
	op(ACF_Fixed48NoW) \
	op(ACF_IntervalFixed32NoW) \
	op(ACF_Fixed32NoW) \
	op(ACF_Float32NoW) \
	op(ACF_Identity) 
#define FOREACH_ENUM_EADDITIVEBASEPOSETYPE(op) \
	op(ABPT_None) \
	op(ABPT_RefPose) \
	op(ABPT_AnimScaled) \
	op(ABPT_AnimFrame) 
#define FOREACH_ENUM_EROOTMOTIONMODE(op) \
	op(ERootMotionMode::NoRootMotionExtraction) \
	op(ERootMotionMode::IgnoreRootMotion) \
	op(ERootMotionMode::RootMotionFromEverything) \
	op(ERootMotionMode::RootMotionFromMontagesOnly) 
#define FOREACH_ENUM_EROOTMOTIONROOTLOCK(op) \
	op(ERootMotionRootLock::RefPose) \
	op(ERootMotionRootLock::AnimFirstFrame) \
	op(ERootMotionRootLock::Zero) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
