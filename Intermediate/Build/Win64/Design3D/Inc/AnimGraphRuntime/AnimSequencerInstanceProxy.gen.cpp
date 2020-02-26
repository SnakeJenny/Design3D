// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/AnimSequencerInstanceProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequencerInstanceProxy() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
// End Cross Module References
class UScriptStruct* FAnimSequencerInstanceProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimSequencerInstanceProxy"), sizeof(FAnimSequencerInstanceProxy), Get_Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimSequencerInstanceProxy>()
{
	return FAnimSequencerInstanceProxy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimSequencerInstanceProxy(FAnimSequencerInstanceProxy::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimSequencerInstanceProxy"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimSequencerInstanceProxy
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimSequencerInstanceProxy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimSequencerInstanceProxy")),new UScriptStruct::TCppStructOps<FAnimSequencerInstanceProxy>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimSequencerInstanceProxy;
	struct Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimSequencerInstanceProxy.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSequencerInstanceProxy>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"AnimSequencerInstanceProxy",
		sizeof(FAnimSequencerInstanceProxy),
		alignof(FAnimSequencerInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimSequencerInstanceProxy"), sizeof(FAnimSequencerInstanceProxy), Get_Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy_Hash() { return 3135038939U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
