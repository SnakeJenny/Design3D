// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/ForceFeedbackComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceFeedbackComponent() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings();
	ENGINE_API UFunction* Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply();
	ENGINE_API UFunction* Z_Construct_UFunction_UForceFeedbackComponent_Play();
	ENGINE_API UFunction* Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier();
	ENGINE_API UFunction* Z_Construct_UFunction_UForceFeedbackComponent_Stop();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnForceFeedbackFinished_Parms
		{
			UForceFeedbackComponent* ForceFeedbackComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceFeedbackComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::NewProp_ForceFeedbackComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::NewProp_ForceFeedbackComponent = { "ForceFeedbackComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnForceFeedbackFinished_Parms, ForceFeedbackComponent), Z_Construct_UClass_UForceFeedbackComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::NewProp_ForceFeedbackComponent_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::NewProp_ForceFeedbackComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::NewProp_ForceFeedbackComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "called when we finish playing forcefeedback effect, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnForceFeedbackFinished__DelegateSignature", sizeof(_Script_Engine_eventOnForceFeedbackFinished_Parms), Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UForceFeedbackComponent::StaticRegisterNativesUForceFeedbackComponent()
	{
		UClass* Class = UForceFeedbackComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustAttenuation", &UForceFeedbackComponent::execAdjustAttenuation },
			{ "BP_GetAttenuationSettingsToApply", &UForceFeedbackComponent::execBP_GetAttenuationSettingsToApply },
			{ "Play", &UForceFeedbackComponent::execPlay },
			{ "SetForceFeedbackEffect", &UForceFeedbackComponent::execSetForceFeedbackEffect },
			{ "SetIntensityMultiplier", &UForceFeedbackComponent::execSetIntensityMultiplier },
			{ "Stop", &UForceFeedbackComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics
	{
		struct ForceFeedbackComponent_eventAdjustAttenuation_Parms
		{
			FForceFeedbackAttenuationSettings InAttenuationSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAttenuationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAttenuationSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings = { "InAttenuationSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceFeedbackComponent_eventAdjustAttenuation_Parms, InAttenuationSettings), Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings, METADATA_PARAMS(Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceFeedback" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Modify the attenuation settings of the component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, nullptr, "AdjustAttenuation", sizeof(ForceFeedbackComponent_eventAdjustAttenuation_Parms), Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics
	{
		struct ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms
		{
			FForceFeedbackAttenuationSettings OutAttenuationSettings;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAttenuationSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms), &Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings = { "OutAttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms, OutAttenuationSettings), Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceFeedback" },
		{ "DisplayName", "Get Attenuation Settings To Apply" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ScriptName", "GetAttenuationSettingsToApply" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, nullptr, "BP_GetAttenuationSettingsToApply", sizeof(ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms), Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics
	{
		struct ForceFeedbackComponent_eventPlay_Parms
		{
			float StartTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceFeedbackComponent_eventPlay_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::NewProp_StartTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceFeedback" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Start a feedback effect playing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, nullptr, "Play", sizeof(ForceFeedbackComponent_eventPlay_Parms), Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceFeedbackComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics
	{
		struct ForceFeedbackComponent_eventSetForceFeedbackEffect_Parms
		{
			UForceFeedbackEffect* NewForceFeedbackEffect;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewForceFeedbackEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::NewProp_NewForceFeedbackEffect = { "NewForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceFeedbackComponent_eventSetForceFeedbackEffect_Parms, NewForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::NewProp_NewForceFeedbackEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceFeedback" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Set what force feedback effect is played by this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, nullptr, "SetForceFeedbackEffect", sizeof(ForceFeedbackComponent_eventSetForceFeedbackEffect_Parms), Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics
	{
		struct ForceFeedbackComponent_eventSetIntensityMultiplier_Parms
		{
			float NewIntensityMultiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewIntensityMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::NewProp_NewIntensityMultiplier = { "NewIntensityMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceFeedbackComponent_eventSetIntensityMultiplier_Parms, NewIntensityMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::NewProp_NewIntensityMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceFeedback" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Set a new intensity multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, nullptr, "SetIntensityMultiplier", sizeof(ForceFeedbackComponent_eventSetIntensityMultiplier_Parms), Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceFeedbackComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceFeedbackComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceFeedback" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Stop playing the feedback effect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceFeedbackComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, nullptr, "Stop", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceFeedbackComponent_Stop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceFeedbackComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceFeedbackComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UForceFeedbackComponent_NoRegister()
	{
		return UForceFeedbackComponent::StaticClass();
	}
	struct Z_Construct_UClass_UForceFeedbackComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnForceFeedbackFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnForceFeedbackFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntensityMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntensityMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[];
#endif
		static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[];
#endif
		static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopWhenOwnerDestroyed_MetaData[];
#endif
		static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[];
#endif
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceFeedbackEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UForceFeedbackComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UForceFeedbackComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation, "AdjustAttenuation" }, // 116967217
		{ &Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply, "BP_GetAttenuationSettingsToApply" }, // 1499815389
		{ &Z_Construct_UFunction_UForceFeedbackComponent_Play, "Play" }, // 333513616
		{ &Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect, "SetForceFeedbackEffect" }, // 1080679792
		{ &Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier, "SetIntensityMultiplier" }, // 1286818529
		{ &Z_Construct_UFunction_UForceFeedbackComponent_Stop, "Stop" }, // 2423605029
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "Components/ForceFeedbackComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ForceFeedbackComponent allows placing a rumble effect in to the world and having it apply to player characters who come near it" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_OnForceFeedbackFinished_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_OnForceFeedbackFinished = { "OnForceFeedbackFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UForceFeedbackComponent, OnForceFeedbackFinished), Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_OnForceFeedbackFinished_MetaData, ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_OnForceFeedbackFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationOverrides_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "EditCondition", "bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "If bOverrideSettings is true, the attenuation properties to use for effects generated by this component" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationOverrides = { "AttenuationOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UForceFeedbackComponent, AttenuationOverrides), Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationOverrides_MetaData, ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "EditCondition", "!bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "If bOverrideSettings is false, the asset to use to determine attenuation properties for effects generated by this component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UForceFeedbackComponent, AttenuationSettings), Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_IntensityMultiplier_MetaData[] = {
		{ "Category", "ForceFeedback" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "The intensity multiplier to apply to effects generated by this component" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_IntensityMultiplier = { "IntensityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UForceFeedbackComponent, IntensityMultiplier), METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_IntensityMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_IntensityMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Should the Attenuation Settings asset be used (false) or should the properties set directly on the component be used for attenuation properties" },
	};
#endif
	void Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((UForceFeedbackComponent*)Obj)->bOverrideAttenuation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UForceFeedbackComponent), &Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bOverrideAttenuation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "Category", "ForceFeedback" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Should the playback of the forcefeedback pattern ignore time dilation and use the app's delta time" },
	};
#endif
	void Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
	{
		((UForceFeedbackComponent*)Obj)->bIgnoreTimeDilation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UForceFeedbackComponent), &Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bIgnoreTimeDilation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bIgnoreTimeDilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "ForceFeedback" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
	};
#endif
	void Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((UForceFeedbackComponent*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UForceFeedbackComponent), &Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bLooping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Stop effect when owner is destroyed" },
	};
#endif
	void Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((UForceFeedbackComponent*)Obj)->bStopWhenOwnerDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UForceFeedbackComponent), &Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bAutoDestroy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Auto destroy this component on completion" },
	};
#endif
	void Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((UForceFeedbackComponent*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UForceFeedbackComponent), &Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bAutoDestroy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_ForceFeedbackEffect_MetaData[] = {
		{ "Category", "ForceFeedback" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "The feedback effect to be played" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UForceFeedbackComponent, ForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_ForceFeedbackEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_ForceFeedbackEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UForceFeedbackComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_OnForceFeedbackFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_IntensityMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bOverrideAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bIgnoreTimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bStopWhenOwnerDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_ForceFeedbackEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UForceFeedbackComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UForceFeedbackComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UForceFeedbackComponent_Statics::ClassParams = {
		&UForceFeedbackComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UForceFeedbackComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UForceFeedbackComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UForceFeedbackComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UForceFeedbackComponent, 3376400456);
	template<> ENGINE_API UClass* StaticClass<UForceFeedbackComponent>()
	{
		return UForceFeedbackComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UForceFeedbackComponent(Z_Construct_UClass_UForceFeedbackComponent, &UForceFeedbackComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UForceFeedbackComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceFeedbackComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
