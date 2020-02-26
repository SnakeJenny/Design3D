// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/VisualLogger/VisualLoggerAutomationTests.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerAutomationTests() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerAutomationTests_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerAutomationTests();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UVisualLoggerAutomationTests::StaticRegisterNativesUVisualLoggerAutomationTests()
	{
	}
	UClass* Z_Construct_UClass_UVisualLoggerAutomationTests_NoRegister()
	{
		return UVisualLoggerAutomationTests::StaticClass();
	}
	struct Z_Construct_UClass_UVisualLoggerAutomationTests_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVisualLoggerAutomationTests_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisualLoggerAutomationTests_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "UObject" },
		{ "IncludePath", "VisualLogger/VisualLoggerAutomationTests.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerAutomationTests.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVisualLoggerAutomationTests_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisualLoggerAutomationTests>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVisualLoggerAutomationTests_Statics::ClassParams = {
		&UVisualLoggerAutomationTests::StaticClass,
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
		0x000002A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVisualLoggerAutomationTests_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVisualLoggerAutomationTests_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVisualLoggerAutomationTests()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVisualLoggerAutomationTests_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVisualLoggerAutomationTests, 701466030);
	template<> ENGINE_API UClass* StaticClass<UVisualLoggerAutomationTests>()
	{
		return UVisualLoggerAutomationTests::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVisualLoggerAutomationTests(Z_Construct_UClass_UVisualLoggerAutomationTests, &UVisualLoggerAutomationTests::StaticClass, TEXT("/Script/Engine"), TEXT("UVisualLoggerAutomationTests"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualLoggerAutomationTests);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
