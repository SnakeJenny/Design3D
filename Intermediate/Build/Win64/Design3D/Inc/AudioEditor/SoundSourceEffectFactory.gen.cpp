// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioEditor/Classes/Factories/SoundSourceEffectFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSourceEffectFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSourceEffectFactory_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSourceEffectFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSourceEffectChainFactory_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSourceEffectChainFactory();
// End Cross Module References
	void USoundSourceEffectFactory::StaticRegisterNativesUSoundSourceEffectFactory()
	{
	}
	UClass* Z_Construct_UClass_USoundSourceEffectFactory_NoRegister()
	{
		return USoundSourceEffectFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundSourceEffectFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundEffectSourcepresetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SoundEffectSourcepresetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSourceEffectFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceEffectFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundSourceEffectFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SoundSourceEffectFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceEffectFactory_Statics::NewProp_SoundEffectSourcepresetClass_MetaData[] = {
		{ "Category", "CurveFactory" },
		{ "ModuleRelativePath", "Classes/Factories/SoundSourceEffectFactory.h" },
		{ "ToolTip", "The type of sound source effect preset that will be created" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoundSourceEffectFactory_Statics::NewProp_SoundEffectSourcepresetClass = { "SoundEffectSourcepresetClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSourceEffectFactory, SoundEffectSourcepresetClass), Z_Construct_UClass_USoundEffectSourcePreset_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USoundSourceEffectFactory_Statics::NewProp_SoundEffectSourcepresetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundSourceEffectFactory_Statics::NewProp_SoundEffectSourcepresetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSourceEffectFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceEffectFactory_Statics::NewProp_SoundEffectSourcepresetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSourceEffectFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSourceEffectFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundSourceEffectFactory_Statics::ClassParams = {
		&USoundSourceEffectFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundSourceEffectFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundSourceEffectFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundSourceEffectFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundSourceEffectFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSourceEffectFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundSourceEffectFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundSourceEffectFactory, 3472344505);
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundSourceEffectFactory>()
	{
		return USoundSourceEffectFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundSourceEffectFactory(Z_Construct_UClass_USoundSourceEffectFactory, &USoundSourceEffectFactory::StaticClass, TEXT("/Script/AudioEditor"), TEXT("USoundSourceEffectFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSourceEffectFactory);
	void USoundSourceEffectChainFactory::StaticRegisterNativesUSoundSourceEffectChainFactory()
	{
	}
	UClass* Z_Construct_UClass_USoundSourceEffectChainFactory_NoRegister()
	{
		return USoundSourceEffectChainFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundSourceEffectChainFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSourceEffectChainFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceEffectChainFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundSourceEffectFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SoundSourceEffectFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSourceEffectChainFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSourceEffectChainFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundSourceEffectChainFactory_Statics::ClassParams = {
		&USoundSourceEffectChainFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundSourceEffectChainFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundSourceEffectChainFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSourceEffectChainFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundSourceEffectChainFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundSourceEffectChainFactory, 2592737301);
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundSourceEffectChainFactory>()
	{
		return USoundSourceEffectChainFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundSourceEffectChainFactory(Z_Construct_UClass_USoundSourceEffectChainFactory, &USoundSourceEffectChainFactory::StaticClass, TEXT("/Script/AudioEditor"), TEXT("USoundSourceEffectChainFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSourceEffectChainFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
