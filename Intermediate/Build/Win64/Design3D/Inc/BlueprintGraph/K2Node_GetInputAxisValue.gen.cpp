// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_GetInputAxisValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_GetInputAxisValue() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetInputAxisValue_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetInputAxisValue();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CallFunction();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_GetInputAxisValue::StaticRegisterNativesUK2Node_GetInputAxisValue()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_GetInputAxisValue_NoRegister()
	{
		return UK2Node_GetInputAxisValue::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExecuteWhenPaused_MetaData[];
#endif
		static void NewProp_bExecuteWhenPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExecuteWhenPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConsumeInput_MetaData[];
#endif
		static void NewProp_bConsumeInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConsumeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputAxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputAxisName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_CallFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GetInputAxisValue.h" },
		{ "Keywords", "Get" },
		{ "ModuleRelativePath", "Classes/K2Node_GetInputAxisValue.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::NewProp_bExecuteWhenPaused_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/K2Node_GetInputAxisValue.h" },
		{ "ToolTip", "Should the binding gather input even when the game is paused" },
	};
#endif
	void Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::NewProp_bExecuteWhenPaused_SetBit(void* Obj)
	{
		((UK2Node_GetInputAxisValue*)Obj)->bExecuteWhenPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::NewProp_bExecuteWhenPaused = { "bExecuteWhenPaused", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_GetInputAxisValue), &Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::NewProp_bExecuteWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::NewProp_bExecuteWhenPaused_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::NewProp_bExecuteWhenPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::NewProp_bConsumeInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/K2Node_GetInputAxisValue.h" },
		{ "ToolTip", "Prevents actors with lower priority from handling this input" },
	};
#endif
	void Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::NewProp_bConsumeInput_SetBit(void* Obj)
	{
		((UK2Node_GetInputAxisValue*)Obj)->bConsumeInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::NewProp_bConsumeInput = { "bConsumeInput", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_GetInputAxisValue), &Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::NewProp_bConsumeInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::NewProp_bConsumeInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::NewProp_bConsumeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::NewProp_InputAxisName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_GetInputAxisValue.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::NewProp_InputAxisName = { "InputAxisName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_GetInputAxisValue, InputAxisName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::NewProp_InputAxisName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::NewProp_InputAxisName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::NewProp_bExecuteWhenPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::NewProp_bConsumeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::NewProp_InputAxisName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetInputAxisValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::ClassParams = {
		&UK2Node_GetInputAxisValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetInputAxisValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_GetInputAxisValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_GetInputAxisValue, 2966279830);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_GetInputAxisValue>()
	{
		return UK2Node_GetInputAxisValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_GetInputAxisValue(Z_Construct_UClass_UK2Node_GetInputAxisValue, &UK2Node_GetInputAxisValue::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_GetInputAxisValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetInputAxisValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
