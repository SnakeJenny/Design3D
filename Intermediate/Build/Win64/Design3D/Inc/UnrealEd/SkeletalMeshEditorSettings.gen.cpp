// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Settings/SkeletalMeshEditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshEditorSettings() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_USkeletalMeshEditorSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_USkeletalMeshEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void USkeletalMeshEditorSettings::StaticRegisterNativesUSkeletalMeshEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_USkeletalMeshEditorSettings_NoRegister()
	{
		return USkeletalMeshEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimPreviewDirectionalColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimPreviewDirectionalColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimPreviewLightingDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimPreviewLightingDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimPreviewLightBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimPreviewLightBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimPreviewSkyBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimPreviewSkyBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimPreviewSkyColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimPreviewSkyColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimPreviewFloorColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimPreviewFloorColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/SkeletalMeshEditorSettings.h" },
		{ "ModuleRelativePath", "Classes/Settings/SkeletalMeshEditorSettings.h" },
		{ "ToolTip", "Implements the settings for the skeletal mesh editor." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewDirectionalColor_MetaData[] = {
		{ "Category", "AnimationPreview" },
		{ "DisplayName", "Viewport Directional Color" },
		{ "ModuleRelativePath", "Classes/Settings/SkeletalMeshEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewDirectionalColor = { "AnimPreviewDirectionalColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshEditorSettings, AnimPreviewDirectionalColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewDirectionalColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewDirectionalColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewLightingDirection_MetaData[] = {
		{ "Category", "AnimationPreview" },
		{ "DisplayName", "Viewport Lighting Direction" },
		{ "ModuleRelativePath", "Classes/Settings/SkeletalMeshEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewLightingDirection = { "AnimPreviewLightingDirection", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshEditorSettings, AnimPreviewLightingDirection), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewLightingDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewLightingDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewLightBrightness_MetaData[] = {
		{ "Category", "AnimationPreview" },
		{ "DisplayName", "Viewport Light Brightness" },
		{ "ModuleRelativePath", "Classes/Settings/SkeletalMeshEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewLightBrightness = { "AnimPreviewLightBrightness", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshEditorSettings, AnimPreviewLightBrightness), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewLightBrightness_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewLightBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewSkyBrightness_MetaData[] = {
		{ "Category", "AnimationPreview" },
		{ "DisplayName", "Viewport Sky Brightness" },
		{ "ModuleRelativePath", "Classes/Settings/SkeletalMeshEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewSkyBrightness = { "AnimPreviewSkyBrightness", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshEditorSettings, AnimPreviewSkyBrightness), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewSkyBrightness_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewSkyBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewSkyColor_MetaData[] = {
		{ "Category", "AnimationPreview" },
		{ "DisplayName", "Viewport Sky Color" },
		{ "ModuleRelativePath", "Classes/Settings/SkeletalMeshEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewSkyColor = { "AnimPreviewSkyColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshEditorSettings, AnimPreviewSkyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewSkyColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewSkyColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewFloorColor_MetaData[] = {
		{ "Category", "AnimationPreview" },
		{ "DisplayName", "Viewport Floor Color" },
		{ "ModuleRelativePath", "Classes/Settings/SkeletalMeshEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewFloorColor = { "AnimPreviewFloorColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshEditorSettings, AnimPreviewFloorColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewFloorColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewFloorColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewDirectionalColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewLightingDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewLightBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewSkyBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewSkyColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::NewProp_AnimPreviewFloorColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshEditorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::ClassParams = {
		&USkeletalMeshEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkeletalMeshEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkeletalMeshEditorSettings, 1211362138);
	template<> UNREALED_API UClass* StaticClass<USkeletalMeshEditorSettings>()
	{
		return USkeletalMeshEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkeletalMeshEditorSettings(Z_Construct_UClass_USkeletalMeshEditorSettings, &USkeletalMeshEditorSettings::StaticClass, TEXT("/Script/UnrealEd"), TEXT("USkeletalMeshEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
