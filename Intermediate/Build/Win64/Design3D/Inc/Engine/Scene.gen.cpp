// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Scene.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScene() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETranslucencyType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReflectionsType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBloomMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoExposureMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAntiAliasingMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDepthOfFieldMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWeightedBlendables();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWeightedBlendable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraExposureSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLensSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLensImperfectionSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLensBloomSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConvolutionBloomSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGaussianSumBloomSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilmStockSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FColorGradingSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FColorGradePerRangeSettings();
	ENGINE_API UClass* Z_Construct_UClass_UScene_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UScene();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EReflectedAndRefractedRayTracedShadows_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows, Z_Construct_UPackage__Script_Engine(), TEXT("EReflectedAndRefractedRayTracedShadows"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EReflectedAndRefractedRayTracedShadows>()
	{
		return EReflectedAndRefractedRayTracedShadows_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EReflectedAndRefractedRayTracedShadows(EReflectedAndRefractedRayTracedShadows_StaticEnum, TEXT("/Script/Engine"), TEXT("EReflectedAndRefractedRayTracedShadows"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows_Hash() { return 3865579825U; }
	UEnum* Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EReflectedAndRefractedRayTracedShadows"), 0, Get_Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EReflectedAndRefractedRayTracedShadows::Disabled", (int64)EReflectedAndRefractedRayTracedShadows::Disabled },
				{ "EReflectedAndRefractedRayTracedShadows::Hard_shadows", (int64)EReflectedAndRefractedRayTracedShadows::Hard_shadows },
				{ "EReflectedAndRefractedRayTracedShadows::Area_shadows", (int64)EReflectedAndRefractedRayTracedShadows::Area_shadows },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Area_shadows.DisplayName", "Area Shadows" },
				{ "Disabled.DisplayName", "Disabled" },
				{ "Hard_shadows.DisplayName", "Hard Shadows" },
				{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EReflectedAndRefractedRayTracedShadows",
				"EReflectedAndRefractedRayTracedShadows",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETranslucencyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETranslucencyType, Z_Construct_UPackage__Script_Engine(), TEXT("ETranslucencyType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETranslucencyType>()
	{
		return ETranslucencyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETranslucencyType(ETranslucencyType_StaticEnum, TEXT("/Script/Engine"), TEXT("ETranslucencyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETranslucencyType_Hash() { return 3691907465U; }
	UEnum* Z_Construct_UEnum_Engine_ETranslucencyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETranslucencyType"), 0, Get_Z_Construct_UEnum_Engine_ETranslucencyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETranslucencyType::Raster", (int64)ETranslucencyType::Raster },
				{ "ETranslucencyType::RayTracing", (int64)ETranslucencyType::RayTracing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
				{ "Raster.DisplayName", "Raster" },
				{ "RayTracing.DisplayName", "Ray Tracing" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETranslucencyType",
				"ETranslucencyType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EReflectionsType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EReflectionsType, Z_Construct_UPackage__Script_Engine(), TEXT("EReflectionsType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EReflectionsType>()
	{
		return EReflectionsType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EReflectionsType(EReflectionsType_StaticEnum, TEXT("/Script/Engine"), TEXT("EReflectionsType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EReflectionsType_Hash() { return 149767310U; }
	UEnum* Z_Construct_UEnum_Engine_EReflectionsType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EReflectionsType"), 0, Get_Z_Construct_UEnum_Engine_EReflectionsType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EReflectionsType::ScreenSpace", (int64)EReflectionsType::ScreenSpace },
				{ "EReflectionsType::RayTracing", (int64)EReflectionsType::RayTracing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
				{ "RayTracing.DisplayName", "Ray Tracing" },
				{ "ScreenSpace.DisplayName", "Screen Space" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EReflectionsType",
				"EReflectionsType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELightUnits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELightUnits, Z_Construct_UPackage__Script_Engine(), TEXT("ELightUnits"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ELightUnits>()
	{
		return ELightUnits_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELightUnits(ELightUnits_StaticEnum, TEXT("/Script/Engine"), TEXT("ELightUnits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ELightUnits_Hash() { return 1561766687U; }
	UEnum* Z_Construct_UEnum_Engine_ELightUnits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELightUnits"), 0, Get_Z_Construct_UEnum_Engine_ELightUnits_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELightUnits::Unitless", (int64)ELightUnits::Unitless },
				{ "ELightUnits::Candelas", (int64)ELightUnits::Candelas },
				{ "ELightUnits::Lumens", (int64)ELightUnits::Lumens },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ELightUnits",
				"ELightUnits",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBloomMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBloomMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EBloomMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBloomMethod>()
	{
		return EBloomMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBloomMethod(EBloomMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EBloomMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBloomMethod_Hash() { return 3499405791U; }
	UEnum* Z_Construct_UEnum_Engine_EBloomMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBloomMethod"), 0, Get_Z_Construct_UEnum_Engine_EBloomMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BM_SOG", (int64)BM_SOG },
				{ "BM_FFT", (int64)BM_FFT },
				{ "BM_MAX", (int64)BM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BM_FFT.DisplayName", "Convolution" },
				{ "BM_FFT.ToolTip", "Fast Fourier Transform Image based convolution, intended for cinematics (too expensive for games)" },
				{ "BM_SOG.DisplayName", "Standard" },
				{ "BM_SOG.ToolTip", "Sum of Gaussian formulation" },
				{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EBloomMethod",
				"EBloomMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAutoExposureMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAutoExposureMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EAutoExposureMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAutoExposureMethod>()
	{
		return EAutoExposureMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAutoExposureMethod(EAutoExposureMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EAutoExposureMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAutoExposureMethod_Hash() { return 960367628U; }
	UEnum* Z_Construct_UEnum_Engine_EAutoExposureMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAutoExposureMethod"), 0, Get_Z_Construct_UEnum_Engine_EAutoExposureMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AEM_Histogram", (int64)AEM_Histogram },
				{ "AEM_Basic", (int64)AEM_Basic },
				{ "AEM_Manual", (int64)AEM_Manual },
				{ "AEM_MAX", (int64)AEM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AEM_Basic.DisplayName", "Auto Exposure Basic" },
				{ "AEM_Basic.ToolTip", "Not supported on mobile, faster method that computes single value by downsampling" },
				{ "AEM_Histogram.DisplayName", "Auto Exposure Histogram" },
				{ "AEM_Histogram.ToolTip", "Not supported on mobile, requires compute shader to construct 64 bin histogram" },
				{ "AEM_Manual.DisplayName", "Manual" },
				{ "AEM_Manual.ToolTip", "Uses camera settings." },
				{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
				{ "ToolTip", "Used by FPostProcessSettings Auto Exposure" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAutoExposureMethod",
				"EAutoExposureMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAntiAliasingMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAntiAliasingMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EAntiAliasingMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAntiAliasingMethod>()
	{
		return EAntiAliasingMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAntiAliasingMethod(EAntiAliasingMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EAntiAliasingMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAntiAliasingMethod_Hash() { return 1591329456U; }
	UEnum* Z_Construct_UEnum_Engine_EAntiAliasingMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAntiAliasingMethod"), 0, Get_Z_Construct_UEnum_Engine_EAntiAliasingMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AAM_None", (int64)AAM_None },
				{ "AAM_FXAA", (int64)AAM_FXAA },
				{ "AAM_TemporalAA", (int64)AAM_TemporalAA },
				{ "AAM_MSAA", (int64)AAM_MSAA },
				{ "AAM_MAX", (int64)AAM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AAM_FXAA.DisplayName", "FXAA" },
				{ "AAM_MSAA.DisplayName", "MSAA" },
				{ "AAM_MSAA.ToolTip", "Only supported with forward shading.  MSAA sample count is controlled by r.MSAACount." },
				{ "AAM_None.DisplayName", "None" },
				{ "AAM_TemporalAA.DisplayName", "TemporalAA" },
				{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
				{ "ToolTip", "Used by rendering project settings." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAntiAliasingMethod",
				"EAntiAliasingMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDepthOfFieldMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDepthOfFieldMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EDepthOfFieldMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDepthOfFieldMethod>()
	{
		return EDepthOfFieldMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDepthOfFieldMethod(EDepthOfFieldMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EDepthOfFieldMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDepthOfFieldMethod_Hash() { return 1228695873U; }
	UEnum* Z_Construct_UEnum_Engine_EDepthOfFieldMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDepthOfFieldMethod"), 0, Get_Z_Construct_UEnum_Engine_EDepthOfFieldMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DOFM_BokehDOF", (int64)DOFM_BokehDOF },
				{ "DOFM_Gaussian", (int64)DOFM_Gaussian },
				{ "DOFM_CircleDOF", (int64)DOFM_CircleDOF },
				{ "DOFM_MAX", (int64)DOFM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DOFM_BokehDOF.DisplayName", "BokehDOF" },
				{ "DOFM_CircleDOF.DisplayName", "CircleDOF" },
				{ "DOFM_Gaussian.DisplayName", "GaussianDOF" },
				{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
				{ "ToolTip", "Used by FPostProcessSettings Depth of Fields" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EDepthOfFieldMethod",
				"EDepthOfFieldMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPostProcessSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPostProcessSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPostProcessSettings, Z_Construct_UPackage__Script_Engine(), TEXT("PostProcessSettings"), sizeof(FPostProcessSettings), Get_Z_Construct_UScriptStruct_FPostProcessSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPostProcessSettings>()
{
	return FPostProcessSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPostProcessSettings(FPostProcessSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("PostProcessSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPostProcessSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFPostProcessSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PostProcessSettings")),new UScriptStruct::TCppStructOps<FPostProcessSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPostProcessSettings;
	struct Z_Construct_UScriptStruct_FPostProcessSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blendables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Blendables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blendables_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightedBlendables_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeightedBlendables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVDirectionalOcclusionFadeRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVDirectionalOcclusionFadeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVFadeRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVFadeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathTracingSamplesPerPixel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PathTracingSamplesPerPixel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathTracingMaxBounces_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PathTracingMaxBounces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayTracingTranslucencyRefraction_MetaData[];
#endif
		static void NewProp_RayTracingTranslucencyRefraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RayTracingTranslucencyRefraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayTracingTranslucencyShadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RayTracingTranslucencyShadows;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RayTracingTranslucencyShadows_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayTracingTranslucencySamplesPerPixel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RayTracingTranslucencySamplesPerPixel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayTracingTranslucencyRefractionRays_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RayTracingTranslucencyRefractionRays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayTracingTranslucencyMaxRoughness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayTracingTranslucencyMaxRoughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TranslucencyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslucencyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayTracingReflectionsShadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RayTracingReflectionsShadows;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RayTracingReflectionsShadows_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayTracingReflectionsSamplesPerPixel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RayTracingReflectionsSamplesPerPixel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayTracingReflectionsMaxBounces_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RayTracingReflectionsMaxBounces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayTracingReflectionsMaxRoughness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayTracingReflectionsMaxRoughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSpaceReflectionMaxRoughness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenSpaceReflectionMaxRoughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSpaceReflectionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenSpaceReflectionQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSpaceReflectionIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenSpaceReflectionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionsType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReflectionsType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReflectionsType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVSpecularOcclusionIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVSpecularOcclusionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVDiffuseOcclusionIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVDiffuseOcclusionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVSpecularOcclusionExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVSpecularOcclusionExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVDiffuseOcclusionExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVDiffuseOcclusionExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVDirectionalOcclusionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVDirectionalOcclusionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVDirectionalOcclusionIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVDirectionalOcclusionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVEmissiveInjectionIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVEmissiveInjectionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVGeometryVolumeBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVGeometryVolumeBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVSecondaryBounceIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVSecondaryBounceIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVSecondaryOcclusionIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVSecondaryOcclusionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVVplInjectionBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVVplInjectionBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionBlurPerObjectSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MotionBlurPerObjectSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionBlurMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MotionBlurMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionBlurAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MotionBlurAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldVignetteSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldVignetteSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldSkyFocusDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldSkyFocusDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldSizeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldSizeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldColorThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldColorThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldBokehShape_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DepthOfFieldBokehShape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldOcclusion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFarBlurSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFarBlurSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldNearBlurSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldNearBlurSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldMaxBokehSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldMaxBokehSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFarTransitionRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFarTransitionRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldNearTransitionRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldNearTransitionRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFocalRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFocalRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldDepthBlurRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldDepthBlurRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldDepthBlurAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldDepthBlurAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFocalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFocalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldSensorWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldSensorWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGradingLUT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorGradingLUT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGradingIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ColorGradingIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayTracingGISamplesPerPixel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RayTracingGISamplesPerPixel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayTracingGIMaxBounces_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RayTracingGIMaxBounces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayTracingGI_MetaData[];
#endif
		static void NewProp_RayTracingGI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RayTracingGI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IndirectLightingIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IndirectLightingColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayTracingAOSamplesPerPixel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RayTracingAOSamplesPerPixel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionMipThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionMipThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionMipScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionMipScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionMipBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionMipBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionFadeRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionFadeRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionFadeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionFadeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionRadiusInWS_MetaData[];
#endif
		static void NewProp_AmbientOcclusionRadiusInWS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AmbientOcclusionRadiusInWS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionStaticFraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionStaticFraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrainIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrainIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrainJitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrainJitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VignetteIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VignetteIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensFlareTints_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LensFlareTints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensFlareBokehShape_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LensFlareBokehShape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensFlareThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LensFlareThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensFlareBokehSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LensFlareBokehSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensFlareTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LensFlareTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensFlareIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LensFlareIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposureCalibrationConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoExposureCalibrationConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HistogramLogMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HistogramLogMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HistogramLogMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HistogramLogMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposureSpeedDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoExposureSpeedDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposureSpeedUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoExposureSpeedUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposureMaxBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoExposureMaxBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposureMinBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoExposureMinBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposureHighPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoExposureHighPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposureLowPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoExposureLowPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposureBiasCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AutoExposureBiasCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposureBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoExposureBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldBladeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DepthOfFieldBladeCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldMinFstop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldMinFstop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFstop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFstop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraISO_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraISO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShutterSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraShutterSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientCubemap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmbientCubemap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientCubemapIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientCubemapIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientCubemapTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmbientCubemapTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomDirtMaskTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BloomDirtMaskTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomDirtMaskIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomDirtMaskIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomDirtMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloomDirtMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionBufferScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomConvolutionBufferScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionPreFilterMult_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomConvolutionPreFilterMult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionPreFilterMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomConvolutionPreFilterMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionPreFilterMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomConvolutionPreFilterMin;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionPreFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BloomConvolutionPreFilter;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionCenterUV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BloomConvolutionCenterUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloomConvolutionTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomConvolutionSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom6Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bloom6Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom5Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bloom5Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom4Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bloom4Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom3Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bloom3Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom2Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bloom2Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom1Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bloom1Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom6Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bloom6Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom5Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bloom5Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom4Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bloom4Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom3Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bloom3Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom2Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bloom2Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom1Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bloom1Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomSizeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomSizeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChromaticAberrationStartOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChromaticAberrationStartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneFringeIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SceneFringeIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneColorTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SceneColorTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmDynamicRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmDynamicRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmHealAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmHealAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmToeAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmToeAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmContrast_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmContrast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmChannelMixerBlue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilmChannelMixerBlue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmChannelMixerGreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilmChannelMixerGreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmChannelMixerRed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilmChannelMixerRed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmSaturation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmSaturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmShadowTintAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmShadowTintAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmShadowTintBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmShadowTintBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmShadowTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilmShadowTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmWhitePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilmWhitePoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmWhiteClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmWhiteClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmBlackClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmBlackClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmShoulder_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmShoulder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmToe_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmToe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmSlope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmSlope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpandGamut_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExpandGamut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueCorrection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlueCorrection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorCorrectionShadowsMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ColorCorrectionShadowsMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorCorrectionHighlightsMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ColorCorrectionHighlightsMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorOffsetHighlights_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOffsetHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGainHighlights_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGainHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGammaHighlights_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGammaHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorContrastHighlights_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorContrastHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSaturationHighlights_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorSaturationHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorOffsetMidtones_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOffsetMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGainMidtones_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGainMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGammaMidtones_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGammaMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorContrastMidtones_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorContrastMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSaturationMidtones_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorSaturationMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorOffsetShadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOffsetShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGainShadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGainShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGammaShadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGammaShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorContrastShadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorContrastShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSaturationShadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorSaturationShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGamma_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGamma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorContrast_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorContrast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSaturation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorSaturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhiteTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WhiteTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhiteTemp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WhiteTemp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthOfFieldMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposureMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoExposureMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BloomMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileHQGaussian_MetaData[];
#endif
		static void NewProp_bMobileHQGaussian_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileHQGaussian;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingSamplesPerPixel_MetaData[];
#endif
		static void NewProp_bOverride_PathTracingSamplesPerPixel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingSamplesPerPixel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingMaxBounces_MetaData[];
#endif
		static void NewProp_bOverride_PathTracingMaxBounces_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingMaxBounces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingGISamplesPerPixel_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingGISamplesPerPixel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingGISamplesPerPixel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingGIMaxBounces_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingGIMaxBounces_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingGIMaxBounces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingGI_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingGI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingGI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingTranslucencyRefraction_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingTranslucencyRefraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingTranslucencyRefraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingTranslucencyShadows_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingTranslucencyShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingTranslucencyShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingTranslucencySamplesPerPixel_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingTranslucencySamplesPerPixel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingTranslucencySamplesPerPixel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingTranslucencyRefractionRays_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingTranslucencyRefractionRays_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingTranslucencyRefractionRays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingTranslucencyMaxRoughness_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingTranslucencyMaxRoughness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingTranslucencyMaxRoughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_TranslucencyType_MetaData[];
#endif
		static void NewProp_bOverride_TranslucencyType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_TranslucencyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingReflectionsShadows_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingReflectionsShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingReflectionsShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingReflectionsSamplesPerPixel_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingReflectionsSamplesPerPixel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingReflectionsSamplesPerPixel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingReflectionsMaxBounces_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingReflectionsMaxBounces_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingReflectionsMaxBounces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingReflectionsMaxRoughness_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingReflectionsMaxRoughness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingReflectionsMaxRoughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ReflectionsType_MetaData[];
#endif
		static void NewProp_bOverride_ReflectionsType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ReflectionsType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_MetaData[];
#endif
		static void NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ScreenSpaceReflectionRoughnessScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_MetaData[];
#endif
		static void NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ScreenSpaceReflectionMaxRoughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ScreenSpaceReflectionQuality_MetaData[];
#endif
		static void NewProp_bOverride_ScreenSpaceReflectionQuality_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ScreenSpaceReflectionQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ScreenSpaceReflectionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_ScreenSpaceReflectionIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ScreenSpaceReflectionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ScreenPercentage_MetaData[];
#endif
		static void NewProp_bOverride_ScreenPercentage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ScreenPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MotionBlurPerObjectSize_MetaData[];
#endif
		static void NewProp_bOverride_MotionBlurPerObjectSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MotionBlurPerObjectSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MotionBlurMax_MetaData[];
#endif
		static void NewProp_bOverride_MotionBlurMax_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MotionBlurMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MotionBlurAmount_MetaData[];
#endif
		static void NewProp_bOverride_MotionBlurAmount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MotionBlurAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldVignetteSize_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldVignetteSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldVignetteSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldSkyFocusDistance_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldSkyFocusDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldSkyFocusDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldSizeThreshold_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldSizeThreshold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldSizeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldColorThreshold_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldColorThreshold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldColorThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldOcclusion_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldOcclusion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldBokehShape_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldBokehShape_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldBokehShape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MobileHQGaussian_MetaData[];
#endif
		static void NewProp_bOverride_MobileHQGaussian_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MobileHQGaussian;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldMethod_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldMethod_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldFarBlurSize_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldFarBlurSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldFarBlurSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldNearBlurSize_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldNearBlurSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldNearBlurSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldMaxBokehSize_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldMaxBokehSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldMaxBokehSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldScale_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldFarTransitionRegion_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldFarTransitionRegion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldFarTransitionRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldNearTransitionRegion_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldNearTransitionRegion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldNearTransitionRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldFocalRegion_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldFocalRegion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldFocalRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldDepthBlurAmount_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldDepthBlurAmount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldDepthBlurAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldDepthBlurRadius_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldDepthBlurRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldDepthBlurRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldSensorWidth_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldSensorWidth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldSensorWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldBladeCount_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldBladeCount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldBladeCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldMinFstop_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldMinFstop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldMinFstop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldFstop_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldFstop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldFstop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldFocalDistance_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldFocalDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldFocalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGradingLUT_MetaData[];
#endif
		static void NewProp_bOverride_ColorGradingLUT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGradingLUT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGradingIntensity_MetaData[];
#endif
		static void NewProp_bOverride_ColorGradingIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGradingIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_IndirectLightingIntensity_MetaData[];
#endif
		static void NewProp_bOverride_IndirectLightingIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_IndirectLightingIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_IndirectLightingColor_MetaData[];
#endif
		static void NewProp_bOverride_IndirectLightingColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_IndirectLightingColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVDirectionalOcclusionFadeRange_MetaData[];
#endif
		static void NewProp_bOverride_LPVDirectionalOcclusionFadeRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVDirectionalOcclusionFadeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVFadeRange_MetaData[];
#endif
		static void NewProp_bOverride_LPVFadeRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVFadeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVEmissiveInjectionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVEmissiveInjectionIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVEmissiveInjectionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVVplInjectionBias_MetaData[];
#endif
		static void NewProp_bOverride_LPVVplInjectionBias_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVVplInjectionBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVGeometryVolumeBias_MetaData[];
#endif
		static void NewProp_bOverride_LPVGeometryVolumeBias_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVGeometryVolumeBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVSecondaryBounceIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVSecondaryBounceIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVSecondaryBounceIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVSecondaryOcclusionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVSecondaryOcclusionIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVSecondaryOcclusionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVSize_MetaData[];
#endif
		static void NewProp_bOverride_LPVSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVSpecularOcclusionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVSpecularOcclusionIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVSpecularOcclusionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVDiffuseOcclusionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVDiffuseOcclusionIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVDiffuseOcclusionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVSpecularOcclusionExponent_MetaData[];
#endif
		static void NewProp_bOverride_LPVSpecularOcclusionExponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVSpecularOcclusionExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVDiffuseOcclusionExponent_MetaData[];
#endif
		static void NewProp_bOverride_LPVDiffuseOcclusionExponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVDiffuseOcclusionExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVDirectionalOcclusionRadius_MetaData[];
#endif
		static void NewProp_bOverride_LPVDirectionalOcclusionRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVDirectionalOcclusionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVDirectionalOcclusionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVDirectionalOcclusionIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVDirectionalOcclusionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingAOSamplesPerPixel_MetaData[];
#endif
		static void NewProp_bOverride_RayTracingAOSamplesPerPixel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingAOSamplesPerPixel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionMipThreshold_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionMipThreshold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionMipThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionMipScale_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionMipScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionMipScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionMipBlend_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionMipBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionMipBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionQuality_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionQuality_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionBias_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionBias_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionPower_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionPower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionRadiusInWS_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionRadiusInWS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionRadiusInWS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionDistance_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionFadeRadius_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionFadeRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionFadeRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionFadeDistance_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionFadeDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionFadeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionRadius_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionStaticFraction_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionStaticFraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionStaticFraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_GrainJitter_MetaData[];
#endif
		static void NewProp_bOverride_GrainJitter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_GrainJitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_GrainIntensity_MetaData[];
#endif
		static void NewProp_bOverride_GrainIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_GrainIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_VignetteIntensity_MetaData[];
#endif
		static void NewProp_bOverride_VignetteIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_VignetteIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LensFlareThreshold_MetaData[];
#endif
		static void NewProp_bOverride_LensFlareThreshold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LensFlareThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LensFlareBokehShape_MetaData[];
#endif
		static void NewProp_bOverride_LensFlareBokehShape_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LensFlareBokehShape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LensFlareBokehSize_MetaData[];
#endif
		static void NewProp_bOverride_LensFlareBokehSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LensFlareBokehSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LensFlareTints_MetaData[];
#endif
		static void NewProp_bOverride_LensFlareTints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LensFlareTints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LensFlareTint_MetaData[];
#endif
		static void NewProp_bOverride_LensFlareTint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LensFlareTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LensFlareIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LensFlareIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LensFlareIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_HistogramLogMax_MetaData[];
#endif
		static void NewProp_bOverride_HistogramLogMax_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_HistogramLogMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_HistogramLogMin_MetaData[];
#endif
		static void NewProp_bOverride_HistogramLogMin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_HistogramLogMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureBiasCurve_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureBiasCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureBiasCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureBias_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureBias_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureSpeedDown_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureSpeedDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureSpeedDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureSpeedUp_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureSpeedUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureSpeedUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureCalibrationConstant_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureCalibrationConstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureCalibrationConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureMaxBrightness_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureMaxBrightness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureMaxBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureMinBrightness_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureMinBrightness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureMinBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureHighPercent_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureHighPercent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureHighPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureLowPercent_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureLowPercent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureLowPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureMethod_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureMethod_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_CameraISO_MetaData[];
#endif
		static void NewProp_bOverride_CameraISO_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_CameraISO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_CameraShutterSpeed_MetaData[];
#endif
		static void NewProp_bOverride_CameraShutterSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_CameraShutterSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomDirtMask_MetaData[];
#endif
		static void NewProp_bOverride_BloomDirtMask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomDirtMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomDirtMaskTint_MetaData[];
#endif
		static void NewProp_bOverride_BloomDirtMaskTint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomDirtMaskTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomDirtMaskIntensity_MetaData[];
#endif
		static void NewProp_bOverride_BloomDirtMaskIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomDirtMaskIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionBufferScale_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionBufferScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionBufferScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionPreFilterMult_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionPreFilterMult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionPreFilterMult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionPreFilterMax_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionPreFilterMax_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionPreFilterMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionPreFilterMin_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionPreFilterMin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionPreFilterMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionPreFilter_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionPreFilter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionPreFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionCenterUV_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionCenterUV_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionCenterUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionSize_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionTexture_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomSizeScale_MetaData[];
#endif
		static void NewProp_bOverride_BloomSizeScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomSizeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom6Size_MetaData[];
#endif
		static void NewProp_bOverride_Bloom6Size_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom6Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom6Tint_MetaData[];
#endif
		static void NewProp_bOverride_Bloom6Tint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom6Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom5Size_MetaData[];
#endif
		static void NewProp_bOverride_Bloom5Size_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom5Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom5Tint_MetaData[];
#endif
		static void NewProp_bOverride_Bloom5Tint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom5Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom4Size_MetaData[];
#endif
		static void NewProp_bOverride_Bloom4Size_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom4Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom4Tint_MetaData[];
#endif
		static void NewProp_bOverride_Bloom4Tint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom4Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom3Size_MetaData[];
#endif
		static void NewProp_bOverride_Bloom3Size_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom3Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom3Tint_MetaData[];
#endif
		static void NewProp_bOverride_Bloom3Tint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom3Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom2Tint_MetaData[];
#endif
		static void NewProp_bOverride_Bloom2Tint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom2Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom2Size_MetaData[];
#endif
		static void NewProp_bOverride_Bloom2Size_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom2Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom1Size_MetaData[];
#endif
		static void NewProp_bOverride_Bloom1Size_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom1Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom1Tint_MetaData[];
#endif
		static void NewProp_bOverride_Bloom1Tint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom1Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomThreshold_MetaData[];
#endif
		static void NewProp_bOverride_BloomThreshold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomIntensity_MetaData[];
#endif
		static void NewProp_bOverride_BloomIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomMethod_MetaData[];
#endif
		static void NewProp_bOverride_BloomMethod_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientCubemapIntensity_MetaData[];
#endif
		static void NewProp_bOverride_AmbientCubemapIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientCubemapIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientCubemapTint_MetaData[];
#endif
		static void NewProp_bOverride_AmbientCubemapTint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientCubemapTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ChromaticAberrationStartOffset_MetaData[];
#endif
		static void NewProp_bOverride_ChromaticAberrationStartOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ChromaticAberrationStartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_SceneFringeIntensity_MetaData[];
#endif
		static void NewProp_bOverride_SceneFringeIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_SceneFringeIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_SceneColorTint_MetaData[];
#endif
		static void NewProp_bOverride_SceneColorTint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_SceneColorTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmWhiteClip_MetaData[];
#endif
		static void NewProp_bOverride_FilmWhiteClip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmWhiteClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmBlackClip_MetaData[];
#endif
		static void NewProp_bOverride_FilmBlackClip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmBlackClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmShoulder_MetaData[];
#endif
		static void NewProp_bOverride_FilmShoulder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmShoulder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmToe_MetaData[];
#endif
		static void NewProp_bOverride_FilmToe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmToe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmSlope_MetaData[];
#endif
		static void NewProp_bOverride_FilmSlope_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmSlope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmShadowTintAmount_MetaData[];
#endif
		static void NewProp_bOverride_FilmShadowTintAmount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmShadowTintAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmShadowTintBlend_MetaData[];
#endif
		static void NewProp_bOverride_FilmShadowTintBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmShadowTintBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmShadowTint_MetaData[];
#endif
		static void NewProp_bOverride_FilmShadowTint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmShadowTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmToeAmount_MetaData[];
#endif
		static void NewProp_bOverride_FilmToeAmount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmToeAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmHealAmount_MetaData[];
#endif
		static void NewProp_bOverride_FilmHealAmount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmHealAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmDynamicRange_MetaData[];
#endif
		static void NewProp_bOverride_FilmDynamicRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmDynamicRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmContrast_MetaData[];
#endif
		static void NewProp_bOverride_FilmContrast_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmContrast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmChannelMixerBlue_MetaData[];
#endif
		static void NewProp_bOverride_FilmChannelMixerBlue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmChannelMixerBlue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmChannelMixerGreen_MetaData[];
#endif
		static void NewProp_bOverride_FilmChannelMixerGreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmChannelMixerGreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmChannelMixerRed_MetaData[];
#endif
		static void NewProp_bOverride_FilmChannelMixerRed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmChannelMixerRed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmSaturation_MetaData[];
#endif
		static void NewProp_bOverride_FilmSaturation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmSaturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmWhitePoint_MetaData[];
#endif
		static void NewProp_bOverride_FilmWhitePoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmWhitePoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ExpandGamut_MetaData[];
#endif
		static void NewProp_bOverride_ExpandGamut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ExpandGamut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BlueCorrection_MetaData[];
#endif
		static void NewProp_bOverride_BlueCorrection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BlueCorrection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData[];
#endif
		static void NewProp_bOverride_ColorCorrectionHighlightsMin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorCorrectionHighlightsMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorCorrectionShadowsMax_MetaData[];
#endif
		static void NewProp_bOverride_ColorCorrectionShadowsMax_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorCorrectionShadowsMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorOffsetHighlights_MetaData[];
#endif
		static void NewProp_bOverride_ColorOffsetHighlights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorOffsetHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGainHighlights_MetaData[];
#endif
		static void NewProp_bOverride_ColorGainHighlights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGainHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGammaHighlights_MetaData[];
#endif
		static void NewProp_bOverride_ColorGammaHighlights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGammaHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorContrastHighlights_MetaData[];
#endif
		static void NewProp_bOverride_ColorContrastHighlights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorContrastHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturationHighlights_MetaData[];
#endif
		static void NewProp_bOverride_ColorSaturationHighlights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturationHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorOffsetMidtones_MetaData[];
#endif
		static void NewProp_bOverride_ColorOffsetMidtones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorOffsetMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGainMidtones_MetaData[];
#endif
		static void NewProp_bOverride_ColorGainMidtones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGainMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGammaMidtones_MetaData[];
#endif
		static void NewProp_bOverride_ColorGammaMidtones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGammaMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorContrastMidtones_MetaData[];
#endif
		static void NewProp_bOverride_ColorContrastMidtones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorContrastMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturationMidtones_MetaData[];
#endif
		static void NewProp_bOverride_ColorSaturationMidtones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturationMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorOffsetShadows_MetaData[];
#endif
		static void NewProp_bOverride_ColorOffsetShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorOffsetShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGainShadows_MetaData[];
#endif
		static void NewProp_bOverride_ColorGainShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGainShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGammaShadows_MetaData[];
#endif
		static void NewProp_bOverride_ColorGammaShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGammaShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorContrastShadows_MetaData[];
#endif
		static void NewProp_bOverride_ColorContrastShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorContrastShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturationShadows_MetaData[];
#endif
		static void NewProp_bOverride_ColorSaturationShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturationShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorOffset_MetaData[];
#endif
		static void NewProp_bOverride_ColorOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGain_MetaData[];
#endif
		static void NewProp_bOverride_ColorGain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGamma_MetaData[];
#endif
		static void NewProp_bOverride_ColorGamma_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGamma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorContrast_MetaData[];
#endif
		static void NewProp_bOverride_ColorContrast_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorContrast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturation_MetaData[];
#endif
		static void NewProp_bOverride_ColorSaturation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_WhiteTint_MetaData[];
#endif
		static void NewProp_bOverride_WhiteTint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_WhiteTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_WhiteTemp_MetaData[];
#endif
		static void NewProp_bOverride_WhiteTemp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_WhiteTemp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HiddenByDefault", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPostProcessSettings>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "for backwards compatibility" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables = { "Blendables", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, Blendables_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables_Inner = { "Blendables", nullptr, (EPropertyFlags)0x0000000820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WeightedBlendables_MetaData[] = {
		{ "Category", "Rendering Features" },
		{ "DisplayName", "Post Process Materials" },
		{ "Keywords", "PostProcess" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Allows custom post process materials to be defined, using a MaterialInstance with the same Material as its parent to allow blending.\nFor materials this needs to be the \"PostProcess\" domain type. This can be used for any UObject object implementing the IBlendableInterface (e.g. could be used to fade weather settings)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WeightedBlendables = { "WeightedBlendables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, WeightedBlendables), Z_Construct_UScriptStruct_FWeightedBlendables, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WeightedBlendables_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WeightedBlendables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenPercentage_MetaData[] = {
		{ "Category", "Rendering Features|Misc" },
		{ "ClampMax", "400.0" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bOverride_ScreenPercentage" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "To render with lower or high resolution than it is presented,\ncontrolled by console variable,\n100:off, needs to be <99 to get upsampling and lower to get performance,\n>100 for super sampling (slower but higher quality),\nonly applied in game" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenPercentage = { "ScreenPercentage", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ScreenPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenPercentage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionFadeRange_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "DO Fade range" },
		{ "editcondition", "bOverride_LPVDirectionalOcclusionFadeRange" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "LPV Directional Occlusion Fade range - increase to fade more gradually towards the LPV edges." },
		{ "UIMax", "9" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionFadeRange = { "LPVDirectionalOcclusionFadeRange", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, LPVDirectionalOcclusionFadeRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionFadeRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionFadeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVFadeRange_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Fade range" },
		{ "editcondition", "bOverride_LPVFadeRange" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "LPV Fade range - increase to fade more gradually towards the LPV edges." },
		{ "UIMax", "9" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVFadeRange = { "LPVFadeRange", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, LPVFadeRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVFadeRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVFadeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingSamplesPerPixel_MetaData[] = {
		{ "Category", "Rendering Features|PathTracing" },
		{ "ClampMax", "64" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Samples Per Pixel" },
		{ "editcondition", "bOverride_PathTracingSamplesPerPixel" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the samples per pixel for the path tracer." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingSamplesPerPixel = { "PathTracingSamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, PathTracingSamplesPerPixel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingSamplesPerPixel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingSamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingMaxBounces_MetaData[] = {
		{ "Category", "Rendering Features|PathTracing" },
		{ "ClampMax", "50" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Max. Bounces" },
		{ "editcondition", "bOverride_PathTracingMaxBounces" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the path tracing maximum bounces" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingMaxBounces = { "PathTracingMaxBounces", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, PathTracingMaxBounces), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingMaxBounces_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingMaxBounces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefraction_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Translucency" },
		{ "DisplayName", "Refraction" },
		{ "editcondition", "bOverride_RayTracingTranslucencyRefraction" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets whether refraction should be enabled or not (if not rays will not scatter and only travel in the same direction as before the intersection event)." },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefraction_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->RayTracingTranslucencyRefraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefraction = { "RayTracingTranslucencyRefraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefraction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefraction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyShadows_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Translucency" },
		{ "DisplayName", "Shadows" },
		{ "editcondition", "bOverride_RayTracingTranslucencyShadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the translucency shadows type." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyShadows = { "RayTracingTranslucencyShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, RayTracingTranslucencyShadows), Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyShadows_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyShadows_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencySamplesPerPixel_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Translucency" },
		{ "ClampMax", "64" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Samples Per Pixel" },
		{ "editcondition", "bOverride_RayTracingTranslucencySamplesPerPixel" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the samples per pixel for ray traced translucency." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencySamplesPerPixel = { "RayTracingTranslucencySamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, RayTracingTranslucencySamplesPerPixel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencySamplesPerPixel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencySamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefractionRays_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Translucency" },
		{ "ClampMax", "50" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Max. Refraction Rays" },
		{ "editcondition", "bOverride_RayTracingTranslucencyRefractionRays" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the maximum number of ray tracing refraction rays." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefractionRays = { "RayTracingTranslucencyRefractionRays", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, RayTracingTranslucencyRefractionRays), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefractionRays_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefractionRays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyMaxRoughness_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Translucency" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "DisplayName", "Max Roughness" },
		{ "editcondition", "bOverride_RayTracingTranslucencyMaxRoughness" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the maximum roughness until which ray tracing translucency will be visible (lower value is faster). Translucency contribution is smoothly faded when close to roughness threshold. This parameter behaves similarly to ScreenSpaceReflectionMaxRoughness." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyMaxRoughness = { "RayTracingTranslucencyMaxRoughness", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, RayTracingTranslucencyMaxRoughness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyMaxRoughness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyMaxRoughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_TranslucencyType_MetaData[] = {
		{ "Category", "Rendering Features|Translucency" },
		{ "DisplayName", "Type" },
		{ "editcondition", "bOverride_TranslucencyType" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the translucency type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_TranslucencyType = { "TranslucencyType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, TranslucencyType), Z_Construct_UEnum_Engine_ETranslucencyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_TranslucencyType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_TranslucencyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_TranslucencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsShadows_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Reflections" },
		{ "DisplayName", "Shadows" },
		{ "editcondition", "bOverride_RayTracingReflectionsShadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the reflected shadows type." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsShadows = { "RayTracingReflectionsShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, RayTracingReflectionsShadows), Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsShadows_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsShadows_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsSamplesPerPixel_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Reflections" },
		{ "ClampMax", "64" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Samples Per Pixel" },
		{ "editcondition", "bOverride_RayTracingReflectionsSamplesPerPixel" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the samples per pixel for ray traced reflections." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsSamplesPerPixel = { "RayTracingReflectionsSamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, RayTracingReflectionsSamplesPerPixel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsSamplesPerPixel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsSamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsMaxBounces_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Reflections" },
		{ "ClampMax", "50" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Max. Bounces" },
		{ "editcondition", "bOverride_RayTracingReflectionsMaxBounces" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the maximum number of ray tracing reflection bounces." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsMaxBounces = { "RayTracingReflectionsMaxBounces", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, RayTracingReflectionsMaxBounces), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsMaxBounces_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsMaxBounces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsMaxRoughness_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Reflections" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "DisplayName", "Max Roughness" },
		{ "editcondition", "bOverride_RayTracingReflectionsMaxRoughness" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the maximum roughness until which ray tracing reflections will be visible (lower value is faster). Reflection contribution is smoothly faded when close to roughness threshold. This parameter behaves similarly to ScreenSpaceReflectionMaxRoughness." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsMaxRoughness = { "RayTracingReflectionsMaxRoughness", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, RayTracingReflectionsMaxRoughness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsMaxRoughness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsMaxRoughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionMaxRoughness_MetaData[] = {
		{ "Category", "Rendering Features|Screen Space Reflections" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "DisplayName", "Max Roughness" },
		{ "editcondition", "bOverride_ScreenSpaceReflectionMaxRoughness" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Until what roughness we fade the screen space reflections, 0.8 works well, smaller can run faster" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionMaxRoughness = { "ScreenSpaceReflectionMaxRoughness", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ScreenSpaceReflectionMaxRoughness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionMaxRoughness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionMaxRoughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionQuality_MetaData[] = {
		{ "Category", "Rendering Features|Screen Space Reflections" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Quality" },
		{ "editcondition", "bOverride_ScreenSpaceReflectionQuality" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0=lowest quality..100=maximum quality, only a few quality levels are implemented, no soft transition, 50 is the default for better performance." },
		{ "UIMax", "100.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionQuality = { "ScreenSpaceReflectionQuality", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ScreenSpaceReflectionQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Screen Space Reflections" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_ScreenSpaceReflectionIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Enable/Fade/disable the Screen Space Reflection feature, in percent, avoid numbers between 0 and 1 fo consistency" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionIntensity = { "ScreenSpaceReflectionIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ScreenSpaceReflectionIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ReflectionsType_MetaData[] = {
		{ "Category", "Rendering Features|Reflections" },
		{ "DisplayName", "Type" },
		{ "editcondition", "bOverride_ReflectionsType" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the reflections type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ReflectionsType = { "ReflectionsType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ReflectionsType), Z_Construct_UEnum_Engine_EReflectionsType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ReflectionsType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ReflectionsType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ReflectionsType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Specular occlusion intensity" },
		{ "editcondition", "bOverride_LPVSpecularOcclusionIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Specular occlusion intensity - higher values provide increased specular occlusion." },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionIntensity = { "LPVSpecularOcclusionIntensity", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, LPVSpecularOcclusionIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Diffuse occlusion intensity" },
		{ "editcondition", "bOverride_LPVDiffuseOcclusionIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diffuse occlusion intensity - higher values provide increased diffuse occlusion." },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionIntensity = { "LPVDiffuseOcclusionIntensity", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, LPVDiffuseOcclusionIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionExponent_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Specular occlusion exponent" },
		{ "editcondition", "bOverride_LPVSpecularOcclusionExponent" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Specular occlusion exponent - increase for more contrast. 6 to 9 is recommended" },
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionExponent = { "LPVSpecularOcclusionExponent", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, LPVSpecularOcclusionExponent), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionExponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionExponent_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Diffuse occlusion exponent" },
		{ "editcondition", "bOverride_LPVDiffuseOcclusionExponent" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diffuse occlusion exponent - increase for more contrast. 1 to 2 is recommended" },
		{ "UIMax", "5" },
		{ "UIMin", "0.5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionExponent = { "LPVDiffuseOcclusionExponent", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, LPVDiffuseOcclusionExponent), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionExponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionRadius_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Occlusion Radius" },
		{ "editcondition", "bOverride_LPVDirectionalOcclusionRadius" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Occlusion Radius - 16 is recommended for most scenes" },
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionRadius = { "LPVDirectionalOcclusionRadius", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, LPVDirectionalOcclusionRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Occlusion Intensity" },
		{ "editcondition", "bOverride_LPVDirectionalOcclusionIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Controls the amount of directional occlusion. Requires LPV. Values very close to 1.0 are recommended" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionIntensity = { "LPVDirectionalOcclusionIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, LPVDirectionalOcclusionIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVEmissiveInjectionIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Emissive Injection Intensity" },
		{ "editcondition", "bOverride_LPVEmissiveInjectionIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "20" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVEmissiveInjectionIntensity = { "LPVEmissiveInjectionIntensity", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, LPVEmissiveInjectionIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVEmissiveInjectionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVEmissiveInjectionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVGeometryVolumeBias_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Geometry Volume Bias" },
		{ "editcondition", "bOverride_LPVGeometryVolumeBias" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bias applied to the geometry volume in cell units. Increase to reduce darkening due to secondary occlusion" },
		{ "UIMax", "2" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVGeometryVolumeBias = { "LPVGeometryVolumeBias", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, LPVGeometryVolumeBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVGeometryVolumeBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVGeometryVolumeBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryBounceIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Secondary Bounce Intensity" },
		{ "editcondition", "bOverride_LPVSecondaryBounceIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Secondary bounce light strength (bounce light shadows). Set to 0 to disable" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryBounceIntensity = { "LPVSecondaryBounceIntensity", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, LPVSecondaryBounceIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryBounceIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryBounceIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryOcclusionIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Secondary Occlusion Intensity" },
		{ "editcondition", "bOverride_LPVSecondaryOcclusionIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Secondary occlusion strength (bounce light shadows). Set to 0 to disable" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryOcclusionIntensity = { "LPVSecondaryOcclusionIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, LPVSecondaryOcclusionIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryOcclusionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSize_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Size" },
		{ "editcondition", "bOverride_LPVSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The size of the LPV volume, in Unreal units" },
		{ "UIMax", "20000" },
		{ "UIMin", "100" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSize = { "LPVSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, LPVSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVVplInjectionBias_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Light Injection Bias" },
		{ "editcondition", "bOverride_LPVVplInjectionBias" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bias applied to light injected into the LPV in cell units. Increase to reduce bleeding through thin walls" },
		{ "UIMax", "2" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVVplInjectionBias = { "LPVVplInjectionBias", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, LPVVplInjectionBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVVplInjectionBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVVplInjectionBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_LPVIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "How strong the dynamic GI from the LPV should be. 0.0 is off, 1.0 is the \"normal\" value, but higher values can be used to boost the effect" },
		{ "UIMax", "20" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVIntensity = { "LPVIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, LPVIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurPerObjectSize_MetaData[] = {
		{ "Category", "Rendering Features|Motion Blur" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Per Object Size" },
		{ "editcondition", "bOverride_MotionBlurPerObjectSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The minimum projected screen radius for a primitive to be drawn in the velocity pass, percentage of screen width. smaller numbers cause more draw calls, default: 4%" },
		{ "UIMax", "100.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurPerObjectSize = { "MotionBlurPerObjectSize", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, MotionBlurPerObjectSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurPerObjectSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurPerObjectSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurMax_MetaData[] = {
		{ "Category", "Rendering Features|Motion Blur" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Max" },
		{ "editcondition", "bOverride_MotionBlurMax" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "max distortion caused by motion blur, in percent of the screen width, 0:off" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurMax = { "MotionBlurMax", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, MotionBlurMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurAmount_MetaData[] = {
		{ "Category", "Rendering Features|Motion Blur" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Amount" },
		{ "editcondition", "bOverride_MotionBlurAmount" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Strength of motion blur, 0:off, should be renamed to intensity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurAmount = { "MotionBlurAmount", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, MotionBlurAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldVignetteSize_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "DisplayName", "Vignette Size" },
		{ "editcondition", "bOverride_DepthOfFieldVignetteSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Artificial circular mask to (near) blur content outside the radius, only for GaussianDOF, diameter in percent of screen width, costs performance if the mask is used, keep Feather can Radius on default to keep it off" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldVignetteSize = { "DepthOfFieldVignetteSize", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldVignetteSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldVignetteSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldVignetteSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSkyFocusDistance_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMax", "200000.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Sky Distance" },
		{ "editcondition", "bOverride_DepthOfFieldSkyFocusDistance" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Artificial distance to allow the skybox to be in focus (e.g. 200000), <=0 to switch the feature off, only for GaussianDOF, can cost performance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSkyFocusDistance = { "DepthOfFieldSkyFocusDistance", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldSkyFocusDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSkyFocusDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSkyFocusDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSizeThreshold_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Size Threshold" },
		{ "editcondition", "bOverride_DepthOfFieldSizeThreshold" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSizeThreshold = { "DepthOfFieldSizeThreshold", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldSizeThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSizeThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSizeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldColorThreshold_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Color Threshold" },
		{ "editcondition", "bOverride_DepthOfFieldColorThreshold" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldColorThreshold = { "DepthOfFieldColorThreshold", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldColorThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldColorThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldColorThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBokehShape_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "DisplayName", "Shape" },
		{ "editcondition", "bOverride_DepthOfFieldBokehShape" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBokehShape = { "DepthOfFieldBokehShape", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldBokehShape), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBokehShape_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBokehShape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldOcclusion_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Occlusion" },
		{ "editcondition", "bOverride_DepthOfFieldOcclusion" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Occlusion tweak factor 1 (0.18 to get natural occlusion, 0.4 to solve layer color leaking issues)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldOcclusion = { "DepthOfFieldOcclusion", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldOcclusion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldOcclusion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarBlurSize_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "DisplayName", "Far Blur Size" },
		{ "editcondition", "bOverride_DepthOfFieldFarBlurSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Gaussian only: Maximum size of the Depth of Field blur (in percent of the view width) (note: performance cost scales with size)" },
		{ "UIMax", "32.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarBlurSize = { "DepthOfFieldFarBlurSize", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldFarBlurSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarBlurSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarBlurSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearBlurSize_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "DisplayName", "Near Blur Size" },
		{ "editcondition", "bOverride_DepthOfFieldNearBlurSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Gaussian only: Maximum size of the Depth of Field blur (in percent of the view width) (note: performance cost scales with size)" },
		{ "UIMax", "32.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearBlurSize = { "DepthOfFieldNearBlurSize", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldNearBlurSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearBlurSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearBlurSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMaxBokehSize_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "DisplayName", "Max Bokeh Size" },
		{ "editcondition", "bOverride_DepthOfFieldMaxBokehSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "32.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMaxBokehSize = { "DepthOfFieldMaxBokehSize", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldMaxBokehSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMaxBokehSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMaxBokehSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldScale_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Scale" },
		{ "editcondition", "bOverride_DepthOfFieldScale" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "SM5: BokehDOF only: To amplify the depth of field effect (like aperture)  0=off\n          ES2: Used to blend DoF. 0=off" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldScale = { "DepthOfFieldScale", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarTransitionRegion_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "DisplayName", "Far Transition Region" },
		{ "editcondition", "bOverride_DepthOfFieldFarTransitionRegion" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "To define the width of the transition region next to the focal region on the near side (cm)" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarTransitionRegion = { "DepthOfFieldFarTransitionRegion", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldFarTransitionRegion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarTransitionRegion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarTransitionRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearTransitionRegion_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "DisplayName", "Near Transition Region" },
		{ "editcondition", "bOverride_DepthOfFieldNearTransitionRegion" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "To define the width of the transition region next to the focal region on the near side (cm)" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearTransitionRegion = { "DepthOfFieldNearTransitionRegion", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldNearTransitionRegion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearTransitionRegion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearTransitionRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalRegion_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "DisplayName", "Focal Region" },
		{ "editcondition", "bOverride_DepthOfFieldFocalRegion" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Artificial region where all content is in focus, starting after DepthOfFieldFocalDistance, in unreal units  (cm)" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalRegion = { "DepthOfFieldFocalRegion", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldFocalRegion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalRegion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurRadius_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Depth Blur Radius" },
		{ "editcondition", "bOverride_DepthOfFieldDepthBlurRadius" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "CircleDOF only: Depth blur radius in pixels at 1920x" },
		{ "UIMax", "4.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurRadius = { "DepthOfFieldDepthBlurRadius", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldDepthBlurRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurAmount_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.000001" },
		{ "DisplayName", "Depth Blur km for 50%" },
		{ "editcondition", "bOverride_DepthOfFieldDepthBlurAmount" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "CircleDOF only: Depth blur km for 50%" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurAmount = { "DepthOfFieldDepthBlurAmount", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldDepthBlurAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalDistance_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Focal Distance" },
		{ "editcondition", "bOverride_DepthOfFieldFocalDistance" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Distance in which the Depth of Field effect should be sharp, in unreal units (cm)" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalDistance = { "DepthOfFieldFocalDistance", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldFocalDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSensorWidth_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMin", "0.1" },
		{ "DisplayName", "Sensor Width (mm)" },
		{ "editcondition", "bOverride_DepthOfFieldSensorWidth" },
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Width of the camera sensor to assume, in mm." },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSensorWidth = { "DepthOfFieldSensorWidth", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldSensorWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSensorWidth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSensorWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingLUT_MetaData[] = {
		{ "Category", "Color Grading|Misc" },
		{ "DisplayName", "Color Grading LUT" },
		{ "editcondition", "bOverride_ColorGradingLUT" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Look up table texture to use or none of not used" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingLUT = { "ColorGradingLUT", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorGradingLUT), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingLUT_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingLUT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingIntensity_MetaData[] = {
		{ "Category", "Color Grading|Misc" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Color Grading LUT Intensity" },
		{ "editcondition", "bOverride_ColorGradingIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Color grading lookup table intensity. 0 = no intensity, 1=full intensity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingIntensity = { "ColorGradingIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorGradingIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGISamplesPerPixel_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Global Illumination" },
		{ "ClampMax", "64" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Samples Per Pixel" },
		{ "editcondition", "bOverride_RayTracingGISamplesPerPixel" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the samples per pixel for ray tracing global illumination." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGISamplesPerPixel = { "RayTracingGISamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, RayTracingGISamplesPerPixel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGISamplesPerPixel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGISamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGIMaxBounces_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Global Illumination" },
		{ "ClampMax", "50" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Max. Bounces" },
		{ "editcondition", "bOverride_RayTracingGIMaxBounces" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the ray tracing global illumination maximum bounces." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGIMaxBounces = { "RayTracingGIMaxBounces", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, RayTracingGIMaxBounces), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGIMaxBounces_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGIMaxBounces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGI_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Global Illumination" },
		{ "DisplayName", "Enabled" },
		{ "editcondition", "bOverride_RayTracingGI" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Enables ray tracing global illumination." },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGI_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->RayTracingGI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGI = { "RayTracingGI", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGI_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGI_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Global Illumination" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Indirect Lighting Intensity" },
		{ "editcondition", "bOverride_IndirectLightingIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Scales the indirect lighting contribution. A value of 0 disables GI. Default is 1. The show flag 'Global Illumination' must be enabled to use this property." },
		{ "UIMax", "4.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingIntensity = { "IndirectLightingIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, IndirectLightingIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingColor_MetaData[] = {
		{ "Category", "Rendering Features|Global Illumination" },
		{ "DisplayName", "Indirect Lighting Color" },
		{ "editcondition", "bOverride_IndirectLightingColor" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Adjusts indirect lighting color. (1,1,1) is default. (0,0,0) to disable GI. The show flag 'Global Illumination' must be enabled to use this property." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingColor = { "IndirectLightingColor", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, IndirectLightingColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAOSamplesPerPixel_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Ambient Occlusion" },
		{ "ClampMax", "64" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Samples Per Pixel" },
		{ "editcondition", "bOverride_RayTracingAOSamplesPerPixel" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Sets the samples per pixel for ray tracing global illumination." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAOSamplesPerPixel = { "RayTracingAOSamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, RayTracingAOSamplesPerPixel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAOSamplesPerPixel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAOSamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipThreshold_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Mip Threshold" },
		{ "editcondition", "bOverride_AmbientOcclusionMipThreshold" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "to tweak the bilateral upsampling when using multiple mips (lower resolution versions)" },
		{ "UIMax", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipThreshold = { "AmbientOcclusionMipThreshold", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionMipThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipScale_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.5" },
		{ "DisplayName", "Mip Scale" },
		{ "editcondition", "bOverride_AmbientOcclusionMipScale" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Affects the radius AO radius scale over the multiple mips (lower resolution versions)" },
		{ "UIMax", "4.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipScale = { "AmbientOcclusionMipScale", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionMipScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipBlend_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.1" },
		{ "DisplayName", "Mip Blend" },
		{ "editcondition", "bOverride_AmbientOcclusionMipBlend" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Affects the blend over the multiple mips (lower resolution versions) , 0:fully use full resolution, 1::fully use low resolution, around 0.6 seems to be a good value" },
		{ "UIMax", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipBlend = { "AmbientOcclusionMipBlend", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionMipBlend), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipBlend_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionQuality_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Quality" },
		{ "editcondition", "bOverride_AmbientOcclusionQuality" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0=lowest quality..100=maximum quality, only a few quality levels are implemented, no soft transition" },
		{ "UIMax", "100.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionQuality = { "AmbientOcclusionQuality", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionBias_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Bias" },
		{ "editcondition", "bOverride_AmbientOcclusionBias" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0, in unreal units, default (3.0) works well for flat surfaces but can reduce details" },
		{ "UIMax", "10.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionBias = { "AmbientOcclusionBias", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionPower_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.1" },
		{ "DisplayName", "Power" },
		{ "editcondition", "bOverride_AmbientOcclusionPower" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0, in unreal units, bigger values means even distant surfaces affect the ambient occlusion" },
		{ "UIMax", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionPower = { "AmbientOcclusionPower", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionPower_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0, in unreal units, how wide the ambient occlusion effect should affect the geometry (in depth), will be removed - only used for non normal method which is not exposed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionDistance = { "AmbientOcclusionDistance", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeRadius_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Fade Out Radius" },
		{ "editcondition", "bOverride_AmbientOcclusionFadeRadius" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0, in unreal units, how many units before AmbientOcclusionFadeOutDistance it starts fading out" },
		{ "UIMax", "20000.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeRadius = { "AmbientOcclusionFadeRadius", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionFadeRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeDistance_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Fade Out Distance" },
		{ "editcondition", "bOverride_AmbientOcclusionFadeDistance" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0, in unreal units, at what distance the AO effect disppears in the distance (avoding artifacts and AO effects on huge object)" },
		{ "UIMax", "20000.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeDistance = { "AmbientOcclusionFadeDistance", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionFadeDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "DisplayName", "Radius in WorldSpace" },
		{ "editcondition", "bOverride_AmbientOcclusionRadiusInWS" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "true: AO radius is in world space units, false: AO radius is locked the view space in 400 units" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->AmbientOcclusionRadiusInWS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS = { "AmbientOcclusionRadiusInWS", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadius_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.1" },
		{ "DisplayName", "Radius" },
		{ "editcondition", "bOverride_AmbientOcclusionRadius" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0, in unreal units, bigger values means even distant surfaces affect the ambient occlusion" },
		{ "UIMax", "500.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadius = { "AmbientOcclusionRadius", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionStaticFraction_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Static Fraction" },
		{ "editcondition", "bOverride_AmbientOcclusionStaticFraction" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0..1 0=no effect on static lighting .. 1=AO affects the stat lighting, 0 is free meaning no extra rendering pass" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionStaticFraction = { "AmbientOcclusionStaticFraction", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionStaticFraction), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionStaticFraction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionStaticFraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_AmbientOcclusionIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0..1 0=off/no ambient occlusion .. 1=strong ambient occlusion, defines how much it affects the non direct lighting after base pass" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionIntensity = { "AmbientOcclusionIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainIntensity_MetaData[] = {
		{ "Category", "Lens|Image Effects" },
		{ "editcondition", "bOverride_GrainIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0..1 grain intensity" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainIntensity = { "GrainIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, GrainIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainJitter_MetaData[] = {
		{ "Category", "Lens|Image Effects" },
		{ "editcondition", "bOverride_GrainJitter" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0..1 grain jitter" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainJitter = { "GrainJitter", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, GrainJitter), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainJitter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainJitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_VignetteIntensity_MetaData[] = {
		{ "Category", "Lens|Image Effects" },
		{ "editcondition", "bOverride_VignetteIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0..1 0=off/no vignette .. 1=strong vignette" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_VignetteIntensity = { "VignetteIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, VignetteIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_VignetteIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_VignetteIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTints_MetaData[] = {
		{ "Category", "Lens|Lens Flares" },
		{ "DisplayName", "Tints" },
		{ "editcondition", "bOverride_LensFlareTints" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "RGB defines the lens flare color, A it's position. This is a temporary solution." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTints = { "LensFlareTints", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LensFlareTints, FPostProcessSettings), STRUCT_OFFSET(FPostProcessSettings, LensFlareTints), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTints_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehShape_MetaData[] = {
		{ "Category", "Lens|Lens Flares" },
		{ "DisplayName", "BokehShape" },
		{ "editcondition", "bOverride_LensFlareBokehShape" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Defines the shape of the Bokeh when the image base lens flares are blurred, cannot be blended" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehShape = { "LensFlareBokehShape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, LensFlareBokehShape), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehShape_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehShape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareThreshold_MetaData[] = {
		{ "Category", "Lens|Lens Flares" },
		{ "DisplayName", "Threshold" },
		{ "editcondition", "bOverride_LensFlareThreshold" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Minimum brightness the lens flare starts having effect (this should be as high as possible to avoid the performance cost of blurring content that is too dark too see)" },
		{ "UIMax", "32.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareThreshold = { "LensFlareThreshold", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, LensFlareThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehSize_MetaData[] = {
		{ "Category", "Lens|Lens Flares" },
		{ "DisplayName", "BokehSize" },
		{ "editcondition", "bOverride_LensFlareBokehSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Size of the Lens Blur (in percent of the view width) that is done with the Bokeh texture (note: performance cost is radius*radius)" },
		{ "UIMax", "32.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehSize = { "LensFlareBokehSize", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, LensFlareBokehSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTint_MetaData[] = {
		{ "Category", "Lens|Lens Flares" },
		{ "DisplayName", "Tint" },
		{ "editcondition", "bOverride_LensFlareTint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Tint color for the image based lens flares." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTint = { "LensFlareTint", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, LensFlareTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareIntensity_MetaData[] = {
		{ "Category", "Lens|Lens Flares" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_LensFlareIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Brightness scale of the image cased lens flares (linear)" },
		{ "UIMax", "16.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareIntensity = { "LensFlareIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, LensFlareIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureCalibrationConstant_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "DisplayName", "Calibration Constant" },
		{ "editcondition", "bOverride_AutoExposureCalibrationConstant" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Calibration constant for 18% albedo." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureCalibrationConstant = { "AutoExposureCalibrationConstant", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AutoExposureCalibrationConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureCalibrationConstant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureCalibrationConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMax_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "editcondition", "bOverride_HistogramLogMax" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Histogram Max value. Expressed in Log2(Luminance) or in EV100 when using ExtendDefaultLuminanceRange (see project settings)" },
		{ "UIMax", "16.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMax = { "HistogramLogMax", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, HistogramLogMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMin_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "editcondition", "bOverride_HistogramLogMin" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Histogram Min value. Expressed in Log2(Luminance) or in EV100 when using ExtendDefaultLuminanceRange (see project settings)" },
		{ "UIMax", "0.0" },
		{ "UIMin", "-16" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMin = { "HistogramLogMin", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, HistogramLogMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedDown_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "ClampMin", "0.02" },
		{ "DisplayName", "Speed Down" },
		{ "editcondition", "bOverride_AutoExposureSpeedDown" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0" },
		{ "UIMax", "20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedDown = { "AutoExposureSpeedDown", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AutoExposureSpeedDown), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedDown_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedUp_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "ClampMin", "0.02" },
		{ "DisplayName", "Speed Up" },
		{ "editcondition", "bOverride_AutoExposureSpeedUp" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0" },
		{ "UIMax", "20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedUp = { "AutoExposureSpeedUp", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AutoExposureSpeedUp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedUp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMaxBrightness_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "ClampMin", "-10.0" },
		{ "DisplayName", "Max Brightness" },
		{ "editcondition", "bOverride_AutoExposureMaxBrightness" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Auto-Exposure maximum adaptation. Eye Adaptation is disabled if Min = Max.\nAuto-exposure is implemented by choosing an exposure value for which the average luminance generates a pixel brightness equal to the Constant Calibration value.\nThe Min/Max are expressed in pixel luminance (cd/m2) or in EV100 when using ExtendDefaultLuminanceRange (see project settings)." },
		{ "UIMax", "20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMaxBrightness = { "AutoExposureMaxBrightness", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AutoExposureMaxBrightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMaxBrightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMaxBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMinBrightness_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "ClampMin", "-10.0" },
		{ "DisplayName", "Min Brightness" },
		{ "editcondition", "bOverride_AutoExposureMinBrightness" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Auto-Exposure minimum adaptation. Eye Adaptation is disabled if Min = Max.\nAuto-exposure is implemented by choosing an exposure value for which the average luminance generates a pixel brightness equal to the Constant Calibration value.\nThe Min/Max are expressed in pixel luminance (cd/m2) or in EV100 when using ExtendDefaultLuminanceRange (see project settings)." },
		{ "UIMax", "20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMinBrightness = { "AutoExposureMinBrightness", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AutoExposureMinBrightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMinBrightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMinBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureHighPercent_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "High Percent" },
		{ "editcondition", "bOverride_AutoExposureHighPercent" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.\nThe value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority\nbut can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of\nbright spots.\n>0, <100, good values are in the range 80 .. 95" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureHighPercent = { "AutoExposureHighPercent", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AutoExposureHighPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureHighPercent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureHighPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureLowPercent_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Low Percent" },
		{ "editcondition", "bOverride_AutoExposureLowPercent" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.\nThe value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority\nbut can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of\nbright spots.\n>0, <100, good values are in the range 70 .. 80" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureLowPercent = { "AutoExposureLowPercent", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AutoExposureLowPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureLowPercent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureLowPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBiasCurve_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "DisplayName", "Exposure Compensation Curve" },
		{ "editcondition", "bOverride_AutoExposureBiasCurve" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Exposure compensation based on the scene EV100.\nUsed to calibrate the final exposure differently depending on the average scene luminance.\n0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ..." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBiasCurve = { "AutoExposureBiasCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AutoExposureBiasCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBiasCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBiasCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBias_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "DisplayName", "Exposure Compensation" },
		{ "editcondition", "bOverride_AutoExposureBias" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Logarithmic adjustment for the exposure. Only used if a tonemapper is specified.\n0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ..." },
		{ "UIMax", "8.0" },
		{ "UIMin", "-8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBias = { "AutoExposureBias", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AutoExposureBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBladeCount_MetaData[] = {
		{ "Category", "Lens|Camera" },
		{ "ClampMax", "16" },
		{ "ClampMin", "4" },
		{ "DisplayName", "Number of diaphragm blades" },
		{ "editcondition", "bOverride_DepthOfFieldBladeCount" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Defines the number of blades of the diaphragm within the lens (between 4 and 16)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBladeCount = { "DepthOfFieldBladeCount", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldBladeCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBladeCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBladeCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMinFstop_MetaData[] = {
		{ "Category", "Lens|Camera" },
		{ "ClampMax", "32.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Maximum Aperture (min F-stop)" },
		{ "editcondition", "bOverride_DepthOfFieldMinFstop" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Defines the maximum opening of the camera lens to control the curvature of blades of the diaphragm. Set it to 0 to get straight blades." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMinFstop = { "DepthOfFieldMinFstop", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldMinFstop), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMinFstop_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMinFstop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFstop_MetaData[] = {
		{ "Category", "Lens|Camera" },
		{ "ClampMax", "32.0" },
		{ "ClampMin", "1.0" },
		{ "DisplayName", "Aperture (F-stop)" },
		{ "editcondition", "bOverride_DepthOfFieldFstop" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Defines the opening of the camera lens, Aperture is 1/fstop, typical lens go down to f/1.2 (large opening), larger numbers reduce the DOF effect" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFstop = { "DepthOfFieldFstop", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldFstop), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFstop_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFstop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraISO_MetaData[] = {
		{ "Category", "Lens|Camera" },
		{ "ClampMin", "1.0" },
		{ "DisplayName", "ISO" },
		{ "editcondition", "bOverride_CameraISO" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "tooltip", "The camera sensor sensitivity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraISO = { "CameraISO", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, CameraISO), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraISO_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraISO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraShutterSpeed_MetaData[] = {
		{ "Category", "Lens|Camera" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "1.0" },
		{ "DisplayName", "Shutter Speed (1/s)" },
		{ "editcondition", "bOverride_CameraShutterSpeed" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The camera shutter in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraShutterSpeed = { "CameraShutterSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, CameraShutterSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraShutterSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraShutterSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemap_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Cubemap" },
		{ "DisplayName", "Cubemap Texture" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The Ambient cubemap (Affects diffuse and specular shading), blends additively which if different from all other settings here" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemap = { "AmbientCubemap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AmbientCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Cubemap" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_AmbientCubemapIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "To scale the Ambient cubemap brightness\n>=0: off, 1(default), >1 brighter" },
		{ "UIMax", "4.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapIntensity = { "AmbientCubemapIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AmbientCubemapIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapTint_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Cubemap" },
		{ "DisplayName", "Tint" },
		{ "editcondition", "bOverride_AmbientCubemapTint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "AmbientCubemap tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapTint = { "AmbientCubemapTint", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AmbientCubemapTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskTint_MetaData[] = {
		{ "Category", "Lens|Dirt Mask" },
		{ "DisplayName", "Dirt Mask Tint" },
		{ "editcondition", "bOverride_BloomDirtMaskTint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "BloomDirtMask tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskTint = { "BloomDirtMaskTint", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, BloomDirtMaskTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskIntensity_MetaData[] = {
		{ "Category", "Lens|Dirt Mask" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Dirt Mask Intensity" },
		{ "editcondition", "bOverride_BloomDirtMaskIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "BloomDirtMask intensity" },
		{ "UIMax", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskIntensity = { "BloomDirtMaskIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, BloomDirtMaskIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMask_MetaData[] = {
		{ "Category", "Lens|Dirt Mask" },
		{ "DisplayName", "Dirt Mask Texture" },
		{ "editcondition", "bOverride_BloomDirtMask" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Texture that defines the dirt on the camera lens where the light of very bright objects is scattered." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMask = { "BloomDirtMask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, BloomDirtMask), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMask_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionBufferScale_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Convolution Buffer" },
		{ "editcondition", "bOverride_BloomConvolutionBufferScale" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Implicit buffer region as a fraction of the screen size to insure the bloom does not wrap across the screen.  Larger sizes have perf impact." },
		{ "UIMax", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionBufferScale = { "BloomConvolutionBufferScale", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionBufferScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionBufferScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionBufferScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMult_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Convolution Boost Mult" },
		{ "editcondition", "bOverride_BloomConvolutionPreFilterMult" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMult = { "BloomConvolutionPreFilterMult", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionPreFilterMult), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMult_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMax_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Convolution Boost Max" },
		{ "editcondition", "bOverride_BloomConvolutionPreFilterMax" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMax = { "BloomConvolutionPreFilterMax", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionPreFilterMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMin_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Convolution Boost Min" },
		{ "editcondition", "bOverride_BloomConvolutionPreFilterMin" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMin = { "BloomConvolutionPreFilterMin", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionPreFilterMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMin_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilter = { "BloomConvolutionPreFilter", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionPreFilter_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilter_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionCenterUV_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Convolution Center" },
		{ "editcondition", "bOverride_BloomConvolutionCenterUV" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The UV location of the center of the kernel.  Should be very close to (.5,.5)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionCenterUV = { "BloomConvolutionCenterUV", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionCenterUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionCenterUV_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionCenterUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionTexture_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Convolution Kernel" },
		{ "editcondition", "bOverride_BloomConvolutionTexture" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Texture to replace default convolution bloom kernel" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionTexture = { "BloomConvolutionTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionTexture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionSize_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Convolution Scale" },
		{ "editcondition", "bOverride_BloomConvolutionSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Relative size of the convolution kernel image compared to the minor axis of the viewport" },
		{ "UIMax", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionSize = { "BloomConvolutionSize", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#6 Tint" },
		{ "editcondition", "bOverride_Bloom6Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom6 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Tint = { "Bloom6Tint", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, Bloom6Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#5 Tint" },
		{ "editcondition", "bOverride_Bloom5Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom5 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Tint = { "Bloom5Tint", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, Bloom5Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#4 Tint" },
		{ "editcondition", "bOverride_Bloom4Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom4 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Tint = { "Bloom4Tint", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, Bloom4Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#3 Tint" },
		{ "editcondition", "bOverride_Bloom3Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom3 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Tint = { "Bloom3Tint", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, Bloom3Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#2 Tint" },
		{ "editcondition", "bOverride_Bloom2Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom2 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Tint = { "Bloom2Tint", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, Bloom2Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#1 Tint" },
		{ "editcondition", "bOverride_Bloom1Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom1 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Tint = { "Bloom1Tint", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, Bloom1Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#6 Size" },
		{ "editcondition", "bOverride_Bloom6Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom6 in percent of the screen width\n(is done in 1/64 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "128.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Size = { "Bloom6Size", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, Bloom6Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#5 Size" },
		{ "editcondition", "bOverride_Bloom5Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom5 in percent of the screen width\n(is done in 1/32 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "64.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Size = { "Bloom5Size", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, Bloom5Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#4 Size" },
		{ "editcondition", "bOverride_Bloom4Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom4 in percent of the screen width\n(is done in 1/16 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "32.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Size = { "Bloom4Size", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, Bloom4Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#3 Size" },
		{ "editcondition", "bOverride_Bloom3Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom3 in percent of the screen width\n(is done in 1/8 resolution, larger values cost more performance)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "16.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Size = { "Bloom3Size", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, Bloom3Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#2 Size" },
		{ "editcondition", "bOverride_Bloom2Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom2 in percent of the screen width\n(is done in 1/4 resolution, larger values cost more performance)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Size = { "Bloom2Size", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, Bloom2Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#1 Size" },
		{ "editcondition", "bOverride_Bloom1Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for the Bloom1 in percent of the screen width\n(is done in 1/2 resolution, larger values cost more performance, good for high frequency details)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "4.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Size = { "Bloom1Size", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, Bloom1Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomSizeScale_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Size scale" },
		{ "editcondition", "bOverride_BloomSizeScale" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Scale for all bloom sizes" },
		{ "UIMax", "64.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomSizeScale = { "BloomSizeScale", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, BloomSizeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomSizeScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomSizeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomThreshold_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "-1.0" },
		{ "DisplayName", "Threshold" },
		{ "editcondition", "bOverride_BloomThreshold" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "minimum brightness the bloom starts having effect\n-1:all pixels affect bloom equally (physically correct, faster as a threshold pass is omitted), 0:all pixels affect bloom brights more, 1(default), >1 brighter" },
		{ "UIMax", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomThreshold = { "BloomThreshold", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, BloomThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomIntensity_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_BloomIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Multiplier for all bloom contributions >=0: off, 1(default), >1 brighter" },
		{ "UIMax", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomIntensity = { "BloomIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, BloomIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ChromaticAberrationStartOffset_MetaData[] = {
		{ "Category", "Lens|Chromatic Aberration" },
		{ "DisplayName", "Start Offset" },
		{ "editcondition", "bOverride_ChromaticAberrationStartOffset" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "A normalized distance to the center of the framebuffer where the effect takes place." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ChromaticAberrationStartOffset = { "ChromaticAberrationStartOffset", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ChromaticAberrationStartOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ChromaticAberrationStartOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ChromaticAberrationStartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneFringeIntensity_MetaData[] = {
		{ "Category", "Lens|Chromatic Aberration" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_SceneFringeIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "in percent, Scene chromatic aberration / color fringe (camera imperfection) to simulate an artifact that happens in real-world lens, mostly visible in the image corners." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneFringeIntensity = { "SceneFringeIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, SceneFringeIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneFringeIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneFringeIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneColorTint_MetaData[] = {
		{ "Category", "Color Grading|Misc" },
		{ "editcondition", "bOverride_SceneColorTint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Scene tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneColorTint = { "SceneColorTint", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, SceneColorTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneColorTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneColorTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmDynamicRange_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Dynamic Range" },
		{ "editcondition", "bOverride_FilmDynamicRange" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "4.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmDynamicRange = { "FilmDynamicRange", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, FilmDynamicRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmDynamicRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmDynamicRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmHealAmount_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Crush Highlights" },
		{ "editcondition", "bOverride_FilmHealAmount" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmHealAmount = { "FilmHealAmount", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, FilmHealAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmHealAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmHealAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToeAmount_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Crush Shadows" },
		{ "editcondition", "bOverride_FilmToeAmount" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToeAmount = { "FilmToeAmount", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, FilmToeAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToeAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToeAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmContrast_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Contrast" },
		{ "editcondition", "bOverride_FilmContrast" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmContrast = { "FilmContrast", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, FilmContrast), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmContrast_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmContrast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerBlue_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Channel Mixer Blue" },
		{ "editcondition", "bOverride_FilmChannelMixerBlue" },
		{ "HideAlphaChannel", "" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerBlue = { "FilmChannelMixerBlue", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, FilmChannelMixerBlue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerBlue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerBlue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerGreen_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Channel Mixer Green" },
		{ "editcondition", "bOverride_FilmChannelMixerGreen" },
		{ "HideAlphaChannel", "" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerGreen = { "FilmChannelMixerGreen", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, FilmChannelMixerGreen), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerGreen_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerGreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerRed_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Channel Mixer Red" },
		{ "editcondition", "bOverride_FilmChannelMixerRed" },
		{ "HideAlphaChannel", "" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerRed = { "FilmChannelMixerRed", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, FilmChannelMixerRed), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerRed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerRed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSaturation_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Saturation" },
		{ "editcondition", "bOverride_FilmSaturation" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSaturation = { "FilmSaturation", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, FilmSaturation), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSaturation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSaturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTintAmount_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Tint Shadow Amount" },
		{ "editcondition", "bOverride_FilmShadowTintAmount" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTintAmount = { "FilmShadowTintAmount", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, FilmShadowTintAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTintAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTintAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTintBlend_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Tint Shadow Blend" },
		{ "editcondition", "bOverride_FilmShadowTintBlend" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTintBlend = { "FilmShadowTintBlend", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, FilmShadowTintBlend), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTintBlend_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTintBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTint_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Tint Shadow" },
		{ "editcondition", "bOverride_FilmShadowTint" },
		{ "HideAlphaChannel", "" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTint = { "FilmShadowTint", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, FilmShadowTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhitePoint_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Tint" },
		{ "editcondition", "bOverride_FilmWhitePoint" },
		{ "HideAlphaChannel", "" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhitePoint = { "FilmWhitePoint", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, FilmWhitePoint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhitePoint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhitePoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhiteClip_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "White clip" },
		{ "editcondition", "bOverride_FilmWhiteClip" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhiteClip = { "FilmWhiteClip", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, FilmWhiteClip), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhiteClip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhiteClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmBlackClip_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Black clip" },
		{ "editcondition", "bOverride_FilmBlackClip" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmBlackClip = { "FilmBlackClip", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, FilmBlackClip), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmBlackClip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmBlackClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShoulder_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Shoulder" },
		{ "editcondition", "bOverride_FilmShoulder" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShoulder = { "FilmShoulder", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, FilmShoulder), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShoulder_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShoulder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToe_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Toe" },
		{ "editcondition", "bOverride_FilmToe" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToe = { "FilmToe", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, FilmToe), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToe_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSlope_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Slope" },
		{ "editcondition", "bOverride_FilmSlope" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSlope = { "FilmSlope", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, FilmSlope), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSlope_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSlope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ExpandGamut_MetaData[] = {
		{ "Category", "Color Grading|Misc" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bOverride_ExpandGamut" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Expand bright saturated colors outside the sRGB gamut to fake wide gamut rendering." },
		{ "UIMax", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ExpandGamut = { "ExpandGamut", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ExpandGamut), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ExpandGamut_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ExpandGamut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BlueCorrection_MetaData[] = {
		{ "Category", "Color Grading|Misc" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bOverride_BlueCorrection" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Correct for artifacts with \"electric\" blues due to the ACEScg color space. Bright blue desaturates instead of going to violet." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BlueCorrection = { "BlueCorrection", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, BlueCorrection), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BlueCorrection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BlueCorrection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionShadowsMax_MetaData[] = {
		{ "Category", "Color Grading|Shadows" },
		{ "DisplayName", "ShadowsMax" },
		{ "editcondition", "bOverride_ColorCorrectionShadowsMax" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionShadowsMax = { "ColorCorrectionShadowsMax", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorCorrectionShadowsMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionShadowsMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionShadowsMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionHighlightsMin_MetaData[] = {
		{ "Category", "Color Grading|Highlights" },
		{ "DisplayName", "HighlightsMin" },
		{ "editcondition", "bOverride_ColorCorrectionHighlightsMin" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionHighlightsMin = { "ColorCorrectionHighlightsMin", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorCorrectionHighlightsMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionHighlightsMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionHighlightsMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetHighlights_MetaData[] = {
		{ "Category", "Color Grading|Highlights" },
		{ "ColorGradingMode", "offset" },
		{ "Delta", "0.001" },
		{ "DisplayName", "Offset" },
		{ "editcondition", "bOverride_ColorOffsetHighlights" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "20" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "SupportDynamicSliderMinValue", "true" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetHighlights = { "ColorOffsetHighlights", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorOffsetHighlights), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetHighlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainHighlights_MetaData[] = {
		{ "Category", "Color Grading|Highlights" },
		{ "ColorGradingMode", "gain" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gain" },
		{ "editcondition", "bOverride_ColorGainHighlights" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainHighlights = { "ColorGainHighlights", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorGainHighlights), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainHighlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaHighlights_MetaData[] = {
		{ "Category", "Color Grading|Highlights" },
		{ "ColorGradingMode", "gamma" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gamma" },
		{ "editcondition", "bOverride_ColorGammaHighlights" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaHighlights = { "ColorGammaHighlights", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorGammaHighlights), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaHighlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastHighlights_MetaData[] = {
		{ "Category", "Color Grading|Highlights" },
		{ "ColorGradingMode", "contrast" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Contrast" },
		{ "editcondition", "bOverride_ColorContrastHighlights" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastHighlights = { "ColorContrastHighlights", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorContrastHighlights), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastHighlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationHighlights_MetaData[] = {
		{ "Category", "Color Grading|Highlights" },
		{ "ColorGradingMode", "saturation" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Saturation" },
		{ "editcondition", "bOverride_ColorSaturationHighlights" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationHighlights = { "ColorSaturationHighlights", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorSaturationHighlights), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationHighlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetMidtones_MetaData[] = {
		{ "Category", "Color Grading|Midtones" },
		{ "ColorGradingMode", "offset" },
		{ "Delta", "0.001" },
		{ "DisplayName", "Offset" },
		{ "editcondition", "bOverride_ColorOffsetMidtones" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "20" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "SupportDynamicSliderMinValue", "true" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetMidtones = { "ColorOffsetMidtones", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorOffsetMidtones), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetMidtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainMidtones_MetaData[] = {
		{ "Category", "Color Grading|Midtones" },
		{ "ColorGradingMode", "gain" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gain" },
		{ "editcondition", "bOverride_ColorGainMidtones" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainMidtones = { "ColorGainMidtones", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorGainMidtones), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainMidtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaMidtones_MetaData[] = {
		{ "Category", "Color Grading|Midtones" },
		{ "ColorGradingMode", "gamma" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gamma" },
		{ "editcondition", "bOverride_ColorGammaMidtones" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaMidtones = { "ColorGammaMidtones", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorGammaMidtones), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaMidtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastMidtones_MetaData[] = {
		{ "Category", "Color Grading|Midtones" },
		{ "ColorGradingMode", "contrast" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Contrast" },
		{ "editcondition", "bOverride_ColorContrastMidtones" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastMidtones = { "ColorContrastMidtones", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorContrastMidtones), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastMidtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationMidtones_MetaData[] = {
		{ "Category", "Color Grading|Midtones" },
		{ "ColorGradingMode", "saturation" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Saturation" },
		{ "editcondition", "bOverride_ColorSaturationMidtones" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationMidtones = { "ColorSaturationMidtones", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorSaturationMidtones), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationMidtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetShadows_MetaData[] = {
		{ "Category", "Color Grading|Shadows" },
		{ "ColorGradingMode", "offset" },
		{ "Delta", "0.001" },
		{ "DisplayName", "Offset" },
		{ "editcondition", "bOverride_ColorOffsetShadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "20" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "SupportDynamicSliderMinValue", "true" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetShadows = { "ColorOffsetShadows", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorOffsetShadows), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainShadows_MetaData[] = {
		{ "Category", "Color Grading|Shadows" },
		{ "ColorGradingMode", "gain" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gain" },
		{ "editcondition", "bOverride_ColorGainShadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainShadows = { "ColorGainShadows", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorGainShadows), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaShadows_MetaData[] = {
		{ "Category", "Color Grading|Shadows" },
		{ "ColorGradingMode", "gamma" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gamma" },
		{ "editcondition", "bOverride_ColorGammaShadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaShadows = { "ColorGammaShadows", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorGammaShadows), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastShadows_MetaData[] = {
		{ "Category", "Color Grading|Shadows" },
		{ "ColorGradingMode", "contrast" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Contrast" },
		{ "editcondition", "bOverride_ColorContrastShadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastShadows = { "ColorContrastShadows", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorContrastShadows), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationShadows_MetaData[] = {
		{ "Category", "Color Grading|Shadows" },
		{ "ColorGradingMode", "saturation" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Saturation" },
		{ "editcondition", "bOverride_ColorSaturationShadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationShadows = { "ColorSaturationShadows", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorSaturationShadows), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffset_MetaData[] = {
		{ "Category", "Color Grading|Global" },
		{ "ColorGradingMode", "offset" },
		{ "Delta", "0.001" },
		{ "DisplayName", "Offset" },
		{ "editcondition", "bOverride_ColorOffset" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "20" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "SupportDynamicSliderMinValue", "true" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffset = { "ColorOffset", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorOffset), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGain_MetaData[] = {
		{ "Category", "Color Grading|Global" },
		{ "ColorGradingMode", "gain" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gain" },
		{ "editcondition", "bOverride_ColorGain" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGain = { "ColorGain", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorGain), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGain_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGamma_MetaData[] = {
		{ "Category", "Color Grading|Global" },
		{ "ColorGradingMode", "gamma" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gamma" },
		{ "editcondition", "bOverride_ColorGamma" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGamma = { "ColorGamma", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorGamma), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGamma_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGamma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrast_MetaData[] = {
		{ "Category", "Color Grading|Global" },
		{ "ColorGradingMode", "contrast" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Contrast" },
		{ "editcondition", "bOverride_ColorContrast" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrast = { "ColorContrast", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorContrast), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrast_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturation_MetaData[] = {
		{ "Category", "Color Grading|Global" },
		{ "ColorGradingMode", "saturation" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Saturation" },
		{ "editcondition", "bOverride_ColorSaturation" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "ToolTip", "Color Correction controls" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturation = { "ColorSaturation", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, ColorSaturation), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTint_MetaData[] = {
		{ "Category", "Color Grading|WhiteBalance" },
		{ "DisplayName", "Tint" },
		{ "editcondition", "bOverride_WhiteTint" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTint = { "WhiteTint", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, WhiteTint), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTemp_MetaData[] = {
		{ "Category", "Color Grading|WhiteBalance" },
		{ "DisplayName", "Temp" },
		{ "editcondition", "bOverride_WhiteTemp" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "15000.0" },
		{ "UIMin", "1500.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTemp = { "WhiteTemp", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, WhiteTemp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTemp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTemp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMethod_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "DisplayName", "Method" },
		{ "editcondition", "bOverride_DepthOfFieldMethod" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMethod = { "DepthOfFieldMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldMethod), Z_Construct_UEnum_Engine_EDepthOfFieldMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMethod_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "DisplayName", "Metering Mode" },
		{ "editcondition", "bOverride_AutoExposureMethod" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Luminance computation method" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMethod = { "AutoExposureMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, AutoExposureMethod), Z_Construct_UEnum_Engine_EAutoExposureMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomMethod_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Method" },
		{ "editcondition", "bOverride_BloomMethod" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom algorithm" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomMethod = { "BloomMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPostProcessSettings, BloomMethod), Z_Construct_UEnum_Engine_EBloomMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "DisplayName", "High Quality Gaussian DoF on Mobile" },
		{ "editcondition", "bOverride_MobileHQGaussian" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Enable HQ Gaussian on high end mobile platforms. (ES3_1)" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bMobileHQGaussian = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian = { "bMobileHQGaussian", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingSamplesPerPixel_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingSamplesPerPixel_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_PathTracingSamplesPerPixel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingSamplesPerPixel = { "bOverride_PathTracingSamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingSamplesPerPixel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingSamplesPerPixel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingSamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxBounces_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxBounces_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_PathTracingMaxBounces = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxBounces = { "bOverride_PathTracingMaxBounces", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxBounces_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxBounces_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxBounces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGISamplesPerPixel_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGISamplesPerPixel_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingGISamplesPerPixel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGISamplesPerPixel = { "bOverride_RayTracingGISamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGISamplesPerPixel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGISamplesPerPixel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGISamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGIMaxBounces_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGIMaxBounces_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingGIMaxBounces = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGIMaxBounces = { "bOverride_RayTracingGIMaxBounces", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGIMaxBounces_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGIMaxBounces_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGIMaxBounces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGI_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGI_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingGI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGI = { "bOverride_RayTracingGI", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGI_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGI_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefraction_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefraction_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingTranslucencyRefraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefraction = { "bOverride_RayTracingTranslucencyRefraction", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefraction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefraction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyShadows_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingTranslucencyShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyShadows = { "bOverride_RayTracingTranslucencyShadows", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencySamplesPerPixel_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencySamplesPerPixel_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingTranslucencySamplesPerPixel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencySamplesPerPixel = { "bOverride_RayTracingTranslucencySamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencySamplesPerPixel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencySamplesPerPixel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencySamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefractionRays_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefractionRays_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingTranslucencyRefractionRays = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefractionRays = { "bOverride_RayTracingTranslucencyRefractionRays", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefractionRays_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefractionRays_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefractionRays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyMaxRoughness_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyMaxRoughness_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingTranslucencyMaxRoughness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyMaxRoughness = { "bOverride_RayTracingTranslucencyMaxRoughness", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyMaxRoughness_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyMaxRoughness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyMaxRoughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TranslucencyType_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TranslucencyType_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_TranslucencyType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TranslucencyType = { "bOverride_TranslucencyType", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TranslucencyType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TranslucencyType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TranslucencyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsShadows_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingReflectionsShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsShadows = { "bOverride_RayTracingReflectionsShadows", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsSamplesPerPixel_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsSamplesPerPixel_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingReflectionsSamplesPerPixel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsSamplesPerPixel = { "bOverride_RayTracingReflectionsSamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsSamplesPerPixel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsSamplesPerPixel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsSamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxBounces_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxBounces_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingReflectionsMaxBounces = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxBounces = { "bOverride_RayTracingReflectionsMaxBounces", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxBounces_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxBounces_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxBounces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxRoughness_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxRoughness_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingReflectionsMaxRoughness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxRoughness = { "bOverride_RayTracingReflectionsMaxRoughness", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxRoughness_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxRoughness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxRoughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionsType_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Ray Tracing" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionsType_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ReflectionsType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionsType = { "bOverride_ReflectionsType", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionsType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionsType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionsType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ScreenSpaceReflectionRoughnessScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale = { "bOverride_ScreenSpaceReflectionRoughnessScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ScreenSpaceReflectionMaxRoughness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness = { "bOverride_ScreenSpaceReflectionMaxRoughness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ScreenSpaceReflectionQuality = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality = { "bOverride_ScreenSpaceReflectionQuality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ScreenSpaceReflectionIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity = { "bOverride_ScreenSpaceReflectionIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ScreenPercentage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage = { "bOverride_ScreenPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_MotionBlurPerObjectSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize = { "bOverride_MotionBlurPerObjectSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_MotionBlurMax = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax = { "bOverride_MotionBlurMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_MotionBlurAmount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount = { "bOverride_MotionBlurAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldVignetteSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize = { "bOverride_DepthOfFieldVignetteSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldSkyFocusDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance = { "bOverride_DepthOfFieldSkyFocusDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSizeThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSizeThreshold_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldSizeThreshold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSizeThreshold = { "bOverride_DepthOfFieldSizeThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSizeThreshold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSizeThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSizeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldColorThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldColorThreshold_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldColorThreshold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldColorThreshold = { "bOverride_DepthOfFieldColorThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldColorThreshold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldColorThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldColorThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldOcclusion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion = { "bOverride_DepthOfFieldOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBokehShape_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBokehShape_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldBokehShape = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBokehShape = { "bOverride_DepthOfFieldBokehShape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBokehShape_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBokehShape_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBokehShape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_MobileHQGaussian = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian = { "bOverride_MobileHQGaussian", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMethod_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMethod_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldMethod = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMethod = { "bOverride_DepthOfFieldMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMethod_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldFarBlurSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize = { "bOverride_DepthOfFieldFarBlurSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldNearBlurSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize = { "bOverride_DepthOfFieldNearBlurSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMaxBokehSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMaxBokehSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldMaxBokehSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMaxBokehSize = { "bOverride_DepthOfFieldMaxBokehSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMaxBokehSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMaxBokehSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMaxBokehSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale = { "bOverride_DepthOfFieldScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldFarTransitionRegion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion = { "bOverride_DepthOfFieldFarTransitionRegion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldNearTransitionRegion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion = { "bOverride_DepthOfFieldNearTransitionRegion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldFocalRegion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion = { "bOverride_DepthOfFieldFocalRegion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldDepthBlurAmount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount = { "bOverride_DepthOfFieldDepthBlurAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldDepthBlurRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius = { "bOverride_DepthOfFieldDepthBlurRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldSensorWidth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth = { "bOverride_DepthOfFieldSensorWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldBladeCount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount = { "bOverride_DepthOfFieldBladeCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldMinFstop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop = { "bOverride_DepthOfFieldMinFstop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldFstop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop = { "bOverride_DepthOfFieldFstop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldFocalDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance = { "bOverride_DepthOfFieldFocalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGradingLUT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT = { "bOverride_ColorGradingLUT", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGradingIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity = { "bOverride_ColorGradingIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_IndirectLightingIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity = { "bOverride_IndirectLightingIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_IndirectLightingColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor = { "bOverride_IndirectLightingColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVDirectionalOcclusionFadeRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange = { "bOverride_LPVDirectionalOcclusionFadeRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVFadeRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange = { "bOverride_LPVFadeRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVEmissiveInjectionIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity = { "bOverride_LPVEmissiveInjectionIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVVplInjectionBias = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias = { "bOverride_LPVVplInjectionBias", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVGeometryVolumeBias = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias = { "bOverride_LPVGeometryVolumeBias", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVSecondaryBounceIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity = { "bOverride_LPVSecondaryBounceIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVSecondaryOcclusionIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity = { "bOverride_LPVSecondaryOcclusionIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize = { "bOverride_LPVSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVSpecularOcclusionIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity = { "bOverride_LPVSpecularOcclusionIntensity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVDiffuseOcclusionIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity = { "bOverride_LPVDiffuseOcclusionIntensity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVSpecularOcclusionExponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent = { "bOverride_LPVSpecularOcclusionExponent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVDiffuseOcclusionExponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent = { "bOverride_LPVDiffuseOcclusionExponent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVDirectionalOcclusionRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius = { "bOverride_LPVDirectionalOcclusionRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVDirectionalOcclusionIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity = { "bOverride_LPVDirectionalOcclusionIntensity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity = { "bOverride_LPVIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOSamplesPerPixel_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOSamplesPerPixel_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_RayTracingAOSamplesPerPixel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOSamplesPerPixel = { "bOverride_RayTracingAOSamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOSamplesPerPixel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOSamplesPerPixel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOSamplesPerPixel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionMipThreshold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold = { "bOverride_AmbientOcclusionMipThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionMipScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale = { "bOverride_AmbientOcclusionMipScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionMipBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend = { "bOverride_AmbientOcclusionMipBlend", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionQuality = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality = { "bOverride_AmbientOcclusionQuality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionBias = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias = { "bOverride_AmbientOcclusionBias", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionPower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower = { "bOverride_AmbientOcclusionPower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionRadiusInWS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS = { "bOverride_AmbientOcclusionRadiusInWS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionDistance_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance = { "bOverride_AmbientOcclusionDistance", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionFadeRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius = { "bOverride_AmbientOcclusionFadeRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionFadeDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance = { "bOverride_AmbientOcclusionFadeDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius = { "bOverride_AmbientOcclusionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionStaticFraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction = { "bOverride_AmbientOcclusionStaticFraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity = { "bOverride_AmbientOcclusionIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_GrainJitter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter = { "bOverride_GrainJitter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_GrainIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity = { "bOverride_GrainIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_VignetteIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity = { "bOverride_VignetteIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LensFlareThreshold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold = { "bOverride_LensFlareThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LensFlareBokehShape = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape = { "bOverride_LensFlareBokehShape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LensFlareBokehSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize = { "bOverride_LensFlareBokehSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LensFlareTints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints = { "bOverride_LensFlareTints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LensFlareTint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint = { "bOverride_LensFlareTint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LensFlareIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity = { "bOverride_LensFlareIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_HistogramLogMax = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax = { "bOverride_HistogramLogMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_HistogramLogMin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin = { "bOverride_HistogramLogMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasCurve_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasCurve_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureBiasCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasCurve = { "bOverride_AutoExposureBiasCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasCurve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureBias = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias = { "bOverride_AutoExposureBias", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureSpeedDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown = { "bOverride_AutoExposureSpeedDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureSpeedUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp = { "bOverride_AutoExposureSpeedUp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureCalibrationConstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant = { "bOverride_AutoExposureCalibrationConstant", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureMaxBrightness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness = { "bOverride_AutoExposureMaxBrightness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureMinBrightness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness = { "bOverride_AutoExposureMinBrightness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureHighPercent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent = { "bOverride_AutoExposureHighPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureLowPercent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent = { "bOverride_AutoExposureLowPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureMethod = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod = { "bOverride_AutoExposureMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_CameraISO = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO = { "bOverride_CameraISO", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_CameraShutterSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed = { "bOverride_CameraShutterSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomDirtMask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask = { "bOverride_BloomDirtMask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomDirtMaskTint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint = { "bOverride_BloomDirtMaskTint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomDirtMaskIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity = { "bOverride_BloomDirtMaskIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionBufferScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale = { "bOverride_BloomConvolutionBufferScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionPreFilterMult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult = { "bOverride_BloomConvolutionPreFilterMult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionPreFilterMax = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax = { "bOverride_BloomConvolutionPreFilterMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionPreFilterMin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin = { "bOverride_BloomConvolutionPreFilterMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionPreFilter_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter = { "bOverride_BloomConvolutionPreFilter", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionCenterUV = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV = { "bOverride_BloomConvolutionCenterUV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize = { "bOverride_BloomConvolutionSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture = { "bOverride_BloomConvolutionTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomSizeScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale = { "bOverride_BloomSizeScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom6Size = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size = { "bOverride_Bloom6Size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom6Tint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint = { "bOverride_Bloom6Tint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom5Size = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size = { "bOverride_Bloom5Size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom5Tint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint = { "bOverride_Bloom5Tint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom4Size = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size = { "bOverride_Bloom4Size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom4Tint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint = { "bOverride_Bloom4Tint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom3Size = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size = { "bOverride_Bloom3Size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom3Tint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint = { "bOverride_Bloom3Tint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom2Tint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint = { "bOverride_Bloom2Tint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom2Size = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size = { "bOverride_Bloom2Size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom1Size = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size = { "bOverride_Bloom1Size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom1Tint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint = { "bOverride_Bloom1Tint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomThreshold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold = { "bOverride_BloomThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity = { "bOverride_BloomIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomMethod = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod = { "bOverride_BloomMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientCubemapIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity = { "bOverride_AmbientCubemapIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientCubemapTint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint = { "bOverride_AmbientCubemapTint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ChromaticAberrationStartOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset = { "bOverride_ChromaticAberrationStartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_SceneFringeIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity = { "bOverride_SceneFringeIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_SceneColorTint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint = { "bOverride_SceneColorTint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmWhiteClip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip = { "bOverride_FilmWhiteClip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmBlackClip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip = { "bOverride_FilmBlackClip", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmShoulder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder = { "bOverride_FilmShoulder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmToe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe = { "bOverride_FilmToe", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmSlope = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope = { "bOverride_FilmSlope", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintAmount_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintAmount_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmShadowTintAmount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintAmount = { "bOverride_FilmShadowTintAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintAmount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintBlend_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintBlend_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmShadowTintBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintBlend = { "bOverride_FilmShadowTintBlend", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintBlend_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintBlend_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmShadowTint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTint = { "bOverride_FilmShadowTint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToeAmount_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToeAmount_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmToeAmount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToeAmount = { "bOverride_FilmToeAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToeAmount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToeAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToeAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmHealAmount_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmHealAmount_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmHealAmount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmHealAmount = { "bOverride_FilmHealAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmHealAmount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmHealAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmHealAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmDynamicRange_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmDynamicRange_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmDynamicRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmDynamicRange = { "bOverride_FilmDynamicRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmDynamicRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmDynamicRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmDynamicRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmContrast_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmContrast_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmContrast = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmContrast = { "bOverride_FilmContrast", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmContrast_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmContrast_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmContrast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerBlue_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerBlue_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmChannelMixerBlue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerBlue = { "bOverride_FilmChannelMixerBlue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerBlue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerBlue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerBlue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerGreen_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerGreen_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmChannelMixerGreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerGreen = { "bOverride_FilmChannelMixerGreen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerGreen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerGreen_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerGreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerRed_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerRed_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmChannelMixerRed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerRed = { "bOverride_FilmChannelMixerRed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerRed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerRed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerRed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSaturation_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSaturation_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmSaturation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSaturation = { "bOverride_FilmSaturation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSaturation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSaturation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSaturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhitePoint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhitePoint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmWhitePoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhitePoint = { "bOverride_FilmWhitePoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhitePoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhitePoint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhitePoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ExpandGamut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut = { "bOverride_ExpandGamut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BlueCorrection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection = { "bOverride_BlueCorrection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorCorrectionHighlightsMin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin = { "bOverride_ColorCorrectionHighlightsMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorCorrectionShadowsMax = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax = { "bOverride_ColorCorrectionShadowsMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorOffsetHighlights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights = { "bOverride_ColorOffsetHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGainHighlights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights = { "bOverride_ColorGainHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGammaHighlights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights = { "bOverride_ColorGammaHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorContrastHighlights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights = { "bOverride_ColorContrastHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorSaturationHighlights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights = { "bOverride_ColorSaturationHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorOffsetMidtones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones = { "bOverride_ColorOffsetMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGainMidtones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones = { "bOverride_ColorGainMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGammaMidtones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones = { "bOverride_ColorGammaMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorContrastMidtones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones = { "bOverride_ColorContrastMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorSaturationMidtones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones = { "bOverride_ColorSaturationMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorOffsetShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows = { "bOverride_ColorOffsetShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGainShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows = { "bOverride_ColorGainShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGammaShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows = { "bOverride_ColorGammaShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorContrastShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows = { "bOverride_ColorContrastShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorSaturationShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows = { "bOverride_ColorSaturationShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset = { "bOverride_ColorOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain = { "bOverride_ColorGain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGamma = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma = { "bOverride_ColorGamma", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorContrast = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast = { "bOverride_ColorContrast", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Color Correction controls" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorSaturation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation = { "bOverride_ColorSaturation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_WhiteTint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint = { "bOverride_WhiteTint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "first all bOverride_... as they get grouped together into bitfields" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_WhiteTemp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp = { "bOverride_WhiteTemp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPostProcessSettings_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WeightedBlendables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionFadeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVFadeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingSamplesPerPixel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_PathTracingMaxBounces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyShadows_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencySamplesPerPixel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyRefractionRays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingTranslucencyMaxRoughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_TranslucencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_TranslucencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsShadows_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsSamplesPerPixel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsMaxBounces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingReflectionsMaxRoughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionMaxRoughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ReflectionsType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ReflectionsType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVEmissiveInjectionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVGeometryVolumeBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryBounceIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryOcclusionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVVplInjectionBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurPerObjectSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldVignetteSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSkyFocusDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSizeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldColorThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBokehShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarBlurSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearBlurSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMaxBokehSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarTransitionRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearTransitionRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSensorWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingLUT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGISamplesPerPixel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGIMaxBounces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingGI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_RayTracingAOSamplesPerPixel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionStaticFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainJitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_VignetteIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureCalibrationConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMaxBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMinBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureHighPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureLowPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBiasCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBladeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMinFstop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFstop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraISO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraShutterSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionBufferScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMin,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilter,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionCenterUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomSizeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ChromaticAberrationStartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneFringeIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneColorTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmDynamicRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmHealAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToeAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmContrast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerBlue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerGreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerRed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTintAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTintBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhitePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhiteClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmBlackClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShoulder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ExpandGamut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BlueCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionShadowsMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionHighlightsMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTemp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingSamplesPerPixel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_PathTracingMaxBounces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGISamplesPerPixel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGIMaxBounces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingGI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencySamplesPerPixel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefractionRays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingTranslucencyMaxRoughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_TranslucencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsSamplesPerPixel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxBounces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingReflectionsMaxRoughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ReflectionsType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSizeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldColorThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBokehShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMaxBokehSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_RayTracingAOSamplesPerPixel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBiasCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToeAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmHealAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmDynamicRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmContrast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerBlue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerGreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerRed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhitePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PostProcessSettings",
		sizeof(FPostProcessSettings),
		alignof(FPostProcessSettings),
		Z_Construct_UScriptStruct_FPostProcessSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPostProcessSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PostProcessSettings"), sizeof(FPostProcessSettings), Get_Z_Construct_UScriptStruct_FPostProcessSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPostProcessSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPostProcessSettings_Hash() { return 760870548U; }
class UScriptStruct* FWeightedBlendables::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FWeightedBlendables_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeightedBlendables, Z_Construct_UPackage__Script_Engine(), TEXT("WeightedBlendables"), sizeof(FWeightedBlendables), Get_Z_Construct_UScriptStruct_FWeightedBlendables_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWeightedBlendables>()
{
	return FWeightedBlendables::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeightedBlendables(FWeightedBlendables::StaticStruct, TEXT("/Script/Engine"), TEXT("WeightedBlendables"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFWeightedBlendables
{
	FScriptStruct_Engine_StaticRegisterNativesFWeightedBlendables()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeightedBlendables")),new UScriptStruct::TCppStructOps<FWeightedBlendables>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFWeightedBlendables;
	struct Z_Construct_UScriptStruct_FWeightedBlendables_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedBlendables_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "for easier detail customization, needed?" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeightedBlendables>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array_MetaData[] = {
		{ "Category", "PostProcessSettings" },
		{ "Keywords", "PostProcess" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeightedBlendables, Array), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWeightedBlendable, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeightedBlendables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeightedBlendables_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"WeightedBlendables",
		sizeof(FWeightedBlendables),
		alignof(FWeightedBlendables),
		Z_Construct_UScriptStruct_FWeightedBlendables_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendables_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedBlendables_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendables_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeightedBlendables()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeightedBlendables_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeightedBlendables"), sizeof(FWeightedBlendables), Get_Z_Construct_UScriptStruct_FWeightedBlendables_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeightedBlendables_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeightedBlendables_Hash() { return 2408588171U; }
class UScriptStruct* FWeightedBlendable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FWeightedBlendable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeightedBlendable, Z_Construct_UPackage__Script_Engine(), TEXT("WeightedBlendable"), sizeof(FWeightedBlendable), Get_Z_Construct_UScriptStruct_FWeightedBlendable_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWeightedBlendable>()
{
	return FWeightedBlendable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeightedBlendable(FWeightedBlendable::StaticStruct, TEXT("/Script/Engine"), TEXT("WeightedBlendable"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFWeightedBlendable
{
	FScriptStruct_Engine_StaticRegisterNativesFWeightedBlendable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeightedBlendable")),new UScriptStruct::TCppStructOps<FWeightedBlendable>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFWeightedBlendable;
	struct Z_Construct_UScriptStruct_FWeightedBlendable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedBlendable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeightedBlendable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Object_MetaData[] = {
		{ "AllowedClasses", "BlendableInterface" },
		{ "Category", "FWeightedBlendable" },
		{ "Keywords", "PostProcess" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "should be of the IBlendableInterface* type but UProperties cannot express that" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeightedBlendable, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Object_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "FWeightedBlendable" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Delta", "0.01" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0:no effect .. 1:full effect" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWeightedBlendable, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Weight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Weight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeightedBlendable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Weight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeightedBlendable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"WeightedBlendable",
		sizeof(FWeightedBlendable),
		alignof(FWeightedBlendable),
		Z_Construct_UScriptStruct_FWeightedBlendable_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeightedBlendable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeightedBlendable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeightedBlendable"), sizeof(FWeightedBlendable), Get_Z_Construct_UScriptStruct_FWeightedBlendable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeightedBlendable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeightedBlendable_Hash() { return 613546785U; }
class UScriptStruct* FCameraExposureSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCameraExposureSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraExposureSettings, Z_Construct_UPackage__Script_Engine(), TEXT("CameraExposureSettings"), sizeof(FCameraExposureSettings), Get_Z_Construct_UScriptStruct_FCameraExposureSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraExposureSettings>()
{
	return FCameraExposureSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraExposureSettings(FCameraExposureSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("CameraExposureSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCameraExposureSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFCameraExposureSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraExposureSettings")),new UScriptStruct::TCppStructOps<FCameraExposureSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCameraExposureSettings;
	struct Z_Construct_UScriptStruct_FCameraExposureSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalibrationConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CalibrationConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HistogramLogMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HistogramLogMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HistogramLogMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HistogramLogMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BiasCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BiasCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Method;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraExposureSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_CalibrationConstant_MetaData[] = {
		{ "Category", "Exposure" },
		{ "DisplayName", "Calibration Constant" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Calibration constant for 18% albedo." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_CalibrationConstant = { "CalibrationConstant", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraExposureSettings, CalibrationConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_CalibrationConstant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_CalibrationConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMax_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "temporary exposed until we found good values 4: 16, 8: 256" },
		{ "UIMax", "16.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMax = { "HistogramLogMax", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraExposureSettings, HistogramLogMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMin_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "temporary exposed until we found good values, -8: 1/256, -10: 1/1024" },
		{ "UIMax", "0.0" },
		{ "UIMin", "-16" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMin = { "HistogramLogMin", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraExposureSettings, HistogramLogMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_BiasCurve_MetaData[] = {
		{ "Category", "Exposure" },
		{ "DisplayName", "Exposure Bias Curve" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Exposure compensation based on the scene EV100.\nUsed to calibrate the final exposure differently depending on the average scene luminance.\n0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ..." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_BiasCurve = { "BiasCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraExposureSettings, BiasCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_BiasCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_BiasCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Bias_MetaData[] = {
		{ "Category", "Exposure" },
		{ "DisplayName", "Exposure Bias" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Logarithmic adjustment for the exposure. Only used if a tonemapper is specified.\n0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ..." },
		{ "UIMax", "8.0" },
		{ "UIMin", "-8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraExposureSettings, Bias), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Bias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Bias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedDown_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ClampMin", "0.02" },
		{ "DisplayName", "Speed Down" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0" },
		{ "UIMax", "20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedDown = { "SpeedDown", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraExposureSettings, SpeedDown), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedDown_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedUp_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ClampMin", "0.02" },
		{ "DisplayName", "Speed Up" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0" },
		{ "UIMax", "20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedUp = { "SpeedUp", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraExposureSettings, SpeedUp), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedUp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MaxBrightness_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Max Brightness" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "A good value should be positive (2 is a good value). This is the maximum brightness the auto exposure can adapt to.\nIt should be tweaked in a bright lighting situation (too small: image appears too bright, too large: image appears too dark).\nNote: Tweaking emissive materials and lights or tweaking auto exposure can look the same. Tweaking auto exposure has global\neffect and defined the HDR range - you don't want to change that late in the project development.\nEye Adaptation is disabled if MinBrightness = MaxBrightness" },
		{ "UIMax", "10.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MaxBrightness = { "MaxBrightness", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraExposureSettings, MaxBrightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MaxBrightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MaxBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MinBrightness_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Min Brightness" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "A good value should be positive near 0. This is the minimum brightness the auto exposure can adapt to.\nIt should be tweaked in a dark lighting situation (too small: image appears too bright, too large: image appears too dark).\nNote: Tweaking emissive materials and lights or tweaking auto exposure can look the same. Tweaking auto exposure has global\neffect and defined the HDR range - you don't want to change that late in the project development.\nEye Adaptation is disabled if MinBrightness = MaxBrightness" },
		{ "UIMax", "10.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MinBrightness = { "MinBrightness", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraExposureSettings, MinBrightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MinBrightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MinBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HighPercent_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "High Percent" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.\nThe value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority\nbut can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of\nbright spots.\n>0, <100, good values are in the range 80 .. 95" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HighPercent = { "HighPercent", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraExposureSettings, HighPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HighPercent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HighPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_LowPercent_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Low Percent" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.\nThe value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority\nbut can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of\nbright spots.\n>0, <100, good values are in the range 70 .. 80" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_LowPercent = { "LowPercent", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraExposureSettings, LowPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_LowPercent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_LowPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Exposure" },
		{ "DisplayName", "Method" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Luminance computation method" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraExposureSettings, Method), Z_Construct_UEnum_Engine_EAutoExposureMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Method_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Method_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_CalibrationConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_BiasCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Bias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MaxBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MinBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HighPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_LowPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Method,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraExposureSettings",
		sizeof(FCameraExposureSettings),
		alignof(FCameraExposureSettings),
		Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraExposureSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraExposureSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraExposureSettings"), sizeof(FCameraExposureSettings), Get_Z_Construct_UScriptStruct_FCameraExposureSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraExposureSettings_Hash() { return 4075663985U; }
class UScriptStruct* FLensSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLensSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensSettings, Z_Construct_UPackage__Script_Engine(), TEXT("LensSettings"), sizeof(FLensSettings), Get_Z_Construct_UScriptStruct_FLensSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLensSettings>()
{
	return FLensSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLensSettings(FLensSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("LensSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLensSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFLensSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LensSettings")),new UScriptStruct::TCppStructOps<FLensSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLensSettings;
	struct Z_Construct_UScriptStruct_FLensSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChromaticAberration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChromaticAberration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Imperfections_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Imperfections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bloom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_ChromaticAberration_MetaData[] = {
		{ "Category", "Lens" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "in percent, Scene chromatic aberration / color fringe (camera imperfection) to simulate an artifact that happens in real-world lens, mostly visible in the image corners." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_ChromaticAberration = { "ChromaticAberration", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLensSettings, ChromaticAberration), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_ChromaticAberration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_ChromaticAberration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Imperfections_MetaData[] = {
		{ "Category", "Lens" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Imperfections = { "Imperfections", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLensSettings, Imperfections), Z_Construct_UScriptStruct_FLensImperfectionSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Imperfections_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Imperfections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Bloom_MetaData[] = {
		{ "Category", "Lens" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Bloom = { "Bloom", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLensSettings, Bloom), Z_Construct_UScriptStruct_FLensBloomSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Bloom_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Bloom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_ChromaticAberration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Imperfections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Bloom,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LensSettings",
		sizeof(FLensSettings),
		alignof(FLensSettings),
		Z_Construct_UScriptStruct_FLensSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLensSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLensSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LensSettings"), sizeof(FLensSettings), Get_Z_Construct_UScriptStruct_FLensSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLensSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLensSettings_Hash() { return 2098501137U; }
class UScriptStruct* FLensImperfectionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLensImperfectionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensImperfectionSettings, Z_Construct_UPackage__Script_Engine(), TEXT("LensImperfectionSettings"), sizeof(FLensImperfectionSettings), Get_Z_Construct_UScriptStruct_FLensImperfectionSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLensImperfectionSettings>()
{
	return FLensImperfectionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLensImperfectionSettings(FLensImperfectionSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("LensImperfectionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLensImperfectionSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFLensImperfectionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LensImperfectionSettings")),new UScriptStruct::TCppStructOps<FLensImperfectionSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLensImperfectionSettings;
	struct Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirtMaskTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirtMaskTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirtMaskIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirtMaskIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirtMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DirtMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensImperfectionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskTint_MetaData[] = {
		{ "Category", "Lens|Dirt Mask" },
		{ "DisplayName", "Dirt Mask Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "BloomDirtMask tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskTint = { "DirtMaskTint", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLensImperfectionSettings, DirtMaskTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskIntensity_MetaData[] = {
		{ "Category", "Lens|Dirt Mask" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Dirt Mask Intensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "BloomDirtMask intensity" },
		{ "UIMax", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskIntensity = { "DirtMaskIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLensImperfectionSettings, DirtMaskIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMask_MetaData[] = {
		{ "Category", "Lens|Dirt Mask" },
		{ "DisplayName", "Dirt Mask Texture" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Texture that defines the dirt on the camera lens where the light of very bright objects is scattered." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMask = { "DirtMask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLensImperfectionSettings, DirtMask), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMask_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMask,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LensImperfectionSettings",
		sizeof(FLensImperfectionSettings),
		alignof(FLensImperfectionSettings),
		Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensImperfectionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLensImperfectionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LensImperfectionSettings"), sizeof(FLensImperfectionSettings), Get_Z_Construct_UScriptStruct_FLensImperfectionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLensImperfectionSettings_Hash() { return 1471124358U; }
class UScriptStruct* FLensBloomSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLensBloomSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensBloomSettings, Z_Construct_UPackage__Script_Engine(), TEXT("LensBloomSettings"), sizeof(FLensBloomSettings), Get_Z_Construct_UScriptStruct_FLensBloomSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLensBloomSettings>()
{
	return FLensBloomSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLensBloomSettings(FLensBloomSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("LensBloomSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLensBloomSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFLensBloomSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LensBloomSettings")),new UScriptStruct::TCppStructOps<FLensBloomSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLensBloomSettings;
	struct Z_Construct_UScriptStruct_FLensBloomSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Method;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Convolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Convolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GaussianSum_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GaussianSum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensBloomSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensBloomSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom algorithm" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLensBloomSettings, Method), Z_Construct_UEnum_Engine_EBloomMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Method_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Method_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Convolution_MetaData[] = {
		{ "Category", "Convolution Method" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom convolution method specific settings." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Convolution = { "Convolution", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLensBloomSettings, Convolution), Z_Construct_UScriptStruct_FConvolutionBloomSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Convolution_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Convolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_GaussianSum_MetaData[] = {
		{ "Category", "Gaussian Sum Method" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom gaussian sum method specific settings." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_GaussianSum = { "GaussianSum", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLensBloomSettings, GaussianSum), Z_Construct_UScriptStruct_FGaussianSumBloomSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_GaussianSum_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_GaussianSum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensBloomSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Method,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Convolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_GaussianSum,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensBloomSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LensBloomSettings",
		sizeof(FLensBloomSettings),
		alignof(FLensBloomSettings),
		Z_Construct_UScriptStruct_FLensBloomSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensBloomSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLensBloomSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LensBloomSettings"), sizeof(FLensBloomSettings), Get_Z_Construct_UScriptStruct_FLensBloomSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLensBloomSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLensBloomSettings_Hash() { return 338459387U; }
class UScriptStruct* FConvolutionBloomSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FConvolutionBloomSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConvolutionBloomSettings, Z_Construct_UPackage__Script_Engine(), TEXT("ConvolutionBloomSettings"), sizeof(FConvolutionBloomSettings), Get_Z_Construct_UScriptStruct_FConvolutionBloomSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FConvolutionBloomSettings>()
{
	return FConvolutionBloomSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConvolutionBloomSettings(FConvolutionBloomSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("ConvolutionBloomSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFConvolutionBloomSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFConvolutionBloomSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConvolutionBloomSettings")),new UScriptStruct::TCppStructOps<FConvolutionBloomSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFConvolutionBloomSettings;
	struct Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BufferScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BufferScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreFilterMult_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreFilterMult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreFilterMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreFilterMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreFilterMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreFilterMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterUV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CenterUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConvolutionBloomSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_BufferScale_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Convolution Buffer" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Implicit buffer region as a fraction of the screen size to insure the bloom does not wrap across the screen.  Larger sizes have perf impact." },
		{ "UIMax", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_BufferScale = { "BufferScale", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConvolutionBloomSettings, BufferScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_BufferScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_BufferScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMult_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Convolution Boost Mult" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMult = { "PreFilterMult", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConvolutionBloomSettings, PreFilterMult), METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMult_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMax_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Convolution Boost Max" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMax = { "PreFilterMax", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConvolutionBloomSettings, PreFilterMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMin_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Convolution Boost Min" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMin = { "PreFilterMin", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConvolutionBloomSettings, PreFilterMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_CenterUV_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Convolution Center" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The UV location of the center of the kernel.  Should be very close to (.5,.5)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_CenterUV = { "CenterUV", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConvolutionBloomSettings, CenterUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_CenterUV_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_CenterUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Convolution Scale" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Relative size of the convolution kernel image compared to the minor axis of the viewport" },
		{ "UIMax", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConvolutionBloomSettings, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Convolution Kernel" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Texture to replace default convolution bloom kernel" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConvolutionBloomSettings, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_BufferScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_CenterUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Texture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ConvolutionBloomSettings",
		sizeof(FConvolutionBloomSettings),
		alignof(FConvolutionBloomSettings),
		Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConvolutionBloomSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConvolutionBloomSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConvolutionBloomSettings"), sizeof(FConvolutionBloomSettings), Get_Z_Construct_UScriptStruct_FConvolutionBloomSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConvolutionBloomSettings_Hash() { return 1219743264U; }
class UScriptStruct* FGaussianSumBloomSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaussianSumBloomSettings, Z_Construct_UPackage__Script_Engine(), TEXT("GaussianSumBloomSettings"), sizeof(FGaussianSumBloomSettings), Get_Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGaussianSumBloomSettings>()
{
	return FGaussianSumBloomSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGaussianSumBloomSettings(FGaussianSumBloomSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("GaussianSumBloomSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFGaussianSumBloomSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFGaussianSumBloomSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GaussianSumBloomSettings")),new UScriptStruct::TCppStructOps<FGaussianSumBloomSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFGaussianSumBloomSettings;
	struct Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter6Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter6Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter5Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter5Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter4Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter4Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter3Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter3Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter2Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter2Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter1Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter1Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter6Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Filter6Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter5Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Filter5Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter4Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Filter4Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter3Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Filter3Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter2Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Filter2Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter1Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Filter1Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SizeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Threshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaussianSumBloomSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#6 Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom6 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Tint = { "Filter6Tint", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter6Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#5 Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom5 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Tint = { "Filter5Tint", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter5Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#4 Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom4 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Tint = { "Filter4Tint", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter4Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#3 Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom3 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Tint = { "Filter3Tint", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter3Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#2 Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom2 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Tint = { "Filter2Tint", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter2Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#1 Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom1 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Tint = { "Filter1Tint", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter1Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#6 Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom6 in percent of the screen width\n(is done in 1/64 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "128.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Size = { "Filter6Size", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter6Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#5 Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom5 in percent of the screen width\n(is done in 1/32 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "64.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Size = { "Filter5Size", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter5Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#4 Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom4 in percent of the screen width\n(is done in 1/16 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "32.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Size = { "Filter4Size", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter4Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#3 Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom3 in percent of the screen width\n(is done in 1/8 resolution, larger values cost more performance)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "16.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Size = { "Filter3Size", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter3Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#2 Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom2 in percent of the screen width\n(is done in 1/4 resolution, larger values cost more performance)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Size = { "Filter2Size", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter2Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#1 Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for the Bloom1 in percent of the screen width\n(is done in 1/2 resolution, larger values cost more performance, good for high frequency details)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "4.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Size = { "Filter1Size", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter1Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_SizeScale_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Size scale" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Scale for all bloom sizes" },
		{ "UIMax", "64.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_SizeScale = { "SizeScale", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaussianSumBloomSettings, SizeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_SizeScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_SizeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "-1.0" },
		{ "DisplayName", "Threshold" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "minimum brightness the bloom starts having effect\n-1:all pixels affect bloom equally (physically correct, faster as a threshold pass is omitted), 0:all pixels affect bloom brights more, 1(default), >1 brighter" },
		{ "UIMax", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaussianSumBloomSettings, Threshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Threshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Threshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Intensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Multiplier for all bloom contributions >=0: off, 1(default), >1 brighter" },
		{ "UIMax", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaussianSumBloomSettings, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Intensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Intensity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_SizeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Threshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Intensity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"GaussianSumBloomSettings",
		sizeof(FGaussianSumBloomSettings),
		alignof(FGaussianSumBloomSettings),
		Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGaussianSumBloomSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GaussianSumBloomSettings"), sizeof(FGaussianSumBloomSettings), Get_Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Hash() { return 1707588317U; }
class UScriptStruct* FFilmStockSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFilmStockSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFilmStockSettings, Z_Construct_UPackage__Script_Engine(), TEXT("FilmStockSettings"), sizeof(FFilmStockSettings), Get_Z_Construct_UScriptStruct_FFilmStockSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFilmStockSettings>()
{
	return FFilmStockSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFilmStockSettings(FFilmStockSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("FilmStockSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFilmStockSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFFilmStockSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FilmStockSettings")),new UScriptStruct::TCppStructOps<FFilmStockSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFilmStockSettings;
	struct Z_Construct_UScriptStruct_FFilmStockSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhiteClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WhiteClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlackClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shoulder_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Shoulder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Toe_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Toe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Slope;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmStockSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFilmStockSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_WhiteClip_MetaData[] = {
		{ "Category", "Film Stock" },
		{ "DisplayName", "White clip" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_WhiteClip = { "WhiteClip", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFilmStockSettings, WhiteClip), METADATA_PARAMS(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_WhiteClip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_WhiteClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_BlackClip_MetaData[] = {
		{ "Category", "Film Stock" },
		{ "DisplayName", "Black clip" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_BlackClip = { "BlackClip", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFilmStockSettings, BlackClip), METADATA_PARAMS(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_BlackClip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_BlackClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Shoulder_MetaData[] = {
		{ "Category", "Film Stock" },
		{ "DisplayName", "Shoulder" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Shoulder = { "Shoulder", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFilmStockSettings, Shoulder), METADATA_PARAMS(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Shoulder_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Shoulder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Toe_MetaData[] = {
		{ "Category", "Film Stock" },
		{ "DisplayName", "Toe" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Toe = { "Toe", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFilmStockSettings, Toe), METADATA_PARAMS(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Toe_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Toe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Slope_MetaData[] = {
		{ "Category", "Film Stock" },
		{ "DisplayName", "Slope" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Slope = { "Slope", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFilmStockSettings, Slope), METADATA_PARAMS(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Slope_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Slope_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFilmStockSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_WhiteClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_BlackClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Shoulder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Toe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Slope,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFilmStockSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FilmStockSettings",
		sizeof(FFilmStockSettings),
		alignof(FFilmStockSettings),
		Z_Construct_UScriptStruct_FFilmStockSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFilmStockSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFilmStockSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FilmStockSettings"), sizeof(FFilmStockSettings), Get_Z_Construct_UScriptStruct_FFilmStockSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFilmStockSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFilmStockSettings_Hash() { return 940368355U; }
class UScriptStruct* FColorGradingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FColorGradingSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorGradingSettings, Z_Construct_UPackage__Script_Engine(), TEXT("ColorGradingSettings"), sizeof(FColorGradingSettings), Get_Z_Construct_UScriptStruct_FColorGradingSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FColorGradingSettings>()
{
	return FColorGradingSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FColorGradingSettings(FColorGradingSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("ColorGradingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFColorGradingSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFColorGradingSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ColorGradingSettings")),new UScriptStruct::TCppStructOps<FColorGradingSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFColorGradingSettings;
	struct Z_Construct_UScriptStruct_FColorGradingSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighlightsMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighlightsMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowsMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadowsMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Highlights_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Highlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Midtones_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Midtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Global_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Global;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorGradingSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_HighlightsMin_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "DisplayName", "HighlightsMin" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_HighlightsMin = { "HighlightsMin", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingSettings, HighlightsMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_HighlightsMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_HighlightsMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_ShadowsMax_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "DisplayName", "ShadowsMax" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_ShadowsMax = { "ShadowsMax", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingSettings, ShadowsMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_ShadowsMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_ShadowsMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Highlights_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Highlights = { "Highlights", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingSettings, Highlights), Z_Construct_UScriptStruct_FColorGradePerRangeSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Highlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Highlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Midtones_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Midtones = { "Midtones", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingSettings, Midtones), Z_Construct_UScriptStruct_FColorGradePerRangeSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Midtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Midtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Shadows_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Shadows = { "Shadows", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingSettings, Shadows), Z_Construct_UScriptStruct_FColorGradePerRangeSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Shadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Shadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Global_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Global = { "Global", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradingSettings, Global), Z_Construct_UScriptStruct_FColorGradePerRangeSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Global_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Global_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorGradingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_HighlightsMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_ShadowsMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Highlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Midtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Shadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Global,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ColorGradingSettings",
		sizeof(FColorGradingSettings),
		alignof(FColorGradingSettings),
		Z_Construct_UScriptStruct_FColorGradingSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColorGradingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FColorGradingSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColorGradingSettings"), sizeof(FColorGradingSettings), Get_Z_Construct_UScriptStruct_FColorGradingSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FColorGradingSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColorGradingSettings_Hash() { return 3829444774U; }
class UScriptStruct* FColorGradePerRangeSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorGradePerRangeSettings, Z_Construct_UPackage__Script_Engine(), TEXT("ColorGradePerRangeSettings"), sizeof(FColorGradePerRangeSettings), Get_Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FColorGradePerRangeSettings>()
{
	return FColorGradePerRangeSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FColorGradePerRangeSettings(FColorGradePerRangeSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("ColorGradePerRangeSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFColorGradePerRangeSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFColorGradePerRangeSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ColorGradePerRangeSettings")),new UScriptStruct::TCppStructOps<FColorGradePerRangeSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFColorGradePerRangeSettings;
	struct Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gamma_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gamma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Contrast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Saturation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Saturation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorGradePerRangeSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "offset" },
		{ "Delta", "0.001" },
		{ "DisplayName", "Offset" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "20" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "SupportDynamicSliderMinValue", "true" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradePerRangeSettings, Offset), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Offset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "gain" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gain" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradePerRangeSettings, Gain), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gain_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gamma_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "gamma" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gamma" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gamma = { "Gamma", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradePerRangeSettings, Gamma), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gamma_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gamma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Contrast_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "contrast" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Contrast" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradePerRangeSettings, Contrast), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Contrast_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Contrast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Saturation_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "saturation" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Saturation" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Saturation = { "Saturation", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorGradePerRangeSettings, Saturation), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Saturation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Saturation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Contrast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Saturation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ColorGradePerRangeSettings",
		sizeof(FColorGradePerRangeSettings),
		alignof(FColorGradePerRangeSettings),
		Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColorGradePerRangeSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColorGradePerRangeSettings"), sizeof(FColorGradePerRangeSettings), Get_Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Hash() { return 2703155543U; }
	void UScene::StaticRegisterNativesUScene()
	{
	}
	UClass* Z_Construct_UClass_UScene_NoRegister()
	{
		return UScene::StaticClass();
	}
	struct Z_Construct_UClass_UScene_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScene_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScene_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/Scene.h" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScene_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScene>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScene_Statics::ClassParams = {
		&UScene::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UScene_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UScene_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScene()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScene_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScene, 459544329);
	template<> ENGINE_API UClass* StaticClass<UScene>()
	{
		return UScene::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScene(Z_Construct_UClass_UScene, &UScene::StaticClass, TEXT("/Script/Engine"), TEXT("UScene"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScene);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
