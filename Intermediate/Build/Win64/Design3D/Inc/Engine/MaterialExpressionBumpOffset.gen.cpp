// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionBumpOffset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionBumpOffset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBumpOffset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBumpOffset();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionBumpOffset::StaticRegisterNativesUMaterialExpressionBumpOffset()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionBumpOffset_NoRegister()
	{
		return UMaterialExpressionBumpOffset::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstCoordinate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ConstCoordinate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencePlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReferencePlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightRatioInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeightRatioInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordinate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coordinate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionBumpOffset.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ConstCoordinate_MetaData[] = {
		{ "Category", "MaterialExpressionBumpOffset" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
		{ "ToolTip", "only used if Coordinate is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ConstCoordinate = { "ConstCoordinate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionBumpOffset, ConstCoordinate), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ConstCoordinate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ConstCoordinate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ReferencePlane_MetaData[] = {
		{ "Category", "MaterialExpressionBumpOffset" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
		{ "ToolTip", "Perceived height as a fraction of width." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ReferencePlane = { "ReferencePlane", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionBumpOffset, ReferencePlane), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ReferencePlane_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ReferencePlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatio_MetaData[] = {
		{ "Category", "MaterialExpressionBumpOffset" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
		{ "OverridingInputProperty", "HeightRatioInput" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatio = { "HeightRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionBumpOffset, HeightRatio), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatioInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
		{ "RequiredInput", "false" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatioInput = { "HeightRatioInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionBumpOffset, HeightRatioInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatioInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatioInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionBumpOffset, Height), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Coordinate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstCoordinate' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionBumpOffset, Coordinate), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Coordinate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Coordinate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ConstCoordinate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ReferencePlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatioInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Coordinate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionBumpOffset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::ClassParams = {
		&UMaterialExpressionBumpOffset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionBumpOffset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionBumpOffset, 3081372533);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionBumpOffset>()
	{
		return UMaterialExpressionBumpOffset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionBumpOffset(Z_Construct_UClass_UMaterialExpressionBumpOffset, &UMaterialExpressionBumpOffset::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionBumpOffset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionBumpOffset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
