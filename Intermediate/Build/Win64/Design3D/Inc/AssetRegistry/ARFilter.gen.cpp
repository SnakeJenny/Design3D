// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetRegistry/Public/ARFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARFilter() {}
// Cross Module References
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FARFilter();
	UPackage* Z_Construct_UPackage__Script_AssetRegistry();
// End Cross Module References
class UScriptStruct* FARFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASSETREGISTRY_API uint32 Get_Z_Construct_UScriptStruct_FARFilter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FARFilter, Z_Construct_UPackage__Script_AssetRegistry(), TEXT("ARFilter"), sizeof(FARFilter), Get_Z_Construct_UScriptStruct_FARFilter_Hash());
	}
	return Singleton;
}
template<> ASSETREGISTRY_API UScriptStruct* StaticStruct<FARFilter>()
{
	return FARFilter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FARFilter(FARFilter::StaticStruct, TEXT("/Script/AssetRegistry"), TEXT("ARFilter"), false, nullptr, nullptr);
static struct FScriptStruct_AssetRegistry_StaticRegisterNativesFARFilter
{
	FScriptStruct_AssetRegistry_StaticRegisterNativesFARFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ARFilter")),new UScriptStruct::TCppStructOps<FARFilter>);
	}
} ScriptStruct_AssetRegistry_StaticRegisterNativesFARFilter;
	struct Z_Construct_UScriptStruct_FARFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeOnlyOnDiskAssets_MetaData[];
#endif
		static void NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecursiveClasses_MetaData[];
#endif
		static void NewProp_bRecursiveClasses_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecursiveClasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecursivePaths_MetaData[];
#endif
		static void NewProp_bRecursivePaths_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecursivePaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecursiveClassesExclusionSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_RecursiveClassesExclusionSet;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RecursiveClassesExclusionSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClassNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClassNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectPaths;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ObjectPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PackagePaths;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackagePaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PackageNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARFilter.h" },
		{ "ToolTip", "A struct to serve as a filter for Asset Registry queries. Each component element is processed as an 'OR' operation while all the components are processed together as an 'AND' operation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FARFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARFilter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bIncludeOnlyOnDiskAssets_MetaData[] = {
		{ "Category", "AssetRegistry" },
		{ "ModuleRelativePath", "Public/ARFilter.h" },
		{ "ToolTip", "If true, only on-disk assets will be returned. Be warned that this is rarely what you want and should only be used for performance reasons" },
	};
#endif
	void Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj)
	{
		((FARFilter*)Obj)->bIncludeOnlyOnDiskAssets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bIncludeOnlyOnDiskAssets = { "bIncludeOnlyOnDiskAssets", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FARFilter), &Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bIncludeOnlyOnDiskAssets_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bIncludeOnlyOnDiskAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bRecursiveClasses_MetaData[] = {
		{ "Category", "AssetRegistry" },
		{ "ModuleRelativePath", "Public/ARFilter.h" },
		{ "ToolTip", "If true, subclasses of ClassNames will also be included and RecursiveClassesExclusionSet will be excluded." },
	};
#endif
	void Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bRecursiveClasses_SetBit(void* Obj)
	{
		((FARFilter*)Obj)->bRecursiveClasses = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bRecursiveClasses = { "bRecursiveClasses", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FARFilter), &Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bRecursiveClasses_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bRecursiveClasses_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bRecursiveClasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bRecursivePaths_MetaData[] = {
		{ "Category", "AssetRegistry" },
		{ "ModuleRelativePath", "Public/ARFilter.h" },
		{ "ToolTip", "If true, PackagePath components will be recursive" },
	};
#endif
	void Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bRecursivePaths_SetBit(void* Obj)
	{
		((FARFilter*)Obj)->bRecursivePaths = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bRecursivePaths = { "bRecursivePaths", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FARFilter), &Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bRecursivePaths_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bRecursivePaths_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bRecursivePaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_RecursiveClassesExclusionSet_MetaData[] = {
		{ "Category", "AssetRegistry" },
		{ "ModuleRelativePath", "Public/ARFilter.h" },
		{ "ToolTip", "Only if bRecursiveClasses is true, the results will exclude classes (and subclasses) in this list" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_RecursiveClassesExclusionSet = { "RecursiveClassesExclusionSet", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARFilter, RecursiveClassesExclusionSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_RecursiveClassesExclusionSet_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_RecursiveClassesExclusionSet_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_RecursiveClassesExclusionSet_ElementProp = { "RecursiveClassesExclusionSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_ClassNames_MetaData[] = {
		{ "Category", "AssetRegistry" },
		{ "ModuleRelativePath", "Public/ARFilter.h" },
		{ "ToolTip", "The filter component for class names. Instances of the specified classes, but not subclasses (by default), will be included. Derived classes will be included only if bRecursiveClasses is true." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_ClassNames = { "ClassNames", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARFilter, ClassNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_ClassNames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_ClassNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_ClassNames_Inner = { "ClassNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_ObjectPaths_MetaData[] = {
		{ "Category", "AssetRegistry" },
		{ "ModuleRelativePath", "Public/ARFilter.h" },
		{ "ToolTip", "The filter component containing specific object paths" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_ObjectPaths = { "ObjectPaths", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARFilter, ObjectPaths), METADATA_PARAMS(Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_ObjectPaths_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_ObjectPaths_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_ObjectPaths_Inner = { "ObjectPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_PackagePaths_MetaData[] = {
		{ "Category", "AssetRegistry" },
		{ "ModuleRelativePath", "Public/ARFilter.h" },
		{ "ToolTip", "The filter component for package paths" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_PackagePaths = { "PackagePaths", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARFilter, PackagePaths), METADATA_PARAMS(Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_PackagePaths_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_PackagePaths_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_PackagePaths_Inner = { "PackagePaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_PackageNames_MetaData[] = {
		{ "Category", "AssetRegistry" },
		{ "ModuleRelativePath", "Public/ARFilter.h" },
		{ "ToolTip", "The filter component for package names" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_PackageNames = { "PackageNames", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FARFilter, PackageNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_PackageNames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_PackageNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_PackageNames_Inner = { "PackageNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bIncludeOnlyOnDiskAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bRecursiveClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bRecursivePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_RecursiveClassesExclusionSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_RecursiveClassesExclusionSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_ClassNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_ClassNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_ObjectPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_ObjectPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_PackagePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_PackagePaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_PackageNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_PackageNames_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetRegistry,
		nullptr,
		&NewStructOps,
		"ARFilter",
		sizeof(FARFilter),
		alignof(FARFilter),
		Z_Construct_UScriptStruct_FARFilter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FARFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARFilter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FARFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FARFilter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AssetRegistry();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ARFilter"), sizeof(FARFilter), Get_Z_Construct_UScriptStruct_FARFilter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FARFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FARFilter_Hash() { return 1710264006U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
