// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/LevelFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_ULevelFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULevelFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void ULevelFactory::StaticRegisterNativesULevelFactory()
	{
	}
	UClass* Z_Construct_UClass_ULevelFactory_NoRegister()
	{
		return ULevelFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULevelFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/LevelFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/LevelFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelFactory_Statics::ClassParams = {
		&ULevelFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULevelFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelFactory, 1119765030);
	template<> UNREALED_API UClass* StaticClass<ULevelFactory>()
	{
		return ULevelFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelFactory(Z_Construct_UClass_ULevelFactory, &ULevelFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("ULevelFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
