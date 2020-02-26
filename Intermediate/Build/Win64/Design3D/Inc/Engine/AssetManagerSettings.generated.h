// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AssetManagerSettings_generated_h
#error "AssetManagerSettings.generated.h already included, missing '#pragma once' in AssetManagerSettings.h"
#endif
#define ENGINE_AssetManagerSettings_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPrimaryAssetRulesCustomOverride_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPrimaryAssetRulesCustomOverride>();

#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPrimaryAssetRulesOverride>();

#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAssetManagerRedirect>();

#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_69_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_69_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetManagerSettings(); \
	friend struct Z_Construct_UClass_UAssetManagerSettings_Statics; \
public: \
	DECLARE_CLASS(UAssetManagerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAssetManagerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUAssetManagerSettings(); \
	friend struct Z_Construct_UClass_UAssetManagerSettings_Statics; \
public: \
	DECLARE_CLASS(UAssetManagerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAssetManagerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetManagerSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetManagerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetManagerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetManagerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetManagerSettings(UAssetManagerSettings&&); \
	NO_API UAssetManagerSettings(const UAssetManagerSettings&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_69_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetManagerSettings(UAssetManagerSettings&&); \
	NO_API UAssetManagerSettings(const UAssetManagerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetManagerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetManagerSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetManagerSettings)


#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_69_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_66_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_69_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_69_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_69_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_69_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_69_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAssetManagerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
