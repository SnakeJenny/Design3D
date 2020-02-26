// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/PrimaryAssetLabel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimaryAssetLabel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryAssetLabel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryAssetLabel();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionReference();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRules();
// End Cross Module References
	void UPrimaryAssetLabel::StaticRegisterNativesUPrimaryAssetLabel()
	{
	}
	UClass* Z_Construct_UClass_UPrimaryAssetLabel_NoRegister()
	{
		return UPrimaryAssetLabel::StaticClass();
	}
	struct Z_Construct_UClass_UPrimaryAssetLabel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplicitBlueprints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExplicitBlueprints;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ExplicitBlueprints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplicitAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExplicitAssets;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ExplicitAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRuntimeLabel_MetaData[];
#endif
		static void NewProp_bIsRuntimeLabel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRuntimeLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLabelAssetsInMyDirectory_MetaData[];
#endif
		static void NewProp_bLabelAssetsInMyDirectory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLabelAssetsInMyDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rules;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrimaryAssetLabel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimaryAssetLabel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/PrimaryAssetLabel.h" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ToolTip", "A seed file that is created to mark referenced assets as part of this primary asset" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_AssetCollection_MetaData[] = {
		{ "Category", "PrimaryAssetLabel" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ToolTip", "Collection to load asset references out of" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_AssetCollection = { "AssetCollection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimaryAssetLabel, AssetCollection), Z_Construct_UScriptStruct_FCollectionReference, METADATA_PARAMS(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_AssetCollection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_AssetCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitBlueprints_MetaData[] = {
		{ "AssetBundles", "Explicit" },
		{ "BlueprintBaseOnly", "" },
		{ "Category", "PrimaryAssetLabel" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ToolTip", "List of manually specified blueprint assets to label" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitBlueprints = { "ExplicitBlueprints", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimaryAssetLabel, ExplicitBlueprints), METADATA_PARAMS(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitBlueprints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitBlueprints_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitBlueprints_Inner = { "ExplicitBlueprints", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitAssets_MetaData[] = {
		{ "AssetBundles", "Explicit" },
		{ "Category", "PrimaryAssetLabel" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ToolTip", "List of manually specified assets to label" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitAssets = { "ExplicitAssets", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimaryAssetLabel, ExplicitAssets), METADATA_PARAMS(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitAssets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitAssets_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitAssets_Inner = { "ExplicitAssets", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIsRuntimeLabel_MetaData[] = {
		{ "Category", "PrimaryAssetLabel" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ToolTip", "Set to true if the label asset itself should be cooked and available at runtime. This does not affect the assets that are labeled, they are set with cook rule" },
	};
#endif
	void Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIsRuntimeLabel_SetBit(void* Obj)
	{
		((UPrimaryAssetLabel*)Obj)->bIsRuntimeLabel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIsRuntimeLabel = { "bIsRuntimeLabel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPrimaryAssetLabel), &Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIsRuntimeLabel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIsRuntimeLabel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIsRuntimeLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bLabelAssetsInMyDirectory_MetaData[] = {
		{ "Category", "PrimaryAssetLabel" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ToolTip", "True to Label everything in this directory and sub directories" },
	};
#endif
	void Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bLabelAssetsInMyDirectory_SetBit(void* Obj)
	{
		((UPrimaryAssetLabel*)Obj)->bLabelAssetsInMyDirectory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bLabelAssetsInMyDirectory = { "bLabelAssetsInMyDirectory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPrimaryAssetLabel), &Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bLabelAssetsInMyDirectory_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bLabelAssetsInMyDirectory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bLabelAssetsInMyDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_Rules_MetaData[] = {
		{ "Category", "Rules" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Management rules for this specific asset, if set it will override the type rules" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPrimaryAssetLabel, Rules), Z_Construct_UScriptStruct_FPrimaryAssetRules, METADATA_PARAMS(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_Rules_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_Rules_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPrimaryAssetLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_AssetCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitBlueprints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitBlueprints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIsRuntimeLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bLabelAssetsInMyDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_Rules,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrimaryAssetLabel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrimaryAssetLabel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::ClassParams = {
		&UPrimaryAssetLabel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPrimaryAssetLabel_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPrimaryAssetLabel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPrimaryAssetLabel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPrimaryAssetLabel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrimaryAssetLabel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPrimaryAssetLabel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPrimaryAssetLabel, 143725444);
	template<> ENGINE_API UClass* StaticClass<UPrimaryAssetLabel>()
	{
		return UPrimaryAssetLabel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPrimaryAssetLabel(Z_Construct_UClass_UPrimaryAssetLabel, &UPrimaryAssetLabel::StaticClass, TEXT("/Script/Engine"), TEXT("UPrimaryAssetLabel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrimaryAssetLabel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
