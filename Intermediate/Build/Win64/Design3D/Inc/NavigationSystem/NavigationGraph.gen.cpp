// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavGraph/NavigationGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationGraph() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNavGraphNode();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNavGraphEdge();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationGraph_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationGraph();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData();
// End Cross Module References
class UScriptStruct* FNavGraphNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NAVIGATIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FNavGraphNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavGraphNode, Z_Construct_UPackage__Script_NavigationSystem(), TEXT("NavGraphNode"), sizeof(FNavGraphNode), Get_Z_Construct_UScriptStruct_FNavGraphNode_Hash());
	}
	return Singleton;
}
template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<FNavGraphNode>()
{
	return FNavGraphNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavGraphNode(FNavGraphNode::StaticStruct, TEXT("/Script/NavigationSystem"), TEXT("NavGraphNode"), false, nullptr, nullptr);
static struct FScriptStruct_NavigationSystem_StaticRegisterNativesFNavGraphNode
{
	FScriptStruct_NavigationSystem_StaticRegisterNativesFNavGraphNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavGraphNode")),new UScriptStruct::TCppStructOps<FNavGraphNode>);
	}
} ScriptStruct_NavigationSystem_StaticRegisterNativesFNavGraphNode;
	struct Z_Construct_UScriptStruct_FNavGraphNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavGraphNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavGraph/NavigationGraph.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavGraphNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavGraphNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavGraphNode_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavGraph/NavigationGraph.h" },
		{ "ToolTip", "Who's this node referring to? This will most commonly point to an actor or a component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNavGraphNode_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNavGraphNode, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavGraphNode_Statics::NewProp_Owner_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavGraphNode_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavGraphNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavGraphNode_Statics::NewProp_Owner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavGraphNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
		nullptr,
		&NewStructOps,
		"NavGraphNode",
		sizeof(FNavGraphNode),
		alignof(FNavGraphNode),
		Z_Construct_UScriptStruct_FNavGraphNode_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNavGraphNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavGraphNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavGraphNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavGraphNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavGraphNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NavigationSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavGraphNode"), sizeof(FNavGraphNode), Get_Z_Construct_UScriptStruct_FNavGraphNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNavGraphNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavGraphNode_Hash() { return 509563226U; }
class UScriptStruct* FNavGraphEdge::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NAVIGATIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FNavGraphEdge_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavGraphEdge, Z_Construct_UPackage__Script_NavigationSystem(), TEXT("NavGraphEdge"), sizeof(FNavGraphEdge), Get_Z_Construct_UScriptStruct_FNavGraphEdge_Hash());
	}
	return Singleton;
}
template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<FNavGraphEdge>()
{
	return FNavGraphEdge::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavGraphEdge(FNavGraphEdge::StaticStruct, TEXT("/Script/NavigationSystem"), TEXT("NavGraphEdge"), false, nullptr, nullptr);
static struct FScriptStruct_NavigationSystem_StaticRegisterNativesFNavGraphEdge
{
	FScriptStruct_NavigationSystem_StaticRegisterNativesFNavGraphEdge()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavGraphEdge")),new UScriptStruct::TCppStructOps<FNavGraphEdge>);
	}
} ScriptStruct_NavigationSystem_StaticRegisterNativesFNavGraphEdge;
	struct Z_Construct_UScriptStruct_FNavGraphEdge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavGraphEdge_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavGraph/NavigationGraph.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavGraphEdge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavGraphEdge>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavGraphEdge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
		nullptr,
		&NewStructOps,
		"NavGraphEdge",
		sizeof(FNavGraphEdge),
		alignof(FNavGraphEdge),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavGraphEdge_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavGraphEdge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavGraphEdge()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavGraphEdge_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NavigationSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavGraphEdge"), sizeof(FNavGraphEdge), Get_Z_Construct_UScriptStruct_FNavGraphEdge_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNavGraphEdge_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavGraphEdge_Hash() { return 4022990050U; }
	void ANavigationGraph::StaticRegisterNativesANavigationGraph()
	{
	}
	UClass* Z_Construct_UClass_ANavigationGraph_NoRegister()
	{
		return ANavigationGraph::StaticClass();
	}
	struct Z_Construct_UClass_ANavigationGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavigationGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANavigationData,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavGraph/NavigationGraph.h" },
		{ "ModuleRelativePath", "Public/NavGraph/NavigationGraph.h" },
		{ "ToolTip", "currently abstract since it's not full implemented" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavigationGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigationGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavigationGraph_Statics::ClassParams = {
		&ANavigationGraph::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008800A7u,
		METADATA_PARAMS(Z_Construct_UClass_ANavigationGraph_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANavigationGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavigationGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavigationGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavigationGraph, 2032994005);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ANavigationGraph>()
	{
		return ANavigationGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavigationGraph(Z_Construct_UClass_ANavigationGraph, &ANavigationGraph::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("ANavigationGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
