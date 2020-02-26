// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_CopyBoneDelta_generated_h
#error "AnimNode_CopyBoneDelta.generated.h already included, missing '#pragma once' in AnimNode_CopyBoneDelta.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_CopyBoneDelta_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBoneDelta_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SkeletalControlBase Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_CopyBoneDelta>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CopyBoneDelta_h


#define FOREACH_ENUM_COPYBONEDELTAMODE(op) \
	op(CopyBoneDeltaMode::Accumulate) \
	op(CopyBoneDeltaMode::Copy) 

enum class CopyBoneDeltaMode : uint8;
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<CopyBoneDeltaMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
