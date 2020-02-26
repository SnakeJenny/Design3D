// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSETTOOLS_AssetToolsSettings_generated_h
#error "AssetToolsSettings.generated.h already included, missing '#pragma once' in AssetToolsSettings.h"
#endif
#define ASSETTOOLS_AssetToolsSettings_generated_h

#define Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAdvancedCopyMap_Statics; \
	ASSETTOOLS_API static class UScriptStruct* StaticStruct();


template<> ASSETTOOLS_API UScriptStruct* StaticStruct<struct FAdvancedCopyMap>();

#define Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_29_RPC_WRAPPERS
#define Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetToolsSettings(); \
	friend struct Z_Construct_UClass_UAssetToolsSettings_Statics; \
public: \
	DECLARE_CLASS(UAssetToolsSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AssetTools"), NO_API) \
	DECLARE_SERIALIZER(UAssetToolsSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUAssetToolsSettings(); \
	friend struct Z_Construct_UClass_UAssetToolsSettings_Statics; \
public: \
	DECLARE_CLASS(UAssetToolsSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AssetTools"), NO_API) \
	DECLARE_SERIALIZER(UAssetToolsSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetToolsSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetToolsSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetToolsSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetToolsSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetToolsSettings(UAssetToolsSettings&&); \
	NO_API UAssetToolsSettings(const UAssetToolsSettings&); \
public:


#define Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetToolsSettings(UAssetToolsSettings&&); \
	NO_API UAssetToolsSettings(const UAssetToolsSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetToolsSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetToolsSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetToolsSettings)


#define Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_29_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_26_PROLOG
#define Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_29_RPC_WRAPPERS \
	Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_29_INCLASS \
	Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETTOOLS_API UClass* StaticClass<class UAssetToolsSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_AssetTools_Public_AssetToolsSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
