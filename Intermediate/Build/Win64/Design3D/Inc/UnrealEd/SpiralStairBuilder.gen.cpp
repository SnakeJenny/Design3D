// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Builders/SpiralStairBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiralStairBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_USpiralStairBuilder_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_USpiralStairBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USpiralStairBuilder::StaticRegisterNativesUSpiralStairBuilder()
	{
	}
	UClass* Z_Construct_UClass_USpiralStairBuilder_NoRegister()
	{
		return USpiralStairBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USpiralStairBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CounterClockwise_MetaData[];
#endif
		static void NewProp_CounterClockwise_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CounterClockwise;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlopedFloor_MetaData[];
#endif
		static void NewProp_SlopedFloor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SlopedFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlopedCeiling_MetaData[];
#endif
		static void NewProp_SlopedCeiling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SlopedCeiling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumStepsPer360_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumStepsPer360;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StepThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StepHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StepWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InnerRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpiralStairBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorBrushBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "BrushSettings" },
		{ "DisplayName", "Spiral Stair" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Builders/SpiralStairBuilder.h" },
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_CounterClockwise_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
		{ "ToolTip", "Whether the stair curves clockwise or counter-clockwise" },
	};
#endif
	void Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_CounterClockwise_SetBit(void* Obj)
	{
		((USpiralStairBuilder*)Obj)->CounterClockwise = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_CounterClockwise = { "CounterClockwise", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpiralStairBuilder), &Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_CounterClockwise_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_CounterClockwise_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_CounterClockwise_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedFloor_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
		{ "ToolTip", "Whether the surface of the spiral is sloped or stepped" },
	};
#endif
	void Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedFloor_SetBit(void* Obj)
	{
		((USpiralStairBuilder*)Obj)->SlopedFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedFloor = { "SlopedFloor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpiralStairBuilder), &Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedFloor_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedCeiling_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
		{ "ToolTip", "Whether the underside of the spiral is sloped or stepped" },
	};
#endif
	void Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedCeiling_SetBit(void* Obj)
	{
		((USpiralStairBuilder*)Obj)->SlopedCeiling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedCeiling = { "SlopedCeiling", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USpiralStairBuilder), &Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedCeiling_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedCeiling_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedCeiling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiralStairBuilder, GroupName), METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_GroupName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_NumSteps_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
		{ "ToolTip", "The total number of steps" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiralStairBuilder, NumSteps), METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_NumSteps_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_NumSteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_NumStepsPer360_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "3" },
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
		{ "ToolTip", "The number of steps in one whole spiral rotation" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_NumStepsPer360 = { "NumStepsPer360", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiralStairBuilder, NumStepsPer360), METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_NumStepsPer360_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_NumStepsPer360_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepThickness_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
		{ "ToolTip", "The thickness of each step" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepThickness = { "StepThickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiralStairBuilder, StepThickness), METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepThickness_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepHeight_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
		{ "ToolTip", "The height of each step" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepHeight = { "StepHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiralStairBuilder, StepHeight), METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepWidth_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
		{ "ToolTip", "The width of each step" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepWidth = { "StepWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiralStairBuilder, StepWidth), METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_InnerRadius_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
		{ "ToolTip", "The radius of the inner curve of the stair" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiralStairBuilder, InnerRadius), METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_InnerRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_InnerRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpiralStairBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_CounterClockwise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedCeiling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_NumSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_NumStepsPer360,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_InnerRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpiralStairBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpiralStairBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpiralStairBuilder_Statics::ClassParams = {
		&USpiralStairBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpiralStairBuilder_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpiralStairBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpiralStairBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpiralStairBuilder, 3211269418);
	template<> UNREALED_API UClass* StaticClass<USpiralStairBuilder>()
	{
		return USpiralStairBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpiralStairBuilder(Z_Construct_UClass_USpiralStairBuilder, &USpiralStairBuilder::StaticClass, TEXT("/Script/UnrealEd"), TEXT("USpiralStairBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpiralStairBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
