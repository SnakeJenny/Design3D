// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionCodec_CompressedRichCurve() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCurveCompressionCodec_CompressedRichCurve::StaticRegisterNativesUAnimCurveCompressionCodec_CompressedRichCurve()
	{
	}
	UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_NoRegister()
	{
		return UAnimCurveCompressionCodec_CompressedRichCurve::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorSampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ErrorSampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAnimSequenceSampleRate_MetaData[];
#endif
		static void NewProp_UseAnimSequenceSampleRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAnimSequenceSampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCurveError_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCurveError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCurveCompressionCodec,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Compressed Rich Curves" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimCurveCompressionCodec_CompressedRichCurve.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_ErrorSampleRate_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMin", "0" },
		{ "EditCondition", "!UseAnimSequenceSampleRate" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h" },
		{ "ToolTip", "Sample rate to use when measuring the curve error" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_ErrorSampleRate = { "ErrorSampleRate", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCurveCompressionCodec_CompressedRichCurve, ErrorSampleRate), METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_ErrorSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_ErrorSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_UseAnimSequenceSampleRate_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h" },
		{ "ToolTip", "Whether to use the animation sequence sample rate or an explicit value" },
	};
#endif
	void Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_UseAnimSequenceSampleRate_SetBit(void* Obj)
	{
		((UAnimCurveCompressionCodec_CompressedRichCurve*)Obj)->UseAnimSequenceSampleRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_UseAnimSequenceSampleRate = { "UseAnimSequenceSampleRate", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimCurveCompressionCodec_CompressedRichCurve), &Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_UseAnimSequenceSampleRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_UseAnimSequenceSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_UseAnimSequenceSampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_MaxCurveError_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h" },
		{ "ToolTip", "Max error allowed when compressing the rich curves" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_MaxCurveError = { "MaxCurveError", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCurveCompressionCodec_CompressedRichCurve, MaxCurveError), METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_MaxCurveError_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_MaxCurveError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_ErrorSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_UseAnimSequenceSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::NewProp_MaxCurveError,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCurveCompressionCodec_CompressedRichCurve>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::ClassParams = {
		&UAnimCurveCompressionCodec_CompressedRichCurve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::PropPointers), 0),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimCurveCompressionCodec_CompressedRichCurve, 335542078);
	template<> ENGINE_API UClass* StaticClass<UAnimCurveCompressionCodec_CompressedRichCurve>()
	{
		return UAnimCurveCompressionCodec_CompressedRichCurve::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCurveCompressionCodec_CompressedRichCurve(Z_Construct_UClass_UAnimCurveCompressionCodec_CompressedRichCurve, &UAnimCurveCompressionCodec_CompressedRichCurve::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCurveCompressionCodec_CompressedRichCurve"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCurveCompressionCodec_CompressedRichCurve);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
