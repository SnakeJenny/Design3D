// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneParameterSection_generated_h
#error "MovieSceneParameterSection.generated.h already included, missing '#pragma once' in MovieSceneParameterSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneParameterSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FColorParameterNameAndCurves>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FVectorParameterNameAndCurves>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FScalarParameterNameAndCurve>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_175_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_175_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_175_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneParameterSection, MOVIESCENETRACKS_API)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_175_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneParameterSection(); \
	friend struct Z_Construct_UClass_UMovieSceneParameterSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneParameterSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneParameterSection) \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_175_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_175_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneParameterSection(); \
	friend struct Z_Construct_UClass_UMovieSceneParameterSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneParameterSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneParameterSection) \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_175_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_175_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneParameterSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneParameterSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneParameterSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneParameterSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneParameterSection(UMovieSceneParameterSection&&); \
	MOVIESCENETRACKS_API UMovieSceneParameterSection(const UMovieSceneParameterSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_175_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneParameterSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneParameterSection(UMovieSceneParameterSection&&); \
	MOVIESCENETRACKS_API UMovieSceneParameterSection(const UMovieSceneParameterSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneParameterSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneParameterSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneParameterSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_175_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ScalarParameterNamesAndCurves() { return STRUCT_OFFSET(UMovieSceneParameterSection, ScalarParameterNamesAndCurves); } \
	FORCEINLINE static uint32 __PPO__VectorParameterNamesAndCurves() { return STRUCT_OFFSET(UMovieSceneParameterSection, VectorParameterNamesAndCurves); } \
	FORCEINLINE static uint32 __PPO__ColorParameterNamesAndCurves() { return STRUCT_OFFSET(UMovieSceneParameterSection, ColorParameterNamesAndCurves); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_171_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_175_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_175_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_175_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_175_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_175_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_175_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_175_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_175_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_175_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_175_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneParameterSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneParameterSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
