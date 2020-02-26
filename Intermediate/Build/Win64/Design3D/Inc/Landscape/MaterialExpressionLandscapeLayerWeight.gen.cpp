// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/Materials/MaterialExpressionLandscapeLayerWeight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerWeight() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionLandscapeLayerWeight::StaticRegisterNativesUMaterialExpressionLandscapeLayerWeight()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_NoRegister()
	{
		return UMaterialExpressionLandscapeLayerWeight::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviewWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Layer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Base;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLandscapeLayerWeight.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h" },
		{ "ToolTip", "GUID that should be unique within the material, this is used for parameter renaming." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerWeight, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ExpressionGUID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ConstBase_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerWeight" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h" },
		{ "ToolTip", "only used if Base is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ConstBase = { "ConstBase", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerWeight, ConstBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ConstBase_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ConstBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_PreviewWeight_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerWeight" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_PreviewWeight = { "PreviewWeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerWeight, PreviewWeight), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_PreviewWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_PreviewWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerWeight" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerWeight, ParameterName), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ParameterName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_Layer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Ignored if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerWeight, Layer), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_Layer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_Layer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_Base_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstBase' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerWeight, Base), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_Base_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_Base_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ExpressionGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ConstBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_PreviewWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_Layer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_Base,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLandscapeLayerWeight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::ClassParams = {
		&UMaterialExpressionLandscapeLayerWeight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionLandscapeLayerWeight, 3644636499);
	template<> LANDSCAPE_API UClass* StaticClass<UMaterialExpressionLandscapeLayerWeight>()
	{
		return UMaterialExpressionLandscapeLayerWeight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionLandscapeLayerWeight(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight, &UMaterialExpressionLandscapeLayerWeight::StaticClass, TEXT("/Script/Landscape"), TEXT("UMaterialExpressionLandscapeLayerWeight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapeLayerWeight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
