// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTesting/Public/AutomationScreenshotOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationScreenshotOptions() {}
// Cross Module References
	FUNCTIONALTESTING_API UEnum* Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotOptions();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FComparisonToleranceAmount();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationViewSettings_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	static UEnum* EComparisonTolerance_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance, Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("EComparisonTolerance"));
		}
		return Singleton;
	}
	template<> FUNCTIONALTESTING_API UEnum* StaticEnum<EComparisonTolerance>()
	{
		return EComparisonTolerance_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EComparisonTolerance(EComparisonTolerance_StaticEnum, TEXT("/Script/FunctionalTesting"), TEXT("EComparisonTolerance"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance_Hash() { return 139941130U; }
	UEnum* Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FunctionalTesting();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EComparisonTolerance"), 0, Get_Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EComparisonTolerance::Zero", (int64)EComparisonTolerance::Zero },
				{ "EComparisonTolerance::Low", (int64)EComparisonTolerance::Low },
				{ "EComparisonTolerance::Medium", (int64)EComparisonTolerance::Medium },
				{ "EComparisonTolerance::High", (int64)EComparisonTolerance::High },
				{ "EComparisonTolerance::Custom", (int64)EComparisonTolerance::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FunctionalTesting,
				nullptr,
				"EComparisonTolerance",
				"EComparisonTolerance",
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
class UScriptStruct* FAutomationScreenshotOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUNCTIONALTESTING_API uint32 Get_Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationScreenshotOptions, Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("AutomationScreenshotOptions"), sizeof(FAutomationScreenshotOptions), Get_Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Hash());
	}
	return Singleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FAutomationScreenshotOptions>()
{
	return FAutomationScreenshotOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutomationScreenshotOptions(FAutomationScreenshotOptions::StaticStruct, TEXT("/Script/FunctionalTesting"), TEXT("AutomationScreenshotOptions"), false, nullptr, nullptr);
static struct FScriptStruct_FunctionalTesting_StaticRegisterNativesFAutomationScreenshotOptions
{
	FScriptStruct_FunctionalTesting_StaticRegisterNativesFAutomationScreenshotOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutomationScreenshotOptions")),new UScriptStruct::TCppStructOps<FAutomationScreenshotOptions>);
	}
} ScriptStruct_FunctionalTesting_StaticRegisterNativesFAutomationScreenshotOptions;
	struct Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreColors_MetaData[];
#endif
		static void NewProp_bIgnoreColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAntiAliasing_MetaData[];
#endif
		static void NewProp_bIgnoreAntiAliasing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAntiAliasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumGlobalError_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumGlobalError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumLocalError_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumLocalError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToleranceAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToleranceAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Tolerance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Tolerance_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualizeBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VisualizeBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ViewSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableTonemapping_MetaData[];
#endif
		static void NewProp_bDisableTonemapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableTonemapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableNoisyRenderingFeatures_MetaData[];
#endif
		static void NewProp_bDisableNoisyRenderingFeatures_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableNoisyRenderingFeatures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideTimeTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverrideTimeTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_OverrideTimeTo_MetaData[];
#endif
		static void NewProp_bOverride_OverrideTimeTo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_OverrideTimeTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Resolution;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationScreenshotOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreColors_MetaData[] = {
		{ "Category", "Comparison" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "If this is true, all we compare is luminance of the scene." },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreColors_SetBit(void* Obj)
	{
		((FAutomationScreenshotOptions*)Obj)->bIgnoreColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreColors = { "bIgnoreColors", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAutomationScreenshotOptions), &Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreColors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreColors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreAntiAliasing_MetaData[] = {
		{ "Category", "Comparison" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "If this is true, we search neighboring pixels looking for the expected pixel as what may have happened, is\nthat the pixel shifted a little." },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreAntiAliasing_SetBit(void* Obj)
	{
		((FAutomationScreenshotOptions*)Obj)->bIgnoreAntiAliasing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreAntiAliasing = { "bIgnoreAntiAliasing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAutomationScreenshotOptions), &Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreAntiAliasing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreAntiAliasing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreAntiAliasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_MaximumGlobalError_MetaData[] = {
		{ "Category", "Comparison" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "After you've accounted for color tolerance changes, you now need to control for total acceptable error.\nWhich depending on how pixels were colored on triangle edges may be a few percent of the image being\noutside the tolerance levels." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_MaximumGlobalError = { "MaximumGlobalError", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomationScreenshotOptions, MaximumGlobalError), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_MaximumGlobalError_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_MaximumGlobalError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_MaximumLocalError_MetaData[] = {
		{ "Category", "Comparison" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "After you've accounted for color tolerance changes, you now need to control for local acceptable error.\nWhich depending on how pixels were colored on triangle edges may be a few percent of the image being\noutside the tolerance levels.  Unlike the MaximumGlobalError, the MaximumLocalError works by focusing\non a smaller subset of the image.  These chunks will have be compared to the local error, in an attempt\nto locate hot spots of change that are important, that would be ignored by the global error." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_MaximumLocalError = { "MaximumLocalError", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomationScreenshotOptions, MaximumLocalError), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_MaximumLocalError_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_MaximumLocalError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_ToleranceAmount_MetaData[] = {
		{ "Category", "Comparison" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "For each channel and brightness levels you can control a region where the colors are found to be\nessentially the same.  Generally this is necessary as modern rendering techniques tend to introduce\nnoise constantly to hide aliasing." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_ToleranceAmount = { "ToleranceAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomationScreenshotOptions, ToleranceAmount), Z_Construct_UScriptStruct_FComparisonToleranceAmount, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_ToleranceAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_ToleranceAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "Comparison" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "These are quick defaults for tolerance levels, we default to low, because generally there's some\nconstant variability in every pixel's color introduced by TxAA." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomationScreenshotOptions, Tolerance), Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Tolerance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Tolerance_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Tolerance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_VisualizeBuffer_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "Allows you to screenshot a buffer other than the default final lit scene image.  Useful if you're\ntrying to build a test for a specific GBuffer, that may be harder to tell if errors are introduced\nin it." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_VisualizeBuffer = { "VisualizeBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomationScreenshotOptions, VisualizeBuffer), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_VisualizeBuffer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_VisualizeBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_ViewSettings_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "Assign custom view settings to control which rendering options we allow on while taking the\nscreenshot." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_ViewSettings = { "ViewSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomationScreenshotOptions, ViewSettings), Z_Construct_UClass_UAutomationViewSettings_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_ViewSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_ViewSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableTonemapping_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "DisplayName", "Fixed Exposure" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "Disables Eye Adaptation and sets Tonemapper to fixed gamma curve. Should generally be on unless\ntesting tone mapping or other post-processing results" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableTonemapping_SetBit(void* Obj)
	{
		((FAutomationScreenshotOptions*)Obj)->bDisableTonemapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableTonemapping = { "bDisableTonemapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAutomationScreenshotOptions), &Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableTonemapping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableTonemapping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableTonemapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableNoisyRenderingFeatures_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "Disables Anti-Aliasing, Motion Blur, Screen Space Reflections, Eye Adaptation, Tonemapper and Contact\nShadows, because those features contribute a lot to the noise in the final rendered image.  If you're\nexplicitly looking for changes" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableNoisyRenderingFeatures_SetBit(void* Obj)
	{
		((FAutomationScreenshotOptions*)Obj)->bDisableNoisyRenderingFeatures = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableNoisyRenderingFeatures = { "bDisableNoisyRenderingFeatures", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAutomationScreenshotOptions), &Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableNoisyRenderingFeatures_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableNoisyRenderingFeatures_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableNoisyRenderingFeatures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_OverrideTimeTo_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "editcondition", "bOverride_OverrideTimeTo" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "Overrides World Time, Real Time to the value provided.  Sets Delta Time to 0.  Only\naffects the time being sent to the render thread and materials.  The time accumulating\non the game thread is unaffected." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_OverrideTimeTo = { "OverrideTimeTo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomationScreenshotOptions, OverrideTimeTo), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_OverrideTimeTo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_OverrideTimeTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bOverride_OverrideTimeTo_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bOverride_OverrideTimeTo_SetBit(void* Obj)
	{
		((FAutomationScreenshotOptions*)Obj)->bOverride_OverrideTimeTo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bOverride_OverrideTimeTo = { "bOverride_OverrideTimeTo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAutomationScreenshotOptions), &Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bOverride_OverrideTimeTo_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bOverride_OverrideTimeTo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bOverride_OverrideTimeTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Delay_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "The delay before we take the screenshot." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomationScreenshotOptions, Delay), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Delay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Delay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "The desired resolution of the screenshot, if none is provided, it will use the default for the\nplatform setup in the automation settings." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutomationScreenshotOptions, Resolution), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Resolution_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Resolution_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreAntiAliasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_MaximumGlobalError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_MaximumLocalError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_ToleranceAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Tolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Tolerance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_VisualizeBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_ViewSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableTonemapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableNoisyRenderingFeatures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_OverrideTimeTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bOverride_OverrideTimeTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Resolution,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
		nullptr,
		&NewStructOps,
		"AutomationScreenshotOptions",
		sizeof(FAutomationScreenshotOptions),
		alignof(FAutomationScreenshotOptions),
		Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FunctionalTesting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutomationScreenshotOptions"), sizeof(FAutomationScreenshotOptions), Get_Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Hash() { return 2548088823U; }
class UScriptStruct* FComparisonToleranceAmount::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUNCTIONALTESTING_API uint32 Get_Z_Construct_UScriptStruct_FComparisonToleranceAmount_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComparisonToleranceAmount, Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("ComparisonToleranceAmount"), sizeof(FComparisonToleranceAmount), Get_Z_Construct_UScriptStruct_FComparisonToleranceAmount_Hash());
	}
	return Singleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FComparisonToleranceAmount>()
{
	return FComparisonToleranceAmount::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComparisonToleranceAmount(FComparisonToleranceAmount::StaticStruct, TEXT("/Script/FunctionalTesting"), TEXT("ComparisonToleranceAmount"), false, nullptr, nullptr);
static struct FScriptStruct_FunctionalTesting_StaticRegisterNativesFComparisonToleranceAmount
{
	FScriptStruct_FunctionalTesting_StaticRegisterNativesFComparisonToleranceAmount()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComparisonToleranceAmount")),new UScriptStruct::TCppStructOps<FComparisonToleranceAmount>);
	}
} ScriptStruct_FunctionalTesting_StaticRegisterNativesFComparisonToleranceAmount;
	struct Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MinBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Blue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Green_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Green;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Red_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Red;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComparisonToleranceAmount>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_MaxBrightness_MetaData[] = {
		{ "Category", "Tolerance" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_MaxBrightness = { "MaxBrightness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComparisonToleranceAmount, MaxBrightness), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_MaxBrightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_MaxBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_MinBrightness_MetaData[] = {
		{ "Category", "Tolerance" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_MinBrightness = { "MinBrightness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComparisonToleranceAmount, MinBrightness), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_MinBrightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_MinBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Tolerance" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComparisonToleranceAmount, Alpha), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Alpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Blue_MetaData[] = {
		{ "Category", "Tolerance" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Blue = { "Blue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComparisonToleranceAmount, Blue), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Blue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Blue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Green_MetaData[] = {
		{ "Category", "Tolerance" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Green = { "Green", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComparisonToleranceAmount, Green), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Green_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Green_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Red_MetaData[] = {
		{ "Category", "Tolerance" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Red = { "Red", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComparisonToleranceAmount, Red), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Red_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Red_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_MaxBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_MinBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Red,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
		nullptr,
		&NewStructOps,
		"ComparisonToleranceAmount",
		sizeof(FComparisonToleranceAmount),
		alignof(FComparisonToleranceAmount),
		Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComparisonToleranceAmount()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComparisonToleranceAmount_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FunctionalTesting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComparisonToleranceAmount"), sizeof(FComparisonToleranceAmount), Get_Z_Construct_UScriptStruct_FComparisonToleranceAmount_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComparisonToleranceAmount_Hash() { return 2209213683U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
