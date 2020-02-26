// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimData/BoneMaskFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneMaskFilter() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputBlendPose();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchFilter();
	ENGINE_API UClass* Z_Construct_UClass_UBoneMaskFilter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoneMaskFilter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FInputBlendPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInputBlendPose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputBlendPose, Z_Construct_UPackage__Script_Engine(), TEXT("InputBlendPose"), sizeof(FInputBlendPose), Get_Z_Construct_UScriptStruct_FInputBlendPose_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputBlendPose>()
{
	return FInputBlendPose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputBlendPose(FInputBlendPose::StaticStruct, TEXT("/Script/Engine"), TEXT("InputBlendPose"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInputBlendPose
{
	FScriptStruct_Engine_StaticRegisterNativesFInputBlendPose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputBlendPose")),new UScriptStruct::TCppStructOps<FInputBlendPose>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInputBlendPose;
	struct Z_Construct_UScriptStruct_FInputBlendPose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchFilters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BranchFilters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BranchFilters_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputBlendPose_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputBlendPose>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewProp_BranchFilters_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
		{ "ToolTip", "Bone Name to filter *" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewProp_BranchFilters = { "BranchFilters", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputBlendPose, BranchFilters), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewProp_BranchFilters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewProp_BranchFilters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewProp_BranchFilters_Inner = { "BranchFilters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBranchFilter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputBlendPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewProp_BranchFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputBlendPose_Statics::NewProp_BranchFilters_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputBlendPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputBlendPose",
		sizeof(FInputBlendPose),
		alignof(FInputBlendPose),
		Z_Construct_UScriptStruct_FInputBlendPose_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FInputBlendPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputBlendPose_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputBlendPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputBlendPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputBlendPose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputBlendPose"), sizeof(FInputBlendPose), Get_Z_Construct_UScriptStruct_FInputBlendPose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputBlendPose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputBlendPose_Hash() { return 734009363U; }
class UScriptStruct* FBranchFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBranchFilter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBranchFilter, Z_Construct_UPackage__Script_Engine(), TEXT("BranchFilter"), sizeof(FBranchFilter), Get_Z_Construct_UScriptStruct_FBranchFilter_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBranchFilter>()
{
	return FBranchFilter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBranchFilter(FBranchFilter::StaticStruct, TEXT("/Script/Engine"), TEXT("BranchFilter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBranchFilter
{
	FScriptStruct_Engine_StaticRegisterNativesFBranchFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BranchFilter")),new UScriptStruct::TCppStructOps<FBranchFilter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBranchFilter;
	struct Z_Construct_UScriptStruct_FBranchFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlendDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBranchFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBranchFilter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BlendDepth_MetaData[] = {
		{ "Category", "Branch" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
		{ "ToolTip", "Blend Depth *" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BlendDepth = { "BlendDepth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBranchFilter, BlendDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BlendDepth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BlendDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Branch" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
		{ "ToolTip", "Bone Name to filter *" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBranchFilter, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBranchFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BlendDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchFilter_Statics::NewProp_BoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBranchFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BranchFilter",
		sizeof(FBranchFilter),
		alignof(FBranchFilter),
		Z_Construct_UScriptStruct_FBranchFilter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchFilter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBranchFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBranchFilter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BranchFilter"), sizeof(FBranchFilter), Get_Z_Construct_UScriptStruct_FBranchFilter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBranchFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBranchFilter_Hash() { return 1201477396U; }
	void UBoneMaskFilter::StaticRegisterNativesUBoneMaskFilter()
	{
	}
	UClass* Z_Construct_UClass_UBoneMaskFilter_NoRegister()
	{
		return UBoneMaskFilter::StaticClass();
	}
	struct Z_Construct_UClass_UBoneMaskFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendPoses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendPoses;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendPoses_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoneMaskFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneMaskFilter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimData/BoneMaskFilter.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneMaskFilter_Statics::NewProp_BlendPoses_MetaData[] = {
		{ "Category", "BoneMask" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/BoneMaskFilter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBoneMaskFilter_Statics::NewProp_BlendPoses = { "BlendPoses", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoneMaskFilter, BlendPoses), METADATA_PARAMS(Z_Construct_UClass_UBoneMaskFilter_Statics::NewProp_BlendPoses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBoneMaskFilter_Statics::NewProp_BlendPoses_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoneMaskFilter_Statics::NewProp_BlendPoses_Inner = { "BlendPoses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoneMaskFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneMaskFilter_Statics::NewProp_BlendPoses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneMaskFilter_Statics::NewProp_BlendPoses_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoneMaskFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoneMaskFilter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBoneMaskFilter_Statics::ClassParams = {
		&UBoneMaskFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBoneMaskFilter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBoneMaskFilter_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBoneMaskFilter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBoneMaskFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoneMaskFilter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBoneMaskFilter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBoneMaskFilter, 2108042708);
	template<> ENGINE_API UClass* StaticClass<UBoneMaskFilter>()
	{
		return UBoneMaskFilter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBoneMaskFilter(Z_Construct_UClass_UBoneMaskFilter, &UBoneMaskFilter::StaticClass, TEXT("/Script/Engine"), TEXT("UBoneMaskFilter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoneMaskFilter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
