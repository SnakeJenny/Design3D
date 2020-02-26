// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeAssetReferencer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeAssetReferencer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeAssetReferencer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeAssetReferencer();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeAssetReferencer::StaticRegisterNativesUSoundNodeAssetReferencer()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeAssetReferencer_NoRegister()
	{
		return USoundNodeAssetReferencer::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeAssetReferencer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeAssetReferencer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeAssetReferencer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundNodeAssetReferencer.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeAssetReferencer.h" },
		{ "ToolTip", "Sound node that contains a reference to the raw wave file to be played" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeAssetReferencer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeAssetReferencer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeAssetReferencer_Statics::ClassParams = {
		&USoundNodeAssetReferencer::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeAssetReferencer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNodeAssetReferencer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeAssetReferencer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeAssetReferencer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeAssetReferencer, 3597730463);
	template<> ENGINE_API UClass* StaticClass<USoundNodeAssetReferencer>()
	{
		return USoundNodeAssetReferencer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeAssetReferencer(Z_Construct_UClass_USoundNodeAssetReferencer, &USoundNodeAssetReferencer::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeAssetReferencer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeAssetReferencer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
