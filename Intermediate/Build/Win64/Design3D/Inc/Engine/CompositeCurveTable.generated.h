// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CompositeCurveTable_generated_h
#error "CompositeCurveTable.generated.h already included, missing '#pragma once' in CompositeCurveTable.h"
#endif
#define ENGINE_CompositeCurveTable_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCompositeCurveTable, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeCurveTable(); \
	friend struct Z_Construct_UClass_UCompositeCurveTable_Statics; \
public: \
	DECLARE_CLASS(UCompositeCurveTable, UCurveTable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCompositeCurveTable) \
	Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCompositeCurveTable(); \
	friend struct Z_Construct_UClass_UCompositeCurveTable_Statics; \
public: \
	DECLARE_CLASS(UCompositeCurveTable, UCurveTable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCompositeCurveTable) \
	Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCompositeCurveTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeCurveTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCompositeCurveTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeCurveTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCompositeCurveTable(UCompositeCurveTable&&); \
	ENGINE_API UCompositeCurveTable(const UCompositeCurveTable&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCompositeCurveTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCompositeCurveTable(UCompositeCurveTable&&); \
	ENGINE_API UCompositeCurveTable(const UCompositeCurveTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCompositeCurveTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeCurveTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeCurveTable)


#define Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OldParentTables() { return STRUCT_OFFSET(UCompositeCurveTable, OldParentTables); }


#define Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CompositeCurveTable."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCompositeCurveTable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_CompositeCurveTable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
