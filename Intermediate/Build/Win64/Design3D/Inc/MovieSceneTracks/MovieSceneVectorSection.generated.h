// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneVectorSection_generated_h
#error "MovieSceneVectorSection.generated.h already included, missing '#pragma once' in MovieSceneVectorSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneVectorSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneVectorKeyStructBase Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneVector4KeyStruct>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneVectorKeyStructBase Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneVectorKeyStruct>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneVectorKeyStructBase Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneVector2DKeyStruct>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneKeyStruct Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneVectorKeyStructBase>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_102_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_102_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_102_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneVectorSection, MOVIESCENETRACKS_API)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneVectorSection(); \
	friend struct Z_Construct_UClass_UMovieSceneVectorSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneVectorSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneVectorSection) \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_102_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_102_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneVectorSection(); \
	friend struct Z_Construct_UClass_UMovieSceneVectorSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneVectorSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneVectorSection) \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_102_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_102_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneVectorSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneVectorSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneVectorSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneVectorSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneVectorSection(UMovieSceneVectorSection&&); \
	MOVIESCENETRACKS_API UMovieSceneVectorSection(const UMovieSceneVectorSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneVectorSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneVectorSection(UMovieSceneVectorSection&&); \
	MOVIESCENETRACKS_API UMovieSceneVectorSection(const UMovieSceneVectorSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneVectorSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneVectorSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneVectorSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_102_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Curves() { return STRUCT_OFFSET(UMovieSceneVectorSection, Curves); } \
	FORCEINLINE static uint32 __PPO__ChannelsUsed() { return STRUCT_OFFSET(UMovieSceneVectorSection, ChannelsUsed); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_98_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_102_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_102_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_102_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_102_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_102_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_102_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_102_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h_102_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneVectorSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneVectorSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneVectorSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
