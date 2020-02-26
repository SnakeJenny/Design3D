// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_ApplyLimits.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ApplyLimits() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ApplyLimits();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAngularRangeLimit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_ApplyLimits::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_ApplyLimits"), sizeof(FAnimNode_ApplyLimits), Get_Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_ApplyLimits>()
{
	return FAnimNode_ApplyLimits::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_ApplyLimits(FAnimNode_ApplyLimits::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_ApplyLimits"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ApplyLimits
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ApplyLimits()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_ApplyLimits")),new UScriptStruct::TCppStructOps<FAnimNode_ApplyLimits>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ApplyLimits;
	struct Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AngularOffsets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularOffsets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularRangeLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AngularRangeLimits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularRangeLimits_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ApplyLimits>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularOffsets_MetaData[] = {
		{ "Category", "Angular" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularOffsets = { "AngularOffsets", nullptr, (EPropertyFlags)0x0010000000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ApplyLimits, AngularOffsets), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularOffsets_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularOffsets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularOffsets_Inner = { "AngularOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularRangeLimits_MetaData[] = {
		{ "Category", "Angular" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularRangeLimits = { "AngularRangeLimits", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ApplyLimits, AngularRangeLimits), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularRangeLimits_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularRangeLimits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularRangeLimits_Inner = { "AngularRangeLimits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAngularRangeLimit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularOffsets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularRangeLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::NewProp_AngularRangeLimits_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_ApplyLimits",
		sizeof(FAnimNode_ApplyLimits),
		alignof(FAnimNode_ApplyLimits),
		Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ApplyLimits()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_ApplyLimits"), sizeof(FAnimNode_ApplyLimits), Get_Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ApplyLimits_Hash() { return 2785329098U; }
class UScriptStruct* FAngularRangeLimit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAngularRangeLimit_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAngularRangeLimit, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AngularRangeLimit"), sizeof(FAngularRangeLimit), Get_Z_Construct_UScriptStruct_FAngularRangeLimit_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAngularRangeLimit>()
{
	return FAngularRangeLimit::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAngularRangeLimit(FAngularRangeLimit::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AngularRangeLimit"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAngularRangeLimit
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAngularRangeLimit()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AngularRangeLimit")),new UScriptStruct::TCppStructOps<FAngularRangeLimit>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAngularRangeLimit;
	struct Z_Construct_UScriptStruct_FAngularRangeLimit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LimitMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LimitMin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAngularRangeLimit>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Angular" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAngularRangeLimit, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_Bone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMax_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMax = { "LimitMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAngularRangeLimit, LimitMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMin_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ApplyLimits.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMin = { "LimitMin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAngularRangeLimit, LimitMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::NewProp_LimitMin,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"AngularRangeLimit",
		sizeof(FAngularRangeLimit),
		alignof(FAngularRangeLimit),
		Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAngularRangeLimit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAngularRangeLimit_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AngularRangeLimit"), sizeof(FAngularRangeLimit), Get_Z_Construct_UScriptStruct_FAngularRangeLimit_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAngularRangeLimit_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAngularRangeLimit_Hash() { return 1201981165U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
