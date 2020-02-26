// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AssetMappingTable_generated_h
#error "AssetMappingTable.generated.h already included, missing '#pragma once' in AssetMappingTable.h"
#endif
#define ENGINE_AssetMappingTable_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssetMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAssetMapping>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetMappingTable(); \
	friend struct Z_Construct_UClass_UAssetMappingTable_Statics; \
public: \
	DECLARE_CLASS(UAssetMappingTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAssetMappingTable)


#define Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUAssetMappingTable(); \
	friend struct Z_Construct_UClass_UAssetMappingTable_Statics; \
public: \
	DECLARE_CLASS(UAssetMappingTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAssetMappingTable)


#define Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAssetMappingTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetMappingTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAssetMappingTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetMappingTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAssetMappingTable(UAssetMappingTable&&); \
	ENGINE_API UAssetMappingTable(const UAssetMappingTable&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAssetMappingTable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAssetMappingTable(UAssetMappingTable&&); \
	ENGINE_API UAssetMappingTable(const UAssetMappingTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAssetMappingTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetMappingTable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetMappingTable)


#define Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MappedAssets() { return STRUCT_OFFSET(UAssetMappingTable, MappedAssets); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_59_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_62_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AssetMappingTable."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAssetMappingTable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
