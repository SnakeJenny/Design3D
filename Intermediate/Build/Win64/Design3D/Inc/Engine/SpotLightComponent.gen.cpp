// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/SpotLightComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpotLightComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle();
	ENGINE_API UFunction* Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle();
// End Cross Module References
	void USpotLightComponent::StaticRegisterNativesUSpotLightComponent()
	{
		UClass* Class = USpotLightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInnerConeAngle", &USpotLightComponent::execSetInnerConeAngle },
			{ "SetOuterConeAngle", &USpotLightComponent::execSetOuterConeAngle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics
	{
		struct SpotLightComponent_eventSetInnerConeAngle_Parms
		{
			float NewInnerConeAngle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewInnerConeAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::NewProp_NewInnerConeAngle = { "NewInnerConeAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpotLightComponent_eventSetInnerConeAngle_Parms, NewInnerConeAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::NewProp_NewInnerConeAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpotLightComponent, nullptr, "SetInnerConeAngle", sizeof(SpotLightComponent_eventSetInnerConeAngle_Parms), Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics
	{
		struct SpotLightComponent_eventSetOuterConeAngle_Parms
		{
			float NewOuterConeAngle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewOuterConeAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::NewProp_NewOuterConeAngle = { "NewOuterConeAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpotLightComponent_eventSetOuterConeAngle_Parms, NewOuterConeAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::NewProp_NewOuterConeAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpotLightComponent, nullptr, "SetOuterConeAngle", sizeof(SpotLightComponent_eventSetOuterConeAngle_Parms), Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpotLightComponent_NoRegister()
	{
		return USpotLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpotLightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightShaftConeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightShaftConeAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterConeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OuterConeAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerConeAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InnerConeAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpotLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPointLightComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpotLightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle, "SetInnerConeAngle" }, // 4127690259
		{ &Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle, "SetOuterConeAngle" }, // 1265918632
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Lights" },
		{ "HideCategories", "Object Object LightShafts Object LightShafts Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SpotLightComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
		{ "ToolTip", "A spot light component emits a directional cone shaped light (Eg a Torch)." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightComponent_Statics::NewProp_LightShaftConeAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
		{ "ToolTip", "EditAnywhere, BlueprintReadOnly, Category=LightShaft, meta=(UIMin = \"1.0\", UIMax = \"180.0\")" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpotLightComponent_Statics::NewProp_LightShaftConeAngle = { "LightShaftConeAngle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpotLightComponent, LightShaftConeAngle), METADATA_PARAMS(Z_Construct_UClass_USpotLightComponent_Statics::NewProp_LightShaftConeAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpotLightComponent_Statics::NewProp_LightShaftConeAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightComponent_Statics::NewProp_OuterConeAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
		{ "ToolTip", "Degrees." },
		{ "UIMax", "80.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpotLightComponent_Statics::NewProp_OuterConeAngle = { "OuterConeAngle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpotLightComponent, OuterConeAngle), METADATA_PARAMS(Z_Construct_UClass_USpotLightComponent_Statics::NewProp_OuterConeAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpotLightComponent_Statics::NewProp_OuterConeAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightComponent_Statics::NewProp_InnerConeAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
		{ "ToolTip", "Degrees." },
		{ "UIMax", "80.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpotLightComponent_Statics::NewProp_InnerConeAngle = { "InnerConeAngle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpotLightComponent, InnerConeAngle), METADATA_PARAMS(Z_Construct_UClass_USpotLightComponent_Statics::NewProp_InnerConeAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpotLightComponent_Statics::NewProp_InnerConeAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpotLightComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpotLightComponent_Statics::NewProp_LightShaftConeAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpotLightComponent_Statics::NewProp_OuterConeAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpotLightComponent_Statics::NewProp_InnerConeAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpotLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpotLightComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpotLightComponent_Statics::ClassParams = {
		&USpotLightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpotLightComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USpotLightComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpotLightComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USpotLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpotLightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpotLightComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpotLightComponent, 396194392);
	template<> ENGINE_API UClass* StaticClass<USpotLightComponent>()
	{
		return USpotLightComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpotLightComponent(Z_Construct_UClass_USpotLightComponent, &USpotLightComponent::StaticClass, TEXT("/Script/Engine"), TEXT("USpotLightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpotLightComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
