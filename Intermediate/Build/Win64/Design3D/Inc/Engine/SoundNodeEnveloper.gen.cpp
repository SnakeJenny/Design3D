// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeEnveloper.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeEnveloper() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeEnveloper_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeEnveloper();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister();
// End Cross Module References
	void USoundNodeEnveloper::StaticRegisterNativesUSoundNodeEnveloper()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeEnveloper_NoRegister()
	{
		return USoundNodeEnveloper::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeEnveloper_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VolumeCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchInterpCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PitchInterpCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeInterpCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VolumeInterpCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoopIndefinitely_MetaData[];
#endif
		static void NewProp_bLoopIndefinitely_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoopIndefinitely;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoopCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationAfterLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationAfterLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoopEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoopStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeEnveloper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Enveloper" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeEnveloper.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Allows manipulation of volume and pitch over a set time period" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMax_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The upper bound of volume (1.0 is no change)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMax = { "VolumeMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeEnveloper, VolumeMax), METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMin_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The lower bound of volume (1.0 is no change)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMin = { "VolumeMin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeEnveloper, VolumeMin), METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMax_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The upper bound of pitch (1.0 is no change)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMax = { "PitchMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeEnveloper, PitchMax), METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMin_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The lower bound of pitch (1.0 is no change)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMin = { "PitchMin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeEnveloper, PitchMin), METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchCurve_MetaData[] = {
		{ "Category", "Envelope" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The distribution defining the pitch envelope." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchCurve = { "PitchCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeEnveloper, PitchCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeCurve_MetaData[] = {
		{ "Category", "Envelope" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The distribution defining the volume envelope." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeCurve = { "VolumeCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeEnveloper, VolumeCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchInterpCurve_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchInterpCurve = { "PitchInterpCurve", nullptr, (EPropertyFlags)0x0010000020080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeEnveloper, PitchInterpCurve_DEPRECATED), Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchInterpCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchInterpCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeInterpCurve_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeInterpCurve = { "VolumeInterpCurve", nullptr, (EPropertyFlags)0x0010000020080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeEnveloper, VolumeInterpCurve_DEPRECATED), Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeInterpCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeInterpCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Looping" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "If enabled, the envelope will loop using the loop settings." },
	};
#endif
	void Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((USoundNodeEnveloper*)Obj)->bLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundNodeEnveloper), &Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoop_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoopIndefinitely_MetaData[] = {
		{ "Category", "Looping" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "If enabled, the envelope will continue to loop indefenitely regardless of the Loop Count value." },
	};
#endif
	void Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoopIndefinitely_SetBit(void* Obj)
	{
		((USoundNodeEnveloper*)Obj)->bLoopIndefinitely = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoopIndefinitely = { "bLoopIndefinitely", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundNodeEnveloper), &Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoopIndefinitely_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoopIndefinitely_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoopIndefinitely_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopCount_MetaData[] = {
		{ "Category", "Looping" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The number of times the envelope should loop if looping is enabled and the envelope is not set to loop indefinitely." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeEnveloper, LoopCount), METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_DurationAfterLoop_MetaData[] = {
		{ "Category", "Looping" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The time in seconds it takes the evelope to fade out after the last loop is completed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_DurationAfterLoop = { "DurationAfterLoop", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeEnveloper, DurationAfterLoop), METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_DurationAfterLoop_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_DurationAfterLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopEnd_MetaData[] = {
		{ "Category", "Looping" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The time in seconds where the envelope's loop ends." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopEnd = { "LoopEnd", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeEnveloper, LoopEnd), METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopStart_MetaData[] = {
		{ "Category", "Looping" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeEnveloper.h" },
		{ "ToolTip", "The time in seconds where the envelope's loop begins." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopStart = { "LoopStart", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeEnveloper, LoopStart), METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeEnveloper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_PitchInterpCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_VolumeInterpCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_bLoopIndefinitely,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_DurationAfterLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeEnveloper_Statics::NewProp_LoopStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeEnveloper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeEnveloper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeEnveloper_Statics::ClassParams = {
		&USoundNodeEnveloper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeEnveloper_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeEnveloper_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNodeEnveloper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeEnveloper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeEnveloper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeEnveloper, 451556223);
	template<> ENGINE_API UClass* StaticClass<USoundNodeEnveloper>()
	{
		return USoundNodeEnveloper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeEnveloper(Z_Construct_UClass_USoundNodeEnveloper, &USoundNodeEnveloper::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeEnveloper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeEnveloper);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundNodeEnveloper)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
