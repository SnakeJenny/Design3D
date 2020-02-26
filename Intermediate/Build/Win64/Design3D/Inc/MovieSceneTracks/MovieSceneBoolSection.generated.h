// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneBoolSection_generated_h
#error "MovieSceneBoolSection.generated.h already included, missing '#pragma once' in MovieSceneBoolSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneBoolSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITORONLY_DATA
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneBoolSection, MOVIESCENETRACKS_API)


#else
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_ARCHIVESERIALIZER
#endif
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneBoolSection(); \
	friend struct Z_Construct_UClass_UMovieSceneBoolSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneBoolSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneBoolSection) \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneBoolSection(); \
	friend struct Z_Construct_UClass_UMovieSceneBoolSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneBoolSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneBoolSection) \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneBoolSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBoolSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneBoolSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBoolSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneBoolSection(UMovieSceneBoolSection&&); \
	MOVIESCENETRACKS_API UMovieSceneBoolSection(const UMovieSceneBoolSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneBoolSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneBoolSection(UMovieSceneBoolSection&&); \
	MOVIESCENETRACKS_API UMovieSceneBoolSection(const UMovieSceneBoolSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneBoolSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBoolSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBoolSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoolCurve() { return STRUCT_OFFSET(UMovieSceneBoolSection, BoolCurve); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_14_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneBoolSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneBoolSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBoolSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
