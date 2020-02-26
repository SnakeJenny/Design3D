// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_IMovieScenePlaybackClient_generated_h
#error "IMovieScenePlaybackClient.generated.h already included, missing '#pragma once' in IMovieScenePlaybackClient.h"
#endif
#define MOVIESCENE_IMovieScenePlaybackClient_generated_h

#define Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieScenePlaybackClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePlaybackClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieScenePlaybackClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePlaybackClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieScenePlaybackClient(UMovieScenePlaybackClient&&); \
	NO_API UMovieScenePlaybackClient(const UMovieScenePlaybackClient&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieScenePlaybackClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieScenePlaybackClient(UMovieScenePlaybackClient&&); \
	NO_API UMovieScenePlaybackClient(const UMovieScenePlaybackClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieScenePlaybackClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePlaybackClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePlaybackClient)


#define Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieScenePlaybackClient(); \
	friend struct Z_Construct_UClass_UMovieScenePlaybackClient_Statics; \
public: \
	DECLARE_CLASS(UMovieScenePlaybackClient, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieScenePlaybackClient)


#define Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_18_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_18_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_18_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieScenePlaybackClient() {} \
public: \
	typedef UMovieScenePlaybackClient UClassType; \
	typedef IMovieScenePlaybackClient ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~IMovieScenePlaybackClient() {} \
public: \
	typedef UMovieScenePlaybackClient UClassType; \
	typedef IMovieScenePlaybackClient ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_13_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieScenePlaybackClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
