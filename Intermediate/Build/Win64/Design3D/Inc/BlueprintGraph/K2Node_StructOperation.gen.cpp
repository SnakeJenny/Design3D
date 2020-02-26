// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_StructOperation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_StructOperation() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_StructOperation_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_StructOperation();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Variable();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
// End Cross Module References
	void UK2Node_StructOperation::StaticRegisterNativesUK2Node_StructOperation()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_StructOperation_NoRegister()
	{
		return UK2Node_StructOperation::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_StructOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StructType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StructType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_StructOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Variable,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_StructOperation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_StructOperation.h" },
		{ "ModuleRelativePath", "Classes/K2Node_StructOperation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_StructOperation_Statics::NewProp_StructType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_StructOperation.h" },
		{ "ToolTip", "Class that this variable is defined in." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_StructOperation_Statics::NewProp_StructType = { "StructType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_StructOperation, StructType), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UClass_UK2Node_StructOperation_Statics::NewProp_StructType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_StructOperation_Statics::NewProp_StructType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_StructOperation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_StructOperation_Statics::NewProp_StructType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_StructOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_StructOperation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_StructOperation_Statics::ClassParams = {
		&UK2Node_StructOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_StructOperation_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_StructOperation_Statics::PropPointers),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_StructOperation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_StructOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_StructOperation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_StructOperation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_StructOperation, 1458068984);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_StructOperation>()
	{
		return UK2Node_StructOperation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_StructOperation(Z_Construct_UClass_UK2Node_StructOperation, &UK2Node_StructOperation::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_StructOperation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_StructOperation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
