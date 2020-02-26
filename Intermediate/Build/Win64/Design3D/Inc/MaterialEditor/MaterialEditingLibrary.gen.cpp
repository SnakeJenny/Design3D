// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialEditor/Public/MaterialEditingLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialEditingLibrary() {}
// Cross Module References
	MATERIALEDITOR_API UClass* Z_Construct_UClass_UMaterialEditingLibrary_NoRegister();
	MATERIALEDITOR_API UClass* Z_Construct_UClass_UMaterialEditingLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_MaterialEditor();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression_NoRegister();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialProperty();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialUsage();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
	MATERIALEDITOR_API UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance();
// End Cross Module References
	void UMaterialEditingLibrary::StaticRegisterNativesUMaterialEditingLibrary()
	{
		UClass* Class = UMaterialEditingLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAllMaterialInstanceParameters", &UMaterialEditingLibrary::execClearAllMaterialInstanceParameters },
			{ "ConnectMaterialExpressions", &UMaterialEditingLibrary::execConnectMaterialExpressions },
			{ "ConnectMaterialProperty", &UMaterialEditingLibrary::execConnectMaterialProperty },
			{ "CreateMaterialExpression", &UMaterialEditingLibrary::execCreateMaterialExpression },
			{ "CreateMaterialExpressionInFunction", &UMaterialEditingLibrary::execCreateMaterialExpressionInFunction },
			{ "DeleteAllMaterialExpressions", &UMaterialEditingLibrary::execDeleteAllMaterialExpressions },
			{ "DeleteAllMaterialExpressionsInFunction", &UMaterialEditingLibrary::execDeleteAllMaterialExpressionsInFunction },
			{ "DeleteMaterialExpression", &UMaterialEditingLibrary::execDeleteMaterialExpression },
			{ "DeleteMaterialExpressionInFunction", &UMaterialEditingLibrary::execDeleteMaterialExpressionInFunction },
			{ "GetMaterialInstanceScalarParameterValue", &UMaterialEditingLibrary::execGetMaterialInstanceScalarParameterValue },
			{ "GetMaterialInstanceTextureParameterValue", &UMaterialEditingLibrary::execGetMaterialInstanceTextureParameterValue },
			{ "GetMaterialInstanceVectorParameterValue", &UMaterialEditingLibrary::execGetMaterialInstanceVectorParameterValue },
			{ "GetNumMaterialExpressions", &UMaterialEditingLibrary::execGetNumMaterialExpressions },
			{ "GetNumMaterialExpressionsInFunction", &UMaterialEditingLibrary::execGetNumMaterialExpressionsInFunction },
			{ "LayoutMaterialExpressions", &UMaterialEditingLibrary::execLayoutMaterialExpressions },
			{ "LayoutMaterialFunctionExpressions", &UMaterialEditingLibrary::execLayoutMaterialFunctionExpressions },
			{ "RecompileMaterial", &UMaterialEditingLibrary::execRecompileMaterial },
			{ "SetMaterialInstanceParent", &UMaterialEditingLibrary::execSetMaterialInstanceParent },
			{ "SetMaterialInstanceScalarParameterValue", &UMaterialEditingLibrary::execSetMaterialInstanceScalarParameterValue },
			{ "SetMaterialInstanceTextureParameterValue", &UMaterialEditingLibrary::execSetMaterialInstanceTextureParameterValue },
			{ "SetMaterialInstanceVectorParameterValue", &UMaterialEditingLibrary::execSetMaterialInstanceVectorParameterValue },
			{ "SetMaterialUsage", &UMaterialEditingLibrary::execSetMaterialUsage },
			{ "UpdateMaterialFunction", &UMaterialEditingLibrary::execUpdateMaterialFunction },
			{ "UpdateMaterialInstance", &UMaterialEditingLibrary::execUpdateMaterialInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics
	{
		struct MaterialEditingLibrary_eventClearAllMaterialInstanceParameters_Parms
		{
			UMaterialInstanceConstant* Instance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventClearAllMaterialInstanceParameters_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Clears all material parameters set by this Material Instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "ClearAllMaterialInstanceParameters", sizeof(MaterialEditingLibrary_eventClearAllMaterialInstanceParameters_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics
	{
		struct MaterialEditingLibrary_eventConnectMaterialExpressions_Parms
		{
			UMaterialExpression* FromExpression;
			FString FromOutputName;
			UMaterialExpression* ToExpression;
			FString ToInputName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ToInputName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToExpression;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FromOutputName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FromExpression;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventConnectMaterialExpressions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MaterialEditingLibrary_eventConnectMaterialExpressions_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_ToInputName = { "ToInputName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventConnectMaterialExpressions_Parms, ToInputName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_ToExpression = { "ToExpression", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventConnectMaterialExpressions_Parms, ToExpression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_FromOutputName = { "FromOutputName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventConnectMaterialExpressions_Parms, FromOutputName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_FromExpression = { "FromExpression", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventConnectMaterialExpressions_Parms, FromExpression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_ToInputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_ToExpression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_FromOutputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_FromExpression,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Create connection between two material expressions\n@param  FromExpression          Expression to make connection from\n@param  FromOutputName          Name of output of FromExpression to make connection from. Leave empty to use first output.\n@param  ToExpression            Expression to make connection to\n@param  ToInputName                     Name of input of ToExpression to make connection to. Leave empty to use first input." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "ConnectMaterialExpressions", sizeof(MaterialEditingLibrary_eventConnectMaterialExpressions_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics
	{
		struct MaterialEditingLibrary_eventConnectMaterialProperty_Parms
		{
			UMaterialExpression* FromExpression;
			FString FromOutputName;
			TEnumAsByte<EMaterialProperty> Property;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Property;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FromOutputName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FromExpression;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventConnectMaterialProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MaterialEditingLibrary_eventConnectMaterialProperty_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventConnectMaterialProperty_Parms, Property), Z_Construct_UEnum_Engine_EMaterialProperty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::NewProp_FromOutputName = { "FromOutputName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventConnectMaterialProperty_Parms, FromOutputName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::NewProp_FromExpression = { "FromExpression", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventConnectMaterialProperty_Parms, FromExpression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::NewProp_Property,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::NewProp_FromOutputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::NewProp_FromExpression,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Connect a material expression output to one of the material property inputs (e.g. diffuse color, opacity etc)\n@param  FromExpression          Expression to make connection from\n@param  FromOutputName          Name of output of FromExpression to make connection from\n@param  Property                        Property input on material to make connection to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "ConnectMaterialProperty", sizeof(MaterialEditingLibrary_eventConnectMaterialProperty_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics
	{
		struct MaterialEditingLibrary_eventCreateMaterialExpression_Parms
		{
			UMaterial* Material;
			TSubclassOf<UMaterialExpression>  ExpressionClass;
			int32 NodePosX;
			int32 NodePosY;
			UMaterialExpression* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodePosY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodePosX;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ExpressionClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventCreateMaterialExpression_Parms, ReturnValue), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::NewProp_NodePosY = { "NodePosY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventCreateMaterialExpression_Parms, NodePosY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::NewProp_NodePosX = { "NodePosX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventCreateMaterialExpression_Parms, NodePosX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::NewProp_ExpressionClass = { "ExpressionClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventCreateMaterialExpression_Parms, ExpressionClass), Z_Construct_UClass_UMaterialExpression_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventCreateMaterialExpression_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::NewProp_NodePosY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::NewProp_NodePosX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::NewProp_ExpressionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "CPP_Default_NodePosX", "0" },
		{ "CPP_Default_NodePosY", "0" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Create a new material expression node within the supplied material\n@param  Material                        Material asset to add an expression to\n@param  ExpressionClass         Class of expression to add\n@param  NodePosX                        X position of new expression node\n@param  NodePosY                        Y position of new expression node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "CreateMaterialExpression", sizeof(MaterialEditingLibrary_eventCreateMaterialExpression_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics
	{
		struct MaterialEditingLibrary_eventCreateMaterialExpressionInFunction_Parms
		{
			UMaterialFunction* MaterialFunction;
			TSubclassOf<UMaterialExpression>  ExpressionClass;
			int32 NodePosX;
			int32 NodePosY;
			UMaterialExpression* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodePosY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodePosX;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ExpressionClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialFunction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventCreateMaterialExpressionInFunction_Parms, ReturnValue), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::NewProp_NodePosY = { "NodePosY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventCreateMaterialExpressionInFunction_Parms, NodePosY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::NewProp_NodePosX = { "NodePosX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventCreateMaterialExpressionInFunction_Parms, NodePosX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::NewProp_ExpressionClass = { "ExpressionClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventCreateMaterialExpressionInFunction_Parms, ExpressionClass), Z_Construct_UClass_UMaterialExpression_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::NewProp_MaterialFunction = { "MaterialFunction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventCreateMaterialExpressionInFunction_Parms, MaterialFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::NewProp_NodePosY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::NewProp_NodePosX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::NewProp_ExpressionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::NewProp_MaterialFunction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "CPP_Default_NodePosX", "0" },
		{ "CPP_Default_NodePosY", "0" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Create a new material expression node within the supplied material function\n@param  MaterialFunction        Material function asset to add an expression to\n@param  ExpressionClass         Class of expression to add\n@param  NodePosX                        X position of new expression node\n@param  NodePosY                        Y position of new expression node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "CreateMaterialExpressionInFunction", sizeof(MaterialEditingLibrary_eventCreateMaterialExpressionInFunction_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics
	{
		struct MaterialEditingLibrary_eventDeleteAllMaterialExpressions_Parms
		{
			UMaterial* Material;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventDeleteAllMaterialExpressions_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Delete all material expressions in the supplied material" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "DeleteAllMaterialExpressions", sizeof(MaterialEditingLibrary_eventDeleteAllMaterialExpressions_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics
	{
		struct MaterialEditingLibrary_eventDeleteAllMaterialExpressionsInFunction_Parms
		{
			UMaterialFunction* MaterialFunction;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialFunction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::NewProp_MaterialFunction = { "MaterialFunction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventDeleteAllMaterialExpressionsInFunction_Parms, MaterialFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::NewProp_MaterialFunction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Delete all material expressions in the supplied material function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "DeleteAllMaterialExpressionsInFunction", sizeof(MaterialEditingLibrary_eventDeleteAllMaterialExpressionsInFunction_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics
	{
		struct MaterialEditingLibrary_eventDeleteMaterialExpression_Parms
		{
			UMaterial* Material;
			UMaterialExpression* Expression;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Expression;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventDeleteMaterialExpression_Parms, Expression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventDeleteMaterialExpression_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::NewProp_Expression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Delete a specific expression from a material. Will disconnect from other expressions." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "DeleteMaterialExpression", sizeof(MaterialEditingLibrary_eventDeleteMaterialExpression_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics
	{
		struct MaterialEditingLibrary_eventDeleteMaterialExpressionInFunction_Parms
		{
			UMaterialFunction* MaterialFunction;
			UMaterialExpression* Expression;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Expression;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialFunction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventDeleteMaterialExpressionInFunction_Parms, Expression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::NewProp_MaterialFunction = { "MaterialFunction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventDeleteMaterialExpressionInFunction_Parms, MaterialFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::NewProp_Expression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::NewProp_MaterialFunction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Delete a specific expression from a material function. Will disconnect from other expressions." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "DeleteMaterialExpressionInFunction", sizeof(MaterialEditingLibrary_eventDeleteMaterialExpressionInFunction_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventGetMaterialInstanceScalarParameterValue_Parms
		{
			UMaterialInstanceConstant* Instance;
			FName ParameterName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceScalarParameterValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceScalarParameterValue_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Get the current scalar (float) parameter value from a Material Instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetMaterialInstanceScalarParameterValue", sizeof(MaterialEditingLibrary_eventGetMaterialInstanceScalarParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventGetMaterialInstanceTextureParameterValue_Parms
		{
			UMaterialInstanceConstant* Instance;
			FName ParameterName;
			UTexture* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceTextureParameterValue_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceTextureParameterValue_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Get the current texture parameter value from a Material Instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetMaterialInstanceTextureParameterValue", sizeof(MaterialEditingLibrary_eventGetMaterialInstanceTextureParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventGetMaterialInstanceVectorParameterValue_Parms
		{
			UMaterialInstanceConstant* Instance;
			FName ParameterName;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceVectorParameterValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceVectorParameterValue_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Get the current vector parameter value from a Material Instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetMaterialInstanceVectorParameterValue", sizeof(MaterialEditingLibrary_eventGetMaterialInstanceVectorParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics
	{
		struct MaterialEditingLibrary_eventGetNumMaterialExpressions_Parms
		{
			const UMaterial* Material;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventGetNumMaterialExpressions_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::NewProp_Material_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventGetNumMaterialExpressions_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Returns number of material expressions in the supplied material" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetNumMaterialExpressions", sizeof(MaterialEditingLibrary_eventGetNumMaterialExpressions_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics
	{
		struct MaterialEditingLibrary_eventGetNumMaterialExpressionsInFunction_Parms
		{
			const UMaterialFunction* MaterialFunction;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialFunction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventGetNumMaterialExpressionsInFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::NewProp_MaterialFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::NewProp_MaterialFunction = { "MaterialFunction", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventGetNumMaterialExpressionsInFunction_Parms, MaterialFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::NewProp_MaterialFunction_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::NewProp_MaterialFunction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::NewProp_MaterialFunction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Returns number of material expressions in the supplied material" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetNumMaterialExpressionsInFunction", sizeof(MaterialEditingLibrary_eventGetNumMaterialExpressionsInFunction_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics
	{
		struct MaterialEditingLibrary_eventLayoutMaterialExpressions_Parms
		{
			UMaterial* Material;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventLayoutMaterialExpressions_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Layouts the expressions in a grid pattern" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "LayoutMaterialExpressions", sizeof(MaterialEditingLibrary_eventLayoutMaterialExpressions_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics
	{
		struct MaterialEditingLibrary_eventLayoutMaterialFunctionExpressions_Parms
		{
			UMaterialFunction* MaterialFunction;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialFunction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::NewProp_MaterialFunction = { "MaterialFunction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventLayoutMaterialFunctionExpressions_Parms, MaterialFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::NewProp_MaterialFunction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Layouts the expressions in a grid pattern" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "LayoutMaterialFunctionExpressions", sizeof(MaterialEditingLibrary_eventLayoutMaterialFunctionExpressions_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics
	{
		struct MaterialEditingLibrary_eventRecompileMaterial_Parms
		{
			UMaterial* Material;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventRecompileMaterial_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Trigger a recompile of a material. Must be performed after making changes to the graph to have changes reflected." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "RecompileMaterial", sizeof(MaterialEditingLibrary_eventRecompileMaterial_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics
	{
		struct MaterialEditingLibrary_eventSetMaterialInstanceParent_Parms
		{
			UMaterialInstanceConstant* Instance;
			UMaterialInterface* NewParent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewParent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::NewProp_NewParent = { "NewParent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceParent_Parms, NewParent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceParent_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::NewProp_NewParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Set the parent Material or Material Instance to use for this Material Instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "SetMaterialInstanceParent", sizeof(MaterialEditingLibrary_eventSetMaterialInstanceParent_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventSetMaterialInstanceScalarParameterValue_Parms
		{
			UMaterialInstanceConstant* Instance;
			FName ParameterName;
			float Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventSetMaterialInstanceScalarParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MaterialEditingLibrary_eventSetMaterialInstanceScalarParameterValue_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceScalarParameterValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceScalarParameterValue_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Set the scalar (float) parameter value for a Material Instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "SetMaterialInstanceScalarParameterValue", sizeof(MaterialEditingLibrary_eventSetMaterialInstanceScalarParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventSetMaterialInstanceTextureParameterValue_Parms
		{
			UMaterialInstanceConstant* Instance;
			FName ParameterName;
			UTexture* Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventSetMaterialInstanceTextureParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MaterialEditingLibrary_eventSetMaterialInstanceTextureParameterValue_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceTextureParameterValue_Parms, Value), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceTextureParameterValue_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Set the texture parameter value for a Material Instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "SetMaterialInstanceTextureParameterValue", sizeof(MaterialEditingLibrary_eventSetMaterialInstanceTextureParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventSetMaterialInstanceVectorParameterValue_Parms
		{
			UMaterialInstanceConstant* Instance;
			FName ParameterName;
			FLinearColor Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventSetMaterialInstanceVectorParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MaterialEditingLibrary_eventSetMaterialInstanceVectorParameterValue_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceVectorParameterValue_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceVectorParameterValue_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Set the vector parameter value for a Material Instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "SetMaterialInstanceVectorParameterValue", sizeof(MaterialEditingLibrary_eventSetMaterialInstanceVectorParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics
	{
		struct MaterialEditingLibrary_eventSetMaterialUsage_Parms
		{
			UMaterial* Material;
			TEnumAsByte<EMaterialUsage> Usage;
			bool bNeedsRecompile;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bNeedsRecompile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedsRecompile;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Usage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventSetMaterialUsage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MaterialEditingLibrary_eventSetMaterialUsage_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_bNeedsRecompile_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventSetMaterialUsage_Parms*)Obj)->bNeedsRecompile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_bNeedsRecompile = { "bNeedsRecompile", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MaterialEditingLibrary_eventSetMaterialUsage_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_bNeedsRecompile_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_Usage = { "Usage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialUsage_Parms, Usage), Z_Construct_UEnum_Engine_EMaterialUsage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialUsage_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_bNeedsRecompile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_Usage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Enable a particular usage for the supplied material (e.g. SkeletalMesh, ParticleSprite etc)\n@param  Material                        Material to change usage for\n@param  Usage                           New usage type to enable for this material\n@param  bNeedsRecompile         Returned to indicate if material needs recompiling after this change" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "SetMaterialUsage", sizeof(MaterialEditingLibrary_eventSetMaterialUsage_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics
	{
		struct MaterialEditingLibrary_eventUpdateMaterialFunction_Parms
		{
			UMaterialFunctionInterface* MaterialFunction;
			UMaterial* PreviewMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialFunction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::NewProp_PreviewMaterial = { "PreviewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventUpdateMaterialFunction_Parms, PreviewMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::NewProp_MaterialFunction = { "MaterialFunction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventUpdateMaterialFunction_Parms, MaterialFunction), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::NewProp_PreviewMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::NewProp_MaterialFunction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "CPP_Default_PreviewMaterial", "None" },
		{ "HidePin", "PreviewMaterial" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Update a Material Function after edits have been made.\nWill recompile any Materials that use the supplied Material Function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "UpdateMaterialFunction", sizeof(MaterialEditingLibrary_eventUpdateMaterialFunction_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics
	{
		struct MaterialEditingLibrary_eventUpdateMaterialInstance_Parms
		{
			UMaterialInstanceConstant* Instance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialEditingLibrary_eventUpdateMaterialInstance_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Called after making modifications to a Material Instance to recompile shaders etc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "UpdateMaterialInstance", sizeof(MaterialEditingLibrary_eventUpdateMaterialInstance_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMaterialEditingLibrary_NoRegister()
	{
		return UMaterialEditingLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialEditingLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialEditingLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialEditingLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters, "ClearAllMaterialInstanceParameters" }, // 3299390353
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions, "ConnectMaterialExpressions" }, // 3962963016
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty, "ConnectMaterialProperty" }, // 1931413410
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression, "CreateMaterialExpression" }, // 230708457
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction, "CreateMaterialExpressionInFunction" }, // 733613840
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions, "DeleteAllMaterialExpressions" }, // 3002807880
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction, "DeleteAllMaterialExpressionsInFunction" }, // 1397667962
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression, "DeleteMaterialExpression" }, // 3093466157
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction, "DeleteMaterialExpressionInFunction" }, // 958609486
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue, "GetMaterialInstanceScalarParameterValue" }, // 4173927881
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue, "GetMaterialInstanceTextureParameterValue" }, // 306307766
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue, "GetMaterialInstanceVectorParameterValue" }, // 2961168287
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions, "GetNumMaterialExpressions" }, // 3831453660
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction, "GetNumMaterialExpressionsInFunction" }, // 3158114354
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions, "LayoutMaterialExpressions" }, // 4131551653
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions, "LayoutMaterialFunctionExpressions" }, // 278001999
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial, "RecompileMaterial" }, // 296450848
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent, "SetMaterialInstanceParent" }, // 904364619
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue, "SetMaterialInstanceScalarParameterValue" }, // 1904652751
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue, "SetMaterialInstanceTextureParameterValue" }, // 3462648012
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue, "SetMaterialInstanceVectorParameterValue" }, // 3839228257
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage, "SetMaterialUsage" }, // 951177795
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction, "UpdateMaterialFunction" }, // 4201635800
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance, "UpdateMaterialInstance" }, // 3370868011
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditingLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialEditingLibrary.h" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Blueprint library for creating/editing Materials" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialEditingLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialEditingLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialEditingLibrary_Statics::ClassParams = {
		&UMaterialEditingLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialEditingLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditingLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialEditingLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialEditingLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialEditingLibrary, 3014056209);
	template<> MATERIALEDITOR_API UClass* StaticClass<UMaterialEditingLibrary>()
	{
		return UMaterialEditingLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialEditingLibrary(Z_Construct_UClass_UMaterialEditingLibrary, &UMaterialEditingLibrary::StaticClass, TEXT("/Script/MaterialEditor"), TEXT("UMaterialEditingLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialEditingLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
