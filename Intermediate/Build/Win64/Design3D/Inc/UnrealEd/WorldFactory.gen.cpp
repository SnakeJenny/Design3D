// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/WorldFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UWorldFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UWorldFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UWorldFactory::StaticRegisterNativesUWorldFactory()
	{
	}
	UClass* Z_Construct_UClass_UWorldFactory_NoRegister()
	{
		return UWorldFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWorldFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/WorldFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/WorldFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWorldFactory_Statics::ClassParams = {
		&UWorldFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWorldFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWorldFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorldFactory, 2943259996);
	template<> UNREALED_API UClass* StaticClass<UWorldFactory>()
	{
		return UWorldFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorldFactory(Z_Construct_UClass_UWorldFactory, &UWorldFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UWorldFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
