// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeMature.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeMature() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeMature_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeMature();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeMature::StaticRegisterNativesUSoundNodeMature()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeMature_NoRegister()
	{
		return USoundNodeMature::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeMature_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeMature_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeMature_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Mature" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeMature.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeMature.h" },
		{ "ToolTip", "This SoundNode uses UEngine::bAllowMatureLanguage to determine whether child nodes\nthat have USoundWave::bMature=true should be played." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeMature_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeMature>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeMature_Statics::ClassParams = {
		&USoundNodeMature::StaticClass,
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
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeMature_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNodeMature_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeMature()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeMature_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeMature, 1906567897);
	template<> ENGINE_API UClass* StaticClass<USoundNodeMature>()
	{
		return USoundNodeMature::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeMature(Z_Construct_UClass_USoundNodeMature, &USoundNodeMature::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeMature"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeMature);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
