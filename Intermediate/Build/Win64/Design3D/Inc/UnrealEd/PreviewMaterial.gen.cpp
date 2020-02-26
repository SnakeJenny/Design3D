// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/MaterialEditor/PreviewMaterial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreviewMaterial() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UPreviewMaterial_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UPreviewMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UPreviewMaterial::StaticRegisterNativesUPreviewMaterial()
	{
	}
	UClass* Z_Construct_UClass_UPreviewMaterial_NoRegister()
	{
		return UPreviewMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UPreviewMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPreviewMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterial,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreviewMaterial_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Thumbnail" },
		{ "IncludePath", "MaterialEditor/PreviewMaterial.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/PreviewMaterial.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPreviewMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPreviewMaterial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPreviewMaterial_Statics::ClassParams = {
		&UPreviewMaterial::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPreviewMaterial_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPreviewMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPreviewMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPreviewMaterial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPreviewMaterial, 2425401328);
	template<> UNREALED_API UClass* StaticClass<UPreviewMaterial>()
	{
		return UPreviewMaterial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPreviewMaterial(Z_Construct_UClass_UPreviewMaterial, &UPreviewMaterial::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UPreviewMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPreviewMaterial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
