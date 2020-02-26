// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TimeStretchCurve_generated_h
#error "TimeStretchCurve.generated.h already included, missing '#pragma once' in TimeStretchCurve.h"
#endif
#define ENGINE_TimeStretchCurve_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h_245_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__bHasValidData() { return STRUCT_OFFSET(FTimeStretchCurveInstance, bHasValidData); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimeStretchCurveInstance>();

#define Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h_198_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimeStretchCurve_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__SamplingRate() { return STRUCT_OFFSET(FTimeStretchCurve, SamplingRate); } \
	FORCEINLINE static uint32 __PPO__CurveValueMinPrecision() { return STRUCT_OFFSET(FTimeStretchCurve, CurveValueMinPrecision); } \
	FORCEINLINE static uint32 __PPO__Markers() { return STRUCT_OFFSET(FTimeStretchCurve, Markers); } \
	FORCEINLINE static uint32 __PPO__Sum_dT_i_by_C_i() { return STRUCT_OFFSET(FTimeStretchCurve, Sum_dT_i_by_C_i); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimeStretchCurve>();

#define Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimeStretchCurveMarker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h


#define FOREACH_ENUM_ETIMESTRETCHCURVEMAPPING(op) \
	op(ETimeStretchCurveMapping::T_Original) \
	op(ETimeStretchCurveMapping::T_TargetMin) \
	op(ETimeStretchCurveMapping::T_TargetMax) 

enum class ETimeStretchCurveMapping : uint8;
template<> ENGINE_API UEnum* StaticEnum<ETimeStretchCurveMapping>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
