// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/LocalLightComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalLightComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULocalLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
	ENGINE_API UFunction* Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius();
	ENGINE_API UFunction* Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassPointLightSettings();
// End Cross Module References
	void ULocalLightComponent::StaticRegisterNativesULocalLightComponent()
	{
		UClass* Class = ULocalLightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUnitsConversionFactor", &ULocalLightComponent::execGetUnitsConversionFactor },
			{ "SetAttenuationRadius", &ULocalLightComponent::execSetAttenuationRadius },
			{ "SetIntensityUnits", &ULocalLightComponent::execSetIntensityUnits },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics
	{
		struct LocalLightComponent_eventGetUnitsConversionFactor_Parms
		{
			ELightUnits SrcUnits;
			ELightUnits TargetUnits;
			float CosHalfConeAngle;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CosHalfConeAngle;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetUnits;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetUnits_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SrcUnits;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SrcUnits_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalLightComponent_eventGetUnitsConversionFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_CosHalfConeAngle = { "CosHalfConeAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalLightComponent_eventGetUnitsConversionFactor_Parms, CosHalfConeAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_TargetUnits = { "TargetUnits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalLightComponent_eventGetUnitsConversionFactor_Parms, TargetUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_TargetUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_SrcUnits = { "SrcUnits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalLightComponent_eventGetUnitsConversionFactor_Parms, SrcUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_SrcUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_CosHalfConeAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_TargetUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_TargetUnits_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_SrcUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_SrcUnits_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "CPP_Default_CosHalfConeAngle", "-1.000000" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalLightComponent, nullptr, "GetUnitsConversionFactor", sizeof(LocalLightComponent_eventGetUnitsConversionFactor_Parms), Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics
	{
		struct LocalLightComponent_eventSetAttenuationRadius_Parms
		{
			float NewRadius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::NewProp_NewRadius = { "NewRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalLightComponent_eventSetAttenuationRadius_Parms, NewRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::NewProp_NewRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalLightComponent, nullptr, "SetAttenuationRadius", sizeof(LocalLightComponent_eventSetAttenuationRadius_Parms), Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics
	{
		struct LocalLightComponent_eventSetIntensityUnits_Parms
		{
			ELightUnits NewIntensityUnits;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewIntensityUnits;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewIntensityUnits_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::NewProp_NewIntensityUnits = { "NewIntensityUnits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocalLightComponent_eventSetIntensityUnits_Parms, NewIntensityUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::NewProp_NewIntensityUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::NewProp_NewIntensityUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::NewProp_NewIntensityUnits_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
		{ "ToolTip", "Set the units used for the intensity of the light" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalLightComponent, nullptr, "SetIntensityUnits", sizeof(LocalLightComponent_eventSetIntensityUnits_Parms), Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULocalLightComponent_NoRegister()
	{
		return ULocalLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULocalLightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntensityUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IntensityUnits;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IntensityUnits_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULightComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULocalLightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor, "GetUnitsConversionFactor" }, // 570079964
		{ &Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius, "SetAttenuationRadius" }, // 3425873326
		{ &Z_Construct_UFunction_ULocalLightComponent_SetIntensityUnits, "SetIntensityUnits" }, // 4049645927
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Lights Common" },
		{ "HideCategories", "Object LightShafts Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/LocalLightComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A light component which emits light from a single point equally in all directions." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Lightmass settings for this object." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_LightmassSettings = { "LightmassSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalLightComponent, LightmassSettings), Z_Construct_UScriptStruct_FLightmassPointLightSettings, METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_LightmassSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_LightmassSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_AttenuationRadius_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
		{ "SliderExponent", "5.0" },
		{ "ToolTip", "Bounds the light's visible influence.\nThis clamping of the light's influence is not physically correct but very important for performance, larger lights cost more." },
		{ "UIMax", "16384.0" },
		{ "UIMin", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_AttenuationRadius = { "AttenuationRadius", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalLightComponent, AttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_AttenuationRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_AttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalLightComponent, Radius_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "Intensity Units" },
		{ "EditCondition", "bUseInverseSquaredFalloff" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
		{ "ToolTip", "Units used for the intensity.\nThe peak luminous intensity is measured in candelas,\nwhile the luminous power is measured in lumens." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits = { "IntensityUnits", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalLightComponent, IntensityUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalLightComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_LightmassSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_AttenuationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalLightComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalLightComponent_Statics::ClassParams = {
		&ULocalLightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULocalLightComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::PropPointers),
		0,
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalLightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalLightComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalLightComponent, 1796573339);
	template<> ENGINE_API UClass* StaticClass<ULocalLightComponent>()
	{
		return ULocalLightComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalLightComponent(Z_Construct_UClass_ULocalLightComponent, &ULocalLightComponent::StaticClass, TEXT("/Script/Engine"), TEXT("ULocalLightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalLightComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULocalLightComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
