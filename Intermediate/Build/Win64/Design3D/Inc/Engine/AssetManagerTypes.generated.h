// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AssetManagerTypes_generated_h
#error "AssetManagerTypes.generated.h already included, missing '#pragma once' in AssetManagerTypes.h"
#endif
#define ENGINE_AssetManagerTypes_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__AssetBaseClass() { return STRUCT_OFFSET(FPrimaryAssetTypeInfo, AssetBaseClass); } \
	FORCEINLINE static uint32 __PPO__Directories() { return STRUCT_OFFSET(FPrimaryAssetTypeInfo, Directories); } \
	FORCEINLINE static uint32 __PPO__SpecificAssets() { return STRUCT_OFFSET(FPrimaryAssetTypeInfo, SpecificAssets); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPrimaryAssetTypeInfo>();

#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPrimaryAssetRules>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h


#define FOREACH_ENUM_EPRIMARYASSETCOOKRULE(op) \
	op(EPrimaryAssetCookRule::Unknown) \
	op(EPrimaryAssetCookRule::NeverCook) \
	op(EPrimaryAssetCookRule::DevelopmentCook) \
	op(EPrimaryAssetCookRule::DevelopmentAlwaysCook) \
	op(EPrimaryAssetCookRule::AlwaysCook) 

enum class EPrimaryAssetCookRule : uint8;
template<> ENGINE_API UEnum* StaticEnum<EPrimaryAssetCookRule>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
