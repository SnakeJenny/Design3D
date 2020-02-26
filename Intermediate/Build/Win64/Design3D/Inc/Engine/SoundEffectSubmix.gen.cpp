// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundEffectSubmix.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundEffectSubmix() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectPreset();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundEffectSubmixPreset::StaticRegisterNativesUSoundEffectSubmixPreset()
	{
	}
	UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister()
	{
		return USoundEffectSubmixPreset::StaticClass();
	}
	struct Z_Construct_UClass_USoundEffectSubmixPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundEffectSubmixPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundEffectSubmixPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundEffectSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSubmix.h" },
		{ "ToolTip", "This is here to make sure users don't mix up source and submix effects in the editor. Asset sorting, drag-n-drop, etc." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundEffectSubmixPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundEffectSubmixPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundEffectSubmixPreset_Statics::ClassParams = {
		&USoundEffectSubmixPreset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundEffectSubmixPreset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundEffectSubmixPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundEffectSubmixPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundEffectSubmixPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundEffectSubmixPreset, 95053627);
	template<> ENGINE_API UClass* StaticClass<USoundEffectSubmixPreset>()
	{
		return USoundEffectSubmixPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundEffectSubmixPreset(Z_Construct_UClass_USoundEffectSubmixPreset, &USoundEffectSubmixPreset::StaticClass, TEXT("/Script/Engine"), TEXT("USoundEffectSubmixPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundEffectSubmixPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
