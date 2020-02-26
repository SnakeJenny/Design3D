// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneBindingOwnerInterface_generated_h
#error "MovieSceneBindingOwnerInterface.generated.h already included, missing '#pragma once' in MovieSceneBindingOwnerInterface.h"
#endif
#define MOVIESCENE_MovieSceneBindingOwnerInterface_generated_h

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneBindingOwnerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBindingOwnerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneBindingOwnerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBindingOwnerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneBindingOwnerInterface(UMovieSceneBindingOwnerInterface&&); \
	NO_API UMovieSceneBindingOwnerInterface(const UMovieSceneBindingOwnerInterface&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneBindingOwnerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneBindingOwnerInterface(UMovieSceneBindingOwnerInterface&&); \
	NO_API UMovieSceneBindingOwnerInterface(const UMovieSceneBindingOwnerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneBindingOwnerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBindingOwnerInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBindingOwnerInterface)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneBindingOwnerInterface(); \
	friend struct Z_Construct_UClass_UMovieSceneBindingOwnerInterface_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneBindingOwnerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneBindingOwnerInterface)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneBindingOwnerInterface() {} \
public: \
	typedef UMovieSceneBindingOwnerInterface UClassType; \
	typedef IMovieSceneBindingOwnerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_INCLASS_IINTERFACE \
protected: \
	virtual ~IMovieSceneBindingOwnerInterface() {} \
public: \
	typedef UMovieSceneBindingOwnerInterface UClassType; \
	typedef IMovieSceneBindingOwnerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_18_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneBindingOwnerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOwnerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
