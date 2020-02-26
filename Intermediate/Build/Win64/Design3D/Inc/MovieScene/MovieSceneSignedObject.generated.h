// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneSignedObject_generated_h
#error "MovieSceneSignedObject.generated.h already included, missing '#pragma once' in MovieSceneSignedObject.h"
#endif
#define MOVIESCENE_MovieSceneSignedObject_generated_h

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSignedObject(); \
	friend struct Z_Construct_UClass_UMovieSceneSignedObject_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSignedObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSignedObject)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSignedObject(); \
	friend struct Z_Construct_UClass_UMovieSceneSignedObject_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSignedObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSignedObject)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneSignedObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSignedObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSignedObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSignedObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSignedObject(UMovieSceneSignedObject&&); \
	NO_API UMovieSceneSignedObject(const UMovieSceneSignedObject&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSignedObject(UMovieSceneSignedObject&&); \
	NO_API UMovieSceneSignedObject(const UMovieSceneSignedObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSignedObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSignedObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSignedObject)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Signature() { return STRUCT_OFFSET(UMovieSceneSignedObject, Signature); }


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_13_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_17_INCLASS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneSignedObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
