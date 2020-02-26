// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/PackageFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePackageFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UPackageFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UPackageFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UPackageFactory::StaticRegisterNativesUPackageFactory()
	{
	}
	UClass* Z_Construct_UClass_UPackageFactory_NoRegister()
	{
		return UPackageFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPackageFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPackageFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPackageFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/PackageFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/PackageFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPackageFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPackageFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPackageFactory_Statics::ClassParams = {
		&UPackageFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPackageFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPackageFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPackageFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPackageFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPackageFactory, 1557244701);
	template<> UNREALED_API UClass* StaticClass<UPackageFactory>()
	{
		return UPackageFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPackageFactory(Z_Construct_UClass_UPackageFactory, &UPackageFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UPackageFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPackageFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
