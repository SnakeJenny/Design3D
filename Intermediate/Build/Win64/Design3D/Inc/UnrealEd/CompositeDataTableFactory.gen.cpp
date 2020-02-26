// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/CompositeDataTableFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeDataTableFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCompositeDataTableFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCompositeDataTableFactory();
	UNREALED_API UClass* Z_Construct_UClass_UDataTableFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCompositeDataTableFactory::StaticRegisterNativesUCompositeDataTableFactory()
	{
	}
	UClass* Z_Construct_UClass_UCompositeDataTableFactory_NoRegister()
	{
		return UCompositeDataTableFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCompositeDataTableFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositeDataTableFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataTableFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeDataTableFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/CompositeDataTableFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/CompositeDataTableFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositeDataTableFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeDataTableFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCompositeDataTableFactory_Statics::ClassParams = {
		&UCompositeDataTableFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositeDataTableFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCompositeDataTableFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositeDataTableFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCompositeDataTableFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCompositeDataTableFactory, 3928953021);
	template<> UNREALED_API UClass* StaticClass<UCompositeDataTableFactory>()
	{
		return UCompositeDataTableFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCompositeDataTableFactory(Z_Construct_UClass_UCompositeDataTableFactory, &UCompositeDataTableFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UCompositeDataTableFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeDataTableFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
