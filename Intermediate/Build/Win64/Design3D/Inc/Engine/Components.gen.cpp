// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Components.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponents() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshUVChannelInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
class UScriptStruct* FMeshUVChannelInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMeshUVChannelInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshUVChannelInfo, Z_Construct_UPackage__Script_Engine(), TEXT("MeshUVChannelInfo"), sizeof(FMeshUVChannelInfo), Get_Z_Construct_UScriptStruct_FMeshUVChannelInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshUVChannelInfo>()
{
	return FMeshUVChannelInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshUVChannelInfo(FMeshUVChannelInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("MeshUVChannelInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMeshUVChannelInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFMeshUVChannelInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshUVChannelInfo")),new UScriptStruct::TCppStructOps<FMeshUVChannelInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMeshUVChannelInfo;
	struct Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalUVDensities_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocalUVDensities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideDensities_MetaData[];
#endif
		static void NewProp_bOverrideDensities_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideDensities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[];
#endif
		static void NewProp_bInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components.h" },
		{ "ToolTip", "The world size for each texcoord mapping. Used by the texture streaming." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshUVChannelInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_LocalUVDensities_MetaData[] = {
		{ "Category", "Basic" },
		{ "EditCondition", "bOverrideDensities" },
		{ "ModuleRelativePath", "Public/Components.h" },
		{ "ToolTip", "The UV density in the mesh, before any transform scaling, in world unit per UV.\nThis value represents the length taken to cover a full UV unit." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_LocalUVDensities = { "LocalUVDensities", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LocalUVDensities, FMeshUVChannelInfo), STRUCT_OFFSET(FMeshUVChannelInfo, LocalUVDensities), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_LocalUVDensities_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_LocalUVDensities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bOverrideDensities_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/Components.h" },
		{ "ToolTip", "Whether this values was set manually or is auto generated." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bOverrideDensities_SetBit(void* Obj)
	{
		((FMeshUVChannelInfo*)Obj)->bOverrideDensities = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bOverrideDensities = { "bOverrideDensities", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMeshUVChannelInfo), &Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bOverrideDensities_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bOverrideDensities_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bOverrideDensities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bInitialized_SetBit(void* Obj)
	{
		((FMeshUVChannelInfo*)Obj)->bInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMeshUVChannelInfo), &Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bInitialized_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bInitialized_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_LocalUVDensities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bOverrideDensities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::NewProp_bInitialized,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MeshUVChannelInfo",
		sizeof(FMeshUVChannelInfo),
		alignof(FMeshUVChannelInfo),
		Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshUVChannelInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshUVChannelInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshUVChannelInfo"), sizeof(FMeshUVChannelInfo), Get_Z_Construct_UScriptStruct_FMeshUVChannelInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeshUVChannelInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshUVChannelInfo_Hash() { return 1507188195U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
