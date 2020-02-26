// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENECAPTURE_LevelCapture_generated_h
#error "LevelCapture.generated.h already included, missing '#pragma once' in LevelCapture.h"
#endif
#define MOVIESCENECAPTURE_LevelCapture_generated_h

#define Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelCapture(); \
	friend struct Z_Construct_UClass_ULevelCapture_Statics; \
public: \
	DECLARE_CLASS(ULevelCapture, UMovieSceneCapture, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(ULevelCapture)


#define Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_INCLASS \
private: \
	static void StaticRegisterNativesULevelCapture(); \
	friend struct Z_Construct_UClass_ULevelCapture_Statics; \
public: \
	DECLARE_CLASS(ULevelCapture, UMovieSceneCapture, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(ULevelCapture)


#define Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelCapture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelCapture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelCapture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelCapture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelCapture(ULevelCapture&&); \
	NO_API ULevelCapture(const ULevelCapture&); \
public:


#define Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelCapture(ULevelCapture&&); \
	NO_API ULevelCapture(const ULevelCapture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelCapture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelCapture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelCapture)


#define Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PrerequisiteActorId() { return STRUCT_OFFSET(ULevelCapture, PrerequisiteActorId); }


#define Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_14_PROLOG
#define Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_INCLASS \
	Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class ULevelCapture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneCapture_Public_LevelCapture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
