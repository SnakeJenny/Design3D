// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ThumbnailRendering/SkeletalMeshThumbnailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_USkeletalMeshThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_USkeletalMeshThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USkeletalMeshThumbnailRenderer::StaticRegisterNativesUSkeletalMeshThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_USkeletalMeshThumbnailRenderer_NoRegister()
	{
		return USkeletalMeshThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/SkeletalMeshThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SkeletalMeshThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshThumbnailRenderer_Statics::ClassParams = {
		&USkeletalMeshThumbnailRenderer::StaticClass,
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
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshThumbnailRenderer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkeletalMeshThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkeletalMeshThumbnailRenderer, 3115425871);
	template<> UNREALED_API UClass* StaticClass<USkeletalMeshThumbnailRenderer>()
	{
		return USkeletalMeshThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkeletalMeshThumbnailRenderer(Z_Construct_UClass_USkeletalMeshThumbnailRenderer, &USkeletalMeshThumbnailRenderer::StaticClass, TEXT("/Script/UnrealEd"), TEXT("USkeletalMeshThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshThumbnailRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
