// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_RefPose_generated_h
#error "AnimNode_RefPose.generated.h already included, missing '#pragma once' in AnimNode_RefPose.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_RefPose_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RefPose_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_MeshSpaceRefPose>();

#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RefPose_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_RefPose_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_RefPose>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RefPose_h


#define FOREACH_ENUM_EREFPOSETYPE(op) \
	op(EIT_LocalSpace) \
	op(EIT_Additive) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
