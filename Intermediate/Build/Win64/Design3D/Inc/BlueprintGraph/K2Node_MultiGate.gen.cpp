// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_MultiGate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_MultiGate() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MultiGate_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MultiGate();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ExecutionSequence();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_TemporaryVariable_NoRegister();
// End Cross Module References
	void UK2Node_MultiGate::StaticRegisterNativesUK2Node_MultiGate()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_MultiGate_NoRegister()
	{
		return UK2Node_MultiGate::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_MultiGate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_MultiGate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_ExecutionSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MultiGate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_MultiGate.h" },
		{ "ModuleRelativePath", "Classes/K2Node_MultiGate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MultiGate_Statics::NewProp_DataNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_MultiGate.h" },
		{ "ToolTip", "Reference to the integer that contains" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_MultiGate_Statics::NewProp_DataNode = { "DataNode", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_MultiGate, DataNode), Z_Construct_UClass_UK2Node_TemporaryVariable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_MultiGate_Statics::NewProp_DataNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_MultiGate_Statics::NewProp_DataNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_MultiGate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_MultiGate_Statics::NewProp_DataNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_MultiGate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_MultiGate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_MultiGate_Statics::ClassParams = {
		&UK2Node_MultiGate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_MultiGate_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_MultiGate_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_MultiGate_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_MultiGate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_MultiGate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_MultiGate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_MultiGate, 2505254895);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_MultiGate>()
	{
		return UK2Node_MultiGate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_MultiGate(Z_Construct_UClass_UK2Node_MultiGate, &UK2Node_MultiGate::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_MultiGate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_MultiGate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
