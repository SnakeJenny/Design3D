// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Builders/LinearStairBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLinearStairBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_ULinearStairBuilder_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULinearStairBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void ULinearStairBuilder::StaticRegisterNativesULinearStairBuilder()
	{
	}
	UClass* Z_Construct_UClass_ULinearStairBuilder_NoRegister()
	{
		return ULinearStairBuilder::StaticClass();
	}
	struct Z_Construct_UClass_ULinearStairBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StepWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StepHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StepLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULinearStairBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorBrushBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearStairBuilder_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "BrushSettings" },
		{ "DisplayName", "Linear Stair" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Builders/LinearStairBuilder.h" },
		{ "ModuleRelativePath", "Classes/Builders/LinearStairBuilder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Builders/LinearStairBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULinearStairBuilder, GroupName), METADATA_PARAMS(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_GroupName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_AddToFirstStep_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ModuleRelativePath", "Classes/Builders/LinearStairBuilder.h" },
		{ "ToolTip", "The distance below the first step" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_AddToFirstStep = { "AddToFirstStep", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULinearStairBuilder, AddToFirstStep), METADATA_PARAMS(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_AddToFirstStep_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_AddToFirstStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_NumSteps_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMax", "45" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Classes/Builders/LinearStairBuilder.h" },
		{ "ToolTip", "The number of steps" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULinearStairBuilder, NumSteps), METADATA_PARAMS(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_NumSteps_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_NumSteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepWidth_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/LinearStairBuilder.h" },
		{ "ToolTip", "The width of each step" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepWidth = { "StepWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULinearStairBuilder, StepWidth), METADATA_PARAMS(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepHeight_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/LinearStairBuilder.h" },
		{ "ToolTip", "The height of each step" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepHeight = { "StepHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULinearStairBuilder, StepHeight), METADATA_PARAMS(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepLength_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/LinearStairBuilder.h" },
		{ "ToolTip", "The length of each step" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepLength = { "StepLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULinearStairBuilder, StepLength), METADATA_PARAMS(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULinearStairBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_AddToFirstStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_NumSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULinearStairBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULinearStairBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULinearStairBuilder_Statics::ClassParams = {
		&ULinearStairBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULinearStairBuilder_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULinearStairBuilder_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULinearStairBuilder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULinearStairBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULinearStairBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULinearStairBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULinearStairBuilder, 1825146099);
	template<> UNREALED_API UClass* StaticClass<ULinearStairBuilder>()
	{
		return ULinearStairBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULinearStairBuilder(Z_Construct_UClass_ULinearStairBuilder, &ULinearStairBuilder::StaticClass, TEXT("/Script/UnrealEd"), TEXT("ULinearStairBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULinearStairBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
