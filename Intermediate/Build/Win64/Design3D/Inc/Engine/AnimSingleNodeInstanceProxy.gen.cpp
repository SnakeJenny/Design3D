// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Animation/AnimSingleNodeInstanceProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSingleNodeInstanceProxy() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SingleNode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimSingleNodeInstanceProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy, Z_Construct_UPackage__Script_Engine(), TEXT("AnimSingleNodeInstanceProxy"), sizeof(FAnimSingleNodeInstanceProxy), Get_Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSingleNodeInstanceProxy>()
{
	return FAnimSingleNodeInstanceProxy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimSingleNodeInstanceProxy(FAnimSingleNodeInstanceProxy::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimSingleNodeInstanceProxy"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimSingleNodeInstanceProxy
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimSingleNodeInstanceProxy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimSingleNodeInstanceProxy")),new UScriptStruct::TCppStructOps<FAnimSingleNodeInstanceProxy>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimSingleNodeInstanceProxy;
	struct Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimSingleNodeInstanceProxy.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSingleNodeInstanceProxy>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"AnimSingleNodeInstanceProxy",
		sizeof(FAnimSingleNodeInstanceProxy),
		alignof(FAnimSingleNodeInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimSingleNodeInstanceProxy"), sizeof(FAnimSingleNodeInstanceProxy), Get_Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Hash() { return 4136804296U; }
class UScriptStruct* FAnimNode_SingleNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SingleNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SingleNode, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_SingleNode"), sizeof(FAnimNode_SingleNode), Get_Z_Construct_UScriptStruct_FAnimNode_SingleNode_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_SingleNode>()
{
	return FAnimNode_SingleNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_SingleNode(FAnimNode_SingleNode::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_SingleNode"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_SingleNode
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_SingleNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_SingleNode")),new UScriptStruct::TCppStructOps<FAnimNode_SingleNode>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_SingleNode;
	struct Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimSingleNodeInstanceProxy.h" },
		{ "ToolTip", "Local anim node for extensible processing.\nCant be used outside of this context as it has no graph node counterpart" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SingleNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/Animation/AnimSingleNodeInstanceProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SingleNode, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::NewProp_SourcePose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::NewProp_SourcePose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::NewProp_SourcePose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_SingleNode",
		sizeof(FAnimNode_SingleNode),
		alignof(FAnimNode_SingleNode),
		Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SingleNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SingleNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_SingleNode"), sizeof(FAnimNode_SingleNode), Get_Z_Construct_UScriptStruct_FAnimNode_SingleNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SingleNode_Hash() { return 3107826040U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
