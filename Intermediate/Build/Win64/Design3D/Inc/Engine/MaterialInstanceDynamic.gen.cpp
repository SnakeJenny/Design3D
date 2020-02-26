// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialInstanceDynamic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstanceDynamic() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue();
// End Cross Module References
	void UMaterialInstanceDynamic::StaticRegisterNativesUMaterialInstanceDynamic()
	{
		UClass* Class = UMaterialInstanceDynamic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyInterpParameters", &UMaterialInstanceDynamic::execCopyInterpParameters },
			{ "CopyParameterOverrides", &UMaterialInstanceDynamic::execCopyParameterOverrides },
			{ "K2_CopyMaterialInstanceParameters", &UMaterialInstanceDynamic::execK2_CopyMaterialInstanceParameters },
			{ "K2_GetScalarParameterValue", &UMaterialInstanceDynamic::execK2_GetScalarParameterValue },
			{ "K2_GetTextureParameterValue", &UMaterialInstanceDynamic::execK2_GetTextureParameterValue },
			{ "K2_GetVectorParameterValue", &UMaterialInstanceDynamic::execK2_GetVectorParameterValue },
			{ "K2_InterpolateMaterialInstanceParams", &UMaterialInstanceDynamic::execK2_InterpolateMaterialInstanceParams },
			{ "SetScalarParameterValue", &UMaterialInstanceDynamic::execSetScalarParameterValue },
			{ "SetTextureParameterValue", &UMaterialInstanceDynamic::execSetTextureParameterValue },
			{ "SetVectorParameterValue", &UMaterialInstanceDynamic::execSetVectorParameterValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics
	{
		struct MaterialInstanceDynamic_eventCopyInterpParameters_Parms
		{
			UMaterialInstance* Source;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventCopyInterpParameters_Parms, Source), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "DisplayName", "CopyInterpParameters" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Copies over parameters given a material instance (only copy from the instance, not following the hierarchy)\nmuch faster than K2_CopyMaterialInstanceParameters(),\nThe output is the object itself (this).\n@param Source ignores the call if 0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "CopyInterpParameters", sizeof(MaterialInstanceDynamic_eventCopyInterpParameters_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics
	{
		struct MaterialInstanceDynamic_eventCopyParameterOverrides_Parms
		{
			UMaterialInstance* MaterialInstance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventCopyParameterOverrides_Parms, MaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::NewProp_MaterialInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "DisplayName", "CopyParameterOverrides" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Copy parameter values from another material instance. This will copy only\nparameters explicitly overridden in that material instance!!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "CopyParameterOverrides", sizeof(MaterialInstanceDynamic_eventCopyParameterOverrides_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics
	{
		struct MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms
		{
			UMaterialInterface* Source;
			bool bQuickParametersOnly;
		};
		static void NewProp_bQuickParametersOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bQuickParametersOnly;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_bQuickParametersOnly_SetBit(void* Obj)
	{
		((MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms*)Obj)->bQuickParametersOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_bQuickParametersOnly = { "bQuickParametersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms), &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_bQuickParametersOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms, Source), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_bQuickParametersOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "CPP_Default_bQuickParametersOnly", "false" },
		{ "DisplayName", "CopyMaterialInstanceParameters" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "CopyMaterialInstanceParameters" },
		{ "ToolTip", "Copies over parameters given a material interface (copy each instance following the hierarchy)\nVery slow implementation, avoid using at runtime. Hopefully we can replace it later with something like CopyInterpParameters()\nThe output is the object itself (this). Copying 'quick parameters only' will result in a much\nfaster copy process but will only copy dynamic scalar, vector and texture parameters on clients.\n@param bQuickParametersOnly Copy scalar, vector and texture parameters only. Much faster but may not include required data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_CopyMaterialInstanceParameters", sizeof(MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms
		{
			FName ParameterName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "DisplayName", "GetScalarParameterValue" },
		{ "Keywords", "GetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetScalarParameterValue" },
		{ "ToolTip", "Get the current scalar (float) parameter value from an MID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetScalarParameterValue", sizeof(MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms
		{
			FName ParameterName;
			UTexture* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "DisplayName", "GetTextureParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetTextureParameterValue" },
		{ "ToolTip", "Get the current MID texture parameter value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetTextureParameterValue", sizeof(MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms
		{
			FName ParameterName;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "DisplayName", "GetVectorParameterValue" },
		{ "Keywords", "GetColorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetVectorParameterValue" },
		{ "ToolTip", "Get the current MID vector parameter value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetVectorParameterValue", sizeof(MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics
	{
		struct MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms
		{
			UMaterialInstance* SourceA;
			UMaterialInstance* SourceB;
			float Alpha;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceB;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_SourceB = { "SourceB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms, SourceB), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_SourceA = { "SourceA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms, SourceA), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_SourceB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_SourceA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "DisplayName", "InterpolateMaterialInstanceParameters" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "InterpolateMaterialInstanceParameters" },
		{ "ToolTip", "Interpolates the scalar and vector parameters of this material instance based on two other material instances, and an alpha blending factor\nThe output is the object itself (this).\nSupports the case SourceA==this || SourceB==this\nBoth material have to be from the same base material\n@param SourceA value that is used for Alpha=0, silently ignores the case if 0\n@param SourceB value that is used for Alpha=1, silently ignores the case if 0\n@param Alpha usually in the range 0..1, values outside the range extrapolate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_InterpolateMaterialInstanceParams", sizeof(MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventSetScalarParameterValue_Parms
		{
			FName ParameterName;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetScalarParameterValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Keywords", "SetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set a MID scalar (float) parameter value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetScalarParameterValue", sizeof(MaterialInstanceDynamic_eventSetScalarParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventSetTextureParameterValue_Parms
		{
			FName ParameterName;
			UTexture* Value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetTextureParameterValue_Parms, Value), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID texture parameter value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetTextureParameterValue", sizeof(MaterialInstanceDynamic_eventSetTextureParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics
	{
		struct MaterialInstanceDynamic_eventSetVectorParameterValue_Parms
		{
			FName ParameterName;
			FLinearColor Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetVectorParameterValue_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Keywords", "SetColorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID vector parameter value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetVectorParameterValue", sizeof(MaterialInstanceDynamic_eventSetVectorParameterValue_Parms), Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister()
	{
		return UMaterialInstanceDynamic::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialInstanceDynamic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialInstanceDynamic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialInstanceDynamic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters, "CopyInterpParameters" }, // 3215491489
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides, "CopyParameterOverrides" }, // 3864676802
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters, "K2_CopyMaterialInstanceParameters" }, // 624725337
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue, "K2_GetScalarParameterValue" }, // 3132344848
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue, "K2_GetTextureParameterValue" }, // 4020735796
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue, "K2_GetVectorParameterValue" }, // 1283093778
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams, "K2_InterpolateMaterialInstanceParams" }, // 2060692765
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue, "SetScalarParameterValue" }, // 2979586807
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue, "SetTextureParameterValue" }, // 1507017630
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue, "SetVectorParameterValue" }, // 3645453174
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstanceDynamic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Thumbnail" },
		{ "IncludePath", "Materials/MaterialInstanceDynamic.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialInstanceDynamic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialInstanceDynamic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialInstanceDynamic_Statics::ClassParams = {
		&UMaterialInstanceDynamic::StaticClass,
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
		0x009020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialInstanceDynamic_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceDynamic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialInstanceDynamic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialInstanceDynamic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialInstanceDynamic, 964408201);
	template<> ENGINE_API UClass* StaticClass<UMaterialInstanceDynamic>()
	{
		return UMaterialInstanceDynamic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialInstanceDynamic(Z_Construct_UClass_UMaterialInstanceDynamic, &UMaterialInstanceDynamic::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialInstanceDynamic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInstanceDynamic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
