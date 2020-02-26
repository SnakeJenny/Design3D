// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneEventSection_generated_h
#error "MovieSceneEventSection.generated.h already included, missing '#pragma once' in MovieSceneEventSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneEventSection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Times() { return STRUCT_OFFSET(FMovieSceneEventSectionData, Times); } \
	FORCEINLINE static uint32 __PPO__KeyValues() { return STRUCT_OFFSET(FMovieSceneEventSectionData, KeyValues); } \
	typedef FMovieSceneChannel Super;


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneEventSectionData>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEventPayload_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FEventPayload>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneEventParameters>();

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_222_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_222_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_222_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneEventSection(); \
	friend struct Z_Construct_UClass_UMovieSceneEventSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneEventSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneEventSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_222_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneEventSection(); \
	friend struct Z_Construct_UClass_UMovieSceneEventSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneEventSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneEventSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_222_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneEventSection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEventSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneEventSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEventSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneEventSection(UMovieSceneEventSection&&); \
	MOVIESCENETRACKS_API UMovieSceneEventSection(const UMovieSceneEventSection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_222_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneEventSection(UMovieSceneEventSection&&); \
	MOVIESCENETRACKS_API UMovieSceneEventSection(const UMovieSceneEventSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneEventSection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEventSection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneEventSection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_222_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Events_DEPRECATED() { return STRUCT_OFFSET(UMovieSceneEventSection, Events_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__EventData() { return STRUCT_OFFSET(UMovieSceneEventSection, EventData); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_218_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_222_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_222_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_222_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_222_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_222_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_222_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_222_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_222_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_222_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_222_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneEventSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
