// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ActorFactories/ActorFactoryVectorFieldVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryVectorFieldVolume() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryVectorFieldVolume_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryVectorFieldVolume();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryVectorFieldVolume::StaticRegisterNativesUActorFactoryVectorFieldVolume()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryVectorFieldVolume_NoRegister()
	{
		return UActorFactoryVectorFieldVolume::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryVectorFieldVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryVectorFieldVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryVectorFieldVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryVectorFieldVolume.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryVectorFieldVolume.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryVectorFieldVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryVectorFieldVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryVectorFieldVolume_Statics::ClassParams = {
		&UActorFactoryVectorFieldVolume::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryVectorFieldVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorFactoryVectorFieldVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryVectorFieldVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryVectorFieldVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryVectorFieldVolume, 379358834);
	template<> UNREALED_API UClass* StaticClass<UActorFactoryVectorFieldVolume>()
	{
		return UActorFactoryVectorFieldVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryVectorFieldVolume(Z_Construct_UClass_UActorFactoryVectorFieldVolume, &UActorFactoryVectorFieldVolume::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UActorFactoryVectorFieldVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryVectorFieldVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
