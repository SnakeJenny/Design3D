// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/ReimportFbxSceneFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportFbxSceneFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UReimportFbxSceneFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UReimportFbxSceneFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UReimportFbxSceneFactory::StaticRegisterNativesUReimportFbxSceneFactory()
	{
	}
	UClass* Z_Construct_UClass_UReimportFbxSceneFactory_NoRegister()
	{
		return UReimportFbxSceneFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportFbxSceneFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportFbxSceneFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFbxSceneImportFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportFbxSceneFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/ReimportFbxSceneFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/ReimportFbxSceneFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportFbxSceneFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportFbxSceneFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReimportFbxSceneFactory_Statics::ClassParams = {
		&UReimportFbxSceneFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UReimportFbxSceneFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UReimportFbxSceneFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportFbxSceneFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReimportFbxSceneFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReimportFbxSceneFactory, 151394869);
	template<> UNREALED_API UClass* StaticClass<UReimportFbxSceneFactory>()
	{
		return UReimportFbxSceneFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReimportFbxSceneFactory(Z_Construct_UClass_UReimportFbxSceneFactory, &UReimportFbxSceneFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UReimportFbxSceneFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportFbxSceneFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
