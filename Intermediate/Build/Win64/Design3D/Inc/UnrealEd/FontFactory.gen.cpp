// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/FontFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFontFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFontFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFontFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UFontFactory::StaticRegisterNativesUFontFactory()
	{
	}
	UClass* Z_Construct_UClass_UFontFactory_NoRegister()
	{
		return UFontFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFontFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFontFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFontFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/FontFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/FontFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFontFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFontFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFontFactory_Statics::ClassParams = {
		&UFontFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFontFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFontFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFontFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFontFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFontFactory, 1853941986);
	template<> UNREALED_API UClass* StaticClass<UFontFactory>()
	{
		return UFontFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFontFactory(Z_Construct_UClass_UFontFactory, &UFontFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UFontFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFontFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
