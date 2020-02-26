// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimCurveCompressionCodec_UniformlySampled.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionCodec_UniformlySampled() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCurveCompressionCodec_UniformlySampled::StaticRegisterNativesUAnimCurveCompressionCodec_UniformlySampled()
	{
	}
	UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_NoRegister()
	{
		return UAnimCurveCompressionCodec_UniformlySampled::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAnimSequenceSampleRate_MetaData[];
#endif
		static void NewProp_UseAnimSequenceSampleRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAnimSequenceSampleRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCurveCompressionCodec,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Uniformly Sampled" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimCurveCompressionCodec_UniformlySampled.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionCodec_UniformlySampled.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMin", "0" },
		{ "EditCondition", "!UseAnimSequenceSampleRate" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionCodec_UniformlySampled.h" },
		{ "ToolTip", "Sample rate to use when uniformly sampling" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimCurveCompressionCodec_UniformlySampled, SampleRate), METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_SampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_UseAnimSequenceSampleRate_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionCodec_UniformlySampled.h" },
		{ "ToolTip", "Whether to use the animation sequence sample rate or an explicit value" },
	};
#endif
	void Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_UseAnimSequenceSampleRate_SetBit(void* Obj)
	{
		((UAnimCurveCompressionCodec_UniformlySampled*)Obj)->UseAnimSequenceSampleRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_UseAnimSequenceSampleRate = { "UseAnimSequenceSampleRate", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimCurveCompressionCodec_UniformlySampled), &Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_UseAnimSequenceSampleRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_UseAnimSequenceSampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_UseAnimSequenceSampleRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_SampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_UseAnimSequenceSampleRate,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCurveCompressionCodec_UniformlySampled>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::ClassParams = {
		&UAnimCurveCompressionCodec_UniformlySampled::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::PropPointers), 0),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimCurveCompressionCodec_UniformlySampled, 842385729);
	template<> ENGINE_API UClass* StaticClass<UAnimCurveCompressionCodec_UniformlySampled>()
	{
		return UAnimCurveCompressionCodec_UniformlySampled::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCurveCompressionCodec_UniformlySampled(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled, &UAnimCurveCompressionCodec_UniformlySampled::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCurveCompressionCodec_UniformlySampled"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCurveCompressionCodec_UniformlySampled);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
