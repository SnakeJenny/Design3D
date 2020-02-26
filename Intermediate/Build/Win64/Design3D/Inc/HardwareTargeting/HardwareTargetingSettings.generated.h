// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HARDWARETARGETING_HardwareTargetingSettings_generated_h
#error "HardwareTargetingSettings.generated.h already included, missing '#pragma once' in HardwareTargetingSettings.h"
#endif
#define HARDWARETARGETING_HardwareTargetingSettings_generated_h

#define Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_RPC_WRAPPERS
#define Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHardwareTargetingSettings(); \
	friend struct Z_Construct_UClass_UHardwareTargetingSettings_Statics; \
public: \
	DECLARE_CLASS(UHardwareTargetingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/HardwareTargeting"), NO_API) \
	DECLARE_SERIALIZER(UHardwareTargetingSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUHardwareTargetingSettings(); \
	friend struct Z_Construct_UClass_UHardwareTargetingSettings_Statics; \
public: \
	DECLARE_CLASS(UHardwareTargetingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/HardwareTargeting"), NO_API) \
	DECLARE_SERIALIZER(UHardwareTargetingSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHardwareTargetingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHardwareTargetingSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHardwareTargetingSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHardwareTargetingSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHardwareTargetingSettings(UHardwareTargetingSettings&&); \
	NO_API UHardwareTargetingSettings(const UHardwareTargetingSettings&); \
public:


#define Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHardwareTargetingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHardwareTargetingSettings(UHardwareTargetingSettings&&); \
	NO_API UHardwareTargetingSettings(const UHardwareTargetingSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHardwareTargetingSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHardwareTargetingSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHardwareTargetingSettings)


#define Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_45_PROLOG
#define Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_RPC_WRAPPERS \
	Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_INCLASS \
	Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_48_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HardwareTargetingSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HARDWARETARGETING_API UClass* StaticClass<class UHardwareTargetingSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h


#define FOREACH_ENUM_EGRAPHICSPRESET(op) \
	op(EGraphicsPreset::Unspecified) \
	op(EGraphicsPreset::Maximum) \
	op(EGraphicsPreset::Scalable) 
#define FOREACH_ENUM_EHARDWARECLASS(op) \
	op(EHardwareClass::Unspecified) \
	op(EHardwareClass::Desktop) \
	op(EHardwareClass::Mobile) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
