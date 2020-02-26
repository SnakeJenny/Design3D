// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Factories/SceneImportFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneImportFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_USceneImportFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_USceneImportFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USceneImportFactory::StaticRegisterNativesUSceneImportFactory()
	{
	}
	UClass* Z_Construct_UClass_USceneImportFactory_NoRegister()
	{
		return USceneImportFactory::StaticClass();
	}
	struct Z_Construct_UClass_USceneImportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneImportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneImportFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/SceneImportFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SceneImportFactory.h" },
		{ "ToolTip", "* Base class for all factories that import objects into a scene (e.g in a level)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneImportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneImportFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USceneImportFactory_Statics::ClassParams = {
		&USceneImportFactory::StaticClass,
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
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_USceneImportFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USceneImportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneImportFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USceneImportFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USceneImportFactory, 2558727528);
	template<> UNREALED_API UClass* StaticClass<USceneImportFactory>()
	{
		return USceneImportFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USceneImportFactory(Z_Construct_UClass_USceneImportFactory, &USceneImportFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("USceneImportFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneImportFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
