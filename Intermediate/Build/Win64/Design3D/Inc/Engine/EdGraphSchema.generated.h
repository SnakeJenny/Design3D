// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EdGraphSchema_generated_h
#error "EdGraphSchema.generated.h already included, missing '#pragma once' in EdGraphSchema.h"
#endif
#define ENGINE_EdGraphSchema_generated_h

#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_295_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEdGraphSchemaAction_NewNode>();

#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__MenuDescription() { return STRUCT_OFFSET(FEdGraphSchemaAction, MenuDescription); } \
	FORCEINLINE static uint32 __PPO__TooltipDescription() { return STRUCT_OFFSET(FEdGraphSchemaAction, TooltipDescription); } \
	FORCEINLINE static uint32 __PPO__Category() { return STRUCT_OFFSET(FEdGraphSchemaAction, Category); } \
	FORCEINLINE static uint32 __PPO__Keywords() { return STRUCT_OFFSET(FEdGraphSchemaAction, Keywords); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEdGraphSchemaAction>();

#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_612_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_612_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_612_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEdGraphSchema(); \
	friend struct Z_Construct_UClass_UEdGraphSchema_Statics; \
public: \
	DECLARE_CLASS(UEdGraphSchema, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEdGraphSchema)


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_612_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphSchema(); \
	friend struct Z_Construct_UClass_UEdGraphSchema_Statics; \
public: \
	DECLARE_CLASS(UEdGraphSchema, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEdGraphSchema)


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_612_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEdGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEdGraphSchema); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphSchema); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEdGraphSchema(UEdGraphSchema&&); \
	NO_API UEdGraphSchema(const UEdGraphSchema&); \
public:


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_612_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEdGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEdGraphSchema(UEdGraphSchema&&); \
	NO_API UEdGraphSchema(const UEdGraphSchema&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEdGraphSchema); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphSchema)


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_612_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_609_PROLOG
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_612_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_612_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_612_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_612_INCLASS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_612_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_612_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_612_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_612_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_612_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h_612_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EdGraphSchema."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEdGraphSchema>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphSchema_h


#define FOREACH_ENUM_ECANCREATECONNECTIONRESPONSE(op) \
	op(CONNECT_RESPONSE_MAKE) \
	op(CONNECT_RESPONSE_DISALLOW) \
	op(CONNECT_RESPONSE_BREAK_OTHERS_A) \
	op(CONNECT_RESPONSE_BREAK_OTHERS_B) \
	op(CONNECT_RESPONSE_BREAK_OTHERS_AB) \
	op(CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE) 
#define FOREACH_ENUM_EGRAPHTYPE(op) \
	op(GT_Function) \
	op(GT_Ubergraph) \
	op(GT_Macro) \
	op(GT_Animation) \
	op(GT_StateMachine) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
