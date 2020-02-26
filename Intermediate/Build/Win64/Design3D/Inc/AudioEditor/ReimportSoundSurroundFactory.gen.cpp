// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioEditor/Classes/Factories/ReimportSoundSurroundFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportSoundSurroundFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UReimportSoundSurroundFactory_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UReimportSoundSurroundFactory();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSurroundFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void UReimportSoundSurroundFactory::StaticRegisterNativesUReimportSoundSurroundFactory()
	{
	}
	UClass* Z_Construct_UClass_UReimportSoundSurroundFactory_NoRegister()
	{
		return UReimportSoundSurroundFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportSoundSurroundFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReimportPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReimportPaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReimportPaths_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportSoundSurroundFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundSurroundFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportSoundSurroundFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/ReimportSoundSurroundFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/ReimportSoundSurroundFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportSoundSurroundFactory_Statics::NewProp_ReimportPaths_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/ReimportSoundSurroundFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReimportSoundSurroundFactory_Statics::NewProp_ReimportPaths = { "ReimportPaths", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReimportSoundSurroundFactory, ReimportPaths), METADATA_PARAMS(Z_Construct_UClass_UReimportSoundSurroundFactory_Statics::NewProp_ReimportPaths_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReimportSoundSurroundFactory_Statics::NewProp_ReimportPaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UReimportSoundSurroundFactory_Statics::NewProp_ReimportPaths_Inner = { "ReimportPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReimportSoundSurroundFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReimportSoundSurroundFactory_Statics::NewProp_ReimportPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReimportSoundSurroundFactory_Statics::NewProp_ReimportPaths_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportSoundSurroundFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportSoundSurroundFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReimportSoundSurroundFactory_Statics::ClassParams = {
		&UReimportSoundSurroundFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReimportSoundSurroundFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UReimportSoundSurroundFactory_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReimportSoundSurroundFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UReimportSoundSurroundFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportSoundSurroundFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReimportSoundSurroundFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReimportSoundSurroundFactory, 3010186934);
	template<> AUDIOEDITOR_API UClass* StaticClass<UReimportSoundSurroundFactory>()
	{
		return UReimportSoundSurroundFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReimportSoundSurroundFactory(Z_Construct_UClass_UReimportSoundSurroundFactory, &UReimportSoundSurroundFactory::StaticClass, TEXT("/Script/AudioEditor"), TEXT("UReimportSoundSurroundFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportSoundSurroundFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
