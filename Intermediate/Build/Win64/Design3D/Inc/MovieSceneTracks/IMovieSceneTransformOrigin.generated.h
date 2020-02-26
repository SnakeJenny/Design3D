// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef MOVIESCENETRACKS_IMovieSceneTransformOrigin_generated_h
#error "IMovieSceneTransformOrigin.generated.h already included, missing '#pragma once' in IMovieSceneTransformOrigin.h"
#endif
#define MOVIESCENETRACKS_IMovieSceneTransformOrigin_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_EVENT_PARMS \
	struct MovieSceneTransformOrigin_eventBP_GetTransformOrigin_Parms \
	{ \
		FTransform ReturnValue; \
	};


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneTransformOrigin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTransformOrigin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneTransformOrigin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTransformOrigin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneTransformOrigin(UMovieSceneTransformOrigin&&); \
	NO_API UMovieSceneTransformOrigin(const UMovieSceneTransformOrigin&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneTransformOrigin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneTransformOrigin(UMovieSceneTransformOrigin&&); \
	NO_API UMovieSceneTransformOrigin(const UMovieSceneTransformOrigin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneTransformOrigin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTransformOrigin); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTransformOrigin)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneTransformOrigin(); \
	friend struct Z_Construct_UClass_UMovieSceneTransformOrigin_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneTransformOrigin, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneTransformOrigin)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneTransformOrigin() {} \
public: \
	typedef UMovieSceneTransformOrigin UClassType; \
	typedef IMovieSceneTransformOrigin ThisClass; \
	static FTransform Execute_BP_GetTransformOrigin(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IMovieSceneTransformOrigin() {} \
public: \
	typedef UMovieSceneTransformOrigin UClassType; \
	typedef IMovieSceneTransformOrigin ThisClass; \
	static FTransform Execute_BP_GetTransformOrigin(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_11_PROLOG \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_EVENT_PARMS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneTransformOrigin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_IMovieSceneTransformOrigin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
