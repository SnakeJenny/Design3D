// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_ModifyCurve_generated_h
#error "AnimNode_ModifyCurve.generated.h already included, missing '#pragma once' in AnimNode_ModifyCurve.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_ModifyCurve_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_ModifyCurve_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FAnimNode_ModifyCurve>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_ModifyCurve_h


#define FOREACH_ENUM_EMODIFYCURVEAPPLYMODE(op) \
	op(EModifyCurveApplyMode::Add) \
	op(EModifyCurveApplyMode::Scale) \
	op(EModifyCurveApplyMode::Blend) \
	op(EModifyCurveApplyMode::WeightedMovingAverage) \
	op(EModifyCurveApplyMode::RemapCurve) 

enum class EModifyCurveApplyMode : uint8;
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EModifyCurveApplyMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
