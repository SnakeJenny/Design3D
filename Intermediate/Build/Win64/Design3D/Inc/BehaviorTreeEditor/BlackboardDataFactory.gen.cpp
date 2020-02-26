// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTreeEditor/Classes/BlackboardDataFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardDataFactory() {}
// Cross Module References
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBlackboardDataFactory_NoRegister();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBlackboardDataFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_BehaviorTreeEditor();
// End Cross Module References
	void UBlackboardDataFactory::StaticRegisterNativesUBlackboardDataFactory()
	{
	}
	UClass* Z_Construct_UClass_UBlackboardDataFactory_NoRegister()
	{
		return UBlackboardDataFactory::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardDataFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardDataFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardDataFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlackboardDataFactory.h" },
		{ "ModuleRelativePath", "Classes/BlackboardDataFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardDataFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardDataFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardDataFactory_Statics::ClassParams = {
		&UBlackboardDataFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlackboardDataFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlackboardDataFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackboardDataFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlackboardDataFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlackboardDataFactory, 3807987980);
	template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<UBlackboardDataFactory>()
	{
		return UBlackboardDataFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlackboardDataFactory(Z_Construct_UClass_UBlackboardDataFactory, &UBlackboardDataFactory::StaticClass, TEXT("/Script/BehaviorTreeEditor"), TEXT("UBlackboardDataFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardDataFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
