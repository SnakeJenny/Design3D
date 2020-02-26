// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ContentBrowserSettings_generated_h
#error "ContentBrowserSettings.generated.h already included, missing '#pragma once' in ContentBrowserSettings.h"
#endif
#define UNREALED_ContentBrowserSettings_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_21_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBrowserSettings(); \
	friend struct Z_Construct_UClass_UContentBrowserSettings_Statics; \
public: \
	DECLARE_CLASS(UContentBrowserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UContentBrowserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUContentBrowserSettings(); \
	friend struct Z_Construct_UClass_UContentBrowserSettings_Statics; \
public: \
	DECLARE_CLASS(UContentBrowserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UContentBrowserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContentBrowserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBrowserSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContentBrowserSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowserSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContentBrowserSettings(UContentBrowserSettings&&); \
	NO_API UContentBrowserSettings(const UContentBrowserSettings&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContentBrowserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContentBrowserSettings(UContentBrowserSettings&&); \
	NO_API UContentBrowserSettings(const UContentBrowserSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContentBrowserSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBrowserSettings)


#define Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DisplayEngineFolder() { return STRUCT_OFFSET(UContentBrowserSettings, DisplayEngineFolder); } \
	FORCEINLINE static uint32 __PPO__DisplayDevelopersFolder() { return STRUCT_OFFSET(UContentBrowserSettings, DisplayDevelopersFolder); } \
	FORCEINLINE static uint32 __PPO__DisplayL10NFolder() { return STRUCT_OFFSET(UContentBrowserSettings, DisplayL10NFolder); } \
	FORCEINLINE static uint32 __PPO__DisplayPluginFolders() { return STRUCT_OFFSET(UContentBrowserSettings, DisplayPluginFolders); } \
	FORCEINLINE static uint32 __PPO__DisplayCollections() { return STRUCT_OFFSET(UContentBrowserSettings, DisplayCollections); } \
	FORCEINLINE static uint32 __PPO__DisplayFavorites() { return STRUCT_OFFSET(UContentBrowserSettings, DisplayFavorites); } \
	FORCEINLINE static uint32 __PPO__DisplayCppFolders() { return STRUCT_OFFSET(UContentBrowserSettings, DisplayCppFolders); } \
	FORCEINLINE static uint32 __PPO__IncludeClassNames() { return STRUCT_OFFSET(UContentBrowserSettings, IncludeClassNames); } \
	FORCEINLINE static uint32 __PPO__IncludeAssetPaths() { return STRUCT_OFFSET(UContentBrowserSettings, IncludeAssetPaths); } \
	FORCEINLINE static uint32 __PPO__IncludeCollectionNames() { return STRUCT_OFFSET(UContentBrowserSettings, IncludeCollectionNames); }


#define Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_18_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_21_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_21_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ContentBrowserSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UContentBrowserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Settings_ContentBrowserSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
