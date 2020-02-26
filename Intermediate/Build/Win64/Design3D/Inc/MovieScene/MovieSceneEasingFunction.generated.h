// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneEasingFunction_generated_h
#error "MovieSceneEasingFunction.generated.h already included, missing '#pragma once' in MovieSceneEasingFunction.h"
#endif
#define MOVIESCENE_MovieSceneEasingFunction_generated_h

#define Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_EVENT_PARMS \
	struct MovieSceneEasingFunction_eventOnEvaluate_Parms \
	{ \
		float Interp; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MovieSceneEasingFunction_eventOnEvaluate_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneEasingFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEasingFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneEasingFunction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEasingFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneEasingFunction(UMovieSceneEasingFunction&&); \
	NO_API UMovieSceneEasingFunction(const UMovieSceneEasingFunction&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneEasingFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneEasingFunction(UMovieSceneEasingFunction&&); \
	NO_API UMovieSceneEasingFunction(const UMovieSceneEasingFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneEasingFunction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEasingFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEasingFunction)


#define Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneEasingFunction(); \
	friend struct Z_Construct_UClass_UMovieSceneEasingFunction_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneEasingFunction, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneEasingFunction)


#define Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneEasingFunction() {} \
public: \
	typedef UMovieSceneEasingFunction UClassType; \
	typedef IMovieSceneEasingFunction ThisClass; \
	static float Execute_OnEvaluate(const UObject* O, float Interp); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IMovieSceneEasingFunction() {} \
public: \
	typedef UMovieSceneEasingFunction UClassType; \
	typedef IMovieSceneEasingFunction ThisClass; \
	static float Execute_OnEvaluate(const UObject* O, float Interp); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_10_PROLOG \
	Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_EVENT_PARMS


#define Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneEasingFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_Generators_MovieSceneEasingFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
