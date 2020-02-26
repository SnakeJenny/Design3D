// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeModulator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeModulator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeModulator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeModulator();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeModulator::StaticRegisterNativesUSoundNodeModulator()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeModulator_NoRegister()
	{
		return USoundNodeModulator::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeModulator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeModulator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulator_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Modulator" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeModulator.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
		{ "ToolTip", "Defines a random volume and pitch modification when a sound starts" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMax_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
		{ "ToolTip", "The upper bound of volume (1.0 is no change)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMax = { "VolumeMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeModulator, VolumeMax), METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMin_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
		{ "ToolTip", "The lower bound of volume (1.0 is no change)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMin = { "VolumeMin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeModulator, VolumeMin), METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMax_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
		{ "ToolTip", "The upper bound of pitch (1.0 is no change)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMax = { "PitchMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeModulator, PitchMax), METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMin_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
		{ "ToolTip", "The lower bound of pitch (1.0 is no change)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMin = { "PitchMin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeModulator, PitchMin), METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeModulator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeModulator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeModulator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeModulator_Statics::ClassParams = {
		&USoundNodeModulator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeModulator_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeModulator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeModulator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeModulator, 1383688545);
	template<> ENGINE_API UClass* StaticClass<USoundNodeModulator>()
	{
		return USoundNodeModulator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeModulator(Z_Construct_UClass_USoundNodeModulator, &USoundNodeModulator::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeModulator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeModulator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
