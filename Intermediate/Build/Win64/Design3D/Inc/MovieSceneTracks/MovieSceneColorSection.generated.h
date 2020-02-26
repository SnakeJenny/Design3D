// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneColorSection_generated_h
#error "MovieSceneColorSection.generated.h already included, missing '#pragma once' in MovieSceneColorSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneColorSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneColorKeyStruct>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_47_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_47_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneColorSection(); \
	friend struct Z_Construct_UClass_UMovieSceneColorSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneColorSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneColorSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneColorSection(); \
	friend struct Z_Construct_UClass_UMovieSceneColorSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneColorSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneColorSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneColorSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneColorSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneColorSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneColorSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneColorSection(UMovieSceneColorSection&&); \
	MOVIESCENETRACKS_API UMovieSceneColorSection(const UMovieSceneColorSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneColorSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneColorSection(UMovieSceneColorSection&&); \
	MOVIESCENETRACKS_API UMovieSceneColorSection(const UMovieSceneColorSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneColorSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneColorSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneColorSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_47_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RedCurve() { return STRUCT_OFFSET(UMovieSceneColorSection, RedCurve); } \
	FORCEINLINE static uint32 __PPO__GreenCurve() { return STRUCT_OFFSET(UMovieSceneColorSection, GreenCurve); } \
	FORCEINLINE static uint32 __PPO__BlueCurve() { return STRUCT_OFFSET(UMovieSceneColorSection, BlueCurve); } \
	FORCEINLINE static uint32 __PPO__AlphaCurve() { return STRUCT_OFFSET(UMovieSceneColorSection, AlphaCurve); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_43_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_47_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_47_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_47_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_47_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_47_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_47_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneColorSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneColorSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
