// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGRAPH_BlueprintComponentNodeSpawner_generated_h
#error "BlueprintComponentNodeSpawner.generated.h already included, missing '#pragma once' in BlueprintComponentNodeSpawner.h"
#endif
#define BLUEPRINTGRAPH_BlueprintComponentNodeSpawner_generated_h

#define Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_25_RPC_WRAPPERS
#define Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintComponentNodeSpawner(); \
	friend struct Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics; \
public: \
	DECLARE_CLASS(UBlueprintComponentNodeSpawner, UBlueprintNodeSpawner, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintComponentNodeSpawner)


#define Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintComponentNodeSpawner(); \
	friend struct Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics; \
public: \
	DECLARE_CLASS(UBlueprintComponentNodeSpawner, UBlueprintNodeSpawner, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintComponentNodeSpawner)


#define Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintComponentNodeSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintComponentNodeSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintComponentNodeSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintComponentNodeSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintComponentNodeSpawner(UBlueprintComponentNodeSpawner&&); \
	NO_API UBlueprintComponentNodeSpawner(const UBlueprintComponentNodeSpawner&); \
public:


#define Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintComponentNodeSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintComponentNodeSpawner(UBlueprintComponentNodeSpawner&&); \
	NO_API UBlueprintComponentNodeSpawner(const UBlueprintComponentNodeSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintComponentNodeSpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintComponentNodeSpawner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintComponentNodeSpawner)


#define Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ComponentClass() { return STRUCT_OFFSET(UBlueprintComponentNodeSpawner, ComponentClass); } \
	FORCEINLINE static uint32 __PPO__ComponentName() { return STRUCT_OFFSET(UBlueprintComponentNodeSpawner, ComponentName); } \
	FORCEINLINE static uint32 __PPO__ComponentAssetName() { return STRUCT_OFFSET(UBlueprintComponentNodeSpawner, ComponentAssetName); }


#define Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_22_PROLOG
#define Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_25_RPC_WRAPPERS \
	Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_25_INCLASS \
	Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlueprintComponentNodeSpawner."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGRAPH_API UClass* StaticClass<class UBlueprintComponentNodeSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
