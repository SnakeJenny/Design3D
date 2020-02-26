// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneStringSection_generated_h
#error "MovieSceneStringSection.generated.h already included, missing '#pragma once' in MovieSceneStringSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneStringSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneStringSection(); \
	friend struct Z_Construct_UClass_UMovieSceneStringSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneStringSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneStringSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneStringSection(); \
	friend struct Z_Construct_UClass_UMovieSceneStringSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneStringSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneStringSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneStringSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneStringSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneStringSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneStringSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneStringSection(UMovieSceneStringSection&&); \
	MOVIESCENETRACKS_API UMovieSceneStringSection(const UMovieSceneStringSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneStringSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneStringSection(UMovieSceneStringSection&&); \
	MOVIESCENETRACKS_API UMovieSceneStringSection(const UMovieSceneStringSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneStringSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneStringSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneStringSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StringCurve() { return STRUCT_OFFSET(UMovieSceneStringSection, StringCurve); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_14_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_18_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneStringSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneStringSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
