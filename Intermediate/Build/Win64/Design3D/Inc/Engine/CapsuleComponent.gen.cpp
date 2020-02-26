// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/CapsuleComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsuleComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetShapeScale();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius();
	ENGINE_API UFunction* Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize();
// End Cross Module References
	void UCapsuleComponent::StaticRegisterNativesUCapsuleComponent()
	{
		UClass* Class = UCapsuleComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScaledCapsuleHalfHeight", &UCapsuleComponent::execGetScaledCapsuleHalfHeight },
			{ "GetScaledCapsuleHalfHeight_WithoutHemisphere", &UCapsuleComponent::execGetScaledCapsuleHalfHeight_WithoutHemisphere },
			{ "GetScaledCapsuleRadius", &UCapsuleComponent::execGetScaledCapsuleRadius },
			{ "GetScaledCapsuleSize", &UCapsuleComponent::execGetScaledCapsuleSize },
			{ "GetScaledCapsuleSize_WithoutHemisphere", &UCapsuleComponent::execGetScaledCapsuleSize_WithoutHemisphere },
			{ "GetShapeScale", &UCapsuleComponent::execGetShapeScale },
			{ "GetUnscaledCapsuleHalfHeight", &UCapsuleComponent::execGetUnscaledCapsuleHalfHeight },
			{ "GetUnscaledCapsuleHalfHeight_WithoutHemisphere", &UCapsuleComponent::execGetUnscaledCapsuleHalfHeight_WithoutHemisphere },
			{ "GetUnscaledCapsuleRadius", &UCapsuleComponent::execGetUnscaledCapsuleRadius },
			{ "GetUnscaledCapsuleSize", &UCapsuleComponent::execGetUnscaledCapsuleSize },
			{ "GetUnscaledCapsuleSize_WithoutHemisphere", &UCapsuleComponent::execGetUnscaledCapsuleSize_WithoutHemisphere },
			{ "SetCapsuleHalfHeight", &UCapsuleComponent::execSetCapsuleHalfHeight },
			{ "SetCapsuleRadius", &UCapsuleComponent::execSetCapsuleRadius },
			{ "SetCapsuleSize", &UCapsuleComponent::execSetCapsuleSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics
	{
		struct CapsuleComponent_eventGetScaledCapsuleHalfHeight_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleHalfHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule half-height scaled by the component scale. This includes both the cylinder and hemisphere cap.\n@return The capsule half-height scaled by the component scale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetScaledCapsuleHalfHeight", sizeof(CapsuleComponent_eventGetScaledCapsuleHalfHeight_Parms), Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics
	{
		struct CapsuleComponent_eventGetScaledCapsuleHalfHeight_WithoutHemisphere_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleHalfHeight_WithoutHemisphere_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule half-height minus radius (to exclude the hemisphere), scaled by the component scale.\nFrom the center of the capsule this is the vertical distance along the straight cylindrical portion to the point just before the curve of top hemisphere begins.\n@return The capsule half-height minus radius, scaled by the component scale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetScaledCapsuleHalfHeight_WithoutHemisphere", sizeof(CapsuleComponent_eventGetScaledCapsuleHalfHeight_WithoutHemisphere_Parms), Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics
	{
		struct CapsuleComponent_eventGetScaledCapsuleRadius_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule radius scaled by the component scale.\n@return The capsule radius scaled by the component scale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetScaledCapsuleRadius", sizeof(CapsuleComponent_eventGetScaledCapsuleRadius_Parms), Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics
	{
		struct CapsuleComponent_eventGetScaledCapsuleSize_Parms
		{
			float OutRadius;
			float OutHalfHeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutHalfHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::NewProp_OutHalfHeight = { "OutHalfHeight", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleSize_Parms, OutHalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::NewProp_OutRadius = { "OutRadius", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleSize_Parms, OutRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::NewProp_OutHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::NewProp_OutRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule radius and half-height scaled by the component scale. Half-height includes the hemisphere end cap.\n@param OutRadius Radius of the capsule, scaled by the component scale.\n@param OutHalfHeight Half-height of the capsule, scaled by the component scale. Includes the hemisphere end cap.\n@return The capsule radius and half-height scaled by the component scale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetScaledCapsuleSize", sizeof(CapsuleComponent_eventGetScaledCapsuleSize_Parms), Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics
	{
		struct CapsuleComponent_eventGetScaledCapsuleSize_WithoutHemisphere_Parms
		{
			float OutRadius;
			float OutHalfHeightWithoutHemisphere;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutHalfHeightWithoutHemisphere;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::NewProp_OutHalfHeightWithoutHemisphere = { "OutHalfHeightWithoutHemisphere", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleSize_WithoutHemisphere_Parms, OutHalfHeightWithoutHemisphere), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::NewProp_OutRadius = { "OutRadius", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapsuleComponent_eventGetScaledCapsuleSize_WithoutHemisphere_Parms, OutRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::NewProp_OutHalfHeightWithoutHemisphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::NewProp_OutRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule radius and half-height scaled by the component scale. Half-height excludes the hemisphere end cap.\n@param OutRadius Radius of the capsule, ignoring component scaling.\n@param OutHalfHeightWithoutHemisphere Half-height of the capsule, scaled by the component scale. Excludes the hemisphere end cap.\n@return The capsule radius and half-height scaled by the component scale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetScaledCapsuleSize_WithoutHemisphere", sizeof(CapsuleComponent_eventGetScaledCapsuleSize_WithoutHemisphere_Parms), Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics
	{
		struct CapsuleComponent_eventGetShapeScale_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapsuleComponent_eventGetShapeScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Get the scale used by this shape. This is a uniform scale that is the minimum of any non-uniform scaling.\n@return the scale used by this shape." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetShapeScale", sizeof(CapsuleComponent_eventGetShapeScale_Parms), Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetShapeScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetShapeScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics
	{
		struct CapsuleComponent_eventGetUnscaledCapsuleHalfHeight_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleHalfHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule half-height, ignoring component scaling. This includes the hemisphere end cap.\n@return The capsule radius, ignoring component scaling." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetUnscaledCapsuleHalfHeight", sizeof(CapsuleComponent_eventGetUnscaledCapsuleHalfHeight_Parms), Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics
	{
		struct CapsuleComponent_eventGetUnscaledCapsuleHalfHeight_WithoutHemisphere_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleHalfHeight_WithoutHemisphere_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule half-height minus radius (to exclude the hemisphere), ignoring component scaling. This excludes the hemisphere end cap.\nFrom the center of the capsule this is the vertical distance along the straight cylindrical portion to the point just before the curve of top hemisphere begins.\n@return The capsule half-height minus radius, ignoring component scaling." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetUnscaledCapsuleHalfHeight_WithoutHemisphere", sizeof(CapsuleComponent_eventGetUnscaledCapsuleHalfHeight_WithoutHemisphere_Parms), Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics
	{
		struct CapsuleComponent_eventGetUnscaledCapsuleRadius_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule radius, ignoring component scaling.\n@return the capsule radius, ignoring component scaling." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetUnscaledCapsuleRadius", sizeof(CapsuleComponent_eventGetUnscaledCapsuleRadius_Parms), Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics
	{
		struct CapsuleComponent_eventGetUnscaledCapsuleSize_Parms
		{
			float OutRadius;
			float OutHalfHeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutHalfHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::NewProp_OutHalfHeight = { "OutHalfHeight", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleSize_Parms, OutHalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::NewProp_OutRadius = { "OutRadius", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleSize_Parms, OutRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::NewProp_OutHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::NewProp_OutRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule radius and half-height scaled by the component scale. Half-height includes the hemisphere end cap.\n@param OutRadius Radius of the capsule, scaled by the component scale.\n@param OutHalfHeight Half-height of the capsule, scaled by the component scale. Includes the hemisphere end cap.\n@return The capsule radius and half-height scaled by the component scale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetUnscaledCapsuleSize", sizeof(CapsuleComponent_eventGetUnscaledCapsuleSize_Parms), Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics
	{
		struct CapsuleComponent_eventGetUnscaledCapsuleSize_WithoutHemisphere_Parms
		{
			float OutRadius;
			float OutHalfHeightWithoutHemisphere;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutHalfHeightWithoutHemisphere;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::NewProp_OutHalfHeightWithoutHemisphere = { "OutHalfHeightWithoutHemisphere", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleSize_WithoutHemisphere_Parms, OutHalfHeightWithoutHemisphere), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::NewProp_OutRadius = { "OutRadius", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapsuleComponent_eventGetUnscaledCapsuleSize_WithoutHemisphere_Parms, OutRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::NewProp_OutHalfHeightWithoutHemisphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::NewProp_OutRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule radius and half-height, ignoring component scaling. Half-height excludes the hemisphere end cap.\n@param OutRadius Radius of the capsule, ignoring component scaling.\n@param OutHalfHeightWithoutHemisphere Half-height of the capsule, scaled by the component scale. Excludes the hemisphere end cap.\n@return The capsule radius and half-height (excluding hemisphere end cap), ignoring component scaling." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "GetUnscaledCapsuleSize_WithoutHemisphere", sizeof(CapsuleComponent_eventGetUnscaledCapsuleSize_WithoutHemisphere_Parms), Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics
	{
		struct CapsuleComponent_eventSetCapsuleHalfHeight_Parms
		{
			float HalfHeight;
			bool bUpdateOverlaps;
		};
		static void NewProp_bUpdateOverlaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::NewProp_bUpdateOverlaps_SetBit(void* Obj)
	{
		((CapsuleComponent_eventSetCapsuleHalfHeight_Parms*)Obj)->bUpdateOverlaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::NewProp_bUpdateOverlaps = { "bUpdateOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CapsuleComponent_eventSetCapsuleHalfHeight_Parms), &Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::NewProp_bUpdateOverlaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapsuleComponent_eventSetCapsuleHalfHeight_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::NewProp_bUpdateOverlaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::NewProp_HalfHeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "CPP_Default_bUpdateOverlaps", "true" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Set the capsule half-height. This is the unscaled half-height, before component scale is applied.\nIf this capsule collides, updates touching array for owner actor.\n@param       HalfHeight : half-height, from capsule center to end of top or bottom hemisphere.\n@param       bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "SetCapsuleHalfHeight", sizeof(CapsuleComponent_eventSetCapsuleHalfHeight_Parms), Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics
	{
		struct CapsuleComponent_eventSetCapsuleRadius_Parms
		{
			float Radius;
			bool bUpdateOverlaps;
		};
		static void NewProp_bUpdateOverlaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::NewProp_bUpdateOverlaps_SetBit(void* Obj)
	{
		((CapsuleComponent_eventSetCapsuleRadius_Parms*)Obj)->bUpdateOverlaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::NewProp_bUpdateOverlaps = { "bUpdateOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CapsuleComponent_eventSetCapsuleRadius_Parms), &Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::NewProp_bUpdateOverlaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapsuleComponent_eventSetCapsuleRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::NewProp_bUpdateOverlaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "CPP_Default_bUpdateOverlaps", "true" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Set the capsule radius. This is the unscaled radius, before component scale is applied.\nIf this capsule collides, updates touching array for owner actor.\n@param       Radius : radius of end-cap hemispheres and center cylinder.\n@param       bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "SetCapsuleRadius", sizeof(CapsuleComponent_eventSetCapsuleRadius_Parms), Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics
	{
		struct CapsuleComponent_eventSetCapsuleSize_Parms
		{
			float InRadius;
			float InHalfHeight;
			bool bUpdateOverlaps;
		};
		static void NewProp_bUpdateOverlaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InHalfHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::NewProp_bUpdateOverlaps_SetBit(void* Obj)
	{
		((CapsuleComponent_eventSetCapsuleSize_Parms*)Obj)->bUpdateOverlaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::NewProp_bUpdateOverlaps = { "bUpdateOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CapsuleComponent_eventSetCapsuleSize_Parms), &Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::NewProp_bUpdateOverlaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::NewProp_InHalfHeight = { "InHalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapsuleComponent_eventSetCapsuleSize_Parms, InHalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::NewProp_InRadius = { "InRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapsuleComponent_eventSetCapsuleSize_Parms, InRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::NewProp_bUpdateOverlaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::NewProp_InHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::NewProp_InRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "CPP_Default_bUpdateOverlaps", "true" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Change the capsule size. This is the unscaled size, before component scale is applied.\n@param       InRadius : radius of end-cap hemispheres and center cylinder.\n@param       InHalfHeight : half-height, from capsule center to end of top or bottom hemisphere.\n@param       bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapsuleComponent, nullptr, "SetCapsuleSize", sizeof(CapsuleComponent_eventSetCapsuleSize_Parms), Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister()
	{
		return UCapsuleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCapsuleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleHeight;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCapsuleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UShapeComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCapsuleComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight, "GetScaledCapsuleHalfHeight" }, // 392293758
		{ &Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleHalfHeight_WithoutHemisphere, "GetScaledCapsuleHalfHeight_WithoutHemisphere" }, // 1713494670
		{ &Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleRadius, "GetScaledCapsuleRadius" }, // 16990881
		{ &Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize, "GetScaledCapsuleSize" }, // 3309083985
		{ &Z_Construct_UFunction_UCapsuleComponent_GetScaledCapsuleSize_WithoutHemisphere, "GetScaledCapsuleSize_WithoutHemisphere" }, // 672037612
		{ &Z_Construct_UFunction_UCapsuleComponent_GetShapeScale, "GetShapeScale" }, // 3764495257
		{ &Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight, "GetUnscaledCapsuleHalfHeight" }, // 1453475918
		{ &Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleHalfHeight_WithoutHemisphere, "GetUnscaledCapsuleHalfHeight_WithoutHemisphere" }, // 4183315851
		{ &Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleRadius, "GetUnscaledCapsuleRadius" }, // 3326649922
		{ &Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize, "GetUnscaledCapsuleSize" }, // 1198666306
		{ &Z_Construct_UFunction_UCapsuleComponent_GetUnscaledCapsuleSize_WithoutHemisphere, "GetUnscaledCapsuleSize_WithoutHemisphere" }, // 3179050601
		{ &Z_Construct_UFunction_UCapsuleComponent_SetCapsuleHalfHeight, "SetCapsuleHalfHeight" }, // 2446409411
		{ &Z_Construct_UFunction_UCapsuleComponent_SetCapsuleRadius, "SetCapsuleRadius" }, // 3382469718
		{ &Z_Construct_UFunction_UCapsuleComponent_SetCapsuleSize, "SetCapsuleSize" }, // 2158965659
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapsuleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Collision" },
		{ "DisplayName", "Capsule Collision" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/CapsuleComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "SerializeToFArchive", "WITH_EDITORONLY_DATA" },
		{ "ToolTip", "A capsule generally used for simple collision. Bounds are rendered as lines in the editor." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleHeight = { "CapsuleHeight", nullptr, (EPropertyFlags)0x0020080820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCapsuleComponent, CapsuleHeight_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleHeight_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleRadius_MetaData[] = {
		{ "Category", "Shape" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Radius of cap hemispheres and center cylinder.\nThis cannot be more than CapsuleHalfHeight." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleRadius = { "CapsuleRadius", nullptr, (EPropertyFlags)0x002008000000001d, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCapsuleComponent, CapsuleRadius), METADATA_PARAMS(Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleHalfHeight_MetaData[] = {
		{ "Category", "Shape" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Components/CapsuleComponent.h" },
		{ "ToolTip", "Half-height, from center of capsule to the end of top or bottom hemisphere.\nThis cannot be less than CapsuleRadius." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleHalfHeight = { "CapsuleHalfHeight", nullptr, (EPropertyFlags)0x002008000000001d, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCapsuleComponent, CapsuleHalfHeight), METADATA_PARAMS(Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleHalfHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleHalfHeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCapsuleComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleHeight,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCapsuleComponent_Statics::NewProp_CapsuleHalfHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCapsuleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCapsuleComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCapsuleComponent_Statics::ClassParams = {
		&UCapsuleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCapsuleComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UCapsuleComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCapsuleComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCapsuleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCapsuleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCapsuleComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCapsuleComponent, 3490259615);
	template<> ENGINE_API UClass* StaticClass<UCapsuleComponent>()
	{
		return UCapsuleComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCapsuleComponent(Z_Construct_UClass_UCapsuleComponent, &UCapsuleComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UCapsuleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCapsuleComponent);
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCapsuleComponent)
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
