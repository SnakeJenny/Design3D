// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LevelScriptBlueprint_generated_h
#error "LevelScriptBlueprint.generated.h already included, missing '#pragma once' in LevelScriptBlueprint.h"
#endif
#define ENGINE_LevelScriptBlueprint_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelScriptBlueprint(); \
	friend struct Z_Construct_UClass_ULevelScriptBlueprint_Statics; \
public: \
	DECLARE_CLASS(ULevelScriptBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevelScriptBlueprint)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_INCLASS \
private: \
	static void StaticRegisterNativesULevelScriptBlueprint(); \
	friend struct Z_Construct_UClass_ULevelScriptBlueprint_Statics; \
public: \
	DECLARE_CLASS(ULevelScriptBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevelScriptBlueprint)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelScriptBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelScriptBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelScriptBlueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelScriptBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ULevelScriptBlueprint(ULevelScriptBlueprint&&); \
	ENGINE_API ULevelScriptBlueprint(const ULevelScriptBlueprint&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelScriptBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ULevelScriptBlueprint(ULevelScriptBlueprint&&); \
	ENGINE_API ULevelScriptBlueprint(const ULevelScriptBlueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelScriptBlueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelScriptBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelScriptBlueprint)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_23_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelScriptBlueprint."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULevelScriptBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
