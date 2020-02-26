// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Curves/CurveVector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveVector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UCurveVector_GetVectorValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
// End Cross Module References
	void UCurveVector::StaticRegisterNativesUCurveVector()
	{
		UClass* Class = UCurveVector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVectorValue", &UCurveVector::execGetVectorValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics
	{
		struct CurveVector_eventGetVectorValue_Parms
		{
			float InTime;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurveVector_eventGetVectorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CurveVector_eventGetVectorValue_Parms, InTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::NewProp_InTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveVector.h" },
		{ "ToolTip", "Evaluate this float curve at the specified time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveVector, nullptr, "GetVectorValue", sizeof(CurveVector_eventGetVectorValue_Parms), Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveVector_GetVectorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCurveVector_NoRegister()
	{
		return UCurveVector::StaticClass();
	}
	struct Z_Construct_UClass_UCurveVector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatCurves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveVector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCurveVector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurveVector_GetVectorValue, "GetVectorValue" }, // 3473176072
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveVector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Curves/CurveVector.h" },
		{ "ModuleRelativePath", "Classes/Curves/CurveVector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveVector_Statics::NewProp_FloatCurves_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveVector.h" },
		{ "ToolTip", "Keyframe data, one curve for X, Y and Z" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveVector_Statics::NewProp_FloatCurves = { "FloatCurves", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(FloatCurves, UCurveVector), STRUCT_OFFSET(UCurveVector, FloatCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UCurveVector_Statics::NewProp_FloatCurves_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveVector_Statics::NewProp_FloatCurves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveVector_Statics::NewProp_FloatCurves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveVector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveVector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurveVector_Statics::ClassParams = {
		&UCurveVector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCurveVector_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UCurveVector_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveVector_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCurveVector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveVector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurveVector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurveVector, 3345121808);
	template<> ENGINE_API UClass* StaticClass<UCurveVector>()
	{
		return UCurveVector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveVector(Z_Construct_UClass_UCurveVector, &UCurveVector::StaticClass, TEXT("/Script/Engine"), TEXT("UCurveVector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveVector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
