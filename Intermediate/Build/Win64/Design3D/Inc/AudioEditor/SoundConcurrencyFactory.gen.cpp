// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioEditor/Classes/Factories/SoundConcurrencyFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundConcurrencyFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundConcurrencyFactory_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundConcurrencyFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundConcurrencyFactory::StaticRegisterNativesUSoundConcurrencyFactory()
	{
	}
	UClass* Z_Construct_UClass_USoundConcurrencyFactory_NoRegister()
	{
		return USoundConcurrencyFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundConcurrencyFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundConcurrencyFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundConcurrencyFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundConcurrencyFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SoundConcurrencyFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundConcurrencyFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundConcurrencyFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundConcurrencyFactory_Statics::ClassParams = {
		&USoundConcurrencyFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundConcurrencyFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundConcurrencyFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundConcurrencyFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundConcurrencyFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundConcurrencyFactory, 2731050094);
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundConcurrencyFactory>()
	{
		return USoundConcurrencyFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundConcurrencyFactory(Z_Construct_UClass_USoundConcurrencyFactory, &USoundConcurrencyFactory::StaticClass, TEXT("/Script/AudioEditor"), TEXT("USoundConcurrencyFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundConcurrencyFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
