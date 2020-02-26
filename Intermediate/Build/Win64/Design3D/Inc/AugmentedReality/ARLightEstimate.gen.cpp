// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AugmentedReality/Public/ARLightEstimate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARLightEstimate() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARLightEstimate_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARLightEstimate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBasicLightEstimate_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARBasicLightEstimate();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens();
// End Cross Module References
	void UARLightEstimate::StaticRegisterNativesUARLightEstimate()
	{
	}
	UClass* Z_Construct_UClass_UARLightEstimate_NoRegister()
	{
		return UARLightEstimate::StaticClass();
	}
	struct Z_Construct_UClass_UARLightEstimate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARLightEstimate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARLightEstimate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality|Light Estimation" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "ARLightEstimate.h" },
		{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARLightEstimate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARLightEstimate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARLightEstimate_Statics::ClassParams = {
		&UARLightEstimate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARLightEstimate_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARLightEstimate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARLightEstimate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARLightEstimate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARLightEstimate, 2142600516);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARLightEstimate>()
	{
		return UARLightEstimate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARLightEstimate(Z_Construct_UClass_UARLightEstimate, &UARLightEstimate::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARLightEstimate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARLightEstimate);
	void UARBasicLightEstimate::StaticRegisterNativesUARBasicLightEstimate()
	{
		UClass* Class = UARBasicLightEstimate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAmbientColor", &UARBasicLightEstimate::execGetAmbientColor },
			{ "GetAmbientColorTemperatureKelvin", &UARBasicLightEstimate::execGetAmbientColorTemperatureKelvin },
			{ "GetAmbientIntensityLumens", &UARBasicLightEstimate::execGetAmbientIntensityLumens },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics
	{
		struct ARBasicLightEstimate_eventGetAmbientColor_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBasicLightEstimate_eventGetAmbientColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Light Estimation" },
		{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBasicLightEstimate, nullptr, "GetAmbientColor", sizeof(ARBasicLightEstimate_eventGetAmbientColor_Parms), Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics
	{
		struct ARBasicLightEstimate_eventGetAmbientColorTemperatureKelvin_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBasicLightEstimate_eventGetAmbientColorTemperatureKelvin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Light Estimation" },
		{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBasicLightEstimate, nullptr, "GetAmbientColorTemperatureKelvin", sizeof(ARBasicLightEstimate_eventGetAmbientColorTemperatureKelvin_Parms), Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics
	{
		struct ARBasicLightEstimate_eventGetAmbientIntensityLumens_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARBasicLightEstimate_eventGetAmbientIntensityLumens_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Light Estimation" },
		{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARBasicLightEstimate, nullptr, "GetAmbientIntensityLumens", sizeof(ARBasicLightEstimate_eventGetAmbientIntensityLumens_Parms), Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARBasicLightEstimate_NoRegister()
	{
		return UARBasicLightEstimate::StaticClass();
	}
	struct Z_Construct_UClass_UARBasicLightEstimate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmbientColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientColorTemperatureKelvin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientColorTemperatureKelvin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientIntensityLumens_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientIntensityLumens;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARBasicLightEstimate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARLightEstimate,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARBasicLightEstimate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor, "GetAmbientColor" }, // 3829910909
		{ &Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin, "GetAmbientColorTemperatureKelvin" }, // 1250995286
		{ &Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens, "GetAmbientIntensityLumens" }, // 2697187477
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARBasicLightEstimate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality|Light Estimation" },
		{ "IncludePath", "ARLightEstimate.h" },
		{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientColor = { "AmbientColor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARBasicLightEstimate, AmbientColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientColorTemperatureKelvin_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientColorTemperatureKelvin = { "AmbientColorTemperatureKelvin", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARBasicLightEstimate, AmbientColorTemperatureKelvin), METADATA_PARAMS(Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientColorTemperatureKelvin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientColorTemperatureKelvin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientIntensityLumens_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARLightEstimate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientIntensityLumens = { "AmbientIntensityLumens", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARBasicLightEstimate, AmbientIntensityLumens), METADATA_PARAMS(Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientIntensityLumens_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientIntensityLumens_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARBasicLightEstimate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientColorTemperatureKelvin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARBasicLightEstimate_Statics::NewProp_AmbientIntensityLumens,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARBasicLightEstimate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARBasicLightEstimate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARBasicLightEstimate_Statics::ClassParams = {
		&UARBasicLightEstimate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARBasicLightEstimate_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UARBasicLightEstimate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARBasicLightEstimate_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARBasicLightEstimate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARBasicLightEstimate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARBasicLightEstimate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARBasicLightEstimate, 1537852875);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARBasicLightEstimate>()
	{
		return UARBasicLightEstimate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARBasicLightEstimate(Z_Construct_UClass_UARBasicLightEstimate, &UARBasicLightEstimate::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARBasicLightEstimate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARBasicLightEstimate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
