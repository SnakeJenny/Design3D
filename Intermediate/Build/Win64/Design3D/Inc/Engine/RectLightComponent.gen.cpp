// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/RectLightComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRectLightComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_URectLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URectLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULocalLightComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle();
	ENGINE_API UFunction* Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength();
	ENGINE_API UFunction* Z_Construct_UFunction_URectLightComponent_SetSourceHeight();
	ENGINE_API UFunction* Z_Construct_UFunction_URectLightComponent_SetSourceTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_URectLightComponent_SetSourceWidth();
// End Cross Module References
	void URectLightComponent::StaticRegisterNativesURectLightComponent()
	{
		UClass* Class = URectLightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBarnDoorAngle", &URectLightComponent::execSetBarnDoorAngle },
			{ "SetBarnDoorLength", &URectLightComponent::execSetBarnDoorLength },
			{ "SetSourceHeight", &URectLightComponent::execSetSourceHeight },
			{ "SetSourceTexture", &URectLightComponent::execSetSourceTexture },
			{ "SetSourceWidth", &URectLightComponent::execSetSourceWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics
	{
		struct RectLightComponent_eventSetBarnDoorAngle_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RectLightComponent_eventSetBarnDoorAngle_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URectLightComponent, nullptr, "SetBarnDoorAngle", sizeof(RectLightComponent_eventSetBarnDoorAngle_Parms), Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics
	{
		struct RectLightComponent_eventSetBarnDoorLength_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RectLightComponent_eventSetBarnDoorLength_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URectLightComponent, nullptr, "SetBarnDoorLength", sizeof(RectLightComponent_eventSetBarnDoorLength_Parms), Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics
	{
		struct RectLightComponent_eventSetSourceHeight_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RectLightComponent_eventSetSourceHeight_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URectLightComponent, nullptr, "SetSourceHeight", sizeof(RectLightComponent_eventSetSourceHeight_Parms), Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URectLightComponent_SetSourceHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics
	{
		struct RectLightComponent_eventSetSourceTexture_Parms
		{
			UTexture* bNewValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RectLightComponent_eventSetSourceTexture_Parms, bNewValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URectLightComponent, nullptr, "SetSourceTexture", sizeof(RectLightComponent_eventSetSourceTexture_Parms), Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URectLightComponent_SetSourceTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics
	{
		struct RectLightComponent_eventSetSourceWidth_Parms
		{
			float bNewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RectLightComponent_eventSetSourceWidth_Parms, bNewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URectLightComponent, nullptr, "SetSourceWidth", sizeof(RectLightComponent_eventSetSourceWidth_Parms), Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URectLightComponent_SetSourceWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URectLightComponent_NoRegister()
	{
		return URectLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_URectLightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarnDoorLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarnDoorLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarnDoorAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarnDoorAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URectLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalLightComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URectLightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle, "SetBarnDoorAngle" }, // 311763203
		{ &Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength, "SetBarnDoorLength" }, // 191049318
		{ &Z_Construct_UFunction_URectLightComponent_SetSourceHeight, "SetSourceHeight" }, // 3761299001
		{ &Z_Construct_UFunction_URectLightComponent_SetSourceTexture, "SetSourceTexture" }, // 2961156156
		{ &Z_Construct_UFunction_URectLightComponent_SetSourceWidth, "SetSourceWidth" }, // 3165113345
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectLightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Lights Common" },
		{ "HideCategories", "Object LightShafts Object LightShafts Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/RectLightComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
		{ "ToolTip", "A light component which emits light from a rectangle." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceTexture_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
		{ "ToolTip", "Texture mapped to the light source rectangle" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceTexture = { "SourceTexture", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URectLightComponent, SourceTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorLength_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
		{ "ToolTip", "Length of barn door attached to the light source rect." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorLength = { "BarnDoorLength", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URectLightComponent, BarnDoorLength), METADATA_PARAMS(Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
		{ "ToolTip", "Angle of barn door attached to the light source rect." },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorAngle = { "BarnDoorAngle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URectLightComponent, BarnDoorAngle), METADATA_PARAMS(Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceHeight_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
		{ "ToolTip", "Height of light source rect.\nNote that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceHeight = { "SourceHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URectLightComponent, SourceHeight), METADATA_PARAMS(Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceWidth_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
		{ "ToolTip", "Width of light source rect.\nNote that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceWidth = { "SourceWidth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URectLightComponent, SourceWidth), METADATA_PARAMS(Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceWidth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URectLightComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceWidth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URectLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URectLightComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URectLightComponent_Statics::ClassParams = {
		&URectLightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URectLightComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_URectLightComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_URectLightComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URectLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URectLightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URectLightComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URectLightComponent, 1494781553);
	template<> ENGINE_API UClass* StaticClass<URectLightComponent>()
	{
		return URectLightComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URectLightComponent(Z_Construct_UClass_URectLightComponent, &URectLightComponent::StaticClass, TEXT("/Script/Engine"), TEXT("URectLightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URectLightComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
