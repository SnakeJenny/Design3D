// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneParticleSection_generated_h
#error "MovieSceneParticleSection.generated.h already included, missing '#pragma once' in MovieSceneParticleSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneParticleSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneByteChannel Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneParticleChannel>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_58_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_58_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneParticleSection(); \
	friend struct Z_Construct_UClass_UMovieSceneParticleSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneParticleSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneParticleSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_58_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneParticleSection(); \
	friend struct Z_Construct_UClass_UMovieSceneParticleSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneParticleSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneParticleSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneParticleSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneParticleSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneParticleSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneParticleSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneParticleSection(UMovieSceneParticleSection&&); \
	MOVIESCENETRACKS_API UMovieSceneParticleSection(const UMovieSceneParticleSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneParticleSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneParticleSection(UMovieSceneParticleSection&&); \
	MOVIESCENETRACKS_API UMovieSceneParticleSection(const UMovieSceneParticleSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneParticleSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneParticleSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneParticleSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_58_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_54_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_58_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_58_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_58_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_58_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_58_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h_58_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneParticleSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneParticleSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParticleSection_h


#define FOREACH_ENUM_EPARTICLEKEY(op) \
	op(EParticleKey::Activate) \
	op(EParticleKey::Deactivate) \
	op(EParticleKey::Trigger) 

enum class EParticleKey : uint8;
template<> MOVIESCENETRACKS_API UEnum* StaticEnum<EParticleKey>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
