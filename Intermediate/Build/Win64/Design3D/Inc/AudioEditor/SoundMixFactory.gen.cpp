// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioEditor/Classes/Factories/SoundMixFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundMixFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundMixFactory_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundMixFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundMixFactory::StaticRegisterNativesUSoundMixFactory()
	{
	}
	UClass* Z_Construct_UClass_USoundMixFactory_NoRegister()
	{
		return USoundMixFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundMixFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundMixFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundMixFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundMixFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SoundMixFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundMixFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundMixFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundMixFactory_Statics::ClassParams = {
		&USoundMixFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundMixFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundMixFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundMixFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundMixFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundMixFactory, 212771433);
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundMixFactory>()
	{
		return USoundMixFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundMixFactory(Z_Construct_UClass_USoundMixFactory, &USoundMixFactory::StaticClass, TEXT("/Script/AudioEditor"), TEXT("USoundMixFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundMixFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
