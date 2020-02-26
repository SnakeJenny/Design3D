// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIGRAPH_AIGraph_generated_h
#error "AIGraph.generated.h already included, missing '#pragma once' in AIGraph.h"
#endif
#define AIGRAPH_AIGraph_generated_h

#define Engine_Source_Editor_AIGraph_Classes_AIGraph_h_15_RPC_WRAPPERS
#define Engine_Source_Editor_AIGraph_Classes_AIGraph_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_AIGraph_Classes_AIGraph_h_15_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAIGraph, NO_API)


#define Engine_Source_Editor_AIGraph_Classes_AIGraph_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIGraph(); \
	friend struct Z_Construct_UClass_UAIGraph_Statics; \
public: \
	DECLARE_CLASS(UAIGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIGraph"), NO_API) \
	DECLARE_SERIALIZER(UAIGraph) \
	Engine_Source_Editor_AIGraph_Classes_AIGraph_h_15_ARCHIVESERIALIZER


#define Engine_Source_Editor_AIGraph_Classes_AIGraph_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAIGraph(); \
	friend struct Z_Construct_UClass_UAIGraph_Statics; \
public: \
	DECLARE_CLASS(UAIGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIGraph"), NO_API) \
	DECLARE_SERIALIZER(UAIGraph) \
	Engine_Source_Editor_AIGraph_Classes_AIGraph_h_15_ARCHIVESERIALIZER


#define Engine_Source_Editor_AIGraph_Classes_AIGraph_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIGraph(UAIGraph&&); \
	NO_API UAIGraph(const UAIGraph&); \
public:


#define Engine_Source_Editor_AIGraph_Classes_AIGraph_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIGraph(UAIGraph&&); \
	NO_API UAIGraph(const UAIGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIGraph)


#define Engine_Source_Editor_AIGraph_Classes_AIGraph_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_AIGraph_Classes_AIGraph_h_12_PROLOG
#define Engine_Source_Editor_AIGraph_Classes_AIGraph_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AIGraph_Classes_AIGraph_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AIGraph_Classes_AIGraph_h_15_RPC_WRAPPERS \
	Engine_Source_Editor_AIGraph_Classes_AIGraph_h_15_INCLASS \
	Engine_Source_Editor_AIGraph_Classes_AIGraph_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_AIGraph_Classes_AIGraph_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_AIGraph_Classes_AIGraph_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_AIGraph_Classes_AIGraph_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_AIGraph_Classes_AIGraph_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_AIGraph_Classes_AIGraph_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AIGraph."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIGRAPH_API UClass* StaticClass<class UAIGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AIGraph_Classes_AIGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
