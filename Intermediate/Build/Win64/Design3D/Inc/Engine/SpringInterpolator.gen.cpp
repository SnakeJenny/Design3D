// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/SpringInterpolator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpringInterpolator() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator();
// End Cross Module References
	struct Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics
	{
		struct FVectorRK4SpringInterpolator
		{
			float StiffnessConstant;
			float DampeningRatio;
		};

#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampeningRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DampeningRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StiffnessConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StiffnessConstant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SpringInterpolator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::NewProp_DampeningRatio_MetaData[] = {
		{ "Category", "VectorRK4SpringInterpolator" },
		{ "ModuleRelativePath", "Classes/Engine/SpringInterpolator.h" },
		{ "ToolTip", "0 = Undamped, <1 = Underdamped, 1 = Critically damped, >1 = Over damped" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::NewProp_DampeningRatio = { "DampeningRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorRK4SpringInterpolator, DampeningRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::NewProp_DampeningRatio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::NewProp_DampeningRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::NewProp_StiffnessConstant_MetaData[] = {
		{ "Category", "VectorRK4SpringInterpolator" },
		{ "ModuleRelativePath", "Classes/Engine/SpringInterpolator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::NewProp_StiffnessConstant = { "StiffnessConstant", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorRK4SpringInterpolator, StiffnessConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::NewProp_StiffnessConstant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::NewProp_StiffnessConstant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::NewProp_DampeningRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::NewProp_StiffnessConstant,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"VectorRK4SpringInterpolator",
		sizeof(FVectorRK4SpringInterpolator),
		alignof(FVectorRK4SpringInterpolator),
		Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VectorRK4SpringInterpolator"), sizeof(Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::FVectorRK4SpringInterpolator), Get_Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator_Hash() { return 4083679474U; }
	struct Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics
	{
		struct FFloatRK4SpringInterpolator
		{
			float StiffnessConstant;
			float DampeningRatio;
		};

#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampeningRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DampeningRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StiffnessConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StiffnessConstant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SpringInterpolator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::NewProp_DampeningRatio_MetaData[] = {
		{ "Category", "FloatRK4SpringInterpolator" },
		{ "ModuleRelativePath", "Classes/Engine/SpringInterpolator.h" },
		{ "ToolTip", "0 = Undamped, <1 = Underdamped, 1 = Critically damped, >1 = Over damped" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::NewProp_DampeningRatio = { "DampeningRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloatRK4SpringInterpolator, DampeningRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::NewProp_DampeningRatio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::NewProp_DampeningRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::NewProp_StiffnessConstant_MetaData[] = {
		{ "Category", "FloatRK4SpringInterpolator" },
		{ "ModuleRelativePath", "Classes/Engine/SpringInterpolator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::NewProp_StiffnessConstant = { "StiffnessConstant", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloatRK4SpringInterpolator, StiffnessConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::NewProp_StiffnessConstant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::NewProp_StiffnessConstant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::NewProp_DampeningRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::NewProp_StiffnessConstant,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"FloatRK4SpringInterpolator",
		sizeof(FFloatRK4SpringInterpolator),
		alignof(FFloatRK4SpringInterpolator),
		Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FloatRK4SpringInterpolator"), sizeof(Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::FFloatRK4SpringInterpolator), Get_Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFloatRK4SpringInterpolator_Hash() { return 3495235119U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
