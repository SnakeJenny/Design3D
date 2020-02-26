// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_MakeVariable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_MakeVariable() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MakeVariable_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MakeVariable();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableDescription();
// End Cross Module References
	void UK2Node_MakeVariable::StaticRegisterNativesUK2Node_MakeVariable()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_MakeVariable_NoRegister()
	{
		return UK2Node_MakeVariable::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_MakeVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariableType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VariableType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_MakeVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MakeVariable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_MakeVariable.h" },
		{ "ModuleRelativePath", "Classes/K2Node_MakeVariable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MakeVariable_Statics::NewProp_VariableType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_MakeVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_MakeVariable_Statics::NewProp_VariableType = { "VariableType", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_MakeVariable, VariableType), Z_Construct_UScriptStruct_FBPVariableDescription, METADATA_PARAMS(Z_Construct_UClass_UK2Node_MakeVariable_Statics::NewProp_VariableType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_MakeVariable_Statics::NewProp_VariableType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_MakeVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_MakeVariable_Statics::NewProp_VariableType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_MakeVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_MakeVariable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_MakeVariable_Statics::ClassParams = {
		&UK2Node_MakeVariable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_MakeVariable_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_MakeVariable_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_MakeVariable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_MakeVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_MakeVariable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_MakeVariable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_MakeVariable, 3002207030);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_MakeVariable>()
	{
		return UK2Node_MakeVariable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_MakeVariable(Z_Construct_UClass_UK2Node_MakeVariable, &UK2Node_MakeVariable::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_MakeVariable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_MakeVariable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
