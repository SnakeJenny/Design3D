// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/DataAsset.h"
#include "Serialization/StructuredArchiveFromArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ASSETREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FAssetBundleData();
// End Cross Module References
	void UDataAsset::StaticRegisterNativesUDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UDataAsset_NoRegister()
	{
		return UDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NativeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NativeClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/DataAsset.h" },
		{ "ModuleRelativePath", "Classes/Engine/DataAsset.h" },
		{ "SerializeToFStructuredArchive", "WITH_EDITORONLY_DATA" },
		{ "ToolTip", "Base class for a simple asset containing data. The editor will list this in the content browser if you inherit from this class" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataAsset_Statics::NewProp_NativeClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataAsset_Statics::NewProp_NativeClass = { "NativeClass", nullptr, (EPropertyFlags)0x0044010000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataAsset, NativeClass), Z_Construct_UClass_UDataAsset_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDataAsset_Statics::NewProp_NativeClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDataAsset_Statics::NewProp_NativeClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_Statics::NewProp_NativeClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_Statics::ClassParams = {
		&UDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataAsset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDataAsset_Statics::PropPointers),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDataAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDataAsset, 408849251);
	template<> ENGINE_API UClass* StaticClass<UDataAsset>()
	{
		return UDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDataAsset(Z_Construct_UClass_UDataAsset, &UDataAsset::StaticClass, TEXT("/Script/Engine"), TEXT("UDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset);
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FARCHIVE_SERIALIZER(UDataAsset)
#endif
	void UPrimaryDataAsset::StaticRegisterNativesUPrimaryDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UPrimaryDataAsset_NoRegister()
	{
		return UPrimaryDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPrimaryDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetBundleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetBundleData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrimaryDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimaryDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Engine/DataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/DataAsset.h" },
		{ "ToolTip", "A DataAsset that implements GetPrimaryAssetId and has asset bundle support, which makes it something that can be manually loaded/unloaded from the AssetManager\nMaking blueprint subclasses of this is useful because you can make blueprint-only primary asset types\nBlueprint subclasses will end up with a PrimaryAssetType equal to the name of the first native class found going up the hierarchy, or the top level blueprint class that directly subclasses this\nIE, if you have PrimaryDataAsset -> ParentNativeClass -> ChildNativeClass -> BlueprintAsset the type will be ChildNativeClass\nWhereas if you have PrimaryDataAsset -> ParentBlueprintClass -> ChildBlueprintClass the type will be ParentBlueprintClass\nTo override this behavior, override GetPrimaryAssetId in your native class" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimaryDataAsset_Statics::NewProp_AssetBundleData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DataAsset.h" },
		{ "ToolTip", "Asset Bundle data computed at save time. In cooked builds this is accessible from AssetRegistry" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPrimaryDataAsset_Statics::NewProp_AssetBundleData = { "AssetBundleData", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimaryDataAsset, AssetBundleData), Z_Construct_UScriptStruct_FAssetBundleData, METADATA_PARAMS(Z_Construct_UClass_UPrimaryDataAsset_Statics::NewProp_AssetBundleData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimaryDataAsset_Statics::NewProp_AssetBundleData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPrimaryDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryDataAsset_Statics::NewProp_AssetBundleData,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrimaryDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrimaryDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPrimaryDataAsset_Statics::ClassParams = {
		&UPrimaryDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UPrimaryDataAsset_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UPrimaryDataAsset_Statics::PropPointers), 0),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPrimaryDataAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPrimaryDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrimaryDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPrimaryDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPrimaryDataAsset, 2968462906);
	template<> ENGINE_API UClass* StaticClass<UPrimaryDataAsset>()
	{
		return UPrimaryDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPrimaryDataAsset(Z_Construct_UClass_UPrimaryDataAsset, &UPrimaryDataAsset::StaticClass, TEXT("/Script/Engine"), TEXT("UPrimaryDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrimaryDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
