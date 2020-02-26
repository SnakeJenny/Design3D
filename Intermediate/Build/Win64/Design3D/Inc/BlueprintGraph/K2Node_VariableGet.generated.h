// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGRAPH_K2Node_VariableGet_generated_h
#error "K2Node_VariableGet.generated.h already included, missing '#pragma once' in K2Node_VariableGet.h"
#endif
#define BLUEPRINTGRAPH_K2Node_VariableGet_generated_h

#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_19_RPC_WRAPPERS
#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_VariableGet, NO_API)


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK2Node_VariableGet(); \
	friend struct Z_Construct_UClass_UK2Node_VariableGet_Statics; \
public: \
	DECLARE_CLASS(UK2Node_VariableGet, UK2Node_Variable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UK2Node_VariableGet) \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_19_ARCHIVESERIALIZER


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_VariableGet(); \
	friend struct Z_Construct_UClass_UK2Node_VariableGet_Statics; \
public: \
	DECLARE_CLASS(UK2Node_VariableGet, UK2Node_Variable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UK2Node_VariableGet) \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_19_ARCHIVESERIALIZER


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK2Node_VariableGet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_VariableGet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK2Node_VariableGet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_VariableGet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK2Node_VariableGet(UK2Node_VariableGet&&); \
	NO_API UK2Node_VariableGet(const UK2Node_VariableGet&); \
public:


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK2Node_VariableGet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK2Node_VariableGet(UK2Node_VariableGet&&); \
	NO_API UK2Node_VariableGet(const UK2Node_VariableGet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK2Node_VariableGet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_VariableGet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_VariableGet)


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsPureGet() { return STRUCT_OFFSET(UK2Node_VariableGet, bIsPureGet); }


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_16_PROLOG
#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_19_RPC_WRAPPERS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_19_INCLASS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class K2Node_VariableGet."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGRAPH_API UClass* StaticClass<class UK2Node_VariableGet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
