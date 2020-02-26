// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SaveGame_generated_h
#error "SaveGame.generated.h already included, missing '#pragma once' in SaveGame.h"
#endif
#define ENGINE_SaveGame_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveGame(); \
	friend struct Z_Construct_UClass_USaveGame_Statics; \
public: \
	DECLARE_CLASS(USaveGame, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USaveGame)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUSaveGame(); \
	friend struct Z_Construct_UClass_USaveGame_Statics; \
public: \
	DECLARE_CLASS(USaveGame, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USaveGame)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGame(USaveGame&&); \
	NO_API USaveGame(const USaveGame&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGame(USaveGame&&); \
	NO_API USaveGame(const USaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGame)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SaveGame."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USaveGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
