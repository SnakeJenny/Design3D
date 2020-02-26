// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foliage/Public/InstancedFoliageActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstancedFoliageActor() {}
// Cross Module References
	FOLIAGE_API UClass* Z_Construct_UClass_AInstancedFoliageActor_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_AInstancedFoliageActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References
	void AInstancedFoliageActor::StaticRegisterNativesAInstancedFoliageActor()
	{
	}
	UClass* Z_Construct_UClass_AInstancedFoliageActor_NoRegister()
	{
		return AInstancedFoliageActor::StaticClass();
	}
	struct Z_Construct_UClass_AInstancedFoliageActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInstancedFoliageActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInstancedFoliageActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Rendering Mobility" },
		{ "IncludePath", "InstancedFoliageActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InstancedFoliageActor.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInstancedFoliageActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInstancedFoliageActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInstancedFoliageActor_Statics::ClassParams = {
		&AInstancedFoliageActor::StaticClass,
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
		0x008802A0u,
		METADATA_PARAMS(Z_Construct_UClass_AInstancedFoliageActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AInstancedFoliageActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInstancedFoliageActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInstancedFoliageActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInstancedFoliageActor, 1536281596);
	template<> FOLIAGE_API UClass* StaticClass<AInstancedFoliageActor>()
	{
		return AInstancedFoliageActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInstancedFoliageActor(Z_Construct_UClass_AInstancedFoliageActor, &AInstancedFoliageActor::StaticClass, TEXT("/Script/Foliage"), TEXT("AInstancedFoliageActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInstancedFoliageActor);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AInstancedFoliageActor)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
