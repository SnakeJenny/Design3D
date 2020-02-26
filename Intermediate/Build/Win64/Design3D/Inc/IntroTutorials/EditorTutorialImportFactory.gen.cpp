// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroTutorials/Private/EditorTutorialImportFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorTutorialImportFactory() {}
// Cross Module References
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UEditorTutorialImportFactory_NoRegister();
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UEditorTutorialImportFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_IntroTutorials();
// End Cross Module References
	void UEditorTutorialImportFactory::StaticRegisterNativesUEditorTutorialImportFactory()
	{
	}
	UClass* Z_Construct_UClass_UEditorTutorialImportFactory_NoRegister()
	{
		return UEditorTutorialImportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEditorTutorialImportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorTutorialImportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorialImportFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "EditorTutorialImportFactory.h" },
		{ "ModuleRelativePath", "Private/EditorTutorialImportFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorTutorialImportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorTutorialImportFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorTutorialImportFactory_Statics::ClassParams = {
		&UEditorTutorialImportFactory::StaticClass,
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
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorTutorialImportFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorialImportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorTutorialImportFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorTutorialImportFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorTutorialImportFactory, 3007792969);
	template<> INTROTUTORIALS_API UClass* StaticClass<UEditorTutorialImportFactory>()
	{
		return UEditorTutorialImportFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorTutorialImportFactory(Z_Construct_UClass_UEditorTutorialImportFactory, &UEditorTutorialImportFactory::StaticClass, TEXT("/Script/IntroTutorials"), TEXT("UEditorTutorialImportFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorTutorialImportFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
