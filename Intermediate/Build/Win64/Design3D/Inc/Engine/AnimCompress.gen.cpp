// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimCompress.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimationCompressionFormat();
// End Cross Module References
	void UAnimCompress::StaticRegisterNativesUAnimCompress()
	{
	}
	UClass* Z_Construct_UClass_UAnimCompress_NoRegister()
	{
		return UAnimCompress::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCompress_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCurveError_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCurveError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleCompressionFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScaleCompressionFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationCompressionFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationCompressionFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationCompressionFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslationCompressionFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumFramesPerSegment_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxNumFramesPerSegment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdealNumFramesPerSegment_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_IdealNumFramesPerSegment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSegmenting_MetaData[];
#endif
		static void NewProp_bEnableSegmenting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSegmenting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedsSkeleton_MetaData[];
#endif
		static void NewProp_bNeedsSkeleton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedsSkeleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCompress_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimCompress.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Statics::NewProp_MaxCurveError_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "Max error for compression of curves using remove redundant keys" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_MaxCurveError = { "MaxCurveError", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCompress, MaxCurveError), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Statics::NewProp_MaxCurveError_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::NewProp_MaxCurveError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Statics::NewProp_ScaleCompressionFormat_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "Format for bitwise compression of scale data." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_ScaleCompressionFormat = { "ScaleCompressionFormat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCompress, ScaleCompressionFormat), Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Statics::NewProp_ScaleCompressionFormat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::NewProp_ScaleCompressionFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Statics::NewProp_RotationCompressionFormat_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "Format for bitwise compression of rotation data." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_RotationCompressionFormat = { "RotationCompressionFormat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCompress, RotationCompressionFormat), Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Statics::NewProp_RotationCompressionFormat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::NewProp_RotationCompressionFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Statics::NewProp_TranslationCompressionFormat_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "Format for bitwise compression of translation data." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_TranslationCompressionFormat = { "TranslationCompressionFormat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCompress, TranslationCompressionFormat), Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Statics::NewProp_TranslationCompressionFormat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::NewProp_TranslationCompressionFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Statics::NewProp_MaxNumFramesPerSegment_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "When splitting the sequence into segments, we will never allow a segment with more than the maximum number of frames." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_MaxNumFramesPerSegment = { "MaxNumFramesPerSegment", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCompress, MaxNumFramesPerSegment), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Statics::NewProp_MaxNumFramesPerSegment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::NewProp_MaxNumFramesPerSegment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Statics::NewProp_IdealNumFramesPerSegment_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMin", "16" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "When splitting the sequence into segments, we will try to approach this value as much as possible." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_IdealNumFramesPerSegment = { "IdealNumFramesPerSegment", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCompress, IdealNumFramesPerSegment), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Statics::NewProp_IdealNumFramesPerSegment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::NewProp_IdealNumFramesPerSegment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Statics::NewProp_bEnableSegmenting_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "Whether to enable segmenting or not. Needed for USE_SEGMENTING_CONTEXT (currently turned off) //UPROPERTY(Category = Compression, EditAnywhere)" },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_Statics::NewProp_bEnableSegmenting_SetBit(void* Obj)
	{
		((UAnimCompress*)Obj)->bEnableSegmenting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_bEnableSegmenting = { "bEnableSegmenting", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimCompress), &Z_Construct_UClass_UAnimCompress_Statics::NewProp_bEnableSegmenting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Statics::NewProp_bEnableSegmenting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::NewProp_bEnableSegmenting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "Compression algorithms requiring a skeleton should set this value to true." },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton_SetBit(void* Obj)
	{
		((UAnimCompress*)Obj)->bNeedsSkeleton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton = { "bNeedsSkeleton", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimCompress), &Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "Name of Compression Scheme used for this asset" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCompress, Description), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCompress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_MaxCurveError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_ScaleCompressionFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_RotationCompressionFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_TranslationCompressionFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_MaxNumFramesPerSegment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_IdealNumFramesPerSegment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_bEnableSegmenting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_Description,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCompress_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompress>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompress_Statics::ClassParams = {
		&UAnimCompress::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimCompress_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::PropPointers),
		0,
		0x000810A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCompress()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimCompress_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimCompress, 3408938610);
	template<> ENGINE_API UClass* StaticClass<UAnimCompress>()
	{
		return UAnimCompress::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCompress(Z_Construct_UClass_UAnimCompress, &UAnimCompress::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCompress"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
