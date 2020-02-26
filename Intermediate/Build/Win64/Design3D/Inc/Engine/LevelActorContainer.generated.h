// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LevelActorContainer_generated_h
#error "LevelActorContainer.generated.h already included, missing '#pragma once' in LevelActorContainer.h"
#endif
#define ENGINE_LevelActorContainer_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelActorContainer(); \
	friend struct Z_Construct_UClass_ULevelActorContainer_Statics; \
public: \
	DECLARE_CLASS(ULevelActorContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevelActorContainer)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_INCLASS \
private: \
	static void StaticRegisterNativesULevelActorContainer(); \
	friend struct Z_Construct_UClass_ULevelActorContainer_Statics; \
public: \
	DECLARE_CLASS(ULevelActorContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevelActorContainer)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelActorContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelActorContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelActorContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelActorContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ULevelActorContainer(ULevelActorContainer&&); \
	ENGINE_API ULevelActorContainer(const ULevelActorContainer&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelActorContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ULevelActorContainer(ULevelActorContainer&&); \
	ENGINE_API ULevelActorContainer(const ULevelActorContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelActorContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelActorContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelActorContainer)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_16_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULevelActorContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_LevelActorContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
