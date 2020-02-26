// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_SlateFontInfo_generated_h
#error "SlateFontInfo.generated.h already included, missing '#pragma once' in SlateFontInfo.h"
#endif
#define SLATECORE_SlateFontInfo_generated_h

#define Engine_Source_Runtime_SlateCore_Public_Fonts_SlateFontInfo_h_135_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlateFontInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SLATECORE_API UScriptStruct* StaticStruct<struct FSlateFontInfo>();

#define Engine_Source_Runtime_SlateCore_Public_Fonts_SlateFontInfo_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFontOutlineSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SLATECORE_API UScriptStruct* StaticStruct<struct FFontOutlineSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_SlateCore_Public_Fonts_SlateFontInfo_h


#define FOREACH_ENUM_EFONTFALLBACK(op) \
	op(EFontFallback::FF_NoFallback) \
	op(EFontFallback::FF_LocalizedFallback) \
	op(EFontFallback::FF_LastResortFallback) \
	op(EFontFallback::FF_Max) 

enum class EFontFallback : uint8;
template<> SLATECORE_API UEnum* StaticEnum<EFontFallback>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
