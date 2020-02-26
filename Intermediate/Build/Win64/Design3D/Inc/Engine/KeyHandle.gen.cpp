// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Curves/KeyHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyHandle() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleLookupTable();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleMap();
// End Cross Module References
class UScriptStruct* FKeyHandleLookupTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FKeyHandleLookupTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyHandleLookupTable, Z_Construct_UPackage__Script_Engine(), TEXT("KeyHandleLookupTable"), sizeof(FKeyHandleLookupTable), Get_Z_Construct_UScriptStruct_FKeyHandleLookupTable_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKeyHandleLookupTable>()
{
	return FKeyHandleLookupTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyHandleLookupTable(FKeyHandleLookupTable::StaticStruct, TEXT("/Script/Engine"), TEXT("KeyHandleLookupTable"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFKeyHandleLookupTable
{
	FScriptStruct_Engine_StaticRegisterNativesFKeyHandleLookupTable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KeyHandleLookupTable")),new UScriptStruct::TCppStructOps<FKeyHandleLookupTable>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFKeyHandleLookupTable;
	struct Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Curves/KeyHandle.h" },
		{ "ToolTip", "Lookup table that maps key handles to indices in an external data structure\nMaintains a map of key handle to last known index,\nand an array of optional key handles that's used to validate map entries." },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyHandleLookupTable>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"KeyHandleLookupTable",
		sizeof(FKeyHandleLookupTable),
		alignof(FKeyHandleLookupTable),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleLookupTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyHandleLookupTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyHandleLookupTable"), sizeof(FKeyHandleLookupTable), Get_Z_Construct_UScriptStruct_FKeyHandleLookupTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyHandleLookupTable_Hash() { return 3656467648U; }
class UScriptStruct* FKeyHandleMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FKeyHandleMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyHandleMap, Z_Construct_UPackage__Script_Engine(), TEXT("KeyHandleMap"), sizeof(FKeyHandleMap), Get_Z_Construct_UScriptStruct_FKeyHandleMap_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKeyHandleMap>()
{
	return FKeyHandleMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyHandleMap(FKeyHandleMap::StaticStruct, TEXT("/Script/Engine"), TEXT("KeyHandleMap"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFKeyHandleMap
{
	FScriptStruct_Engine_StaticRegisterNativesFKeyHandleMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KeyHandleMap")),new UScriptStruct::TCppStructOps<FKeyHandleMap>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFKeyHandleMap;
	struct Z_Construct_UScriptStruct_FKeyHandleMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyHandleMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Curves/KeyHandle.h" },
		{ "ToolTip", "Represents a mapping of key handles to key index that may be serialized" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyHandleMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyHandleMap>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyHandleMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"KeyHandleMap",
		sizeof(FKeyHandleMap),
		alignof(FKeyHandleMap),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyHandleMap_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyHandleMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyHandleMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyHandleMap"), sizeof(FKeyHandleMap), Get_Z_Construct_UScriptStruct_FKeyHandleMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKeyHandleMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyHandleMap_Hash() { return 1212691190U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
