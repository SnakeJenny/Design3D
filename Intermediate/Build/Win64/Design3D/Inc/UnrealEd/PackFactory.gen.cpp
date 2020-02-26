// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/PackFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePackFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UPackFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UPackFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UPackFactory::StaticRegisterNativesUPackFactory()
	{
	}
	UClass* Z_Construct_UClass_UPackFactory_NoRegister()
	{
		return UPackFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPackFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPackFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPackFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/PackFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/PackFactory.h" },
		{ "ToolTip", "Factory for unpacking upack files" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPackFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPackFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPackFactory_Statics::ClassParams = {
		&UPackFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPackFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPackFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPackFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPackFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPackFactory, 3369993805);
	template<> UNREALED_API UClass* StaticClass<UPackFactory>()
	{
		return UPackFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPackFactory(Z_Construct_UClass_UPackFactory, &UPackFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UPackFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPackFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
