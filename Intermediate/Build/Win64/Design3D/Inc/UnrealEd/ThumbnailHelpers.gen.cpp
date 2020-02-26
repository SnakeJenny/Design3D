// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/ThumbnailHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThumbnailHelpers() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_ASkeletalMeshActor();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void AAnimationThumbnailSkeletalMeshActor::StaticRegisterNativesAAnimationThumbnailSkeletalMeshActor()
	{
	}
	UClass* Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor_NoRegister()
	{
		return AAnimationThumbnailSkeletalMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASkeletalMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "ISkeletalMeshes" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "ThumbnailHelpers.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Public/ThumbnailHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnimationThumbnailSkeletalMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor_Statics::ClassParams = {
		&AAnimationThumbnailSkeletalMeshActor::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAnimationThumbnailSkeletalMeshActor, 2405025967);
	template<> UNREALED_API UClass* StaticClass<AAnimationThumbnailSkeletalMeshActor>()
	{
		return AAnimationThumbnailSkeletalMeshActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAnimationThumbnailSkeletalMeshActor(Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor, &AAnimationThumbnailSkeletalMeshActor::StaticClass, TEXT("/Script/UnrealEd"), TEXT("AAnimationThumbnailSkeletalMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAnimationThumbnailSkeletalMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
