// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavigationPathGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationPathGenerator() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationPathGenerator_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationPathGenerator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavigationPathGenerator::StaticRegisterNativesUNavigationPathGenerator()
	{
	}
	UClass* Z_Construct_UClass_UNavigationPathGenerator_NoRegister()
	{
		return UNavigationPathGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationPathGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationPathGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationPathGenerator_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/NavigationPathGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationPathGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INavigationPathGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationPathGenerator_Statics::ClassParams = {
		&UNavigationPathGenerator::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationPathGenerator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavigationPathGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationPathGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationPathGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationPathGenerator, 4263527463);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavigationPathGenerator>()
	{
		return UNavigationPathGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationPathGenerator(Z_Construct_UClass_UNavigationPathGenerator, &UNavigationPathGenerator::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("UNavigationPathGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationPathGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
