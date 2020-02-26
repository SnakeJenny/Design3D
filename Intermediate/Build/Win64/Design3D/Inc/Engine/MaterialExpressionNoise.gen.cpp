// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionNoise.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionNoise() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENoiseFunction();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNoise_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNoise();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* ENoiseFunction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENoiseFunction, Z_Construct_UPackage__Script_Engine(), TEXT("ENoiseFunction"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENoiseFunction>()
	{
		return ENoiseFunction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENoiseFunction(ENoiseFunction_StaticEnum, TEXT("/Script/Engine"), TEXT("ENoiseFunction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENoiseFunction_Hash() { return 1750644835U; }
	UEnum* Z_Construct_UEnum_Engine_ENoiseFunction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENoiseFunction"), 0, Get_Z_Construct_UEnum_Engine_ENoiseFunction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NOISEFUNCTION_SimplexTex", (int64)NOISEFUNCTION_SimplexTex },
				{ "NOISEFUNCTION_GradientTex", (int64)NOISEFUNCTION_GradientTex },
				{ "NOISEFUNCTION_GradientTex3D", (int64)NOISEFUNCTION_GradientTex3D },
				{ "NOISEFUNCTION_GradientALU", (int64)NOISEFUNCTION_GradientALU },
				{ "NOISEFUNCTION_ValueALU", (int64)NOISEFUNCTION_ValueALU },
				{ "NOISEFUNCTION_VoronoiALU", (int64)NOISEFUNCTION_VoronoiALU },
				{ "NOISEFUNCTION_MAX", (int64)NOISEFUNCTION_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
				{ "NOISEFUNCTION_GradientALU.DisplayName", "Gradient - Computational" },
				{ "NOISEFUNCTION_GradientALU.ToolTip", "High quality for direct use and bumps\nNon-tiled: ~80 instructions per level, no textures\nTiling: ~143 instructions per level, no textures" },
				{ "NOISEFUNCTION_GradientTex.DisplayName", "Gradient - Texture Based" },
				{ "NOISEFUNCTION_GradientTex.ToolTip", "High quality for direct use and bumps\nNon-tiled: ~61 instructions per level, 8 texture lookups\nTiling: ~74 instructions per level, 8 texture lookups\nEven \"non-tiled\" mode has a repeat of 128. Useful Repeat Size range <= 128\nFormerly labeled as Perlin noise" },
				{ "NOISEFUNCTION_GradientTex3D.DisplayName", "Fast Gradient - 3D Texture" },
				{ "NOISEFUNCTION_GradientTex3D.ToolTip", "High quality for direct use, BAD for bumps; doesn't work on Mobile\n~16 instructions per level, 1 texture lookup\nAlways tiles with a repeat of 16, \"Tiling\" mode is not an option for Fast Gradient noise" },
				{ "NOISEFUNCTION_SimplexTex.DisplayName", "Simplex - Texture Based" },
				{ "NOISEFUNCTION_SimplexTex.ToolTip", "High quality for direct use and bumps\n~77 instructions per level, 4 texture lookups\nCannot tile" },
				{ "NOISEFUNCTION_ValueALU.DisplayName", "Value - Computational" },
				{ "NOISEFUNCTION_ValueALU.ToolTip", "Low quality, but pure computation\nNon-tiled: ~53 instructions per level, no textures\nTiling: ~118 instructions per level, no textures\nFormerly mis-labeled as Gradient noise" },
				{ "NOISEFUNCTION_VoronoiALU.DisplayName", "Voronoi" },
				{ "NOISEFUNCTION_VoronoiALU.ToolTip", "Also known as Worley or Cellular noise\nQuality=1 searches 8 cells, Quality=2 searches 16 cells\nQuality=3 searches 27 cells, Quality=4 searches 32 cells\nAll are about 20 instructions per cell searched" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ENoiseFunction",
				"ENoiseFunction",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionNoise::StaticRegisterNativesUMaterialExpressionNoise()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionNoise_NoRegister()
	{
		return UMaterialExpressionNoise::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionNoise_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepeatSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_RepeatSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTiling_MetaData[];
#endif
		static void NewProp_bTiling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTiling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LevelScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutputMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutputMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Levels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Levels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTurbulence_MetaData[];
#endif
		static void NewProp_bTurbulence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTurbulence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NoiseFunction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilterWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionNoise.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_RepeatSize_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "How many units in each tile (if Tiling is on)" },
		{ "UIMin", "4" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_RepeatSize = { "RepeatSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionNoise, RepeatSize), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_RepeatSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_RepeatSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTiling_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "Whether to use tiling noise pattern, useful for baking to seam-free repeating textures" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTiling_SetBit(void* Obj)
	{
		((UMaterialExpressionNoise*)Obj)->bTiling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTiling = { "bTiling", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpressionNoise), &Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTiling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTiling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTiling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_LevelScale_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "usually 2 but higher values allow efficient use of few levels" },
		{ "UIMax", "8" },
		{ "UIMin", "2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_LevelScale = { "LevelScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionNoise, LevelScale), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_LevelScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_LevelScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMax_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMax = { "OutputMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionNoise, OutputMax), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMin_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMin = { "OutputMin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionNoise, OutputMin), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Levels_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "1 = fast but little detail, .. larger numbers cost more performance" },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Levels = { "Levels", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionNoise, Levels), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Levels_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Levels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTurbulence_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "How multiple frequencies are getting combined" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTurbulence_SetBit(void* Obj)
	{
		((UMaterialExpressionNoise*)Obj)->bTurbulence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTurbulence = { "bTurbulence", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpressionNoise), &Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTurbulence_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTurbulence_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTurbulence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_NoiseFunction_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "DisplayName", "Function" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "Noise function, affects performance and look" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_NoiseFunction = { "NoiseFunction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionNoise, NoiseFunction), Z_Construct_UEnum_Engine_ENoiseFunction, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_NoiseFunction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_NoiseFunction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Quality_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "Lower numbers are faster and lower quality, higher numbers are slower and higher quality" },
		{ "UIMax", "4" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionNoise, Quality), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Quality_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Quality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "can also be done with a multiply on the Position" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionNoise, Scale), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_FilterWidth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "scalar, to clamp the Levels at pixel level, can be computed like this: max(length(ddx(Position)), length(ddy(Position))" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_FilterWidth = { "FilterWidth", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionNoise, FilterWidth), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_FilterWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_FilterWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "2 to 3 dimensional vector" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionNoise, Position), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_RepeatSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTiling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_LevelScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Levels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTurbulence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_NoiseFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Quality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_FilterWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Position,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionNoise>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::ClassParams = {
		&UMaterialExpressionNoise::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionNoise_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNoise_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionNoise()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionNoise_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionNoise, 2873192033);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionNoise>()
	{
		return UMaterialExpressionNoise::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionNoise(Z_Construct_UClass_UMaterialExpressionNoise, &UMaterialExpressionNoise::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionNoise"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionNoise);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
