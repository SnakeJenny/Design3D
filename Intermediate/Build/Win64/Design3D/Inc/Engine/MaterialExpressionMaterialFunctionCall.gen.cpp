// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionMaterialFunctionCall() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFunctionExpressionOutput();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionOutput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFunctionExpressionInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionInput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
// End Cross Module References
class UScriptStruct* FFunctionExpressionOutput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFunctionExpressionOutput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFunctionExpressionOutput, Z_Construct_UPackage__Script_Engine(), TEXT("FunctionExpressionOutput"), sizeof(FFunctionExpressionOutput), Get_Z_Construct_UScriptStruct_FFunctionExpressionOutput_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFunctionExpressionOutput>()
{
	return FFunctionExpressionOutput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFunctionExpressionOutput(FFunctionExpressionOutput::StaticStruct, TEXT("/Script/Engine"), TEXT("FunctionExpressionOutput"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFunctionExpressionOutput
{
	FScriptStruct_Engine_StaticRegisterNativesFFunctionExpressionOutput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FunctionExpressionOutput")),new UScriptStruct::TCppStructOps<FFunctionExpressionOutput>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFunctionExpressionOutput;
	struct Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Output;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionOutputId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionOutputId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionOutput_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExpressionOutput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Struct that stores information about a function output which is needed to maintain connections and implement the function call." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFunctionExpressionOutput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_Output_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Actual output struct which stores information about how this output is connected in the material." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionExpressionOutput, Output), Z_Construct_UScriptStruct_FExpressionOutput, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_Output_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_Output_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_ExpressionOutputId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Id of the FunctionOutput, used to link ExpressionOutput." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_ExpressionOutputId = { "ExpressionOutputId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionExpressionOutput, ExpressionOutputId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_ExpressionOutputId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_ExpressionOutputId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_ExpressionOutput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Reference to the FunctionOutput in the material function.\nThis is a reference to a private object so it can't be saved, and must be generated by UpdateFromFunctionResource or SetMaterialFunction." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_ExpressionOutput = { "ExpressionOutput", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionExpressionOutput, ExpressionOutput), Z_Construct_UClass_UMaterialExpressionFunctionOutput_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_ExpressionOutput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_ExpressionOutput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_Output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_ExpressionOutputId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::NewProp_ExpressionOutput,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FunctionExpressionOutput",
		sizeof(FFunctionExpressionOutput),
		alignof(FFunctionExpressionOutput),
		Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFunctionExpressionOutput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFunctionExpressionOutput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FunctionExpressionOutput"), sizeof(FFunctionExpressionOutput), Get_Z_Construct_UScriptStruct_FFunctionExpressionOutput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFunctionExpressionOutput_Hash() { return 2447235478U; }
class UScriptStruct* FFunctionExpressionInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFunctionExpressionInput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFunctionExpressionInput, Z_Construct_UPackage__Script_Engine(), TEXT("FunctionExpressionInput"), sizeof(FFunctionExpressionInput), Get_Z_Construct_UScriptStruct_FFunctionExpressionInput_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFunctionExpressionInput>()
{
	return FFunctionExpressionInput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFunctionExpressionInput(FFunctionExpressionInput::StaticStruct, TEXT("/Script/Engine"), TEXT("FunctionExpressionInput"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFunctionExpressionInput
{
	FScriptStruct_Engine_StaticRegisterNativesFFunctionExpressionInput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FunctionExpressionInput")),new UScriptStruct::TCppStructOps<FFunctionExpressionInput>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFunctionExpressionInput;
	struct Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionInputId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionInputId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExpressionInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Struct that stores information about a function input which is needed to maintain connections and implement the function call." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFunctionExpressionInput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Actual input struct which stores information about how this input is connected in the material." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionExpressionInput, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_ExpressionInputId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Id of the FunctionInput, used to link ExpressionInput." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_ExpressionInputId = { "ExpressionInputId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionExpressionInput, ExpressionInputId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_ExpressionInputId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_ExpressionInputId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_ExpressionInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Reference to the FunctionInput in the material function.\nThis is a reference to a private object so it can't be saved, and must be generated by UpdateFromFunctionResource or SetMaterialFunction." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_ExpressionInput = { "ExpressionInput", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFunctionExpressionInput, ExpressionInput), Z_Construct_UClass_UMaterialExpressionFunctionInput_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_ExpressionInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_ExpressionInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_ExpressionInputId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::NewProp_ExpressionInput,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FunctionExpressionInput",
		sizeof(FFunctionExpressionInput),
		alignof(FFunctionExpressionInput),
		Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFunctionExpressionInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFunctionExpressionInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FunctionExpressionInput"), sizeof(FFunctionExpressionInput), Get_Z_Construct_UScriptStruct_FFunctionExpressionInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFunctionExpressionInput_Hash() { return 4083274486U; }
	void UMaterialExpressionMaterialFunctionCall::StaticRegisterNativesUMaterialExpressionMaterialFunctionCall()
	{
#if WITH_EDITOR
		UClass* Class = UMaterialExpressionMaterialFunctionCall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMaterialFunction", &UMaterialExpressionMaterialFunctionCall::execSetMaterialFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics
	{
		struct MaterialExpressionMaterialFunctionCall_eventSetMaterialFunction_Parms
		{
			UMaterialFunctionInterface* NewMaterialFunction;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMaterialFunction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialExpressionMaterialFunctionCall_eventSetMaterialFunction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MaterialExpressionMaterialFunctionCall_eventSetMaterialFunction_Parms), &Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::NewProp_NewMaterialFunction = { "NewMaterialFunction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialExpressionMaterialFunctionCall_eventSetMaterialFunction_Parms, NewMaterialFunction), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::NewProp_NewMaterialFunction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall, nullptr, "SetMaterialFunction", sizeof(MaterialExpressionMaterialFunctionCall_eventSetMaterialFunction_Parms), Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister()
	{
		return UMaterialExpressionMaterialFunctionCall::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FunctionParameterInfo;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionOutputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunctionOutputs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FunctionOutputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionInputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunctionInputs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FunctionInputs_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialFunction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMaterialExpressionMaterialFunctionCall_SetMaterialFunction, "SetMaterialFunction" }, // 1147722254
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object Object" },
		{ "IncludePath", "Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionParameterInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Used by material parameters to split references to separate instances." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionParameterInfo = { "FunctionParameterInfo", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionMaterialFunctionCall, FunctionParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionParameterInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionParameterInfo_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionOutputs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Array of all the function outputs that this function exposes." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionOutputs = { "FunctionOutputs", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionMaterialFunctionCall, FunctionOutputs), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionOutputs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionOutputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionOutputs_Inner = { "FunctionOutputs", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFunctionExpressionOutput, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionInputs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "Array of all the function inputs that this function exposes." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionInputs = { "FunctionInputs", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionMaterialFunctionCall, FunctionInputs), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionInputs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionInputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionInputs_Inner = { "FunctionInputs", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFunctionExpressionInput, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_MaterialFunction_MetaData[] = {
		{ "Category", "MaterialExpressionMaterialFunctionCall" },
		{ "DisallowedClasses", "MaterialFunctionInstance" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialFunctionCall.h" },
		{ "ToolTip", "The function to call." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_MaterialFunction = { "MaterialFunction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionMaterialFunctionCall, MaterialFunction), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_MaterialFunction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_MaterialFunction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionParameterInfo,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionOutputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionOutputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionInputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_FunctionInputs_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::NewProp_MaterialFunction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMaterialFunctionCall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::ClassParams = {
		&UMaterialExpressionMaterialFunctionCall::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(ARRAY_COUNT(FuncInfo), 0),
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionMaterialFunctionCall, 1404628844);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionMaterialFunctionCall>()
	{
		return UMaterialExpressionMaterialFunctionCall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionMaterialFunctionCall(Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall, &UMaterialExpressionMaterialFunctionCall::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionMaterialFunctionCall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMaterialFunctionCall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
