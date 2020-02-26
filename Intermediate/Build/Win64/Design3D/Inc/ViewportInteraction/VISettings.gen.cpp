// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportInteraction/Public/VISettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVISettings() {}
// Cross Module References
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UVISettings_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UVISettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
// End Cross Module References
	void UVISettings::StaticRegisterNativesUVISettings()
	{
	}
	UClass* Z_Construct_UClass_UVISettings_NoRegister()
	{
		return UVISettings::StaticClass();
	}
	struct Z_Construct_UClass_UVISettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowSimultaneousWorldScalingAndRotation_MetaData[];
#endif
		static void NewProp_bAllowSimultaneousWorldScalingAndRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowSimultaneousWorldScalingAndRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleWorldWithDynamicPivot_MetaData[];
#endif
		static void NewProp_bScaleWorldWithDynamicPivot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleWorldWithDynamicPivot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleWorldFromFloor_MetaData[];
#endif
		static void NewProp_bScaleWorldFromFloor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleWorldFromFloor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVISettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVISettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VISettings.h" },
		{ "ModuleRelativePath", "Public/VISettings.h" },
		{ "ToolTip", "Implements the settings for Viewport Interaction and VR Mode. Note that this is primarily a base class for anything that needs to be accessed in the VI module." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVISettings_Statics::NewProp_bAllowSimultaneousWorldScalingAndRotation_MetaData[] = {
		{ "Category", "World Movement" },
		{ "ModuleRelativePath", "Public/VISettings.h" },
		{ "ToolTip", "When enabled, you can freely rotate and scale the world with two hands at the same time.  Otherwise, we'll detect whether to rotate or scale depending on how much of either gesture you initially perform." },
	};
#endif
	void Z_Construct_UClass_UVISettings_Statics::NewProp_bAllowSimultaneousWorldScalingAndRotation_SetBit(void* Obj)
	{
		((UVISettings*)Obj)->bAllowSimultaneousWorldScalingAndRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVISettings_Statics::NewProp_bAllowSimultaneousWorldScalingAndRotation = { "bAllowSimultaneousWorldScalingAndRotation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVISettings), &Z_Construct_UClass_UVISettings_Statics::NewProp_bAllowSimultaneousWorldScalingAndRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVISettings_Statics::NewProp_bAllowSimultaneousWorldScalingAndRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVISettings_Statics::NewProp_bAllowSimultaneousWorldScalingAndRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldWithDynamicPivot_MetaData[] = {
		{ "Category", "World Movement" },
		{ "ModuleRelativePath", "Public/VISettings.h" },
		{ "ToolTip", "Whether to compute a new center point for scaling relative from by looking at how far either controller moved relative to the last frame" },
	};
#endif
	void Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldWithDynamicPivot_SetBit(void* Obj)
	{
		((UVISettings*)Obj)->bScaleWorldWithDynamicPivot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldWithDynamicPivot = { "bScaleWorldWithDynamicPivot", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVISettings), &Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldWithDynamicPivot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldWithDynamicPivot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldWithDynamicPivot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldFromFloor_MetaData[] = {
		{ "Category", "World Movement" },
		{ "ModuleRelativePath", "Public/VISettings.h" },
		{ "ToolTip", "Whether the world should scale relative to your tracking space floor instead of the center of your hand locations" },
	};
#endif
	void Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldFromFloor_SetBit(void* Obj)
	{
		((UVISettings*)Obj)->bScaleWorldFromFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldFromFloor = { "bScaleWorldFromFloor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UVISettings), &Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldFromFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldFromFloor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldFromFloor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVISettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVISettings_Statics::NewProp_bAllowSimultaneousWorldScalingAndRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldWithDynamicPivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldFromFloor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVISettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVISettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVISettings_Statics::ClassParams = {
		&UVISettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVISettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UVISettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVISettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVISettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVISettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVISettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVISettings, 4058425392);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UVISettings>()
	{
		return UVISettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVISettings(Z_Construct_UClass_UVISettings, &UVISettings::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UVISettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVISettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
