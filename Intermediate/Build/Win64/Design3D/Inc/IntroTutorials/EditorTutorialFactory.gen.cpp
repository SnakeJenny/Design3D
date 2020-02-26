// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroTutorials/Private/EditorTutorialFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorTutorialFactory() {}
// Cross Module References
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UEditorTutorialFactory_NoRegister();
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UEditorTutorialFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_IntroTutorials();
// End Cross Module References
	void UEditorTutorialFactory::StaticRegisterNativesUEditorTutorialFactory()
	{
	}
	UClass* Z_Construct_UClass_UEditorTutorialFactory_NoRegister()
	{
		return UEditorTutorialFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEditorTutorialFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorTutorialFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorialFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "EditorTutorialFactory.h" },
		{ "ModuleRelativePath", "Private/EditorTutorialFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorTutorialFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorTutorialFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorTutorialFactory_Statics::ClassParams = {
		&UEditorTutorialFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorTutorialFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorialFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorTutorialFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorTutorialFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorTutorialFactory, 2269903051);
	template<> INTROTUTORIALS_API UClass* StaticClass<UEditorTutorialFactory>()
	{
		return UEditorTutorialFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorTutorialFactory(Z_Construct_UClass_UEditorTutorialFactory, &UEditorTutorialFactory::StaticClass, TEXT("/Script/IntroTutorials"), TEXT("UEditorTutorialFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorTutorialFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
