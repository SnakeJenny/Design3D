// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationCore/Public/NodeChain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeChain() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeChain();
	UPackage* Z_Construct_UPackage__Script_AnimationCore();
// End Cross Module References
class UScriptStruct* FNodeChain::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FNodeChain_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeChain, Z_Construct_UPackage__Script_AnimationCore(), TEXT("NodeChain"), sizeof(FNodeChain), Get_Z_Construct_UScriptStruct_FNodeChain_Hash());
	}
	return Singleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FNodeChain>()
{
	return FNodeChain::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeChain(FNodeChain::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("NodeChain"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFNodeChain
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFNodeChain()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NodeChain")),new UScriptStruct::TCppStructOps<FNodeChain>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFNodeChain;
	struct Z_Construct_UScriptStruct_FNodeChain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Nodes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeChain_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NodeChain.h" },
		{ "ToolTip", "A chain of nodes in a hierarchy" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeChain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeChain>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeChain_Statics::NewProp_Nodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/NodeChain.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNodeChain_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeChain, Nodes), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeChain_Statics::NewProp_Nodes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeChain_Statics::NewProp_Nodes_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNodeChain_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeChain_Statics::NewProp_Nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeChain_Statics::NewProp_Nodes_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeChain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"NodeChain",
		sizeof(FNodeChain),
		alignof(FNodeChain),
		Z_Construct_UScriptStruct_FNodeChain_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeChain_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeChain_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeChain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeChain()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeChain_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeChain"), sizeof(FNodeChain), Get_Z_Construct_UScriptStruct_FNodeChain_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNodeChain_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeChain_Hash() { return 4171992072U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
