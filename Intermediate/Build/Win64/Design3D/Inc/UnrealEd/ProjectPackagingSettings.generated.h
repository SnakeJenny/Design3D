// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ProjectPackagingSettings_generated_h
#error "ProjectPackagingSettings.generated.h already included, missing '#pragma once' in ProjectPackagingSettings.h"
#endif
#define UNREALED_ProjectPackagingSettings_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_100_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_100_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProjectPackagingSettings(); \
	friend struct Z_Construct_UClass_UProjectPackagingSettings_Statics; \
public: \
	DECLARE_CLASS(UProjectPackagingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UProjectPackagingSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_100_INCLASS \
private: \
	static void StaticRegisterNativesUProjectPackagingSettings(); \
	friend struct Z_Construct_UClass_UProjectPackagingSettings_Statics; \
public: \
	DECLARE_CLASS(UProjectPackagingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UProjectPackagingSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectPackagingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectPackagingSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectPackagingSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectPackagingSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProjectPackagingSettings(UProjectPackagingSettings&&); \
	NO_API UProjectPackagingSettings(const UProjectPackagingSettings&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_100_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProjectPackagingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProjectPackagingSettings(UProjectPackagingSettings&&); \
	NO_API UProjectPackagingSettings(const UProjectPackagingSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectPackagingSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectPackagingSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectPackagingSettings)


#define Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_100_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bNativizeBlueprintAssets_DEPRECATED() { return STRUCT_OFFSET(UProjectPackagingSettings, bNativizeBlueprintAssets_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__bNativizeOnlySelectedBlueprints_DEPRECATED() { return STRUCT_OFFSET(UProjectPackagingSettings, bNativizeOnlySelectedBlueprints_DEPRECATED); }


#define Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_96_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_100_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_100_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_100_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_100_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_100_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h_100_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ProjectPackagingSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UProjectPackagingSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Settings_ProjectPackagingSettings_h


#define FOREACH_ENUM_EPROJECTPACKAGINGBLUEPRINTNATIVIZATIONMETHOD(op) \
	op(EProjectPackagingBlueprintNativizationMethod::Disabled) \
	op(EProjectPackagingBlueprintNativizationMethod::Inclusive) \
	op(EProjectPackagingBlueprintNativizationMethod::Exclusive) 

enum class EProjectPackagingBlueprintNativizationMethod : uint8;
template<> UNREALED_API UEnum* StaticEnum<EProjectPackagingBlueprintNativizationMethod>();

#define FOREACH_ENUM_EPROJECTPACKAGINGBUILD(op) \
	op(EProjectPackagingBuild::Always) \
	op(EProjectPackagingBuild::Never) \
	op(EProjectPackagingBuild::IfProjectHasCode) \
	op(EProjectPackagingBuild::IfEditorWasBuiltLocally) 

enum class EProjectPackagingBuild;
template<> UNREALED_API UEnum* StaticEnum<EProjectPackagingBuild>();

#define FOREACH_ENUM_EPROJECTPACKAGINGINTERNATIONALIZATIONPRESETS(op) \
	op(EProjectPackagingInternationalizationPresets::English) \
	op(EProjectPackagingInternationalizationPresets::EFIGS) \
	op(EProjectPackagingInternationalizationPresets::EFIGSCJK) \
	op(EProjectPackagingInternationalizationPresets::CJK) \
	op(EProjectPackagingInternationalizationPresets::All) 

enum class EProjectPackagingInternationalizationPresets : uint8;
template<> UNREALED_API UEnum* StaticEnum<EProjectPackagingInternationalizationPresets>();

#define FOREACH_ENUM_EPROJECTPACKAGINGBUILDCONFIGURATIONS(op) \
	op(PPBC_DebugGame) \
	op(PPBC_DebugGameClient) \
	op(PPBC_Development) \
	op(PPBC_DevelopmentClient) \
	op(PPBC_Shipping) \
	op(PPBC_ShippingClient) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
