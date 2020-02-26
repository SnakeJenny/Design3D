// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundEffectPreset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundEffectPreset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectPreset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectPreset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundEffectPreset::StaticRegisterNativesUSoundEffectPreset()
	{
	}
	UClass* Z_Construct_UClass_USoundEffectPreset_NoRegister()
	{
		return USoundEffectPreset::StaticClass();
	}
	struct Z_Construct_UClass_USoundEffectPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundEffectPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundEffectPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sound/SoundEffectPreset.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectPreset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundEffectPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundEffectPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundEffectPreset_Statics::ClassParams = {
		&USoundEffectPreset::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USoundEffectPreset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundEffectPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundEffectPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundEffectPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundEffectPreset, 3692713066);
	template<> ENGINE_API UClass* StaticClass<USoundEffectPreset>()
	{
		return USoundEffectPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundEffectPreset(Z_Construct_UClass_USoundEffectPreset, &USoundEffectPreset::StaticClass, TEXT("/Script/Engine"), TEXT("USoundEffectPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundEffectPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
