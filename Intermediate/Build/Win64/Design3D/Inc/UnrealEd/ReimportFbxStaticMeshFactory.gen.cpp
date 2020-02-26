// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/ReimportFbxStaticMeshFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportFbxStaticMeshFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UReimportFbxStaticMeshFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UReimportFbxStaticMeshFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFbxFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UReimportFbxStaticMeshFactory::StaticRegisterNativesUReimportFbxStaticMeshFactory()
	{
	}
	UClass* Z_Construct_UClass_UReimportFbxStaticMeshFactory_NoRegister()
	{
		return UReimportFbxStaticMeshFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportFbxStaticMeshFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportFbxStaticMeshFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFbxFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportFbxStaticMeshFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/ReimportFbxStaticMeshFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/ReimportFbxStaticMeshFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportFbxStaticMeshFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportFbxStaticMeshFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReimportFbxStaticMeshFactory_Statics::ClassParams = {
		&UReimportFbxStaticMeshFactory::StaticClass,
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
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReimportFbxStaticMeshFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UReimportFbxStaticMeshFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportFbxStaticMeshFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReimportFbxStaticMeshFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReimportFbxStaticMeshFactory, 2101775922);
	template<> UNREALED_API UClass* StaticClass<UReimportFbxStaticMeshFactory>()
	{
		return UReimportFbxStaticMeshFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReimportFbxStaticMeshFactory(Z_Construct_UClass_UReimportFbxStaticMeshFactory, &UReimportFbxStaticMeshFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UReimportFbxStaticMeshFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportFbxStaticMeshFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
