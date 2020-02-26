// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Builders/CurvedStairBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurvedStairBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCurvedStairBuilder_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCurvedStairBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCurvedStairBuilder::StaticRegisterNativesUCurvedStairBuilder()
	{
	}
	UClass* Z_Construct_UClass_UCurvedStairBuilder_NoRegister()
	{
		return UCurvedStairBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UCurvedStairBuilder_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddToFirstStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddToFirstStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleOfCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AngleOfCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StepWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StepHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InnerRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurvedStairBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorBrushBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurvedStairBuilder_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "BrushSettings" },
		{ "DisplayName", "Curved Stair" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Builders/CurvedStairBuilder.h" },
		{ "ModuleRelativePath", "Classes/Builders/CurvedStairBuilder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_CounterClockwise_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ModuleRelativePath", "Classes/Builders/CurvedStairBuilder.h" },
		{ "ToolTip", "Whether the stair curves clockwise or counter-clockwise" },
	};
#endif
	void Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_CounterClockwise_SetBit(void* Obj)
	{
		((UCurvedStairBuilder*)Obj)->CounterClockwise = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_CounterClockwise = { "CounterClockwise", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCurvedStairBuilder), &Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_CounterClockwise_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_CounterClockwise_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_CounterClockwise_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Builders/CurvedStairBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurvedStairBuilder, GroupName), METADATA_PARAMS(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_GroupName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_AddToFirstStep_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ModuleRelativePath", "Classes/Builders/CurvedStairBuilder.h" },
		{ "ToolTip", "The distance below the first step" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_AddToFirstStep = { "AddToFirstStep", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurvedStairBuilder, AddToFirstStep), METADATA_PARAMS(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_AddToFirstStep_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_AddToFirstStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_NumSteps_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/CurvedStairBuilder.h" },
		{ "ToolTip", "The number of steps" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurvedStairBuilder, NumSteps), METADATA_PARAMS(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_NumSteps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_NumSteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_AngleOfCurve_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMax", "360" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/CurvedStairBuilder.h" },
		{ "ToolTip", "The angle of the total arc described by this stair" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_AngleOfCurve = { "AngleOfCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurvedStairBuilder, AngleOfCurve), METADATA_PARAMS(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_AngleOfCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_AngleOfCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_StepWidth_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/CurvedStairBuilder.h" },
		{ "ToolTip", "The width of each step" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_StepWidth = { "StepWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurvedStairBuilder, StepWidth), METADATA_PARAMS(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_StepWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_StepWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_StepHeight_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/CurvedStairBuilder.h" },
		{ "ToolTip", "The height of each step" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_StepHeight = { "StepHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurvedStairBuilder, StepHeight), METADATA_PARAMS(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_StepHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_StepHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_InnerRadius_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/CurvedStairBuilder.h" },
		{ "ToolTip", "The radius of the inner curve of the stair" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurvedStairBuilder, InnerRadius), METADATA_PARAMS(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_InnerRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_InnerRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurvedStairBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_CounterClockwise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_AddToFirstStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_NumSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_AngleOfCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_StepWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_StepHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_InnerRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurvedStairBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurvedStairBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurvedStairBuilder_Statics::ClassParams = {
		&UCurvedStairBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCurvedStairBuilder_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCurvedStairBuilder_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurvedStairBuilder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCurvedStairBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurvedStairBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurvedStairBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurvedStairBuilder, 1911663074);
	template<> UNREALED_API UClass* StaticClass<UCurvedStairBuilder>()
	{
		return UCurvedStairBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurvedStairBuilder(Z_Construct_UClass_UCurvedStairBuilder, &UCurvedStairBuilder::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UCurvedStairBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurvedStairBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
