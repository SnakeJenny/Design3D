// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMGEditor/Public/SlateVectorArtDataFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateVectorArtDataFactory() {}
// Cross Module References
	UMGEDITOR_API UClass* Z_Construct_UClass_USlateVectorArtDataFactory_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_USlateVectorArtDataFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	void USlateVectorArtDataFactory::StaticRegisterNativesUSlateVectorArtDataFactory()
	{
	}
	UClass* Z_Construct_UClass_USlateVectorArtDataFactory_NoRegister()
	{
		return USlateVectorArtDataFactory::StaticClass();
	}
	struct Z_Construct_UClass_USlateVectorArtDataFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateVectorArtDataFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateVectorArtDataFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SlateVectorArtDataFactory.h" },
		{ "ModuleRelativePath", "Public/SlateVectorArtDataFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateVectorArtDataFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateVectorArtDataFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlateVectorArtDataFactory_Statics::ClassParams = {
		&USlateVectorArtDataFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USlateVectorArtDataFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtDataFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateVectorArtDataFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlateVectorArtDataFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlateVectorArtDataFactory, 3601232719);
	template<> UMGEDITOR_API UClass* StaticClass<USlateVectorArtDataFactory>()
	{
		return USlateVectorArtDataFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateVectorArtDataFactory(Z_Construct_UClass_USlateVectorArtDataFactory, &USlateVectorArtDataFactory::StaticClass, TEXT("/Script/UMGEditor"), TEXT("USlateVectorArtDataFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateVectorArtDataFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
