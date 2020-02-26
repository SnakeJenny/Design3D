// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ThumbnailRendering/SoundWaveThumbnailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundWaveThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_USoundWaveThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_USoundWaveThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USoundWaveThumbnailRenderer::StaticRegisterNativesUSoundWaveThumbnailRenderer()
	{
	}
	UClass* Z_Construct_UClass_USoundWaveThumbnailRenderer_NoRegister()
	{
		return USoundWaveThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_USoundWaveThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundWaveThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWaveThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/SoundWaveThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/SoundWaveThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundWaveThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundWaveThumbnailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundWaveThumbnailRenderer_Statics::ClassParams = {
		&USoundWaveThumbnailRenderer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundWaveThumbnailRenderer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundWaveThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundWaveThumbnailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundWaveThumbnailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundWaveThumbnailRenderer, 1707707669);
	template<> UNREALED_API UClass* StaticClass<USoundWaveThumbnailRenderer>()
	{
		return USoundWaveThumbnailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundWaveThumbnailRenderer(Z_Construct_UClass_USoundWaveThumbnailRenderer, &USoundWaveThumbnailRenderer::StaticClass, TEXT("/Script/UnrealEd"), TEXT("USoundWaveThumbnailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundWaveThumbnailRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
