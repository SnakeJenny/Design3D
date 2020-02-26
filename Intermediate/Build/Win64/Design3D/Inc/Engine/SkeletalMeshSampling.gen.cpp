// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/SkeletalMeshSampling.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshSampling() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData();
// End Cross Module References
class UScriptStruct* FSkeletalMeshSamplingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingInfo"), sizeof(FSkeletalMeshSamplingInfo), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshSamplingInfo>()
{
	return FSkeletalMeshSamplingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshSamplingInfo(FSkeletalMeshSamplingInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshSamplingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshSamplingInfo")),new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingInfo;
	struct Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuiltData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuiltData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Regions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Regions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Regions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_BuiltData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_BuiltData = { "BuiltData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshSamplingInfo, BuiltData), Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_BuiltData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_BuiltData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_Regions_MetaData[] = {
		{ "Category", "Sampling" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "Info defining sampling of named regions on this mesh." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_Regions = { "Regions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshSamplingInfo, Regions), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_Regions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_Regions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_Regions_Inner = { "Regions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_BuiltData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_Regions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::NewProp_Regions_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshSamplingInfo",
		sizeof(FSkeletalMeshSamplingInfo),
		alignof(FSkeletalMeshSamplingInfo),
		Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshSamplingInfo"), sizeof(FSkeletalMeshSamplingInfo), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo_Hash() { return 73320779U; }
class UScriptStruct* FSkeletalMeshSamplingRegion::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingRegion"), sizeof(FSkeletalMeshSamplingRegion), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshSamplingRegion>()
{
	return FSkeletalMeshSamplingRegion::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshSamplingRegion(FSkeletalMeshSamplingRegion::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshSamplingRegion"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegion
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegion()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshSamplingRegion")),new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingRegion>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegion;
	struct Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneFilters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneFilters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneFilters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialFilters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialFilters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialFilters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportUniformlyDistributedSampling_MetaData[];
#endif
		static void NewProp_bSupportUniformlyDistributedSampling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportUniformlyDistributedSampling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "Defined a named region on a mesh that will have associated triangles and bones for fast sampling at each enabled LOD." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingRegion>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_BoneFilters_MetaData[] = {
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "Filters to determine which triangles and bones to include in this region based on bone." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_BoneFilters = { "BoneFilters", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshSamplingRegion, BoneFilters), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_BoneFilters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_BoneFilters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_BoneFilters_Inner = { "BoneFilters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_MaterialFilters_MetaData[] = {
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "Filters to determine which triangles to include in this region based on material." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_MaterialFilters = { "MaterialFilters", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshSamplingRegion, MaterialFilters), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_MaterialFilters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_MaterialFilters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_MaterialFilters_Inner = { "MaterialFilters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData[] = {
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "Mesh supports uniformly distributed sampling in constant time.\nMemory cost is 8 bytes per triangle." },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_bSupportUniformlyDistributedSampling_SetBit(void* Obj)
	{
		((FSkeletalMeshSamplingRegion*)Obj)->bSupportUniformlyDistributedSampling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_bSupportUniformlyDistributedSampling = { "bSupportUniformlyDistributedSampling", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSkeletalMeshSamplingRegion), &Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_bSupportUniformlyDistributedSampling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "The LOD of the mesh that this region applies to." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshSamplingRegion, LODIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_LODIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Region" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "Name of this region that users will reference." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshSamplingRegion, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_BoneFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_BoneFilters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_MaterialFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_MaterialFilters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_bSupportUniformlyDistributedSampling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshSamplingRegion",
		sizeof(FSkeletalMeshSamplingRegion),
		alignof(FSkeletalMeshSamplingRegion),
		Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshSamplingRegion"), sizeof(FSkeletalMeshSamplingRegion), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegion_Hash() { return 3126548793U; }
class UScriptStruct* FSkeletalMeshSamplingRegionMaterialFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingRegionMaterialFilter"), sizeof(FSkeletalMeshSamplingRegionMaterialFilter), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshSamplingRegionMaterialFilter>()
{
	return FSkeletalMeshSamplingRegionMaterialFilter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter(FSkeletalMeshSamplingRegionMaterialFilter::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshSamplingRegionMaterialFilter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegionMaterialFilter
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegionMaterialFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshSamplingRegionMaterialFilter")),new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingRegionMaterialFilter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegionMaterialFilter;
	struct Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "Filter to include triangles in a sampling region based on their material." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingRegionMaterialFilter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::NewProp_MaterialName_MetaData[] = {
		{ "Category", "Material Filter" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::NewProp_MaterialName = { "MaterialName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshSamplingRegionMaterialFilter, MaterialName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::NewProp_MaterialName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::NewProp_MaterialName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::NewProp_MaterialName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshSamplingRegionMaterialFilter",
		sizeof(FSkeletalMeshSamplingRegionMaterialFilter),
		alignof(FSkeletalMeshSamplingRegionMaterialFilter),
		Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshSamplingRegionMaterialFilter"), sizeof(FSkeletalMeshSamplingRegionMaterialFilter), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionMaterialFilter_Hash() { return 1633680603U; }
class UScriptStruct* FSkeletalMeshSamplingRegionBoneFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingRegionBoneFilter"), sizeof(FSkeletalMeshSamplingRegionBoneFilter), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshSamplingRegionBoneFilter>()
{
	return FSkeletalMeshSamplingRegionBoneFilter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter(FSkeletalMeshSamplingRegionBoneFilter::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshSamplingRegionBoneFilter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegionBoneFilter
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegionBoneFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshSamplingRegionBoneFilter")),new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingRegionBoneFilter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegionBoneFilter;
	struct Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyToChildren_MetaData[];
#endif
		static void NewProp_bApplyToChildren_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyToChildren;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeOrExclude_MetaData[];
#endif
		static void NewProp_bIncludeOrExclude_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeOrExclude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "Filter to include or exclude bones and their associated triangles from a sampling region." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingRegionBoneFilter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bApplyToChildren_MetaData[] = {
		{ "Category", "Bone Filter" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "If true, this filter will apply to all children of this bone as well." },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bApplyToChildren_SetBit(void* Obj)
	{
		((FSkeletalMeshSamplingRegionBoneFilter*)Obj)->bApplyToChildren = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bApplyToChildren = { "bApplyToChildren", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSkeletalMeshSamplingRegionBoneFilter), &Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bApplyToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bApplyToChildren_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bApplyToChildren_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bIncludeOrExclude_MetaData[] = {
		{ "Category", "Bone Filter" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "If true, this filter will include bones. If false, it will exclude them." },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bIncludeOrExclude_SetBit(void* Obj)
	{
		((FSkeletalMeshSamplingRegionBoneFilter*)Obj)->bIncludeOrExclude = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bIncludeOrExclude = { "bIncludeOrExclude", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSkeletalMeshSamplingRegionBoneFilter), &Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bIncludeOrExclude_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bIncludeOrExclude_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bIncludeOrExclude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Bone Filter" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshSamplingRegionBoneFilter, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_BoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_BoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bApplyToChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_bIncludeOrExclude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::NewProp_BoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshSamplingRegionBoneFilter",
		sizeof(FSkeletalMeshSamplingRegionBoneFilter),
		alignof(FSkeletalMeshSamplingRegionBoneFilter),
		Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshSamplingRegionBoneFilter"), sizeof(FSkeletalMeshSamplingRegionBoneFilter), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBoneFilter_Hash() { return 2604356024U; }
class UScriptStruct* FSkeletalMeshSamplingBuiltData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingBuiltData"), sizeof(FSkeletalMeshSamplingBuiltData), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshSamplingBuiltData>()
{
	return FSkeletalMeshSamplingBuiltData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshSamplingBuiltData(FSkeletalMeshSamplingBuiltData::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshSamplingBuiltData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingBuiltData
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingBuiltData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshSamplingBuiltData")),new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingBuiltData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingBuiltData;
	struct Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegionBuiltData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegionBuiltData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegionBuiltData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WholeMeshBuiltData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WholeMeshBuiltData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WholeMeshBuiltData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingBuiltData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_RegionBuiltData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_RegionBuiltData = { "RegionBuiltData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshSamplingBuiltData, RegionBuiltData), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_RegionBuiltData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_RegionBuiltData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_RegionBuiltData_Inner = { "RegionBuiltData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_WholeMeshBuiltData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_WholeMeshBuiltData = { "WholeMeshBuiltData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshSamplingBuiltData, WholeMeshBuiltData), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_WholeMeshBuiltData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_WholeMeshBuiltData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_WholeMeshBuiltData_Inner = { "WholeMeshBuiltData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_RegionBuiltData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_RegionBuiltData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_WholeMeshBuiltData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::NewProp_WholeMeshBuiltData_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshSamplingBuiltData",
		sizeof(FSkeletalMeshSamplingBuiltData),
		alignof(FSkeletalMeshSamplingBuiltData),
		Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshSamplingBuiltData"), sizeof(FSkeletalMeshSamplingBuiltData), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingBuiltData_Hash() { return 569480171U; }
class UScriptStruct* FSkeletalMeshSamplingLODBuiltData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingLODBuiltData"), sizeof(FSkeletalMeshSamplingLODBuiltData), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshSamplingLODBuiltData>()
{
	return FSkeletalMeshSamplingLODBuiltData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData(FSkeletalMeshSamplingLODBuiltData::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshSamplingLODBuiltData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingLODBuiltData
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingLODBuiltData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshSamplingLODBuiltData")),new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingLODBuiltData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingLODBuiltData;
	struct Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "Built data for sampling a the whole mesh at a particular LOD." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingLODBuiltData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshSamplingLODBuiltData",
		sizeof(FSkeletalMeshSamplingLODBuiltData),
		alignof(FSkeletalMeshSamplingLODBuiltData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshSamplingLODBuiltData"), sizeof(FSkeletalMeshSamplingLODBuiltData), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingLODBuiltData_Hash() { return 3431677919U; }
class UScriptStruct* FSkeletalMeshSamplingRegionBuiltData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshSamplingRegionBuiltData"), sizeof(FSkeletalMeshSamplingRegionBuiltData), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshSamplingRegionBuiltData>()
{
	return FSkeletalMeshSamplingRegionBuiltData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData(FSkeletalMeshSamplingRegionBuiltData::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshSamplingRegionBuiltData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegionBuiltData
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegionBuiltData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshSamplingRegionBuiltData")),new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingRegionBuiltData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshSamplingRegionBuiltData;
	struct Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSampling.h" },
		{ "ToolTip", "Built data for sampling a single region of a skeletal mesh." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshSamplingRegionBuiltData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshSamplingRegionBuiltData",
		sizeof(FSkeletalMeshSamplingRegionBuiltData),
		alignof(FSkeletalMeshSamplingRegionBuiltData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshSamplingRegionBuiltData"), sizeof(FSkeletalMeshSamplingRegionBuiltData), Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshSamplingRegionBuiltData_Hash() { return 1101632926U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
