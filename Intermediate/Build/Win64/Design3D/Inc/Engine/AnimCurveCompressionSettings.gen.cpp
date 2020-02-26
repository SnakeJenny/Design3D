// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_NoRegister();
// End Cross Module References
	void UAnimCurveCompressionSettings::StaticRegisterNativesUAnimCurveCompressionSettings()
	{
	}
	UClass* Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister()
	{
		return UAnimCurveCompressionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCurveCompressionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Codec_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Codec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimCurveCompressionSettings.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionSettings.h" },
		{ "ToolTip", "* This object is used to wrap a curve compression codec. It allows a clean integration in the editor by avoiding the need\n* to create asset types and factory wrappers for every codec." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::NewProp_Codec_MetaData[] = {
		{ "Category", "Compression" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionSettings.h" },
		{ "ToolTip", "An animation curve compression codec." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::NewProp_Codec = { "Codec", nullptr, (EPropertyFlags)0x0012000002080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCurveCompressionSettings, Codec), Z_Construct_UClass_UAnimCurveCompressionCodec_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::NewProp_Codec_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::NewProp_Codec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::NewProp_Codec,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCurveCompressionSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::ClassParams = {
		&UAnimCurveCompressionSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCurveCompressionSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimCurveCompressionSettings, 1119004826);
	template<> ENGINE_API UClass* StaticClass<UAnimCurveCompressionSettings>()
	{
		return UAnimCurveCompressionSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCurveCompressionSettings(Z_Construct_UClass_UAnimCurveCompressionSettings, &UAnimCurveCompressionSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCurveCompressionSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCurveCompressionSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
