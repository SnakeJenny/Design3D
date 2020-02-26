// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ReporterGraph_generated_h
#error "ReporterGraph.generated.h already included, missing '#pragma once' in ReporterGraph.h"
#endif
#define ENGINE_ReporterGraph_generated_h

#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReporterGraph(); \
	friend struct Z_Construct_UClass_UReporterGraph_Statics; \
public: \
	DECLARE_CLASS(UReporterGraph, UReporterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UReporterGraph)


#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_INCLASS \
private: \
	static void StaticRegisterNativesUReporterGraph(); \
	friend struct Z_Construct_UClass_UReporterGraph_Statics; \
public: \
	DECLARE_CLASS(UReporterGraph, UReporterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UReporterGraph)


#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReporterGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReporterGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReporterGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReporterGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReporterGraph(UReporterGraph&&); \
	NO_API UReporterGraph(const UReporterGraph&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReporterGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReporterGraph(UReporterGraph&&); \
	NO_API UReporterGraph(const UReporterGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReporterGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReporterGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReporterGraph)


#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_102_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_105_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ReporterGraph."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UReporterGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h


#define FOREACH_ENUM_ELEGENDPOSITION(op) \
	op(ELegendPosition::Outside) \
	op(ELegendPosition::Inside) 
#define FOREACH_ENUM_EGRAPHDATASTYLE(op) \
	op(EGraphDataStyle::Lines) \
	op(EGraphDataStyle::Filled) 
#define FOREACH_ENUM_EGRAPHAXISSTYLE(op) \
	op(EGraphAxisStyle::Lines) \
	op(EGraphAxisStyle::Notches) \
	op(EGraphAxisStyle::Grid) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
