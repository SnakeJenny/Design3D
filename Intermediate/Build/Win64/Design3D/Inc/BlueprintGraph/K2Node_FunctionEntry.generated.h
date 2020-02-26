// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGRAPH_K2Node_FunctionEntry_generated_h
#error "K2Node_FunctionEntry.generated.h already included, missing '#pragma once' in K2Node_FunctionEntry.h"
#endif
#define BLUEPRINTGRAPH_K2Node_FunctionEntry_generated_h

#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_16_RPC_WRAPPERS
#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_FunctionEntry, BLUEPRINTGRAPH_API)


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK2Node_FunctionEntry(); \
	friend struct Z_Construct_UClass_UK2Node_FunctionEntry_Statics; \
public: \
	DECLARE_CLASS(UK2Node_FunctionEntry, UK2Node_FunctionTerminator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), BLUEPRINTGRAPH_API) \
	DECLARE_SERIALIZER(UK2Node_FunctionEntry) \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_16_ARCHIVESERIALIZER


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_FunctionEntry(); \
	friend struct Z_Construct_UClass_UK2Node_FunctionEntry_Statics; \
public: \
	DECLARE_CLASS(UK2Node_FunctionEntry, UK2Node_FunctionTerminator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), BLUEPRINTGRAPH_API) \
	DECLARE_SERIALIZER(UK2Node_FunctionEntry) \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_16_ARCHIVESERIALIZER


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_FunctionEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_FunctionEntry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_FunctionEntry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_FunctionEntry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BLUEPRINTGRAPH_API UK2Node_FunctionEntry(UK2Node_FunctionEntry&&); \
	BLUEPRINTGRAPH_API UK2Node_FunctionEntry(const UK2Node_FunctionEntry&); \
public:


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_FunctionEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BLUEPRINTGRAPH_API UK2Node_FunctionEntry(UK2Node_FunctionEntry&&); \
	BLUEPRINTGRAPH_API UK2Node_FunctionEntry(const UK2Node_FunctionEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_FunctionEntry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_FunctionEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_FunctionEntry)


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ExtraFlags() { return STRUCT_OFFSET(UK2Node_FunctionEntry, ExtraFlags); }


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_13_PROLOG
#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_16_RPC_WRAPPERS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_16_INCLASS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class K2Node_FunctionEntry."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGRAPH_API UClass* StaticClass<class UK2Node_FunctionEntry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionEntry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
