// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ActorFactories/ActorFactoryAnimationAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryAnimationAsset() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryAnimationAsset_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryAnimationAsset();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactorySkeletalMesh();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryAnimationAsset::StaticRegisterNativesUActorFactoryAnimationAsset()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryAnimationAsset_NoRegister()
	{
		return UActorFactoryAnimationAsset::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryAnimationAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryAnimationAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactorySkeletalMesh,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryAnimationAsset_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryAnimationAsset.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryAnimationAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryAnimationAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryAnimationAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryAnimationAsset_Statics::ClassParams = {
		&UActorFactoryAnimationAsset::StaticClass,
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
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryAnimationAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorFactoryAnimationAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryAnimationAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryAnimationAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryAnimationAsset, 59352649);
	template<> UNREALED_API UClass* StaticClass<UActorFactoryAnimationAsset>()
	{
		return UActorFactoryAnimationAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryAnimationAsset(Z_Construct_UClass_UActorFactoryAnimationAsset, &UActorFactoryAnimationAsset::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UActorFactoryAnimationAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryAnimationAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
