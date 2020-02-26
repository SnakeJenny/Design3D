// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/DirectionalLightComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectionalLightComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction();
	ENGINE_API UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades();
	ENGINE_API UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight();
	ENGINE_API UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight();
	ENGINE_API UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion();
	ENGINE_API UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness();
	ENGINE_API UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassDirectionalLightSettings();
// End Cross Module References
	void UDirectionalLightComponent::StaticRegisterNativesUDirectionalLightComponent()
	{
		UClass* Class = UDirectionalLightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCascadeDistributionExponent", &UDirectionalLightComponent::execSetCascadeDistributionExponent },
			{ "SetCascadeTransitionFraction", &UDirectionalLightComponent::execSetCascadeTransitionFraction },
			{ "SetDynamicShadowCascades", &UDirectionalLightComponent::execSetDynamicShadowCascades },
			{ "SetDynamicShadowDistanceMovableLight", &UDirectionalLightComponent::execSetDynamicShadowDistanceMovableLight },
			{ "SetDynamicShadowDistanceStationaryLight", &UDirectionalLightComponent::execSetDynamicShadowDistanceStationaryLight },
			{ "SetEnableLightShaftOcclusion", &UDirectionalLightComponent::execSetEnableLightShaftOcclusion },
			{ "SetLightShaftOverrideDirection", &UDirectionalLightComponent::execSetLightShaftOverrideDirection },
			{ "SetOcclusionMaskDarkness", &UDirectionalLightComponent::execSetOcclusionMaskDarkness },
			{ "SetShadowDistanceFadeoutFraction", &UDirectionalLightComponent::execSetShadowDistanceFadeoutFraction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics
	{
		struct DirectionalLightComponent_eventSetCascadeDistributionExponent_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetCascadeDistributionExponent_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetCascadeDistributionExponent", sizeof(DirectionalLightComponent_eventSetCascadeDistributionExponent_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics
	{
		struct DirectionalLightComponent_eventSetCascadeTransitionFraction_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetCascadeTransitionFraction_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetCascadeTransitionFraction", sizeof(DirectionalLightComponent_eventSetCascadeTransitionFraction_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics
	{
		struct DirectionalLightComponent_eventSetDynamicShadowCascades_Parms
		{
			int32 NewValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetDynamicShadowCascades_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetDynamicShadowCascades", sizeof(DirectionalLightComponent_eventSetDynamicShadowCascades_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics
	{
		struct DirectionalLightComponent_eventSetDynamicShadowDistanceMovableLight_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetDynamicShadowDistanceMovableLight_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetDynamicShadowDistanceMovableLight", sizeof(DirectionalLightComponent_eventSetDynamicShadowDistanceMovableLight_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics
	{
		struct DirectionalLightComponent_eventSetDynamicShadowDistanceStationaryLight_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetDynamicShadowDistanceStationaryLight_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetDynamicShadowDistanceStationaryLight", sizeof(DirectionalLightComponent_eventSetDynamicShadowDistanceStationaryLight_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics
	{
		struct DirectionalLightComponent_eventSetEnableLightShaftOcclusion_Parms
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
	void Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((DirectionalLightComponent_eventSetEnableLightShaftOcclusion_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DirectionalLightComponent_eventSetEnableLightShaftOcclusion_Parms), &Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetEnableLightShaftOcclusion", sizeof(DirectionalLightComponent_eventSetEnableLightShaftOcclusion_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics
	{
		struct DirectionalLightComponent_eventSetLightShaftOverrideDirection_Parms
		{
			FVector NewValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetLightShaftOverrideDirection_Parms, NewValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetLightShaftOverrideDirection", sizeof(DirectionalLightComponent_eventSetLightShaftOverrideDirection_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics
	{
		struct DirectionalLightComponent_eventSetOcclusionMaskDarkness_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetOcclusionMaskDarkness_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetOcclusionMaskDarkness", sizeof(DirectionalLightComponent_eventSetOcclusionMaskDarkness_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics
	{
		struct DirectionalLightComponent_eventSetShadowDistanceFadeoutFraction_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetShadowDistanceFadeoutFraction_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetShadowDistanceFadeoutFraction", sizeof(DirectionalLightComponent_eventSetShadowDistanceFadeoutFraction_Parms), Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister()
	{
		return UDirectionalLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDirectionalLightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsedAsAtmosphereSunLight_MetaData[];
#endif
		static void NewProp_bUsedAsAtmosphereSunLight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsedAsAtmosphereSunLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulatedShadowColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModulatedShadowColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastModulatedShadows_MetaData[];
#endif
		static void NewProp_bCastModulatedShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastModulatedShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightSourceSoftAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightSourceSoftAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightSourceAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightSourceAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldShadowDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldShadowDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FarShadowDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FarShadowDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FarShadowCascadeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FarShadowCascadeCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInsetShadowsForMovableObjects_MetaData[];
#endif
		static void NewProp_bUseInsetShadowsForMovableObjects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInsetShadowsForMovableObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowDistanceFadeoutFraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadowDistanceFadeoutFraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CascadeTransitionFraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CascadeTransitionFraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CascadeDistributionExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CascadeDistributionExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicShadowCascades_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DynamicShadowCascades;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicShadowDistanceStationaryLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DynamicShadowDistanceStationaryLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicShadowDistanceMovableLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DynamicShadowDistanceMovableLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WholeSceneDynamicShadowRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WholeSceneDynamicShadowRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightShaftOverrideDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightShaftOverrideDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionDepthRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionDepthRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionMaskDarkness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionMaskDarkness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLightShaftOcclusion_MetaData[];
#endif
		static void NewProp_bEnableLightShaftOcclusion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLightShaftOcclusion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDirectionalLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULightComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDirectionalLightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent, "SetCascadeDistributionExponent" }, // 3275689930
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction, "SetCascadeTransitionFraction" }, // 1444192623
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades, "SetDynamicShadowCascades" }, // 2603217647
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight, "SetDynamicShadowDistanceMovableLight" }, // 1685946601
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight, "SetDynamicShadowDistanceStationaryLight" }, // 3705008390
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion, "SetEnableLightShaftOcclusion" }, // 2972655449
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection, "SetLightShaftOverrideDirection" }, // 2761494072
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness, "SetOcclusionMaskDarkness" }, // 2724421773
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction, "SetShadowDistanceFadeoutFraction" }, // 332087114
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Lights" },
		{ "HideCategories", "Object LightProfiles Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/DirectionalLightComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A light component that has parallel rays. Will provide a uniform lighting across any affected surface (eg. The Sun). This will affect all objects in the defined light-mass importance volume." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUsedAsAtmosphereSunLight_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "Atmosphere / Fog Sun Light" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUsedAsAtmosphereSunLight_SetBit(void* Obj)
	{
		((UDirectionalLightComponent*)Obj)->bUsedAsAtmosphereSunLight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUsedAsAtmosphereSunLight = { "bUsedAsAtmosphereSunLight", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUsedAsAtmosphereSunLight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUsedAsAtmosphereSunLight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUsedAsAtmosphereSunLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ModulatedShadowColor_MetaData[] = {
		{ "Category", "Light" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Color to modulate against the scene color when rendering modulated shadows. (mobile only)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ModulatedShadowColor = { "ModulatedShadowColor", nullptr, (EPropertyFlags)0x0010040200000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDirectionalLightComponent, ModulatedShadowColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ModulatedShadowColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ModulatedShadowColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastModulatedShadows_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Whether the light should cast modulated shadows from dynamic objects (mobile only).  Also requires Cast Shadows to be set to True." },
	};
#endif
	void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastModulatedShadows_SetBit(void* Obj)
	{
		((UDirectionalLightComponent*)Obj)->bCastModulatedShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastModulatedShadows = { "bCastModulatedShadows", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastModulatedShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastModulatedShadows_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastModulatedShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Lightmass settings for this object." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightmassSettings = { "LightmassSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDirectionalLightComponent, LightmassSettings), Z_Construct_UScriptStruct_FLightmassDirectionalLightSettings, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightmassSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightmassSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_TraceDistance_MetaData[] = {
		{ "Category", "DistanceFieldShadows" },
		{ "DisplayName", "DistanceField Trace Distance" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Determines how far shadows can be cast, in world units.  Larger values increase the shadowing cost." },
		{ "UIMax", "100000" },
		{ "UIMin", "1000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDirectionalLightComponent, TraceDistance), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_TraceDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_TraceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceSoftAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "Source Soft Angle" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Angle subtended by soft light source in degrees." },
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceSoftAngle = { "LightSourceSoftAngle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDirectionalLightComponent, LightSourceSoftAngle), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceSoftAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceSoftAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "Source Angle" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Angle subtended by light source in degrees (also known as angular diameter).\nDefaults to 0.5357 which is the angle for our sun." },
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceAngle = { "LightSourceAngle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDirectionalLightComponent, LightSourceAngle), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DistanceFieldShadowDistance_MetaData[] = {
		{ "Category", "DistanceFieldShadows" },
		{ "DisplayName", "DistanceField Shadow Distance" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Distance at which the ray traced shadow cascade should end.  Distance field shadows will cover the range between 'Dynamic Shadow Distance' this distance." },
		{ "UIMax", "100000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DistanceFieldShadowDistance = { "DistanceFieldShadowDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDirectionalLightComponent, DistanceFieldShadowDistance), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DistanceFieldShadowDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DistanceFieldShadowDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowDistance_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "DisplayName", "Far Shadow Distance" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Distance at which the far shadow cascade should end.  Far shadows will cover the range between 'Dynamic Shadow Distance' and this distance." },
		{ "UIMax", "800000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowDistance = { "FarShadowDistance", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDirectionalLightComponent, FarShadowDistance), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowCascadeCount_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "DisplayName", "Far Shadow Cascade Count" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "0: no DistantShadowCascades, otherwise the count of cascades between WholeSceneDynamicShadowRadius and DistantShadowDistance that are covered by distant shadow cascades." },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowCascadeCount = { "FarShadowCascadeCount", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDirectionalLightComponent, FarShadowCascadeCount), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowCascadeCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowCascadeCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUseInsetShadowsForMovableObjects_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "DisplayName", "Inset Shadows For Movable Objects" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Stationary lights only: Whether to use per-object inset shadows for movable components, even though cascaded shadow maps are enabled.\nThis allows dynamic objects to have a shadow even when they are outside of the cascaded shadow map, which is important when DynamicShadowDistanceStationaryLight is small.\nIf DynamicShadowDistanceStationaryLight is large (currently > 8000), this will be forced off.\nDisabling this can reduce shadowing cost significantly with many movable objects." },
	};
#endif
	void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUseInsetShadowsForMovableObjects_SetBit(void* Obj)
	{
		((UDirectionalLightComponent*)Obj)->bUseInsetShadowsForMovableObjects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUseInsetShadowsForMovableObjects = { "bUseInsetShadowsForMovableObjects", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUseInsetShadowsForMovableObjects_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUseInsetShadowsForMovableObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUseInsetShadowsForMovableObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowDistanceFadeoutFraction_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "DisplayName", "Distance Fadeout Fraction" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Controls the size of the fade out region at the far extent of the dynamic shadow's influence.\nThis is specified as a fraction of DynamicShadowDistance." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowDistanceFadeoutFraction = { "ShadowDistanceFadeoutFraction", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDirectionalLightComponent, ShadowDistanceFadeoutFraction), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowDistanceFadeoutFraction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowDistanceFadeoutFraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeTransitionFraction_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "DisplayName", "Transition Fraction" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Proportion of the fade region between cascades.\nPixels within the fade region of two cascades have their shadows blended to avoid hard transitions between quality levels.\nA value of zero eliminates the fade region, creating hard transitions.\nHigher values increase the size of the fade region, creating a more gradual transition between cascades.\nThe value is expressed as a percentage proportion (i.e. 0.1 = 10% overlap).\nIdeal values are the smallest possible which still hide the transition.\nAn increased fade region size causes an increase in shadow rendering cost." },
		{ "UIMax", "0.3" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeTransitionFraction = { "CascadeTransitionFraction", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDirectionalLightComponent, CascadeTransitionFraction), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeTransitionFraction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeTransitionFraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeDistributionExponent_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "DisplayName", "Distribution Exponent" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Controls whether the cascades are distributed closer to the camera (larger exponent) or further from the camera (smaller exponent).\nAn exponent of 1 means that cascade transitions will happen at a distance proportional to their resolution." },
		{ "UIMax", "4" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeDistributionExponent = { "CascadeDistributionExponent", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDirectionalLightComponent, CascadeDistributionExponent), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeDistributionExponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeDistributionExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowCascades_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "DisplayName", "Num Dynamic Shadow Cascades" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Number of cascades to split the view frustum into for the whole scene dynamic shadow.\nMore cascades result in better shadow resolution, but adds significant rendering cost." },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowCascades = { "DynamicShadowCascades", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDirectionalLightComponent, DynamicShadowCascades), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowCascades_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowCascades_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceStationaryLight_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "DisplayName", "Dynamic Shadow Distance StationaryLight" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "How far Cascaded Shadow Map dynamic shadows will cover for a stationary light, measured from the camera.\nA value of 0 disables the dynamic shadow." },
		{ "UIMax", "20000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceStationaryLight = { "DynamicShadowDistanceStationaryLight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDirectionalLightComponent, DynamicShadowDistanceStationaryLight), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceStationaryLight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceStationaryLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceMovableLight_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "DisplayName", "Dynamic Shadow Distance MovableLight" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "How far Cascaded Shadow Map dynamic shadows will cover for a movable light, measured from the camera.\nA value of 0 disables the dynamic shadow." },
		{ "UIMax", "20000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceMovableLight = { "DynamicShadowDistanceMovableLight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDirectionalLightComponent, DynamicShadowDistanceMovableLight), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceMovableLight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceMovableLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_WholeSceneDynamicShadowRadius_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_WholeSceneDynamicShadowRadius = { "WholeSceneDynamicShadowRadius", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDirectionalLightComponent, WholeSceneDynamicShadowRadius_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_WholeSceneDynamicShadowRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_WholeSceneDynamicShadowRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightShaftOverrideDirection_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Can be used to make light shafts come from somewhere other than the light's actual direction.\nThis will only be used when non-zero.  It does not have to be normalized." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightShaftOverrideDirection = { "LightShaftOverrideDirection", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDirectionalLightComponent, LightShaftOverrideDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightShaftOverrideDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightShaftOverrideDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionDepthRange_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Everything closer to the camera than this distance will occlude light shafts." },
		{ "UIMax", "500000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionDepthRange = { "OcclusionDepthRange", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDirectionalLightComponent, OcclusionDepthRange), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionDepthRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionDepthRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionMaskDarkness_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Controls how dark the occlusion masking is, a value of 1 results in no darkening term." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionMaskDarkness = { "OcclusionMaskDarkness", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDirectionalLightComponent, OcclusionMaskDarkness), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionMaskDarkness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionMaskDarkness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bEnableLightShaftOcclusion_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "DisplayName", "Light Shaft Occlusion" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Whether to occlude fog and atmosphere inscattering with screenspace blurred occlusion from this light." },
	};
#endif
	void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bEnableLightShaftOcclusion_SetBit(void* Obj)
	{
		((UDirectionalLightComponent*)Obj)->bEnableLightShaftOcclusion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bEnableLightShaftOcclusion = { "bEnableLightShaftOcclusion", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bEnableLightShaftOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bEnableLightShaftOcclusion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bEnableLightShaftOcclusion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDirectionalLightComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUsedAsAtmosphereSunLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ModulatedShadowColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastModulatedShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightmassSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_TraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceSoftAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DistanceFieldShadowDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowCascadeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUseInsetShadowsForMovableObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowDistanceFadeoutFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeTransitionFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeDistributionExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowCascades,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceStationaryLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceMovableLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_WholeSceneDynamicShadowRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightShaftOverrideDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionDepthRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionMaskDarkness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bEnableLightShaftOcclusion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDirectionalLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDirectionalLightComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDirectionalLightComponent_Statics::ClassParams = {
		&UDirectionalLightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDirectionalLightComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDirectionalLightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDirectionalLightComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDirectionalLightComponent, 118044797);
	template<> ENGINE_API UClass* StaticClass<UDirectionalLightComponent>()
	{
		return UDirectionalLightComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDirectionalLightComponent(Z_Construct_UClass_UDirectionalLightComponent, &UDirectionalLightComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UDirectionalLightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDirectionalLightComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDirectionalLightComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
