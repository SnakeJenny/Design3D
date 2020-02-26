// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ThumbnailRendering/DefaultSizedThumbnailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultSizedThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDefaultSizedThumbnailRenderer::StaticRegisterNativesUDefaultSizedThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer_NoRegister()
	{
		return UDefaultSizedThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultSizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultSizeX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/DefaultSizedThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/DefaultSizedThumbnailRenderer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::NewProp_DefaultSizeY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/DefaultSizedThumbnailRenderer.h" },
		{ "ToolTip", "The default height of this thumbnail" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::NewProp_DefaultSizeY = { "DefaultSizeY", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultSizedThumbnailRenderer, DefaultSizeY), METADATA_PARAMS(Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::NewProp_DefaultSizeY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::NewProp_DefaultSizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::NewProp_DefaultSizeX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/DefaultSizedThumbnailRenderer.h" },
		{ "ToolTip", "The default width of this thumbnail" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::NewProp_DefaultSizeX = { "DefaultSizeX", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultSizedThumbnailRenderer, DefaultSizeX), METADATA_PARAMS(Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::NewProp_DefaultSizeX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::NewProp_DefaultSizeX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::NewProp_DefaultSizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::NewProp_DefaultSizeX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultSizedThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::ClassParams = {
		&UDefaultSizedThumbnailRenderer::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::PropPointers),
		0,
		0x000800A5u,
		METADATA_PARAMS(Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDefaultSizedThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDefaultSizedThumbnailRenderer, 1908305699);
	template<> UNREALED_API UClass* StaticClass<UDefaultSizedThumbnailRenderer>()
	{
		return UDefaultSizedThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDefaultSizedThumbnailRenderer(Z_Construct_UClass_UDefaultSizedThumbnailRenderer, &UDefaultSizedThumbnailRenderer::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UDefaultSizedThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultSizedThumbnailRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
