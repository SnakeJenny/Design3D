// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionRotator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionRotator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRotator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRotator();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionRotator::StaticRegisterNativesUMaterialExpressionRotator()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionRotator_NoRegister()
	{
		return UMaterialExpressionRotator::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionRotator_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CenterY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CenterX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordinate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coordinate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionRotator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotator_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionRotator.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_ConstCoordinate_MetaData[] = {
		{ "Category", "MaterialExpressionRotator" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
		{ "ToolTip", "only used if Coordinate is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_ConstCoordinate = { "ConstCoordinate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionRotator, ConstCoordinate), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_ConstCoordinate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_ConstCoordinate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "MaterialExpressionRotator" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionRotator, Speed), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Speed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterY_MetaData[] = {
		{ "Category", "MaterialExpressionRotator" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterY = { "CenterY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionRotator, CenterY), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterX_MetaData[] = {
		{ "Category", "MaterialExpressionRotator" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterX = { "CenterX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionRotator, CenterX), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to Game Time if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionRotator, Time), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Coordinate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotator.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstCoordinate' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionRotator, Coordinate), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Coordinate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Coordinate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_ConstCoordinate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_CenterX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotator_Statics::NewProp_Coordinate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionRotator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionRotator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionRotator_Statics::ClassParams = {
		&UMaterialExpressionRotator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionRotator_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotator_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionRotator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionRotator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionRotator, 2628201468);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionRotator>()
	{
		return UMaterialExpressionRotator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionRotator(Z_Construct_UClass_UMaterialExpressionRotator, &UMaterialExpressionRotator::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionRotator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionRotator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
