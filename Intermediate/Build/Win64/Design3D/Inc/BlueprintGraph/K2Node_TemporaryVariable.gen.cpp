// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_TemporaryVariable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_TemporaryVariable() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_TemporaryVariable_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_TemporaryVariable();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
// End Cross Module References
	void UK2Node_TemporaryVariable::StaticRegisterNativesUK2Node_TemporaryVariable()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_TemporaryVariable_NoRegister()
	{
		return UK2Node_TemporaryVariable::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_TemporaryVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPersistent_MetaData[];
#endif
		static void NewProp_bIsPersistent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPersistent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariableType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VariableType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_TemporaryVariable.h" },
		{ "ModuleRelativePath", "Classes/K2Node_TemporaryVariable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_bIsPersistent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_TemporaryVariable.h" },
		{ "ToolTip", "Whether or not this variable should be flagged with CPF_SaveGame, and inherit its name from the GUID of the macro that that gave rise to it" },
	};
#endif
	void Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_bIsPersistent_SetBit(void* Obj)
	{
		((UK2Node_TemporaryVariable*)Obj)->bIsPersistent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_bIsPersistent = { "bIsPersistent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK2Node_TemporaryVariable), &Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_bIsPersistent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_bIsPersistent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_bIsPersistent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_VariableType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_TemporaryVariable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_VariableType = { "VariableType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_TemporaryVariable, VariableType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_VariableType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_VariableType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_bIsPersistent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::NewProp_VariableType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_TemporaryVariable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::ClassParams = {
		&UK2Node_TemporaryVariable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_TemporaryVariable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_TemporaryVariable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_TemporaryVariable, 1262201557);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_TemporaryVariable>()
	{
		return UK2Node_TemporaryVariable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_TemporaryVariable(Z_Construct_UClass_UK2Node_TemporaryVariable, &UK2Node_TemporaryVariable::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_TemporaryVariable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_TemporaryVariable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
