// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ClassViewerSettings_generated_h
#error "ClassViewerSettings.generated.h already included, missing '#pragma once' in ClassViewerSettings.h"
#endif
#define UNREALED_ClassViewerSettings_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClassViewerSettings(); \
	friend struct Z_Construct_UClass_UClassViewerSettings_Statics; \
public: \
	DECLARE_CLASS(UClassViewerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UClassViewerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUClassViewerSettings(); \
	friend struct Z_Construct_UClass_UClassViewerSettings_Statics; \
public: \
	DECLARE_CLASS(UClassViewerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UClassViewerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClassViewerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClassViewerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClassViewerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassViewerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClassViewerSettings(UClassViewerSettings&&); \
	NO_API UClassViewerSettings(const UClassViewerSettings&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClassViewerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClassViewerSettings(UClassViewerSettings&&); \
	NO_API UClassViewerSettings(const UClassViewerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClassViewerSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassViewerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClassViewerSettings)


#define Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_30_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ClassViewerSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UClassViewerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Settings_ClassViewerSettings_h


#define FOREACH_ENUM_ECLASSVIEWERDEVELOPERTYPE(op) \
	op(EClassViewerDeveloperType::CVDT_None) \
	op(EClassViewerDeveloperType::CVDT_CurrentUser) \
	op(EClassViewerDeveloperType::CVDT_All) \
	op(EClassViewerDeveloperType::CVDT_Max) 

enum class EClassViewerDeveloperType : uint8;
template<> UNREALED_API UEnum* StaticEnum<EClassViewerDeveloperType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
