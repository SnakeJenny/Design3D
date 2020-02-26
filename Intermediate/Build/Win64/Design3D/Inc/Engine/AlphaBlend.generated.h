// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AlphaBlend_generated_h
#error "AlphaBlend.generated.h already included, missing '#pragma once' in AlphaBlend.h"
#endif
#define ENGINE_AlphaBlend_generated_h

#define Engine_Source_Runtime_Engine_Public_AlphaBlend_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAlphaBlend_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__CustomCurve() { return STRUCT_OFFSET(FAlphaBlend, CustomCurve); } \
	FORCEINLINE static uint32 __PPO__BlendTime() { return STRUCT_OFFSET(FAlphaBlend, BlendTime); } \
	FORCEINLINE static uint32 __PPO__BlendOption() { return STRUCT_OFFSET(FAlphaBlend, BlendOption); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAlphaBlend>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_AlphaBlend_h


#define FOREACH_ENUM_EALPHABLENDOPTION(op) \
	op(EAlphaBlendOption::Linear) \
	op(EAlphaBlendOption::Cubic) \
	op(EAlphaBlendOption::HermiteCubic) \
	op(EAlphaBlendOption::Sinusoidal) \
	op(EAlphaBlendOption::QuadraticInOut) \
	op(EAlphaBlendOption::CubicInOut) \
	op(EAlphaBlendOption::QuarticInOut) \
	op(EAlphaBlendOption::QuinticInOut) \
	op(EAlphaBlendOption::CircularIn) \
	op(EAlphaBlendOption::CircularOut) \
	op(EAlphaBlendOption::CircularInOut) \
	op(EAlphaBlendOption::ExpIn) \
	op(EAlphaBlendOption::ExpOut) \
	op(EAlphaBlendOption::ExpInOut) \
	op(EAlphaBlendOption::Custom) 

enum class EAlphaBlendOption : uint8;
template<> ENGINE_API UEnum* StaticEnum<EAlphaBlendOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
