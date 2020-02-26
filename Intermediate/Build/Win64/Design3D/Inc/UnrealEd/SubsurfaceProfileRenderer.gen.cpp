// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ThumbnailRendering/SubsurfaceProfileRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubsurfaceProfileRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_USubsurfaceProfileRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_USubsurfaceProfileRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USubsurfaceProfileRenderer::StaticRegisterNativesUSubsurfaceProfileRenderer()
	{
	}
	UClass* Z_Construct_UClass_USubsurfaceProfileRenderer_NoRegister()
	{
		return USubsurfaceProfileRenderer::StaticClass();
	}
	struct Z_Construct_UClass_USubsurfaceProfileRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubsurfaceProfileRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubsurfaceProfileRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/SubsurfaceProfileRenderer.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SubsurfaceProfileRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubsurfaceProfileRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubsurfaceProfileRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubsurfaceProfileRenderer_Statics::ClassParams = {
		&USubsurfaceProfileRenderer::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubsurfaceProfileRenderer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USubsurfaceProfileRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubsurfaceProfileRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubsurfaceProfileRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubsurfaceProfileRenderer, 4138042546);
	template<> UNREALED_API UClass* StaticClass<USubsurfaceProfileRenderer>()
	{
		return USubsurfaceProfileRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubsurfaceProfileRenderer(Z_Construct_UClass_USubsurfaceProfileRenderer, &USubsurfaceProfileRenderer::StaticClass, TEXT("/Script/UnrealEd"), TEXT("USubsurfaceProfileRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubsurfaceProfileRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
