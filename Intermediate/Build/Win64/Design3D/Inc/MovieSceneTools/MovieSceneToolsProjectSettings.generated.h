// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETOOLS_MovieSceneToolsProjectSettings_generated_h
#error "MovieSceneToolsProjectSettings.generated.h already included, missing '#pragma once' in MovieSceneToolsProjectSettings.h"
#endif
#define MOVIESCENETOOLS_MovieSceneToolsProjectSettings_generated_h

#define Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics; \
	MOVIESCENETOOLS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETOOLS_API UScriptStruct* StaticStruct<struct FMovieSceneToolsFbxSettings>();

#define Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics; \
	MOVIESCENETOOLS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETOOLS_API UScriptStruct* StaticStruct<struct FMovieSceneToolsPropertyTrackSettings>();

#define Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_42_RPC_WRAPPERS
#define Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_42_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneToolsProjectSettings(); \
	friend struct Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneToolsProjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneTools"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneToolsProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneToolsProjectSettings(); \
	friend struct Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneToolsProjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneTools"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneToolsProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneToolsProjectSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneToolsProjectSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneToolsProjectSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneToolsProjectSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneToolsProjectSettings(UMovieSceneToolsProjectSettings&&); \
	NO_API UMovieSceneToolsProjectSettings(const UMovieSceneToolsProjectSettings&); \
public:


#define Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneToolsProjectSettings(UMovieSceneToolsProjectSettings&&); \
	NO_API UMovieSceneToolsProjectSettings(const UMovieSceneToolsProjectSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneToolsProjectSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneToolsProjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneToolsProjectSettings)


#define Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_42_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_39_PROLOG
#define Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_42_RPC_WRAPPERS \
	Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_42_INCLASS \
	Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_42_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETOOLS_API UClass* StaticClass<class UMovieSceneToolsProjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
