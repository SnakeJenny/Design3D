// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFunctionOutput() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionFunctionOutput::StaticRegisterNativesUMaterialExpressionFunctionOutput()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput_NoRegister()
	{
		return UMaterialExpressionFunctionOutput::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLastPreviewed_MetaData[];
#endif
		static void NewProp_bLastPreviewed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLastPreviewed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutputName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object Object" },
		{ "IncludePath", "Materials/MaterialExpressionFunctionOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
		{ "ToolTip", "Id of this input, used to maintain references through name changes." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionFunctionOutput, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Id_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_bLastPreviewed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
		{ "ToolTip", "Whether this output was previewed the last time this function was edited." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_bLastPreviewed_SetBit(void* Obj)
	{
		((UMaterialExpressionFunctionOutput*)Obj)->bLastPreviewed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_bLastPreviewed = { "bLastPreviewed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpressionFunctionOutput), &Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_bLastPreviewed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_bLastPreviewed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_bLastPreviewed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
		{ "ToolTip", "Stores the expression in the material function connected to this output." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionFunctionOutput, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_A_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_SortPriority_MetaData[] = {
		{ "Category", "MaterialExpression" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
		{ "ToolTip", "Controls where the output is displayed relative to the other outputs." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_SortPriority = { "SortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionFunctionOutput, SortPriority), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_SortPriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_SortPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionOutput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "The output's description, which will be used as a tooltip on the connector in function call expressions that use this function." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionFunctionOutput, Description), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_OutputName_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionOutput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
		{ "ToolTip", "The output's name, which will be drawn on the connector in function call expressions that use this function." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionFunctionOutput, OutputName), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_OutputName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_OutputName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_bLastPreviewed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_SortPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_OutputName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionFunctionOutput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::ClassParams = {
		&UMaterialExpressionFunctionOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionFunctionOutput, 3793661098);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionFunctionOutput>()
	{
		return UMaterialExpressionFunctionOutput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionFunctionOutput(Z_Construct_UClass_UMaterialExpressionFunctionOutput, &UMaterialExpressionFunctionOutput::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionFunctionOutput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFunctionOutput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
