// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNode_ApplyMeshSpaceAdditive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ApplyMeshSpaceAdditive() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_ApplyMeshSpaceAdditive::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_ApplyMeshSpaceAdditive"), sizeof(FAnimNode_ApplyMeshSpaceAdditive), Get_Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_ApplyMeshSpaceAdditive>()
{
	return FAnimNode_ApplyMeshSpaceAdditive::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive(FAnimNode_ApplyMeshSpaceAdditive::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_ApplyMeshSpaceAdditive"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_ApplyMeshSpaceAdditive
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_ApplyMeshSpaceAdditive()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_ApplyMeshSpaceAdditive")),new UScriptStruct::TCppStructOps<FAnimNode_ApplyMeshSpaceAdditive>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_ApplyMeshSpaceAdditive;
	struct Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Additive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Additive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Base;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_ApplyMeshSpaceAdditive.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ApplyMeshSpaceAdditive>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Performance" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_ApplyMeshSpaceAdditive.h" },
		{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ApplyMeshSpaceAdditive, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_LODThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_LODThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_ApplyMeshSpaceAdditive.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ApplyMeshSpaceAdditive, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaScaleBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaScaleBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_ApplyMeshSpaceAdditive.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ApplyMeshSpaceAdditive, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Alpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Additive_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_ApplyMeshSpaceAdditive.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Additive = { "Additive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ApplyMeshSpaceAdditive, Additive), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Additive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Additive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Base_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_ApplyMeshSpaceAdditive.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ApplyMeshSpaceAdditive, Base), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Base_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Base_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_LODThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaScaleBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Additive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Base,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_ApplyMeshSpaceAdditive",
		sizeof(FAnimNode_ApplyMeshSpaceAdditive),
		alignof(FAnimNode_ApplyMeshSpaceAdditive),
		Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_ApplyMeshSpaceAdditive"), sizeof(FAnimNode_ApplyMeshSpaceAdditive), Get_Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Hash() { return 1650830322U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
