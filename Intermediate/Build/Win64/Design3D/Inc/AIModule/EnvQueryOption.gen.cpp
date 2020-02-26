// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryOption() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryOption_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryOption();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_NoRegister();
// End Cross Module References
	void UEnvQueryOption::StaticRegisterNativesUEnvQueryOption()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryOption_NoRegister()
	{
		return UEnvQueryOption::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryOption_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tests;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryOption_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryOption_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/EnvQueryOption.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryOption.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Tests_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryOption.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Tests = { "Tests", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryOption, Tests), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Tests_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Tests_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Tests_Inner = { "Tests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEnvQueryTest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Generator_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryOption.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryOption, Generator), Z_Construct_UClass_UEnvQueryGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Generator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Generator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Tests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Tests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Generator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryOption_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryOption>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryOption_Statics::ClassParams = {
		&UEnvQueryOption::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryOption_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEnvQueryOption_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryOption_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryOption_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryOption()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryOption_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryOption, 2976041640);
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryOption>()
	{
		return UEnvQueryOption::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryOption(Z_Construct_UClass_UEnvQueryOption, &UEnvQueryOption::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryOption"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryOption);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
