// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_MathExpression.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_MathExpression() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MathExpression_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MathExpression();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Composite();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_MathExpression::StaticRegisterNativesUK2Node_MathExpression()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_MathExpression_NoRegister()
	{
		return UK2Node_MathExpression::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_MathExpression_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMadeAfterRotChange_MetaData[];
#endif
		static void NewProp_bMadeAfterRotChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMadeAfterRotChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Expression;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_MathExpression_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Composite,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MathExpression_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_MathExpression.h" },
		{ "ModuleRelativePath", "Classes/K2Node_MathExpression.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "This node type acts like a collapsed node, a single node that represents\na larger sub-network of nodes (contained within a sub-graph). This node will\ntake the math expression it was named with, and attempt to convert it into a\nseries of math nodes. If it is unsuccessful, then it generates a series of\nactionable errors." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_bMadeAfterRotChange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_MathExpression.h" },
	};
#endif
	void Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_bMadeAfterRotChange_SetBit(void* Obj)
	{
		((UK2Node_MathExpression*)Obj)->bMadeAfterRotChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_bMadeAfterRotChange = { "bMadeAfterRotChange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK2Node_MathExpression), &Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_bMadeAfterRotChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_bMadeAfterRotChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_bMadeAfterRotChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_Expression_MetaData[] = {
		{ "Category", "Expression" },
		{ "ModuleRelativePath", "Classes/K2Node_MathExpression.h" },
		{ "ToolTip", "The math expression to evaluate" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_MathExpression, Expression), METADATA_PARAMS(Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_Expression_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_Expression_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_MathExpression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_bMadeAfterRotChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_MathExpression_Statics::NewProp_Expression,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_MathExpression_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_MathExpression>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_MathExpression_Statics::ClassParams = {
		&UK2Node_MathExpression::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_MathExpression_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_MathExpression_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_MathExpression_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_MathExpression_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_MathExpression()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_MathExpression_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_MathExpression, 522541868);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_MathExpression>()
	{
		return UK2Node_MathExpression::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_MathExpression(Z_Construct_UClass_UK2Node_MathExpression, &UK2Node_MathExpression::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_MathExpression"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_MathExpression);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_MathExpression)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
