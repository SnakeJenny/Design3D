// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneBindingOverrides_generated_h
#error "MovieSceneBindingOverrides.generated.h already included, missing '#pragma once' in MovieSceneBindingOverrides.h"
#endif
#define MOVIESCENE_MovieSceneBindingOverrides_generated_h

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneBindingOverrideData>();

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_47_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_47_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneBindingOverrides(); \
	friend struct Z_Construct_UClass_UMovieSceneBindingOverrides_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneBindingOverrides, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneBindingOverrides)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneBindingOverrides(); \
	friend struct Z_Construct_UClass_UMovieSceneBindingOverrides_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneBindingOverrides, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneBindingOverrides)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneBindingOverrides(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBindingOverrides) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneBindingOverrides); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBindingOverrides); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneBindingOverrides(UMovieSceneBindingOverrides&&); \
	NO_API UMovieSceneBindingOverrides(const UMovieSceneBindingOverrides&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneBindingOverrides(UMovieSceneBindingOverrides&&); \
	NO_API UMovieSceneBindingOverrides(const UMovieSceneBindingOverrides&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneBindingOverrides); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBindingOverrides); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBindingOverrides)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_47_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BindingData() { return STRUCT_OFFSET(UMovieSceneBindingOverrides, BindingData); }


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_41_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_47_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_47_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_47_INCLASS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_47_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_47_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_47_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneBindingOverrides>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
