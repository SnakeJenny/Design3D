// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/InstancedStaticMeshComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstancedStaticMeshComponent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneComponentInstanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform();
// End Cross Module References
class UScriptStruct* FInstancedStaticMeshComponentInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData, Z_Construct_UPackage__Script_Engine(), TEXT("InstancedStaticMeshComponentInstanceData"), sizeof(FInstancedStaticMeshComponentInstanceData), Get_Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInstancedStaticMeshComponentInstanceData>()
{
	return FInstancedStaticMeshComponentInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInstancedStaticMeshComponentInstanceData(FInstancedStaticMeshComponentInstanceData::StaticStruct, TEXT("/Script/Engine"), TEXT("InstancedStaticMeshComponentInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshComponentInstanceData
{
	FScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshComponentInstanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InstancedStaticMeshComponentInstanceData")),new UScriptStruct::TCppStructOps<FInstancedStaticMeshComponentInstanceData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshComponentInstanceData;
	struct Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancingRandomSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstancingRandomSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerInstanceSMData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerInstanceSMData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerInstanceSMData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedStaticLighting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedStaticLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Helper class used to preserve lighting/selection state across blueprint reinstancing" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStaticMeshComponentInstanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_InstancingRandomSeed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "The cached random seed" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_InstancingRandomSeed = { "InstancingRandomSeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstancedStaticMeshComponentInstanceData, InstancingRandomSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_InstancingRandomSeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_InstancingRandomSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMData = { "PerInstanceSMData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstancedStaticMeshComponentInstanceData, PerInstanceSMData), METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMData_Inner = { "PerInstanceSMData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Static lighting info" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting = { "CachedStaticLighting", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstancedStaticMeshComponentInstanceData, CachedStaticLighting), Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData, METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Mesh being used by component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstancedStaticMeshComponentInstanceData, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_StaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_InstancingRandomSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_PerInstanceSMData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_CachedStaticLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::NewProp_StaticMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FSceneComponentInstanceData,
		&NewStructOps,
		"InstancedStaticMeshComponentInstanceData",
		sizeof(FInstancedStaticMeshComponentInstanceData),
		alignof(FInstancedStaticMeshComponentInstanceData),
		Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InstancedStaticMeshComponentInstanceData"), sizeof(FInstancedStaticMeshComponentInstanceData), Get_Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshComponentInstanceData_Hash() { return 103776429U; }
class UScriptStruct* FInstancedStaticMeshLightMapInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData, Z_Construct_UPackage__Script_Engine(), TEXT("InstancedStaticMeshLightMapInstanceData"), sizeof(FInstancedStaticMeshLightMapInstanceData), Get_Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInstancedStaticMeshLightMapInstanceData>()
{
	return FInstancedStaticMeshLightMapInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData(FInstancedStaticMeshLightMapInstanceData::StaticStruct, TEXT("/Script/Engine"), TEXT("InstancedStaticMeshLightMapInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshLightMapInstanceData
{
	FScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshLightMapInstanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InstancedStaticMeshLightMapInstanceData")),new UScriptStruct::TCppStructOps<FInstancedStaticMeshLightMapInstanceData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshLightMapInstanceData;
	struct Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapBuildDataIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MapBuildDataIds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapBuildDataIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Used to store lightmap data during RerunConstructionScripts" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStaticMeshLightMapInstanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_MapBuildDataIds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "guid from LODData" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_MapBuildDataIds = { "MapBuildDataIds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstancedStaticMeshLightMapInstanceData, MapBuildDataIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_MapBuildDataIds_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_MapBuildDataIds_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_MapBuildDataIds_Inner = { "MapBuildDataIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Transform of component" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstancedStaticMeshLightMapInstanceData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_Transform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_MapBuildDataIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_MapBuildDataIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::NewProp_Transform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InstancedStaticMeshLightMapInstanceData",
		sizeof(FInstancedStaticMeshLightMapInstanceData),
		alignof(FInstancedStaticMeshLightMapInstanceData),
		Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InstancedStaticMeshLightMapInstanceData"), sizeof(FInstancedStaticMeshLightMapInstanceData), Get_Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshLightMapInstanceData_Hash() { return 3476698961U; }
class UScriptStruct* FInstancedStaticMeshMappingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo, Z_Construct_UPackage__Script_Engine(), TEXT("InstancedStaticMeshMappingInfo"), sizeof(FInstancedStaticMeshMappingInfo), Get_Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInstancedStaticMeshMappingInfo>()
{
	return FInstancedStaticMeshMappingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInstancedStaticMeshMappingInfo(FInstancedStaticMeshMappingInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("InstancedStaticMeshMappingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshMappingInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshMappingInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InstancedStaticMeshMappingInfo")),new UScriptStruct::TCppStructOps<FInstancedStaticMeshMappingInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshMappingInfo;
	struct Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStaticMeshMappingInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InstancedStaticMeshMappingInfo",
		sizeof(FInstancedStaticMeshMappingInfo),
		alignof(FInstancedStaticMeshMappingInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InstancedStaticMeshMappingInfo"), sizeof(FInstancedStaticMeshMappingInfo), Get_Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Hash() { return 235540450U; }
class UScriptStruct* FInstancedStaticMeshInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData, Z_Construct_UPackage__Script_Engine(), TEXT("InstancedStaticMeshInstanceData"), sizeof(FInstancedStaticMeshInstanceData), Get_Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInstancedStaticMeshInstanceData>()
{
	return FInstancedStaticMeshInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInstancedStaticMeshInstanceData(FInstancedStaticMeshInstanceData::StaticStruct, TEXT("/Script/Engine"), TEXT("InstancedStaticMeshInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshInstanceData
{
	FScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshInstanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InstancedStaticMeshInstanceData")),new UScriptStruct::TCppStructOps<FInstancedStaticMeshInstanceData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshInstanceData;
	struct Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStaticMeshInstanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInstancedStaticMeshInstanceData, Transform), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewProp_Transform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewProp_Transform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InstancedStaticMeshInstanceData",
		sizeof(FInstancedStaticMeshInstanceData),
		alignof(FInstancedStaticMeshInstanceData),
		Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InstancedStaticMeshInstanceData"), sizeof(FInstancedStaticMeshInstanceData), Get_Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Hash() { return 3087195046U; }
	void UInstancedStaticMeshComponent::StaticRegisterNativesUInstancedStaticMeshComponent()
	{
		UClass* Class = UInstancedStaticMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInstance", &UInstancedStaticMeshComponent::execAddInstance },
			{ "AddInstanceWorldSpace", &UInstancedStaticMeshComponent::execAddInstanceWorldSpace },
			{ "ClearInstances", &UInstancedStaticMeshComponent::execClearInstances },
			{ "GetInstanceCount", &UInstancedStaticMeshComponent::execGetInstanceCount },
			{ "GetInstancesOverlappingBox", &UInstancedStaticMeshComponent::execGetInstancesOverlappingBox },
			{ "GetInstancesOverlappingSphere", &UInstancedStaticMeshComponent::execGetInstancesOverlappingSphere },
			{ "GetInstanceTransform", &UInstancedStaticMeshComponent::execGetInstanceTransform },
			{ "RemoveInstance", &UInstancedStaticMeshComponent::execRemoveInstance },
			{ "SetCullDistances", &UInstancedStaticMeshComponent::execSetCullDistances },
			{ "UpdateInstanceTransform", &UInstancedStaticMeshComponent::execUpdateInstanceTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics
	{
		struct InstancedStaticMeshComponent_eventAddInstance_Parms
		{
			FTransform InstanceTransform;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_InstanceTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_InstanceTransform = { "InstanceTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstance_Parms, InstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_InstanceTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_InstanceTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_InstanceTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Add an instance to this component. Transform is given in local space of this component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "AddInstance", sizeof(InstancedStaticMeshComponent_eventAddInstance_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics
	{
		struct InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms
		{
			FTransform WorldTransform;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_WorldTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_WorldTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_WorldTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Add an instance to this component. Transform is given in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "AddInstanceWorldSpace", sizeof(InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Clear all instances being rendered by this component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "ClearInstances", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics
	{
		struct InstancedStaticMeshComponent_eventGetInstanceCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstanceCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Get the number of instances in this component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "GetInstanceCount", sizeof(InstancedStaticMeshComponent_eventGetInstanceCount_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics
	{
		struct InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms
		{
			FBox Box;
			bool bBoxInWorldSpace;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_bBoxInWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBoxInWorldSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_bBoxInWorldSpace_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms*)Obj)->bBoxInWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_bBoxInWorldSpace = { "bBoxInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_bBoxInWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_Box_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_Box_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_Box_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_bBoxInWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_Box,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "CPP_Default_bBoxInWorldSpace", "true" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Returns the instances with instance bounds overlapping the specified box. The return value is an array of instance indices." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "GetInstancesOverlappingBox", sizeof(InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics
	{
		struct InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms
		{
			FVector Center;
			float Radius;
			bool bSphereInWorldSpace;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_bSphereInWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSphereInWorldSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_bSphereInWorldSpace_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms*)Obj)->bSphereInWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_bSphereInWorldSpace = { "bSphereInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_bSphereInWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Center_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Center_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_bSphereInWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Center,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "CPP_Default_bSphereInWorldSpace", "true" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Returns the instances with instance bounds overlapping the specified sphere. The return value is an array of instance indices." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "GetInstancesOverlappingSphere", sizeof(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics
	{
		struct InstancedStaticMeshComponent_eventGetInstanceTransform_Parms
		{
			int32 InstanceIndex;
			FTransform OutInstanceTransform;
			bool bWorldSpace;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutInstanceTransform;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventGetInstanceTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventGetInstanceTransform_Parms*)Obj)->bWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_OutInstanceTransform = { "OutInstanceTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms, OutInstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_OutInstanceTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_InstanceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Get the transform for the instance specified. Instance is returned in local space of this component unless bWorldSpace is set.  Returns True on success." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "GetInstanceTransform", sizeof(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics
	{
		struct InstancedStaticMeshComponent_eventRemoveInstance_Parms
		{
			int32 InstanceIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventRemoveInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventRemoveInstance_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventRemoveInstance_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_InstanceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Remove the instance specified. Returns True on success. Note that this will leave the array in order, but may shrink it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "RemoveInstance", sizeof(InstancedStaticMeshComponent_eventRemoveInstance_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics
	{
		struct InstancedStaticMeshComponent_eventSetCullDistances_Parms
		{
			int32 StartCullDistance;
			int32 EndCullDistance;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndCullDistance;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartCullDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::NewProp_EndCullDistance = { "EndCullDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventSetCullDistances_Parms, EndCullDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::NewProp_StartCullDistance = { "StartCullDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventSetCullDistances_Parms, StartCullDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::NewProp_EndCullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::NewProp_StartCullDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Sets the fading start and culling end distances for this component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "SetCullDistances", sizeof(InstancedStaticMeshComponent_eventSetCullDistances_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics
	{
		struct InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms
		{
			int32 InstanceIndex;
			FTransform NewInstanceTransform;
			bool bWorldSpace;
			bool bMarkRenderStateDirty;
			bool bTeleport;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewInstanceTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewInstanceTransform;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms*)Obj)->bMarkRenderStateDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms*)Obj)->bWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform = { "NewInstanceTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms, NewInstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_InstanceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "CPP_Default_bMarkRenderStateDirty", "false" },
		{ "CPP_Default_bTeleport", "false" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Update the transform for the instance specified.\n\n@param InstanceIndex                  The index of the instance to update\n@param NewInstanceTransform   The new transform\n@param bWorldSpace                    If true, the new transform interpreted as a World Space transform, otherwise it is interpreted as Local Space\n@param bMarkRenderStateDirty  If true, the change should be visible immediately. If you are updating many instances you should only set this to true for the last instance.\n@param bTeleport                              Whether or not the instance's physics should be moved normally, or teleported (moved instantly, ignoring velocity).\n@return                                               True on success." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, nullptr, "UpdateInstanceTransform", sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister()
	{
		return UInstancedStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInstancedStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPendingLightmaps_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPendingLightmaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceReorderTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceReorderTable;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceReorderTable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceEndCullDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceEndCullDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceStartCullDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceStartCullDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancingRandomSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstancingRandomSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerInstanceSMData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerInstanceSMData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerInstanceSMData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance, "AddInstance" }, // 474163250
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace, "AddInstanceWorldSpace" }, // 862395661
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances, "ClearInstances" }, // 1840413564
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount, "GetInstanceCount" }, // 1170280300
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox, "GetInstancesOverlappingBox" }, // 1459418013
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere, "GetInstancesOverlappingSphere" }, // 2007793515
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform, "GetInstanceTransform" }, // 3454401236
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance, "RemoveInstance" }, // 1195228603
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances, "SetCullDistances" }, // 4023088863
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform, "UpdateInstanceTransform" }, // 1839221701
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/InstancedStaticMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A component that efficiently renders multiple instances of the same StaticMesh." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "The mappings for all the instances of this component." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings = { "CachedMappings", nullptr, (EPropertyFlags)0x0020480000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, CachedMappings), METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings_Inner = { "CachedMappings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumPendingLightmaps_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Number of pending lightmaps still to be calculated (Apply()'d)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumPendingLightmaps = { "NumPendingLightmaps", nullptr, (EPropertyFlags)0x0020480000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, NumPendingLightmaps), METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumPendingLightmaps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumPendingLightmaps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Mapping from PerInstanceSMData order to instance render buffer order. If empty, the PerInstanceSMData order is used." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable = { "InstanceReorderTable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstanceReorderTable), METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable_Inner = { "InstanceReorderTable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceEndCullDistance_MetaData[] = {
		{ "Category", "Culling" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Distance from camera at which each instance completely fades out." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceEndCullDistance = { "InstanceEndCullDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstanceEndCullDistance), METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceEndCullDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceEndCullDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceStartCullDistance_MetaData[] = {
		{ "Category", "Culling" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Distance from camera at which each instance begins to fade out." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceStartCullDistance = { "InstanceStartCullDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstanceStartCullDistance), METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceStartCullDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceStartCullDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstancingRandomSeed_MetaData[] = {
		{ "Category", "InstancedStaticMeshComponent" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Value used to seed the random number stream that generates random numbers for each of this mesh's instances.\n      The random number is stored in a buffer accessible to materials through the PerInstanceRandom expression. If\n      this is set to zero (default), it will be populated automatically by the editor." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstancingRandomSeed = { "InstancingRandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstancingRandomSeed), METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstancingRandomSeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstancingRandomSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData_MetaData[] = {
		{ "Category", "Instances" },
		{ "DisplayName", "Instances" },
		{ "EditFixedOrder", "" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Array of instances, bulk serialized." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData = { "PerInstanceSMData", nullptr, (EPropertyFlags)0x0090000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInstancedStaticMeshComponent, PerInstanceSMData), METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData_Inner = { "PerInstanceSMData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumPendingLightmaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceEndCullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceStartCullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstancingRandomSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInstancedStaticMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::ClassParams = {
		&UInstancedStaticMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInstancedStaticMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInstancedStaticMeshComponent, 110600821);
	template<> ENGINE_API UClass* StaticClass<UInstancedStaticMeshComponent>()
	{
		return UInstancedStaticMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInstancedStaticMeshComponent(Z_Construct_UClass_UInstancedStaticMeshComponent, &UInstancedStaticMeshComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UInstancedStaticMeshComponent"), false, nullptr, nullptr, nullptr);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInstancedStaticMeshComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
