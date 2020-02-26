// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioEditor/Classes/Factories/SoundAttenuationFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAttenuationFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundAttenuationFactory_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundAttenuationFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundAttenuationFactory::StaticRegisterNativesUSoundAttenuationFactory()
	{
	}
	UClass* Z_Construct_UClass_USoundAttenuationFactory_NoRegister()
	{
		return USoundAttenuationFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundAttenuationFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundAttenuationFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAttenuationFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundAttenuationFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SoundAttenuationFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundAttenuationFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundAttenuationFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundAttenuationFactory_Statics::ClassParams = {
		&USoundAttenuationFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundAttenuationFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundAttenuationFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundAttenuationFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundAttenuationFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundAttenuationFactory, 398438136);
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundAttenuationFactory>()
	{
		return USoundAttenuationFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundAttenuationFactory(Z_Construct_UClass_USoundAttenuationFactory, &USoundAttenuationFactory::StaticClass, TEXT("/Script/AudioEditor"), TEXT("USoundAttenuationFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAttenuationFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
