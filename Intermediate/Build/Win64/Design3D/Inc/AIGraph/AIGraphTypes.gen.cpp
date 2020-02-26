// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIGraph/Classes/AIGraphTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIGraphTypes() {}
// Cross Module References
	AIGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FGraphNodeClassData();
	UPackage* Z_Construct_UPackage__Script_AIGraph();
// End Cross Module References
class UScriptStruct* FGraphNodeClassData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FGraphNodeClassData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGraphNodeClassData, Z_Construct_UPackage__Script_AIGraph(), TEXT("GraphNodeClassData"), sizeof(FGraphNodeClassData), Get_Z_Construct_UScriptStruct_FGraphNodeClassData_Hash());
	}
	return Singleton;
}
template<> AIGRAPH_API UScriptStruct* StaticStruct<FGraphNodeClassData>()
{
	return FGraphNodeClassData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGraphNodeClassData(FGraphNodeClassData::StaticStruct, TEXT("/Script/AIGraph"), TEXT("GraphNodeClassData"), false, nullptr, nullptr);
static struct FScriptStruct_AIGraph_StaticRegisterNativesFGraphNodeClassData
{
	FScriptStruct_AIGraph_StaticRegisterNativesFGraphNodeClassData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GraphNodeClassData")),new UScriptStruct::TCppStructOps<FGraphNodeClassData>);
	}
} ScriptStruct_AIGraph_StaticRegisterNativesFGraphNodeClassData;
	struct Z_Construct_UScriptStruct_FGraphNodeClassData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedClassPackage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GeneratedClassPackage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AIGraphTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGraphNodeClassData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AIGraphTypes.h" },
		{ "ToolTip", "User-defined category for this class" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGraphNodeClassData, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_Category_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_ClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AIGraphTypes.h" },
		{ "ToolTip", "resolved name of class from asset data" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGraphNodeClassData, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_ClassName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_GeneratedClassPackage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AIGraphTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_GeneratedClassPackage = { "GeneratedClassPackage", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGraphNodeClassData, GeneratedClassPackage), METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_GeneratedClassPackage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_GeneratedClassPackage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_AssetName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AIGraphTypes.h" },
		{ "ToolTip", "path to class if it's not loaded yet" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGraphNodeClassData, AssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_AssetName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_AssetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_ClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_GeneratedClassPackage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::NewProp_AssetName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIGraph,
		nullptr,
		&NewStructOps,
		"GraphNodeClassData",
		sizeof(FGraphNodeClassData),
		alignof(FGraphNodeClassData),
		Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGraphNodeClassData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGraphNodeClassData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GraphNodeClassData"), sizeof(FGraphNodeClassData), Get_Z_Construct_UScriptStruct_FGraphNodeClassData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGraphNodeClassData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGraphNodeClassData_Hash() { return 2172500377U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
