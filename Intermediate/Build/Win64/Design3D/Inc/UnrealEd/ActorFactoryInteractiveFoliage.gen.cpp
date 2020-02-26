// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ActorFactories/ActorFactoryInteractiveFoliage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryInteractiveFoliage() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryInteractiveFoliage_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryInteractiveFoliage();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryStaticMesh();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryInteractiveFoliage::StaticRegisterNativesUActorFactoryInteractiveFoliage()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryInteractiveFoliage_NoRegister()
	{
		return UActorFactoryInteractiveFoliage::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryInteractiveFoliage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryInteractiveFoliage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactoryStaticMesh,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryInteractiveFoliage_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryInteractiveFoliage.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryInteractiveFoliage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryInteractiveFoliage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryInteractiveFoliage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryInteractiveFoliage_Statics::ClassParams = {
		&UActorFactoryInteractiveFoliage::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryInteractiveFoliage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorFactoryInteractiveFoliage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryInteractiveFoliage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryInteractiveFoliage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryInteractiveFoliage, 99432381);
	template<> UNREALED_API UClass* StaticClass<UActorFactoryInteractiveFoliage>()
	{
		return UActorFactoryInteractiveFoliage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryInteractiveFoliage(Z_Construct_UClass_UActorFactoryInteractiveFoliage, &UActorFactoryInteractiveFoliage::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UActorFactoryInteractiveFoliage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryInteractiveFoliage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
