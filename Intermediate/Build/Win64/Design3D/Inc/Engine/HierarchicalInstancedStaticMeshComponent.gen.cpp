// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHierarchicalInstancedStaticMeshComponent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClusterNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClusterNode_DEPRECATED();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
// End Cross Module References
class UScriptStruct* FClusterNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FClusterNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterNode, Z_Construct_UPackage__Script_Engine(), TEXT("ClusterNode"), sizeof(FClusterNode), Get_Z_Construct_UScriptStruct_FClusterNode_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClusterNode>()
{
	return FClusterNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClusterNode(FClusterNode::StaticStruct, TEXT("/Script/Engine"), TEXT("ClusterNode"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFClusterNode
{
	FScriptStruct_Engine_StaticRegisterNativesFClusterNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClusterNode")),new UScriptStruct::TCppStructOps<FClusterNode>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFClusterNode;
	struct Z_Construct_UScriptStruct_FClusterNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInstanceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxInstanceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinInstanceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinInstanceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastChild_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastChild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstChild_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstChild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundMin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClusterNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MaxInstanceScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MaxInstanceScale = { "MaxInstanceScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClusterNode, MaxInstanceScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MaxInstanceScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MaxInstanceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MinInstanceScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MinInstanceScale = { "MinInstanceScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClusterNode, MinInstanceScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MinInstanceScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MinInstanceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastInstance = { "LastInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClusterNode, LastInstance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastInstance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstInstance = { "FirstInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClusterNode, FirstInstance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstInstance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastChild_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastChild = { "LastChild", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClusterNode, LastChild), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastChild_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastChild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMax_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMax = { "BoundMax", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClusterNode, BoundMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstChild_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstChild = { "FirstChild", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClusterNode, FirstChild), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstChild_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstChild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMin = { "BoundMin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClusterNode, BoundMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MaxInstanceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MinInstanceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastChild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstChild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMin,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ClusterNode",
		sizeof(FClusterNode),
		alignof(FClusterNode),
		Z_Construct_UScriptStruct_FClusterNode_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClusterNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClusterNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClusterNode"), sizeof(FClusterNode), Get_Z_Construct_UScriptStruct_FClusterNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClusterNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClusterNode_Hash() { return 1627751299U; }
class UScriptStruct* FClusterNode_DEPRECATED::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED, Z_Construct_UPackage__Script_Engine(), TEXT("ClusterNode_DEPRECATED"), sizeof(FClusterNode_DEPRECATED), Get_Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClusterNode_DEPRECATED>()
{
	return FClusterNode_DEPRECATED::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClusterNode_DEPRECATED(FClusterNode_DEPRECATED::StaticStruct, TEXT("/Script/Engine"), TEXT("ClusterNode_DEPRECATED"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFClusterNode_DEPRECATED
{
	FScriptStruct_Engine_StaticRegisterNativesFClusterNode_DEPRECATED()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClusterNode_DEPRECATED")),new UScriptStruct::TCppStructOps<FClusterNode_DEPRECATED>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFClusterNode_DEPRECATED;
	struct Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastChild_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastChild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstChild_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstChild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundMin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Due to BulkSerialize we can't edit the struct, so we must deprecated this one and create a new one" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterNode_DEPRECATED>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastInstance = { "LastInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClusterNode_DEPRECATED, LastInstance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastInstance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstInstance = { "FirstInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClusterNode_DEPRECATED, FirstInstance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstInstance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastChild_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastChild = { "LastChild", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClusterNode_DEPRECATED, LastChild), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastChild_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastChild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMax_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMax = { "BoundMax", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClusterNode_DEPRECATED, BoundMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstChild_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstChild = { "FirstChild", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClusterNode_DEPRECATED, FirstChild), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstChild_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstChild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMin = { "BoundMin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClusterNode_DEPRECATED, BoundMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastChild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstChild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMin,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ClusterNode_DEPRECATED",
		sizeof(FClusterNode_DEPRECATED),
		alignof(FClusterNode_DEPRECATED),
		Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClusterNode_DEPRECATED()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClusterNode_DEPRECATED"), sizeof(FClusterNode_DEPRECATED), Get_Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Hash() { return 2752315785U; }
	void UHierarchicalInstancedStaticMeshComponent::StaticRegisterNativesUHierarchicalInstancedStaticMeshComponent()
	{
		UClass* Class = UHierarchicalInstancedStaticMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveInstances", &UHierarchicalInstancedStaticMeshComponent::execRemoveInstances },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics
	{
		struct HierarchicalInstancedStaticMeshComponent_eventRemoveInstances_Parms
		{
			TArray<int32> InstancesToRemove;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancesToRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstancesToRemove;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstancesToRemove_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HierarchicalInstancedStaticMeshComponent_eventRemoveInstances_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HierarchicalInstancedStaticMeshComponent_eventRemoveInstances_Parms), &Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove = { "InstancesToRemove", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HierarchicalInstancedStaticMeshComponent_eventRemoveInstances_Parms, InstancesToRemove), METADATA_PARAMS(Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove_Inner = { "InstancesToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Removes all the instances with indices specified in the InstancesToRemove array. Returns true on success." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent, nullptr, "RemoveInstances", sizeof(HierarchicalInstancedStaticMeshComponent_eventRemoveInstances_Parms), Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister()
	{
		return UHierarchicalInstancedStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceCountToRender_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceCountToRender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[];
#endif
		static void NewProp_bDisableCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheMeshExtendedBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CacheMeshExtendedBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionLayerNumNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OcclusionLayerNumNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDensityScaling_MetaData[];
#endif
		static void NewProp_bEnableDensityScaling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDensityScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnbuiltInstanceBoundsList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnbuiltInstanceBoundsList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnbuiltInstanceBoundsList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnbuiltInstanceBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnbuiltInstanceBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuiltInstanceBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuiltInstanceBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumBuiltInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBuiltInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortedInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SortedInstances;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortedInstances_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInstancedStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances, "RemoveInstances" }, // 2540100833
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_InstanceCountToRender_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Instances to render (including removed one until the build is complete)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_InstanceCountToRender = { "InstanceCountToRender", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, InstanceCountToRender), METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_InstanceCountToRender_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_InstanceCountToRender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
	{
		((UHierarchicalInstancedStaticMeshComponent*)Obj)->bDisableCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision = { "bDisableCollision", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHierarchicalInstancedStaticMeshComponent), &Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_CacheMeshExtendedBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "The last mesh bounds that was cache" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_CacheMeshExtendedBounds = { "CacheMeshExtendedBounds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, CacheMeshExtendedBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_CacheMeshExtendedBounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_CacheMeshExtendedBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_OcclusionLayerNumNodes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "The number of nodes in the occlusion layer" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_OcclusionLayerNumNodes = { "OcclusionLayerNumNodes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, OcclusionLayerNumNodes), METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_OcclusionLayerNumNodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_OcclusionLayerNumNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Enable for detail meshes that don't really affect the game. Disable for anything important.\nTypically, this will be enabled for small meshes without collision (e.g. grass) and disabled for large meshes with collision (e.g. trees)" },
	};
#endif
	void Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling_SetBit(void* Obj)
	{
		((UHierarchicalInstancedStaticMeshComponent*)Obj)->bEnableDensityScaling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling = { "bEnableDensityScaling", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UHierarchicalInstancedStaticMeshComponent), &Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Bounds of each individual unbuilt instance, used for LOD calculation" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList = { "UnbuiltInstanceBoundsList", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, UnbuiltInstanceBoundsList), METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList_Inner = { "UnbuiltInstanceBoundsList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Bounding box of any unbuilt instances" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBounds = { "UnbuiltInstanceBounds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, UnbuiltInstanceBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_BuiltInstanceBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Bounding box of any built instances (cached from the ClusterTree)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_BuiltInstanceBounds = { "BuiltInstanceBounds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, BuiltInstanceBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_BuiltInstanceBounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_BuiltInstanceBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_NumBuiltInstances_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "The number of instances in the ClusterTree. Subsequent instances will always be rendered." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_NumBuiltInstances = { "NumBuiltInstances", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, NumBuiltInstances), METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_NumBuiltInstances_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_NumBuiltInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Table for remaping instances from cluster tree to PerInstanceSMData order" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances = { "SortedInstances", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, SortedInstances), METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances_Inner = { "SortedInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_InstanceCountToRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_CacheMeshExtendedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_OcclusionLayerNumNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_BuiltInstanceBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_NumBuiltInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHierarchicalInstancedStaticMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::ClassParams = {
		&UHierarchicalInstancedStaticMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHierarchicalInstancedStaticMeshComponent, 2595585703);
	template<> ENGINE_API UClass* StaticClass<UHierarchicalInstancedStaticMeshComponent>()
	{
		return UHierarchicalInstancedStaticMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHierarchicalInstancedStaticMeshComponent(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent, &UHierarchicalInstancedStaticMeshComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UHierarchicalInstancedStaticMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHierarchicalInstancedStaticMeshComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UHierarchicalInstancedStaticMeshComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
