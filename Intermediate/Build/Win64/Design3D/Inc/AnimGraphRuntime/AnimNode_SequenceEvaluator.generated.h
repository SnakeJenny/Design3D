// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_SequenceEvaluator_generated_h
#error "AnimNode_SequenceEvaluator.generated.h already included, missing '#pragma once' in AnimNode_SequenceEvaluator.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_SequenceEvaluator_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_SequenceEvaluator_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_AssetPlayerBase Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_SequenceEvaluator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_SequenceEvaluator_h


#define FOREACH_ENUM_ESEQUENCEEVALREINIT(op) \
	op(ESequenceEvalReinit::NoReset) \
	op(ESequenceEvalReinit::StartPosition) \
	op(ESequenceEvalReinit::ExplicitTime) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
