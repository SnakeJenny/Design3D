// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ActorFactories/ActorFactoryCylinderVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryCylinderVolume() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryCylinderVolume_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryCylinderVolume();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryVolume();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryCylinderVolume::StaticRegisterNativesUActorFactoryCylinderVolume()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryCylinderVolume_NoRegister()
	{
		return UActorFactoryCylinderVolume::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryCylinderVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryCylinderVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactoryVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryCylinderVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryCylinderVolume.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryCylinderVolume.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryCylinderVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryCylinderVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryCylinderVolume_Statics::ClassParams = {
		&UActorFactoryCylinderVolume::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryCylinderVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorFactoryCylinderVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryCylinderVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryCylinderVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryCylinderVolume, 3264226397);
	template<> UNREALED_API UClass* StaticClass<UActorFactoryCylinderVolume>()
	{
		return UActorFactoryCylinderVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryCylinderVolume(Z_Construct_UClass_UActorFactoryCylinderVolume, &UActorFactoryCylinderVolume::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UActorFactoryCylinderVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryCylinderVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
