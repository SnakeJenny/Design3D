// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROPERTYPATH_PropertyPathHelpers_generated_h
#error "PropertyPathHelpers.generated.h already included, missing '#pragma once' in PropertyPathHelpers.h"
#endif
#define PROPERTYPATH_PropertyPathHelpers_generated_h

#define Engine_Source_Runtime_PropertyPath_Public_PropertyPathHelpers_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCachedPropertyPath_Statics; \
	PROPERTYPATH_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Segments() { return STRUCT_OFFSET(FCachedPropertyPath, Segments); } \
	FORCEINLINE static uint32 __PPO__CachedFunction() { return STRUCT_OFFSET(FCachedPropertyPath, CachedFunction); }


template<> PROPERTYPATH_API UScriptStruct* StaticStruct<struct FCachedPropertyPath>();

#define Engine_Source_Runtime_PropertyPath_Public_PropertyPathHelpers_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPropertyPathSegment_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Struct() { return STRUCT_OFFSET(FPropertyPathSegment, Struct); } \
	FORCEINLINE static uint32 __PPO__Field() { return STRUCT_OFFSET(FPropertyPathSegment, Field); }


template<> PROPERTYPATH_API UScriptStruct* StaticStruct<struct FPropertyPathSegment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_PropertyPath_Public_PropertyPathHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
