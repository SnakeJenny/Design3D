// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGRAPH_EdGraphSchema_K2_generated_h
#error "EdGraphSchema_K2.generated.h already included, missing '#pragma once' in EdGraphSchema_K2.h"
#endif
#define BLUEPRINTGRAPH_EdGraphSchema_K2_generated_h

#define Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_229_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintCallableFunctionRedirect_Statics; \
	BLUEPRINTGRAPH_API static class UScriptStruct* StaticStruct();


template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<struct FBlueprintCallableFunctionRedirect>();

#define Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2Struct_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<struct FEdGraphSchemaAction_K2Struct>();

#define Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_276_RPC_WRAPPERS
#define Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_276_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_276_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEdGraphSchema_K2(); \
	friend struct Z_Construct_UClass_UEdGraphSchema_K2_Statics; \
public: \
	DECLARE_CLASS(UEdGraphSchema_K2, UEdGraphSchema, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UEdGraphSchema_K2) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_276_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphSchema_K2(); \
	friend struct Z_Construct_UClass_UEdGraphSchema_K2_Statics; \
public: \
	DECLARE_CLASS(UEdGraphSchema_K2, UEdGraphSchema, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UEdGraphSchema_K2) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_276_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEdGraphSchema_K2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphSchema_K2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEdGraphSchema_K2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphSchema_K2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEdGraphSchema_K2(UEdGraphSchema_K2&&); \
	NO_API UEdGraphSchema_K2(const UEdGraphSchema_K2&); \
public:


#define Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_276_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEdGraphSchema_K2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEdGraphSchema_K2(UEdGraphSchema_K2&&); \
	NO_API UEdGraphSchema_K2(const UEdGraphSchema_K2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEdGraphSchema_K2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphSchema_K2); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphSchema_K2)


#define Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_276_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_273_PROLOG
#define Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_276_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_276_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_276_RPC_WRAPPERS \
	Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_276_INCLASS \
	Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_276_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_276_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_276_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_276_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_276_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h_276_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EdGraphSchema_K2."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGRAPH_API UClass* StaticClass<class UEdGraphSchema_K2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_BlueprintGraph_Classes_EdGraphSchema_K2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
