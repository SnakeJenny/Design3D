// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimCurveTypes_generated_h
#error "AnimCurveTypes.generated.h already included, missing '#pragma once' in AnimCurveTypes.h"
#endif
#define ENGINE_AnimCurveTypes_generated_h

#define Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_641_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRawCurveTracks_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRawCurveTracks>();

#define Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformCurve_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimCurveBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTransformCurve>();

#define Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_159_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVectorCurve_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimCurveBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVectorCurve>();

#define Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_135_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloatCurve_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimCurveBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFloatCurve>();

#define Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimCurveBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__CurveTypeFlags() { return STRUCT_OFFSET(FAnimCurveBase, CurveTypeFlags); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimCurveBase>();

#define Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimCurveParam_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimCurveParam>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_Animation_AnimCurveTypes_h


#define FOREACH_ENUM_ERAWCURVETRACKTYPES(op) \
	op(ERawCurveTrackTypes::RCT_Float) \
	op(ERawCurveTrackTypes::RCT_Vector) \
	op(ERawCurveTrackTypes::RCT_Transform) 

enum class ERawCurveTrackTypes : uint8;
template<> ENGINE_API UEnum* StaticEnum<ERawCurveTrackTypes>();

#define FOREACH_ENUM_EANIMASSETCURVEFLAGS(op) \
	op(AACF_DriveMorphTarget_DEPRECATED) \
	op(AACF_DriveAttribute_DEPRECATED) \
	op(AACF_Editable) \
	op(AACF_DriveMaterial_DEPRECATED) \
	op(AACF_Metadata) \
	op(AACF_DriveTrack) \
	op(AACF_Disabled) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
