// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EdGraphPin_generated_h
#error "EdGraphPin.generated.h already included, missing '#pragma once' in EdGraphPin.h"
#endif
#define ENGINE_EdGraphPin_generated_h

#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_298_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEdGraphPinReference_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__OwningNode() { return STRUCT_OFFSET(FEdGraphPinReference, OwningNode); } \
	FORCEINLINE static uint32 __PPO__PinId() { return STRUCT_OFFSET(FEdGraphPinReference, PinId); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEdGraphPinReference>();

#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEdGraphPinType_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEdGraphPinType>();

#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleMemberReference_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSimpleMemberReference>();

#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_623_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_623_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_623_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEdGraphPin_Deprecated(); \
	friend struct Z_Construct_UClass_UEdGraphPin_Deprecated_Statics; \
public: \
	DECLARE_CLASS(UEdGraphPin_Deprecated, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UEdGraphPin_Deprecated)


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_623_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphPin_Deprecated(); \
	friend struct Z_Construct_UClass_UEdGraphPin_Deprecated_Statics; \
public: \
	DECLARE_CLASS(UEdGraphPin_Deprecated, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UEdGraphPin_Deprecated)


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_623_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEdGraphPin_Deprecated(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphPin_Deprecated) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEdGraphPin_Deprecated); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphPin_Deprecated); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UEdGraphPin_Deprecated(UEdGraphPin_Deprecated&&); \
	ENGINE_API UEdGraphPin_Deprecated(const UEdGraphPin_Deprecated&); \
public:


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_623_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEdGraphPin_Deprecated(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UEdGraphPin_Deprecated(UEdGraphPin_Deprecated&&); \
	ENGINE_API UEdGraphPin_Deprecated(const UEdGraphPin_Deprecated&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEdGraphPin_Deprecated); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphPin_Deprecated); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphPin_Deprecated)


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_623_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_620_PROLOG
#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_623_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_623_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_623_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_623_INCLASS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_623_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_623_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_623_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_623_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_623_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h_623_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EdGraphPin_Deprecated."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEdGraphPin_Deprecated>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphPin_h


#define FOREACH_ENUM_EBLUEPRINTPINSTYLETYPE(op) \
	op(BPST_Original) \
	op(BPST_VariantA) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
