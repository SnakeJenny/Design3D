// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeWaveParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeWaveParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeWaveParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeWaveParam();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeWaveParam::StaticRegisterNativesUSoundNodeWaveParam()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeWaveParam_NoRegister()
	{
		return USoundNodeWaveParam::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeWaveParam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WaveParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeWaveParam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeWaveParam_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Wave Param" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeWaveParam.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeWaveParam.h" },
		{ "ToolTip", "Sound node that takes a runtime parameter for the wave to play" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeWaveParam_Statics::NewProp_WaveParameterName_MetaData[] = {
		{ "Category", "WaveParam" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeWaveParam.h" },
		{ "ToolTip", "The name of the wave parameter to use to look up the SoundWave we should play" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USoundNodeWaveParam_Statics::NewProp_WaveParameterName = { "WaveParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeWaveParam, WaveParameterName), METADATA_PARAMS(Z_Construct_UClass_USoundNodeWaveParam_Statics::NewProp_WaveParameterName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeWaveParam_Statics::NewProp_WaveParameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeWaveParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeWaveParam_Statics::NewProp_WaveParameterName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeWaveParam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeWaveParam>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeWaveParam_Statics::ClassParams = {
		&USoundNodeWaveParam::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeWaveParam_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundNodeWaveParam_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeWaveParam_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNodeWaveParam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeWaveParam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeWaveParam_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeWaveParam, 2876741950);
	template<> ENGINE_API UClass* StaticClass<USoundNodeWaveParam>()
	{
		return USoundNodeWaveParam::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeWaveParam(Z_Construct_UClass_USoundNodeWaveParam, &USoundNodeWaveParam::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeWaveParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeWaveParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
