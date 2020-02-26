// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AugmentedReality/Public/ARSkyLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARSkyLight() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARSkyLight_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARSkyLight();
	ENGINE_API UClass* Z_Construct_UClass_ASkyLight();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister();
// End Cross Module References
	void AARSkyLight::StaticRegisterNativesAARSkyLight()
	{
		UClass* Class = AARSkyLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetEnvironmentCaptureProbe", &AARSkyLight::execSetEnvironmentCaptureProbe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics
	{
		struct ARSkyLight_eventSetEnvironmentCaptureProbe_Parms
		{
			UAREnvironmentCaptureProbe* InCaptureProbe;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCaptureProbe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::NewProp_InCaptureProbe = { "InCaptureProbe", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSkyLight_eventSetEnvironmentCaptureProbe_Parms, InCaptureProbe), Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::NewProp_InCaptureProbe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|SkyLight" },
		{ "ModuleRelativePath", "Public/ARSkyLight.h" },
		{ "ToolTip", "Sets the environment capture probe that this sky light is driven by" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARSkyLight, nullptr, "SetEnvironmentCaptureProbe", sizeof(ARSkyLight_eventSetEnvironmentCaptureProbe_Parms), Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AARSkyLight_NoRegister()
	{
		return AARSkyLight::StaticClass();
	}
	struct Z_Construct_UClass_AARSkyLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureProbe_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureProbe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARSkyLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASkyLight,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AARSkyLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe, "SetEnvironmentCaptureProbe" }, // 2369046588
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSkyLight_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Collision Replication Info Input Movement Collision Utilities|Transformation" },
		{ "IncludePath", "ARSkyLight.h" },
		{ "ModuleRelativePath", "Public/ARSkyLight.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "This sky light class forces a refresh of the cube map data when an AR environment probe changes" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSkyLight_Statics::NewProp_CaptureProbe_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARSkyLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARSkyLight_Statics::NewProp_CaptureProbe = { "CaptureProbe", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AARSkyLight, CaptureProbe), Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARSkyLight_Statics::NewProp_CaptureProbe_MetaData, ARRAY_COUNT(Z_Construct_UClass_AARSkyLight_Statics::NewProp_CaptureProbe_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARSkyLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARSkyLight_Statics::NewProp_CaptureProbe,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARSkyLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARSkyLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARSkyLight_Statics::ClassParams = {
		&AARSkyLight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AARSkyLight_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AARSkyLight_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AARSkyLight_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AARSkyLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARSkyLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARSkyLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARSkyLight, 2560082526);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<AARSkyLight>()
	{
		return AARSkyLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARSkyLight(Z_Construct_UClass_AARSkyLight, &AARSkyLight::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("AARSkyLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARSkyLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
