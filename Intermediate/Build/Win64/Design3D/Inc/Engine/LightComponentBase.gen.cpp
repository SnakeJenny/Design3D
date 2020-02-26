// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/LightComponentBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightComponentBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULightComponentBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponentBase();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponentBase_GetLightColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponentBase_SetAffectReflection();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponentBase_SetCastShadows();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void ULightComponentBase::StaticRegisterNativesULightComponentBase()
	{
		UClass* Class = ULightComponentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLightColor", &ULightComponentBase::execGetLightColor },
			{ "SetAffectReflection", &ULightComponentBase::execSetAffectReflection },
			{ "SetCastRaytracedShadow", &ULightComponentBase::execSetCastRaytracedShadow },
			{ "SetCastShadows", &ULightComponentBase::execSetCastShadows },
			{ "SetCastVolumetricShadow", &ULightComponentBase::execSetCastVolumetricShadow },
			{ "SetSamplesPerPixel", &ULightComponentBase::execSetSamplesPerPixel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics
	{
		struct LightComponentBase_eventGetLightColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightComponentBase_eventGetLightColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Gets the light color as a linear color" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "GetLightColor", sizeof(LightComponentBase_eventGetLightColor_Parms), Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponentBase_GetLightColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics
	{
		struct LightComponentBase_eventSetAffectReflection_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponentBase_eventSetAffectReflection_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LightComponentBase_eventSetAffectReflection_Parms), &Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetAffectReflection", sizeof(LightComponentBase_eventSetAffectReflection_Parms), Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponentBase_SetAffectReflection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics
	{
		struct LightComponentBase_eventSetCastRaytracedShadow_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponentBase_eventSetCastRaytracedShadow_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LightComponentBase_eventSetCastRaytracedShadow_Parms), &Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetCastRaytracedShadow", sizeof(LightComponentBase_eventSetCastRaytracedShadow_Parms), Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics
	{
		struct LightComponentBase_eventSetCastShadows_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponentBase_eventSetCastShadows_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LightComponentBase_eventSetCastShadows_Parms), &Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Sets whether this light casts shadows" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetCastShadows", sizeof(LightComponentBase_eventSetCastShadows_Parms), Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponentBase_SetCastShadows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics
	{
		struct LightComponentBase_eventSetCastVolumetricShadow_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponentBase_eventSetCastVolumetricShadow_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LightComponentBase_eventSetCastVolumetricShadow_Parms), &Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetCastVolumetricShadow", sizeof(LightComponentBase_eventSetCastVolumetricShadow_Parms), Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics
	{
		struct LightComponentBase_eventSetSamplesPerPixel_Parms
		{
			int32 NewValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LightComponentBase_eventSetSamplesPerPixel_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetSamplesPerPixel", sizeof(LightComponentBase_eventSetSamplesPerPixel_Parms), Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULightComponentBase_NoRegister()
	{
		return ULightComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_ULightComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicEditorTextureScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DynamicEditorTextureScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicEditorTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicEditorTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticEditorTextureScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaticEditorTextureScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticEditorTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticEditorTexture;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplesPerPixel_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SamplesPerPixel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricScatteringIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricScatteringIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IndirectLightingIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectReflection_MetaData[];
#endif
		static void NewProp_bAffectReflection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectReflection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastRaytracedShadow_MetaData[];
#endif
		static void NewProp_bCastRaytracedShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastRaytracedShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastVolumetricShadow_MetaData[];
#endif
		static void NewProp_bCastVolumetricShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastVolumetricShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransmission_MetaData[];
#endif
		static void NewProp_bTransmission_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransmission;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectTranslucentLighting_MetaData[];
#endif
		static void NewProp_bAffectTranslucentLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectTranslucentLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastDynamicShadows_MetaData[];
#endif
		static void NewProp_CastDynamicShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CastDynamicShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastStaticShadows_MetaData[];
#endif
		static void NewProp_CastStaticShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CastStaticShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastShadows_MetaData[];
#endif
		static void NewProp_CastShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CastShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectsWorld_MetaData[];
#endif
		static void NewProp_bAffectsWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULightComponentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULightComponentBase_GetLightColor, "GetLightColor" }, // 2357575186
		{ &Z_Construct_UFunction_ULightComponentBase_SetAffectReflection, "SetAffectReflection" }, // 2998873956
		{ &Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow, "SetCastRaytracedShadow" }, // 2696113384
		{ &Z_Construct_UFunction_ULightComponentBase_SetCastShadows, "SetCastShadows" }, // 367741694
		{ &Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow, "SetCastVolumetricShadow" }, // 2494704619
		{ &Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel, "SetSamplesPerPixel" }, // 1358424574
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/LightComponentBase.h" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTextureScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Sprite scaling for dynamic light in the editor." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTextureScale = { "DynamicEditorTextureScale", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightComponentBase, DynamicEditorTextureScale), METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTextureScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTextureScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Sprite for dynamic light in the editor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTexture = { "DynamicEditorTexture", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightComponentBase, DynamicEditorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTextureScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Sprite scaling for static light in the editor." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTextureScale = { "StaticEditorTextureScale", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightComponentBase, StaticEditorTextureScale), METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTextureScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTextureScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Sprite for static light in the editor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTexture = { "StaticEditorTexture", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightComponentBase, StaticEditorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTexture_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_SamplesPerPixel_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Samples per pixel for ray tracing" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_SamplesPerPixel = { "SamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightComponentBase, SamplesPerPixel), METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_SamplesPerPixel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_SamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_VolumetricScatteringIntensity_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Intensity of the volumetric scattering from this light.  This scales Intensity and LightColor." },
		{ "UIMax", "4.0" },
		{ "UIMin", "0.25" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_VolumetricScatteringIntensity = { "VolumetricScatteringIntensity", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightComponentBase, VolumetricScatteringIntensity), METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_VolumetricScatteringIntensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_VolumetricScatteringIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_IndirectLightingIntensity_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Scales the indirect lighting contribution from this light.\nA value of 0 disables any GI from this light. Default is 1." },
		{ "UIMax", "6.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_IndirectLightingIntensity = { "IndirectLightingIntensity", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightComponentBase, IndirectLightingIntensity), METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_IndirectLightingIntensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_IndirectLightingIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectReflection_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light affects objects in reflections, when ray-traced reflection is enabled." },
	};
#endif
	void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectReflection_SetBit(void* Obj)
	{
		((ULightComponentBase*)Obj)->bAffectReflection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectReflection = { "bAffectReflection", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectReflection_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectReflection_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectReflection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastRaytracedShadow_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light shadows are computed with shadow-mapping or ray-tracing (when available)." },
	};
#endif
	void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastRaytracedShadow_SetBit(void* Obj)
	{
		((ULightComponentBase*)Obj)->bCastRaytracedShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastRaytracedShadow = { "bCastRaytracedShadow", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastRaytracedShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastRaytracedShadow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastRaytracedShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastVolumetricShadow_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light shadows volumetric fog.  Disabling this can save GPU time." },
	};
#endif
	void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastVolumetricShadow_SetBit(void* Obj)
	{
		((ULightComponentBase*)Obj)->bCastVolumetricShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastVolumetricShadow = { "bCastVolumetricShadow", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastVolumetricShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastVolumetricShadow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastVolumetricShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bTransmission_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether light from this light transmits through surfaces with subsurface scattering profiles. Requires light to be movable." },
	};
#endif
	void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bTransmission_SetBit(void* Obj)
	{
		((ULightComponentBase*)Obj)->bTransmission = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bTransmission = { "bTransmission", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bTransmission_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bTransmission_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bTransmission_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectTranslucentLighting_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light affects translucency or not.  Disabling this can save GPU time when there are many small lights." },
	};
#endif
	void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectTranslucentLighting_SetBit(void* Obj)
	{
		((ULightComponentBase*)Obj)->bAffectTranslucentLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectTranslucentLighting = { "bAffectTranslucentLighting", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectTranslucentLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectTranslucentLighting_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectTranslucentLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastDynamicShadows_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light should cast shadows from dynamic objects.  Also requires Cast Shadows to be set to True." },
	};
#endif
	void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastDynamicShadows_SetBit(void* Obj)
	{
		((ULightComponentBase*)Obj)->CastDynamicShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastDynamicShadows = { "CastDynamicShadows", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastDynamicShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastDynamicShadows_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastDynamicShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastStaticShadows_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light should cast shadows from static objects.  Also requires Cast Shadows to be set to True." },
	};
#endif
	void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastStaticShadows_SetBit(void* Obj)
	{
		((ULightComponentBase*)Obj)->CastStaticShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastStaticShadows = { "CastStaticShadows", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastStaticShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastStaticShadows_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastStaticShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastShadows_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light should cast any shadows." },
	};
#endif
	void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastShadows_SetBit(void* Obj)
	{
		((ULightComponentBase*)Obj)->CastShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastShadows = { "CastShadows", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastShadows_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectsWorld_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light can affect the world, or whether it is disabled.\nA disabled light will not contribute to the scene in any way.  This setting cannot be changed at runtime and unbuilds lighting when changed.\nSetting this to false has the same effect as deleting the light, so it is useful for non-destructive experiments." },
	};
#endif
	void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectsWorld_SetBit(void* Obj)
	{
		((ULightComponentBase*)Obj)->bAffectsWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectsWorld = { "bAffectsWorld", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectsWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectsWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectsWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightColor_MetaData[] = {
		{ "Category", "Light" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Filter color of the light.\nNote that this can change the light's effective intensity." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightComponentBase, LightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "Intensity" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Total energy that the light emits." },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightComponentBase, Intensity), METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Intensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Brightness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightComponentBase, Brightness_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Brightness_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Brightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "GUID used to associate a light component with precomputed shadowing information across levels.\nThe GUID changes whenever the light position changes." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightGuid = { "LightGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightComponentBase, LightGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightGuid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightComponentBase_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTextureScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTextureScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTexture,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_SamplesPerPixel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_VolumetricScatteringIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_IndirectLightingIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectReflection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastRaytracedShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastVolumetricShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bTransmission,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectTranslucentLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastDynamicShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastStaticShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectsWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Brightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightComponentBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightComponentBase_Statics::ClassParams = {
		&ULightComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULightComponentBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ULightComponentBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightComponentBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightComponentBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightComponentBase, 1790577976);
	template<> ENGINE_API UClass* StaticClass<ULightComponentBase>()
	{
		return ULightComponentBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightComponentBase(Z_Construct_UClass_ULightComponentBase, &ULightComponentBase::StaticClass, TEXT("/Script/Engine"), TEXT("ULightComponentBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightComponentBase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULightComponentBase)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
