// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimPreviewAttacheInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimPreviewAttacheInstance() {}
// Cross Module References
	ANIMGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimPreviewAttacheInstance_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimPreviewAttacheInstance();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimCustomInstance();
// End Cross Module References
class UScriptStruct* FAnimPreviewAttacheInstanceProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy, Z_Construct_UPackage__Script_AnimGraph(), TEXT("AnimPreviewAttacheInstanceProxy"), sizeof(FAnimPreviewAttacheInstanceProxy), Get_Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPH_API UScriptStruct* StaticStruct<FAnimPreviewAttacheInstanceProxy>()
{
	return FAnimPreviewAttacheInstanceProxy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimPreviewAttacheInstanceProxy(FAnimPreviewAttacheInstanceProxy::StaticStruct, TEXT("/Script/AnimGraph"), TEXT("AnimPreviewAttacheInstanceProxy"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraph_StaticRegisterNativesFAnimPreviewAttacheInstanceProxy
{
	FScriptStruct_AnimGraph_StaticRegisterNativesFAnimPreviewAttacheInstanceProxy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimPreviewAttacheInstanceProxy")),new UScriptStruct::TCppStructOps<FAnimPreviewAttacheInstanceProxy>);
	}
} ScriptStruct_AnimGraph_StaticRegisterNativesFAnimPreviewAttacheInstanceProxy;
	struct Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AnimPreviewAttacheInstance.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimPreviewAttacheInstanceProxy>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"AnimPreviewAttacheInstanceProxy",
		sizeof(FAnimPreviewAttacheInstanceProxy),
		alignof(FAnimPreviewAttacheInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimPreviewAttacheInstanceProxy"), sizeof(FAnimPreviewAttacheInstanceProxy), Get_Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimPreviewAttacheInstanceProxy_Hash() { return 4056784745U; }
	void UAnimPreviewAttacheInstance::StaticRegisterNativesUAnimPreviewAttacheInstance()
	{
	}
	UClass* Z_Construct_UClass_UAnimPreviewAttacheInstance_NoRegister()
	{
		return UAnimPreviewAttacheInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAnimPreviewAttacheInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimPreviewAttacheInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCustomInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimPreviewAttacheInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimPreviewAttacheInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/AnimPreviewAttacheInstance.h" },
		{ "ToolTip", "This Instance only contains one AnimationAsset, and produce poses\nUsed by Preview in AnimGraph, Playing single animation in Kismet2 and etc" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimPreviewAttacheInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimPreviewAttacheInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimPreviewAttacheInstance_Statics::ClassParams = {
		&UAnimPreviewAttacheInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimPreviewAttacheInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimPreviewAttacheInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimPreviewAttacheInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimPreviewAttacheInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimPreviewAttacheInstance, 2258254985);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimPreviewAttacheInstance>()
	{
		return UAnimPreviewAttacheInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimPreviewAttacheInstance(Z_Construct_UClass_UAnimPreviewAttacheInstance, &UAnimPreviewAttacheInstance::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimPreviewAttacheInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimPreviewAttacheInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
