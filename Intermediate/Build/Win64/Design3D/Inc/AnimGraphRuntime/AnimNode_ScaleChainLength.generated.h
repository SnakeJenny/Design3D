// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_ScaleChainLength_generated_h
#error "AnimNode_ScaleChainLength.generated.h already included, missing '#pragma once' in AnimNode_ScaleChainLength.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_ScaleChainLength_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ScaleChainLength_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_ScaleChainLength>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_ScaleChainLength_h


#define FOREACH_ENUM_ESCALECHAININITIALLENGTH(op) \
	op(EScaleChainInitialLength::FixedDefaultLengthValue) \
	op(EScaleChainInitialLength::Distance) \
	op(EScaleChainInitialLength::ChainLength) 

enum class EScaleChainInitialLength : uint8;
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EScaleChainInitialLength>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
