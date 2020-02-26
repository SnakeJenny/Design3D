// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTROTUTORIALS_TutorialStateSettings_generated_h
#error "TutorialStateSettings.generated.h already included, missing '#pragma once' in TutorialStateSettings.h"
#endif
#define INTROTUTORIALS_TutorialStateSettings_generated_h

#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTutorialProgress_Statics; \
	INTROTUTORIALS_API static class UScriptStruct* StaticStruct();


template<> INTROTUTORIALS_API UScriptStruct* StaticStruct<struct FTutorialProgress>();

#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_43_RPC_WRAPPERS
#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTutorialStateSettings(); \
	friend struct Z_Construct_UClass_UTutorialStateSettings_Statics; \
public: \
	DECLARE_CLASS(UTutorialStateSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroTutorials"), NO_API) \
	DECLARE_SERIALIZER(UTutorialStateSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUTutorialStateSettings(); \
	friend struct Z_Construct_UClass_UTutorialStateSettings_Statics; \
public: \
	DECLARE_CLASS(UTutorialStateSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroTutorials"), NO_API) \
	DECLARE_SERIALIZER(UTutorialStateSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTutorialStateSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTutorialStateSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTutorialStateSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorialStateSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTutorialStateSettings(UTutorialStateSettings&&); \
	NO_API UTutorialStateSettings(const UTutorialStateSettings&); \
public:


#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTutorialStateSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTutorialStateSettings(UTutorialStateSettings&&); \
	NO_API UTutorialStateSettings(const UTutorialStateSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTutorialStateSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorialStateSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTutorialStateSettings)


#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_43_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bDismissedAllTutorials() { return STRUCT_OFFSET(UTutorialStateSettings, bDismissedAllTutorials); }


#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_40_PROLOG
#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_43_RPC_WRAPPERS \
	Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_43_INCLASS \
	Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_43_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TutorialStateSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTROTUTORIALS_API UClass* StaticClass<class UTutorialStateSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_IntroTutorials_Private_TutorialStateSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
