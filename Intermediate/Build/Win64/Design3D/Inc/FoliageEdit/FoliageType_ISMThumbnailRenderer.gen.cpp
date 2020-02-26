// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoliageEdit/Public/FoliageType_ISMThumbnailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageType_ISMThumbnailRenderer() {}
// Cross Module References
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer_NoRegister();
	FOLIAGEEDIT_API UClass* Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_FoliageEdit();
// End Cross Module References
	void UFoliageType_ISMThumbnailRenderer::StaticRegisterNativesUFoliageType_ISMThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer_NoRegister()
	{
		return UFoliageType_ISMThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_FoliageEdit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FoliageType_ISMThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Public/FoliageType_ISMThumbnailRenderer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoliageType_ISMThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer_Statics::ClassParams = {
		&UFoliageType_ISMThumbnailRenderer::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFoliageType_ISMThumbnailRenderer, 3738957096);
	template<> FOLIAGEEDIT_API UClass* StaticClass<UFoliageType_ISMThumbnailRenderer>()
	{
		return UFoliageType_ISMThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFoliageType_ISMThumbnailRenderer(Z_Construct_UClass_UFoliageType_ISMThumbnailRenderer, &UFoliageType_ISMThumbnailRenderer::StaticClass, TEXT("/Script/FoliageEdit"), TEXT("UFoliageType_ISMThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoliageType_ISMThumbnailRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
