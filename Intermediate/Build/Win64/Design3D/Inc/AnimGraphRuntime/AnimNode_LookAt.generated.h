// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_LookAt_generated_h
#error "AnimNode_LookAt.generated.h already included, missing '#pragma once' in AnimNode_LookAt.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_LookAt_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LookAt_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SkeletalControlBase Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_LookAt>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LookAt_h


#define FOREACH_ENUM_EINTERPOLATIONBLEND(op) \
	op(EInterpolationBlend::Linear) \
	op(EInterpolationBlend::Cubic) \
	op(EInterpolationBlend::Sinusoidal) \
	op(EInterpolationBlend::EaseInOutExponent2) \
	op(EInterpolationBlend::EaseInOutExponent3) \
	op(EInterpolationBlend::EaseInOutExponent4) \
	op(EInterpolationBlend::EaseInOutExponent5) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
