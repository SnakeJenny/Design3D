// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_EaseFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_EaseFunction() {}
// Cross Module References
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FCustomPin();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EaseFunction_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EaseFunction();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
// End Cross Module References
class UScriptStruct* FCustomPin::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FCustomPin_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomPin, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("CustomPin"), sizeof(FCustomPin), Get_Z_Construct_UScriptStruct_FCustomPin_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FCustomPin>()
{
	return FCustomPin::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomPin(FCustomPin::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("CustomPin"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFCustomPin
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFCustomPin()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomPin")),new UScriptStruct::TCppStructOps<FCustomPin>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFCustomPin;
	struct Z_Construct_UScriptStruct_FCustomPin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValuePin_MetaData[];
#endif
		static void NewProp_bValuePin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValuePin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallFuncPinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CallFuncPinName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PinName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPin_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EaseFunction.h" },
		{ "ToolTip", "UK2Node_EaseFunction" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomPin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomPin>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_bValuePin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EaseFunction.h" },
		{ "ToolTip", "If TRUE this is a custom pin that does come from the type of wildcard pin connected" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_bValuePin_SetBit(void* Obj)
	{
		((FCustomPin*)Obj)->bValuePin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_bValuePin = { "bValuePin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomPin), &Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_bValuePin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_bValuePin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_bValuePin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_CallFuncPinName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EaseFunction.h" },
		{ "ToolTip", "Name of the pin of the call function" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_CallFuncPinName = { "CallFuncPinName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomPin, CallFuncPinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_CallFuncPinName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_CallFuncPinName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_PinName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EaseFunction.h" },
		{ "ToolTip", "Name of the pin within the current node" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomPin, PinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_PinName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_PinName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomPin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_bValuePin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_CallFuncPinName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPin_Statics::NewProp_PinName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomPin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		nullptr,
		&NewStructOps,
		"CustomPin",
		sizeof(FCustomPin),
		alignof(FCustomPin),
		Z_Construct_UScriptStruct_FCustomPin_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPin_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPin_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomPin()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomPin_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomPin"), sizeof(FCustomPin), Get_Z_Construct_UScriptStruct_FCustomPin_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomPin_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomPin_Hash() { return 3651071395U; }
	void UK2Node_EaseFunction::StaticRegisterNativesUK2Node_EaseFunction()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_EaseFunction_NoRegister()
	{
		return UK2Node_EaseFunction::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_EaseFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EaseFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EaseFunctionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_EaseFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EaseFunction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_EaseFunction.h" },
		{ "ModuleRelativePath", "Classes/K2Node_EaseFunction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EaseFunction_Statics::NewProp_EaseFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EaseFunction.h" },
		{ "ToolTip", "Name of the kismet ease function to be called" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_EaseFunction_Statics::NewProp_EaseFunctionName = { "EaseFunctionName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_EaseFunction, EaseFunctionName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_EaseFunction_Statics::NewProp_EaseFunctionName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_EaseFunction_Statics::NewProp_EaseFunctionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_EaseFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_EaseFunction_Statics::NewProp_EaseFunctionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_EaseFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_EaseFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_EaseFunction_Statics::ClassParams = {
		&UK2Node_EaseFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_EaseFunction_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_EaseFunction_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_EaseFunction_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_EaseFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_EaseFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_EaseFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_EaseFunction, 3784832865);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_EaseFunction>()
	{
		return UK2Node_EaseFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_EaseFunction(Z_Construct_UClass_UK2Node_EaseFunction, &UK2Node_EaseFunction::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_EaseFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_EaseFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
