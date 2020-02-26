// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/ModelFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UModelFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UModelFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UModelFactory::StaticRegisterNativesUModelFactory()
	{
	}
	UClass* Z_Construct_UClass_UModelFactory_NoRegister()
	{
		return UModelFactory::StaticClass();
	}
	struct Z_Construct_UClass_UModelFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModelFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/ModelFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/ModelFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModelFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModelFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModelFactory_Statics::ClassParams = {
		&UModelFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UModelFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UModelFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModelFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModelFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModelFactory, 942041990);
	template<> UNREALED_API UClass* StaticClass<UModelFactory>()
	{
		return UModelFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModelFactory(Z_Construct_UClass_UModelFactory, &UModelFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UModelFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModelFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
