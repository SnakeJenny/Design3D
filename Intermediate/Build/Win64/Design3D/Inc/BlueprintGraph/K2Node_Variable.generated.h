// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGRAPH_K2Node_Variable_generated_h
#error "K2Node_Variable.generated.h already included, missing '#pragma once' in K2Node_Variable.h"
#endif
#define BLUEPRINTGRAPH_K2Node_Variable_generated_h

#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_30_RPC_WRAPPERS
#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_30_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_Variable, NO_API)


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK2Node_Variable(); \
	friend struct Z_Construct_UClass_UK2Node_Variable_Statics; \
public: \
	DECLARE_CLASS(UK2Node_Variable, UK2Node, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UK2Node_Variable) \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_30_ARCHIVESERIALIZER


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_Variable(); \
	friend struct Z_Construct_UClass_UK2Node_Variable_Statics; \
public: \
	DECLARE_CLASS(UK2Node_Variable, UK2Node, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UK2Node_Variable) \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_30_ARCHIVESERIALIZER


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK2Node_Variable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_Variable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK2Node_Variable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_Variable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK2Node_Variable(UK2Node_Variable&&); \
	NO_API UK2Node_Variable(const UK2Node_Variable&); \
public:


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK2Node_Variable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK2Node_Variable(UK2Node_Variable&&); \
	NO_API UK2Node_Variable(const UK2Node_Variable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK2Node_Variable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_Variable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_Variable)


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VariableSourceClass_DEPRECATED() { return STRUCT_OFFSET(UK2Node_Variable, VariableSourceClass_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__VariableName_DEPRECATED() { return STRUCT_OFFSET(UK2Node_Variable, VariableName_DEPRECATED); }


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_27_PROLOG
#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_30_RPC_WRAPPERS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_30_INCLASS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_30_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class K2Node_Variable."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGRAPH_API UClass* StaticClass<class UK2Node_Variable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Variable_h


#define FOREACH_ENUM_ESELFCONTEXTINFO(op) \
	op(ESelfContextInfo::Unspecified) \
	op(ESelfContextInfo::NotSelfContext) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
