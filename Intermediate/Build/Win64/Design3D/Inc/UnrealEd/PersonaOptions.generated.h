// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_PersonaOptions_generated_h
#error "PersonaOptions.generated.h already included, missing '#pragma once' in PersonaOptions.h"
#endif
#define UNREALED_PersonaOptions_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssetEditorOptions_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FAssetEditorOptions>();

#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FViewportConfigOptions_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FViewportConfigOptions>();

#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_96_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_96_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPersonaOptions(); \
	friend struct Z_Construct_UClass_UPersonaOptions_Statics; \
public: \
	DECLARE_CLASS(UPersonaOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UPersonaOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_96_INCLASS \
private: \
	static void StaticRegisterNativesUPersonaOptions(); \
	friend struct Z_Construct_UClass_UPersonaOptions_Statics; \
public: \
	DECLARE_CLASS(UPersonaOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UPersonaOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPersonaOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPersonaOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPersonaOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersonaOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPersonaOptions(UPersonaOptions&&); \
	NO_API UPersonaOptions(const UPersonaOptions&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_96_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPersonaOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPersonaOptions(UPersonaOptions&&); \
	NO_API UPersonaOptions(const UPersonaOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPersonaOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersonaOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPersonaOptions)


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_96_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_93_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_96_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_96_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_96_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_96_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_96_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h_96_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PersonaOptions."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UPersonaOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Preferences_PersonaOptions_h


#define FOREACH_ENUM_EANIMATIONVIEWPORTCAMERAFOLLOWMODE(op) \
	op(EAnimationViewportCameraFollowMode::None) \
	op(EAnimationViewportCameraFollowMode::Bounds) \
	op(EAnimationViewportCameraFollowMode::Bone) 

enum class EAnimationViewportCameraFollowMode : uint8;
template<> UNREALED_API UEnum* StaticEnum<EAnimationViewportCameraFollowMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
