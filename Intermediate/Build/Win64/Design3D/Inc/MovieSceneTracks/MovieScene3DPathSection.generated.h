// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieScene3DPathSection_generated_h
#error "MovieScene3DPathSection.generated.h already included, missing '#pragma once' in MovieScene3DPathSection.h"
#endif
#define MOVIESCENETRACKS_MovieScene3DPathSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScene3DPathSection(); \
	friend struct Z_Construct_UClass_UMovieScene3DPathSection_Statics; \
public: \
	DECLARE_CLASS(UMovieScene3DPathSection, UMovieScene3DConstraintSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieScene3DPathSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScene3DPathSection(); \
	friend struct Z_Construct_UClass_UMovieScene3DPathSection_Statics; \
public: \
	DECLARE_CLASS(UMovieScene3DPathSection, UMovieScene3DConstraintSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieScene3DPathSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DPathSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DPathSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DPathSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DPathSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieScene3DPathSection(UMovieScene3DPathSection&&); \
	MOVIESCENETRACKS_API UMovieScene3DPathSection(const UMovieScene3DPathSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DPathSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieScene3DPathSection(UMovieScene3DPathSection&&); \
	MOVIESCENETRACKS_API UMovieScene3DPathSection(const UMovieScene3DPathSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DPathSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DPathSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DPathSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_30_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieScene3DPathSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieScene3DPathSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DPathSection_h


#define FOREACH_ENUM_MOVIESCENE3DPATHSECTION_AXIS(op) \
	op(MovieScene3DPathSection_Axis::X) \
	op(MovieScene3DPathSection_Axis::Y) \
	op(MovieScene3DPathSection_Axis::Z) \
	op(MovieScene3DPathSection_Axis::NEG_X) \
	op(MovieScene3DPathSection_Axis::NEG_Y) \
	op(MovieScene3DPathSection_Axis::NEG_Z) 

enum class MovieScene3DPathSection_Axis : uint8;
template<> MOVIESCENETRACKS_API UEnum* StaticEnum<MovieScene3DPathSection_Axis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
