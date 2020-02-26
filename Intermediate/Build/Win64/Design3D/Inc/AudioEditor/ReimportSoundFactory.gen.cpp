// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioEditor/Classes/Factories/ReimportSoundFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportSoundFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UReimportSoundFactory_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UReimportSoundFactory();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void UReimportSoundFactory::StaticRegisterNativesUReimportSoundFactory()
	{
	}
	UClass* Z_Construct_UClass_UReimportSoundFactory_NoRegister()
	{
		return UReimportSoundFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportSoundFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportSoundFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportSoundFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/ReimportSoundFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/ReimportSoundFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportSoundFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportSoundFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReimportSoundFactory_Statics::ClassParams = {
		&UReimportSoundFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UReimportSoundFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UReimportSoundFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportSoundFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReimportSoundFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReimportSoundFactory, 488870363);
	template<> AUDIOEDITOR_API UClass* StaticClass<UReimportSoundFactory>()
	{
		return UReimportSoundFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReimportSoundFactory(Z_Construct_UClass_UReimportSoundFactory, &UReimportSoundFactory::StaticClass, TEXT("/Script/AudioEditor"), TEXT("UReimportSoundFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportSoundFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
