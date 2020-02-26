// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnvironmentQueryEditor/Classes/EnvironmentQueryGraphNode_Test.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvironmentQueryGraphNode_Test() {}
// Cross Module References
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_NoRegister();
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Test();
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode();
	UPackage* Z_Construct_UPackage__Script_EnvironmentQueryEditor();
// End Cross Module References
	void UEnvironmentQueryGraphNode_Test::StaticRegisterNativesUEnvironmentQueryGraphNode_Test()
	{
	}
	UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_NoRegister()
	{
		return UEnvironmentQueryGraphNode_Test::StaticClass();
	}
	struct Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTestEnabled_MetaData[];
#endif
		static void NewProp_bTestEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTestEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasNamedWeight_MetaData[];
#endif
		static void NewProp_bHasNamedWeight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasNamedWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestWeightPct_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TestWeightPct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvironmentQueryGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_EnvironmentQueryEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQueryGraphNode_Test.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQueryGraphNode_Test.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bTestEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQueryGraphNode_Test.h" },
		{ "ToolTip", "toggles test" },
	};
#endif
	void Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bTestEnabled_SetBit(void* Obj)
	{
		((UEnvironmentQueryGraphNode_Test*)Obj)->bTestEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bTestEnabled = { "bTestEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEnvironmentQueryGraphNode_Test), &Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bTestEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bTestEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bTestEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bHasNamedWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQueryGraphNode_Test.h" },
		{ "ToolTip", "weight is passed as named param" },
	};
#endif
	void Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bHasNamedWeight_SetBit(void* Obj)
	{
		((UEnvironmentQueryGraphNode_Test*)Obj)->bHasNamedWeight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bHasNamedWeight = { "bHasNamedWeight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEnvironmentQueryGraphNode_Test), &Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bHasNamedWeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bHasNamedWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bHasNamedWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_TestWeightPct_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQueryGraphNode_Test.h" },
		{ "ToolTip", "weight percent for display" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_TestWeightPct = { "TestWeightPct", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvironmentQueryGraphNode_Test, TestWeightPct), METADATA_PARAMS(Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_TestWeightPct_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_TestWeightPct_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bTestEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_bHasNamedWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::NewProp_TestWeightPct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvironmentQueryGraphNode_Test>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::ClassParams = {
		&UEnvironmentQueryGraphNode_Test::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Test()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvironmentQueryGraphNode_Test_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvironmentQueryGraphNode_Test, 772612572);
	template<> ENVIRONMENTQUERYEDITOR_API UClass* StaticClass<UEnvironmentQueryGraphNode_Test>()
	{
		return UEnvironmentQueryGraphNode_Test::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvironmentQueryGraphNode_Test(Z_Construct_UClass_UEnvironmentQueryGraphNode_Test, &UEnvironmentQueryGraphNode_Test::StaticClass, TEXT("/Script/EnvironmentQueryEditor"), TEXT("UEnvironmentQueryGraphNode_Test"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvironmentQueryGraphNode_Test);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
