// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioEditor/Classes/Factories/SoundSubmixEffectFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSubmixEffectFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSubmixEffectFactory_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSubmixEffectFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
// End Cross Module References
	void USoundSubmixEffectFactory::StaticRegisterNativesUSoundSubmixEffectFactory()
	{
	}
	UClass* Z_Construct_UClass_USoundSubmixEffectFactory_NoRegister()
	{
		return USoundSubmixEffectFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundSubmixEffectFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundEffectSubmixPresetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SoundEffectSubmixPresetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSubmixEffectFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixEffectFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundSubmixEffectFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SoundSubmixEffectFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixEffectFactory_Statics::NewProp_SoundEffectSubmixPresetClass_MetaData[] = {
		{ "Category", "CurveFactory" },
		{ "ModuleRelativePath", "Classes/Factories/SoundSubmixEffectFactory.h" },
		{ "ToolTip", "The type of sound source effect preset that will be created" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoundSubmixEffectFactory_Statics::NewProp_SoundEffectSubmixPresetClass = { "SoundEffectSubmixPresetClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSubmixEffectFactory, SoundEffectSubmixPresetClass), Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USoundSubmixEffectFactory_Statics::NewProp_SoundEffectSubmixPresetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundSubmixEffectFactory_Statics::NewProp_SoundEffectSubmixPresetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSubmixEffectFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixEffectFactory_Statics::NewProp_SoundEffectSubmixPresetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSubmixEffectFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSubmixEffectFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundSubmixEffectFactory_Statics::ClassParams = {
		&USoundSubmixEffectFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundSubmixEffectFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundSubmixEffectFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundSubmixEffectFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundSubmixEffectFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSubmixEffectFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundSubmixEffectFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundSubmixEffectFactory, 2125421473);
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundSubmixEffectFactory>()
	{
		return USoundSubmixEffectFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundSubmixEffectFactory(Z_Construct_UClass_USoundSubmixEffectFactory, &USoundSubmixEffectFactory::StaticClass, TEXT("/Script/AudioEditor"), TEXT("USoundSubmixEffectFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSubmixEffectFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
