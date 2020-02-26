// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATSVIEWER_PrimitiveStats_generated_h
#error "PrimitiveStats.generated.h already included, missing '#pragma once' in PrimitiveStats.h"
#endif
#define STATSVIEWER_PrimitiveStats_generated_h

#define Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_RPC_WRAPPERS
#define Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrimitiveStats(); \
	friend struct Z_Construct_UClass_UPrimitiveStats_Statics; \
public: \
	DECLARE_CLASS(UPrimitiveStats, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsViewer"), STATSVIEWER_API) \
	DECLARE_SERIALIZER(UPrimitiveStats)


#define Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUPrimitiveStats(); \
	friend struct Z_Construct_UClass_UPrimitiveStats_Statics; \
public: \
	DECLARE_CLASS(UPrimitiveStats, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsViewer"), STATSVIEWER_API) \
	DECLARE_SERIALIZER(UPrimitiveStats)


#define Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API UPrimitiveStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimitiveStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, UPrimitiveStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimitiveStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STATSVIEWER_API UPrimitiveStats(UPrimitiveStats&&); \
	STATSVIEWER_API UPrimitiveStats(const UPrimitiveStats&); \
public:


#define Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API UPrimitiveStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STATSVIEWER_API UPrimitiveStats(UPrimitiveStats&&); \
	STATSVIEWER_API UPrimitiveStats(const UPrimitiveStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, UPrimitiveStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimitiveStats); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimitiveStats)


#define Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_23_PROLOG
#define Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_RPC_WRAPPERS \
	Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_INCLASS \
	Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PrimitiveStats."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATSVIEWER_API UClass* StaticClass<class UPrimitiveStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h


#define FOREACH_ENUM_EPRIMITIVEOBJECTSETS(op) \
	op(PrimitiveObjectSets_AllObjects) \
	op(PrimitiveObjectSets_CurrentLevel) \
	op(PrimitiveObjectSets_SelectedObjects) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
