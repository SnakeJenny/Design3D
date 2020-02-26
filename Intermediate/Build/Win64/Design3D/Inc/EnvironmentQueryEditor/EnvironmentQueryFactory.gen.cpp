// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnvironmentQueryEditor/Classes/EnvironmentQueryFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvironmentQueryFactory() {}
// Cross Module References
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryFactory_NoRegister();
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_EnvironmentQueryEditor();
// End Cross Module References
	void UEnvironmentQueryFactory::StaticRegisterNativesUEnvironmentQueryFactory()
	{
	}
	UClass* Z_Construct_UClass_UEnvironmentQueryFactory_NoRegister()
	{
		return UEnvironmentQueryFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEnvironmentQueryFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvironmentQueryFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_EnvironmentQueryEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvironmentQueryFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "EnvironmentQueryFactory.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQueryFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvironmentQueryFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvironmentQueryFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvironmentQueryFactory_Statics::ClassParams = {
		&UEnvironmentQueryFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEnvironmentQueryFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvironmentQueryFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvironmentQueryFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvironmentQueryFactory, 4160709699);
	template<> ENVIRONMENTQUERYEDITOR_API UClass* StaticClass<UEnvironmentQueryFactory>()
	{
		return UEnvironmentQueryFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvironmentQueryFactory(Z_Construct_UClass_UEnvironmentQueryFactory, &UEnvironmentQueryFactory::StaticClass, TEXT("/Script/EnvironmentQueryEditor"), TEXT("UEnvironmentQueryFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvironmentQueryFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
