// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeMaterialInstanceConstant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeMaterialInstanceConstant() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void ULandscapeMaterialInstanceConstant::StaticRegisterNativesULandscapeMaterialInstanceConstant()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister()
	{
		return ULandscapeMaterialInstanceConstant::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditorToolUsage_MetaData[];
#endif
		static void NewProp_bEditorToolUsage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditorToolUsage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobile_MetaData[];
#endif
		static void NewProp_bMobile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableTessellation_MetaData[];
#endif
		static void NewProp_bDisableTessellation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableTessellation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLayerThumbnail_MetaData[];
#endif
		static void NewProp_bIsLayerThumbnail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLayerThumbnail;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialInstanceConstant,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Thumbnail" },
		{ "IncludePath", "LandscapeMaterialInstanceConstant.h" },
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage_SetBit(void* Obj)
	{
		((ULandscapeMaterialInstanceConstant*)Obj)->bEditorToolUsage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage = { "bEditorToolUsage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULandscapeMaterialInstanceConstant), &Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile_SetBit(void* Obj)
	{
		((ULandscapeMaterialInstanceConstant*)Obj)->bMobile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile = { "bMobile", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULandscapeMaterialInstanceConstant), &Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation_SetBit(void* Obj)
	{
		((ULandscapeMaterialInstanceConstant*)Obj)->bDisableTessellation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation = { "bDisableTessellation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULandscapeMaterialInstanceConstant), &Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail_SetBit(void* Obj)
	{
		((ULandscapeMaterialInstanceConstant*)Obj)->bIsLayerThumbnail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail = { "bIsLayerThumbnail", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULandscapeMaterialInstanceConstant), &Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeMaterialInstanceConstant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::ClassParams = {
		&ULandscapeMaterialInstanceConstant::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::PropPointers),
		0,
		0x008820A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeMaterialInstanceConstant, 3812108963);
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeMaterialInstanceConstant>()
	{
		return ULandscapeMaterialInstanceConstant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeMaterialInstanceConstant(Z_Construct_UClass_ULandscapeMaterialInstanceConstant, &ULandscapeMaterialInstanceConstant::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeMaterialInstanceConstant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeMaterialInstanceConstant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
