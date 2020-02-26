// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InputScaleBias_generated_h
#error "InputScaleBias.generated.h already included, missing '#pragma once' in InputScaleBias.h"
#endif
#define ENGINE_InputScaleBias_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputAlphaBoolBlend>();

#define Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputScaleBiasClamp>();

#define Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputRange_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputRange>();

#define Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputScaleBias_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputScaleBias>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h


#define FOREACH_ENUM_EANIMALPHAINPUTTYPE(op) \
	op(EAnimAlphaInputType::Float) \
	op(EAnimAlphaInputType::Bool) \
	op(EAnimAlphaInputType::Curve) 

enum class EAnimAlphaInputType : uint8;
template<> ENGINE_API UEnum* StaticEnum<EAnimAlphaInputType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
