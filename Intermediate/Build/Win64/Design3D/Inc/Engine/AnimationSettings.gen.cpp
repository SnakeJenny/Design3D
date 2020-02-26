// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimationSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimationCompressionFormat();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_NoRegister();
// End Cross Module References
	void UAnimationSettings::StaticRegisterNativesUAnimationSettings()
	{
	}
	UClass* Z_Construct_UClass_UAnimationSettings_NoRegister()
	{
		return UAnimationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickAnimationOnSkeletalMeshInit_MetaData[];
#endif
		static void NewProp_bTickAnimationOnSkeletalMeshInit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickAnimationOnSkeletalMeshInit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStripAnimationDataOnDedicatedServer_MetaData[];
#endif
		static void NewProp_bStripAnimationDataOnDedicatedServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStripAnimationDataOnDedicatedServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePerformanceLog_MetaData[];
#endif
		static void NewProp_bEnablePerformanceLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePerformanceLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSegmenting_MetaData[];
#endif
		static void NewProp_bEnableSegmenting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSegmenting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTryExhaustiveSearch_MetaData[];
#endif
		static void NewProp_bTryExhaustiveSearch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTryExhaustiveSearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRaiseMaxErrorToExisting_MetaData[];
#endif
		static void NewProp_bRaiseMaxErrorToExisting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRaiseMaxErrorToExisting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFirstRecompressUsingCurrentOrDefault_MetaData[];
#endif
		static void NewProp_bFirstRecompressUsingCurrentOrDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFirstRecompressUsingCurrentOrDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceBelowThreshold_MetaData[];
#endif
		static void NewProp_bForceBelowThreshold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceBelowThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyCheckForMissingSkeletalMeshes_MetaData[];
#endif
		static void NewProp_bOnlyCheckForMissingSkeletalMeshes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyCheckForMissingSkeletalMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceRecompression_MetaData[];
#endif
		static void NewProp_ForceRecompression_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceRecompression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlternativeCompressionThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlternativeCompressionThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCurveError_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCurveError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationCompressionFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslationCompressionFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationCompressionFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationCompressionFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCompressionAlgorithm_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultCompressionAlgorithm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyEndEffectorsMatchNameArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyEndEffectorsMatchNameArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyEndEffectorsMatchNameArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressCommandletVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompressCommandletVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Animation" },
		{ "IncludePath", "Animation/AnimationSettings.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Default animation settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true, pre-4.19 behavior of zero-ticking animations during skeletal mesh init" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bTickAnimationOnSkeletalMeshInit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit = { "bTickAnimationOnSkeletalMeshInit", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true, animation track data will be stripped from dedicated server cooked data" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bStripAnimationDataOnDedicatedServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer = { "bStripAnimationDataOnDedicatedServer", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bEnablePerformanceLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog = { "bEnablePerformanceLog", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnableSegmenting_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true, anim sequences are compressed in segments. This allows for parallel compression of individual sequences." },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnableSegmenting_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bEnableSegmenting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnableSegmenting = { "bEnableSegmenting", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnableSegmenting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnableSegmenting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnableSegmenting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTryExhaustiveSearch_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true, then an exhaustive search is used otherwise only a short list of the best methods is tried" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTryExhaustiveSearch_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bTryExhaustiveSearch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTryExhaustiveSearch = { "bTryExhaustiveSearch", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTryExhaustiveSearch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTryExhaustiveSearch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTryExhaustiveSearch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true and the existing compression error is greater than Alternative Compression Threshold, then Alternative Compression Threshold will be effectively raised to the existing error level" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bRaiseMaxErrorToExisting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting = { "bRaiseMaxErrorToExisting", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true, then the animation will be first recompressed with it's current compressor if non-NULL, or with the global default compressor (specified in the engine ini)\nAlso known as \"Run Current Default Compressor\"" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bFirstRecompressUsingCurrentOrDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault = { "bFirstRecompressUsingCurrentOrDefault", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true and the existing compression error is greater than Alternative Compression Threshold, then any compression technique (even one that increases the size) with a lower error will be used until it falls below the threshold" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bForceBelowThreshold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold = { "bForceBelowThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bOnlyCheckForMissingSkeletalMeshes_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bOnlyCheckForMissingSkeletalMeshes_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bOnlyCheckForMissingSkeletalMeshes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bOnlyCheckForMissingSkeletalMeshes = { "bOnlyCheckForMissingSkeletalMeshes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bOnlyCheckForMissingSkeletalMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bOnlyCheckForMissingSkeletalMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bOnlyCheckForMissingSkeletalMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->ForceRecompression = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression = { "ForceRecompression", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AlternativeCompressionThreshold_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "The alternate error threshold (0.0 means don't try anything other than the current / default scheme)\n\nDetermines the current setting for world-space error tolerance in the animation compressor.\nWhen requested, animation being compressed will also consider an alternative compression\nmethod if the end result of that method produces less error than the AlternativeCompressionThreshold.\nAlso known as \"Max End Effector Error\"" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AlternativeCompressionThreshold = { "AlternativeCompressionThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationSettings, AlternativeCompressionThreshold), METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AlternativeCompressionThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AlternativeCompressionThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_MaxCurveError_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Max error for compression of curves using remove redundant keys" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_MaxCurveError = { "MaxCurveError", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationSettings, MaxCurveError), METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_MaxCurveError_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_MaxCurveError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_TranslationCompressionFormat_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_TranslationCompressionFormat = { "TranslationCompressionFormat", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationSettings, TranslationCompressionFormat), Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_TranslationCompressionFormat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_TranslationCompressionFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_RotationCompressionFormat_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_RotationCompressionFormat = { "RotationCompressionFormat", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationSettings, RotationCompressionFormat), Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_RotationCompressionFormat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_RotationCompressionFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultCompressionAlgorithm_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultCompressionAlgorithm = { "DefaultCompressionAlgorithm", nullptr, (EPropertyFlags)0x0014000002004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationSettings, DefaultCompressionAlgorithm), Z_Construct_UClass_UAnimCompress_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultCompressionAlgorithm_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultCompressionAlgorithm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray = { "KeyEndEffectorsMatchNameArray", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationSettings, KeyEndEffectorsMatchNameArray), METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray_Inner = { "KeyEndEffectorsMatchNameArray", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_CompressCommandletVersion_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "compression upgrade version" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_CompressCommandletVersion = { "CompressCommandletVersion", nullptr, (EPropertyFlags)0x0010000000024001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationSettings, CompressCommandletVersion), METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_CompressCommandletVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_CompressCommandletVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnableSegmenting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTryExhaustiveSearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bOnlyCheckForMissingSkeletalMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_AlternativeCompressionThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_MaxCurveError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_TranslationCompressionFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_RotationCompressionFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_DefaultCompressionAlgorithm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_CompressCommandletVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationSettings_Statics::ClassParams = {
		&UAnimationSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimationSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationSettings, 1673994649);
	template<> ENGINE_API UClass* StaticClass<UAnimationSettings>()
	{
		return UAnimationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationSettings(Z_Construct_UClass_UAnimationSettings, &UAnimationSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
