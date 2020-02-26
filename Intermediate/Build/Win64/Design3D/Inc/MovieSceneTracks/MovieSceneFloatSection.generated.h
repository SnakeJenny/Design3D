// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneFloatSection_generated_h
#error "MovieSceneFloatSection.generated.h already included, missing '#pragma once' in MovieSceneFloatSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneFloatSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneFloatSection(); \
	friend struct Z_Construct_UClass_UMovieSceneFloatSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneFloatSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneFloatSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneFloatSection(); \
	friend struct Z_Construct_UClass_UMovieSceneFloatSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneFloatSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneFloatSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneFloatSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneFloatSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneFloatSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneFloatSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneFloatSection(UMovieSceneFloatSection&&); \
	MOVIESCENETRACKS_API UMovieSceneFloatSection(const UMovieSceneFloatSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneFloatSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneFloatSection(UMovieSceneFloatSection&&); \
	MOVIESCENETRACKS_API UMovieSceneFloatSection(const UMovieSceneFloatSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneFloatSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneFloatSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneFloatSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FloatCurve() { return STRUCT_OFFSET(UMovieSceneFloatSection, FloatCurve); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_17_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_21_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneFloatSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneFloatSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
