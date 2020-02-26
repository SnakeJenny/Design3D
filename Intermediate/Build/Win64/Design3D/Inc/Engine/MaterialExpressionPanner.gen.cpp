// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionPanner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPanner() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPanner_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPanner();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionPanner::StaticRegisterNativesUMaterialExpressionPanner()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionPanner_NoRegister()
	{
		return UMaterialExpressionPanner::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionPanner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFractionalPart_MetaData[];
#endif
		static void NewProp_bFractionalPart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFractionalPart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstCoordinate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ConstCoordinate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Speed;
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
	UObject* (*const Z_Construct_UClass_UMaterialExpressionPanner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPanner_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPanner.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_bFractionalPart_MetaData[] = {
		{ "Category", "MaterialExpressionPanner" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
		{ "ToolTip", "Output only the fractional part of the pan calculation for greater precision.\nOutput is greater than or equal to 0 and less than 1." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_bFractionalPart_SetBit(void* Obj)
	{
		((UMaterialExpressionPanner*)Obj)->bFractionalPart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_bFractionalPart = { "bFractionalPart", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMaterialExpressionPanner), &Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_bFractionalPart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_bFractionalPart_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_bFractionalPart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_ConstCoordinate_MetaData[] = {
		{ "Category", "MaterialExpressionPanner" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
		{ "ToolTip", "only used if Coordinate is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_ConstCoordinate = { "ConstCoordinate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionPanner, ConstCoordinate), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_ConstCoordinate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_ConstCoordinate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_SpeedY_MetaData[] = {
		{ "Category", "MaterialExpressionPanner" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_SpeedY = { "SpeedY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionPanner, SpeedY), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_SpeedY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_SpeedY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_SpeedX_MetaData[] = {
		{ "Category", "MaterialExpressionPanner" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_SpeedX = { "SpeedX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionPanner, SpeedX), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_SpeedX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_SpeedX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Speed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Vector2 speed scale, if specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionPanner, Speed), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Speed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to Game Time if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionPanner, Time), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Coordinate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPanner.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstCoordinate' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionPanner, Coordinate), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Coordinate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Coordinate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPanner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_bFractionalPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_ConstCoordinate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_SpeedY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_SpeedX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPanner_Statics::NewProp_Coordinate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionPanner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPanner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPanner_Statics::ClassParams = {
		&UMaterialExpressionPanner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionPanner_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPanner_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPanner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPanner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionPanner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionPanner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionPanner, 1368038604);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPanner>()
	{
		return UMaterialExpressionPanner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionPanner(Z_Construct_UClass_UMaterialExpressionPanner, &UMaterialExpressionPanner::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionPanner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPanner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
