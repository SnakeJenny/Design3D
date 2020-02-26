// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOCALIZATION_LocalizationSettings_generated_h
#error "LocalizationSettings.generated.h already included, missing '#pragma once' in LocalizationSettings.h"
#endif
#define LOCALIZATION_LocalizationSettings_generated_h

#define Engine_Source_Developer_Localization_Public_LocalizationSettings_h_18_RPC_WRAPPERS
#define Engine_Source_Developer_Localization_Public_LocalizationSettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Developer_Localization_Public_LocalizationSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalizationSettings(); \
	friend struct Z_Construct_UClass_ULocalizationSettings_Statics; \
public: \
	DECLARE_CLASS(ULocalizationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Localization"), NO_API) \
	DECLARE_SERIALIZER(ULocalizationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Developer_Localization_Public_LocalizationSettings_h_18_INCLASS \
private: \
	static void StaticRegisterNativesULocalizationSettings(); \
	friend struct Z_Construct_UClass_ULocalizationSettings_Statics; \
public: \
	DECLARE_CLASS(ULocalizationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Localization"), NO_API) \
	DECLARE_SERIALIZER(ULocalizationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Developer_Localization_Public_LocalizationSettings_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalizationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalizationSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalizationSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalizationSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalizationSettings(ULocalizationSettings&&); \
	NO_API ULocalizationSettings(const ULocalizationSettings&); \
public:


#define Engine_Source_Developer_Localization_Public_LocalizationSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalizationSettings(ULocalizationSettings&&); \
	NO_API ULocalizationSettings(const ULocalizationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalizationSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalizationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalizationSettings)


#define Engine_Source_Developer_Localization_Public_LocalizationSettings_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EngineTargetSet() { return STRUCT_OFFSET(ULocalizationSettings, EngineTargetSet); } \
	FORCEINLINE static uint32 __PPO__EngineTargetsSettings() { return STRUCT_OFFSET(ULocalizationSettings, EngineTargetsSettings); } \
	FORCEINLINE static uint32 __PPO__GameTargetSet() { return STRUCT_OFFSET(ULocalizationSettings, GameTargetSet); } \
	FORCEINLINE static uint32 __PPO__GameTargetsSettings() { return STRUCT_OFFSET(ULocalizationSettings, GameTargetsSettings); }


#define Engine_Source_Developer_Localization_Public_LocalizationSettings_h_15_PROLOG
#define Engine_Source_Developer_Localization_Public_LocalizationSettings_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_Localization_Public_LocalizationSettings_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_Localization_Public_LocalizationSettings_h_18_RPC_WRAPPERS \
	Engine_Source_Developer_Localization_Public_LocalizationSettings_h_18_INCLASS \
	Engine_Source_Developer_Localization_Public_LocalizationSettings_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_Localization_Public_LocalizationSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_Localization_Public_LocalizationSettings_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_Localization_Public_LocalizationSettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_Localization_Public_LocalizationSettings_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_Localization_Public_LocalizationSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOCALIZATION_API UClass* StaticClass<class ULocalizationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_Localization_Public_LocalizationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
