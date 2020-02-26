// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialEditor/Public/MaterialPropertyHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialPropertyHelpers() {}
// Cross Module References
	MATERIALEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSortedParamData();
	UPackage* Z_Construct_UPackage__Script_MaterialEditor();
// End Cross Module References
class UScriptStruct* FSortedParamData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MATERIALEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FSortedParamData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSortedParamData, Z_Construct_UPackage__Script_MaterialEditor(), TEXT("SortedParamData"), sizeof(FSortedParamData), Get_Z_Construct_UScriptStruct_FSortedParamData_Hash());
	}
	return Singleton;
}
template<> MATERIALEDITOR_API UScriptStruct* StaticStruct<FSortedParamData>()
{
	return FSortedParamData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSortedParamData(FSortedParamData::StaticStruct, TEXT("/Script/MaterialEditor"), TEXT("SortedParamData"), false, nullptr, nullptr);
static struct FScriptStruct_MaterialEditor_StaticRegisterNativesFSortedParamData
{
	FScriptStruct_MaterialEditor_StaticRegisterNativesFSortedParamData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SortedParamData")),new UScriptStruct::TCppStructOps<FSortedParamData>);
	}
} ScriptStruct_MaterialEditor_StaticRegisterNativesFSortedParamData;
	struct Z_Construct_UScriptStruct_FSortedParamData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSortedParamData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialPropertyHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSortedParamData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSortedParamData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSortedParamData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialEditor,
		nullptr,
		&NewStructOps,
		"SortedParamData",
		sizeof(FSortedParamData),
		alignof(FSortedParamData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSortedParamData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSortedParamData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSortedParamData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSortedParamData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MaterialEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SortedParamData"), sizeof(FSortedParamData), Get_Z_Construct_UScriptStruct_FSortedParamData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSortedParamData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSortedParamData_Hash() { return 3181477065U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
