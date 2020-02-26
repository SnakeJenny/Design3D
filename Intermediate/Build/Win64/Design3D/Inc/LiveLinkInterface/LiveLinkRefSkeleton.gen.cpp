// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/LiveLinkRefSkeleton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkRefSkeleton() {}
// Cross Module References
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRefSkeleton();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
class UScriptStruct* FLiveLinkRefSkeleton::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINKINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkRefSkeleton"), sizeof(FLiveLinkRefSkeleton), Get_Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Hash());
	}
	return Singleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkRefSkeleton>()
{
	return FLiveLinkRefSkeleton::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkRefSkeleton(FLiveLinkRefSkeleton::StaticStruct, TEXT("/Script/LiveLinkInterface"), TEXT("LiveLinkRefSkeleton"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkRefSkeleton
{
	FScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkRefSkeleton()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkRefSkeleton")),new UScriptStruct::TCppStructOps<FLiveLinkRefSkeleton>);
	}
} ScriptStruct_LiveLinkInterface_StaticRegisterNativesFLiveLinkRefSkeleton;
	struct Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneParents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneParents;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneParents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkRefSkeleton.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkRefSkeleton>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneParents_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkRefSkeleton.h" },
		{ "ToolTip", "Parent Indices: For each bone it specifies the index of its parent" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneParents = { "BoneParents", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkRefSkeleton, BoneParents), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneParents_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneParents_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneParents_Inner = { "BoneParents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkRefSkeleton.h" },
		{ "ToolTip", "Names of each bone in the skeleton" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkRefSkeleton, BoneNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneNames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneParents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneParents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewProp_BoneNames_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkRefSkeleton",
		sizeof(FLiveLinkRefSkeleton),
		alignof(FLiveLinkRefSkeleton),
		Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRefSkeleton()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkRefSkeleton"), sizeof(FLiveLinkRefSkeleton), Get_Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Hash() { return 2481261049U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
