// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedPreviewScene/Public/AssetViewerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetViewerSettings() {}
// Cross Module References
	ADVANCEDPREVIEWSCENE_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewSceneProfile();
	UPackage* Z_Construct_UPackage__Script_AdvancedPreviewScene();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ADVANCEDPREVIEWSCENE_API UClass* Z_Construct_UClass_ULocalProfiles_NoRegister();
	ADVANCEDPREVIEWSCENE_API UClass* Z_Construct_UClass_ULocalProfiles();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ADVANCEDPREVIEWSCENE_API UClass* Z_Construct_UClass_USharedProfiles_NoRegister();
	ADVANCEDPREVIEWSCENE_API UClass* Z_Construct_UClass_USharedProfiles();
	ADVANCEDPREVIEWSCENE_API UClass* Z_Construct_UClass_UAssetViewerSettings_NoRegister();
	ADVANCEDPREVIEWSCENE_API UClass* Z_Construct_UClass_UAssetViewerSettings();
// End Cross Module References
class UScriptStruct* FPreviewSceneProfile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ADVANCEDPREVIEWSCENE_API uint32 Get_Z_Construct_UScriptStruct_FPreviewSceneProfile_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPreviewSceneProfile, Z_Construct_UPackage__Script_AdvancedPreviewScene(), TEXT("PreviewSceneProfile"), sizeof(FPreviewSceneProfile), Get_Z_Construct_UScriptStruct_FPreviewSceneProfile_Hash());
	}
	return Singleton;
}
template<> ADVANCEDPREVIEWSCENE_API UScriptStruct* StaticStruct<FPreviewSceneProfile>()
{
	return FPreviewSceneProfile::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPreviewSceneProfile(FPreviewSceneProfile::StaticStruct, TEXT("/Script/AdvancedPreviewScene"), TEXT("PreviewSceneProfile"), false, nullptr, nullptr);
static struct FScriptStruct_AdvancedPreviewScene_StaticRegisterNativesFPreviewSceneProfile
{
	FScriptStruct_AdvancedPreviewScene_StaticRegisterNativesFPreviewSceneProfile()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PreviewSceneProfile")),new UScriptStruct::TCppStructOps<FPreviewSceneProfile>);
	}
} ScriptStruct_AdvancedPreviewScene_StaticRegisterNativesFPreviewSceneProfile;
	struct Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalLightRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectionalLightRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingRigRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightingRigRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessingSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessingSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPostProcessingEnabled_MetaData[];
#endif
		static void NewProp_bPostProcessingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPostProcessingEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentCubeMapPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnvironmentCubeMapPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentCubeMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EnvironmentCubeMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnvironmentIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnvironmentColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowFloor_MetaData[];
#endif
		static void NewProp_bShowFloor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowEnvironment_MetaData[];
#endif
		static void NewProp_bShowEnvironment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowEnvironment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateLightingRig_MetaData[];
#endif
		static void NewProp_bRotateLightingRig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateLightingRig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkyLightIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkyLightIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalLightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectionalLightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalLightIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionalLightIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSkyLighting_MetaData[];
#endif
		static void NewProp_bUseSkyLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSkyLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSharedProfile_MetaData[];
#endif
		static void NewProp_bSharedProfile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSharedProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProfileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Preview scene profile settings structure." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPreviewSceneProfile>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Rotation for directional light" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightRotation = { "DirectionalLightRotation", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewSceneProfile, DirectionalLightRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Speed at which the sky rotates when rotating is toggled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewSceneProfile, RotationSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_RotationSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_LightingRigRotation_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Current rotation value of the sky in degrees (0 - 360)" },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_LightingRigRotation = { "LightingRigRotation", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewSceneProfile, LightingRigRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_LightingRigRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_LightingRigRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_PostProcessingSettings_MetaData[] = {
		{ "Category", "PostProcessing" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Manual set post processing settings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_PostProcessingSettings = { "PostProcessingSettings", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewSceneProfile, PostProcessingSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_PostProcessingSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_PostProcessingSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bPostProcessingEnabled_MetaData[] = {
		{ "Category", "PostProcessing" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Whether or not the Post Processing should influence the scene" },
	};
#endif
	void Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bPostProcessingEnabled_SetBit(void* Obj)
	{
		((FPreviewSceneProfile*)Obj)->bPostProcessingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bPostProcessingEnabled = { "bPostProcessingEnabled", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPreviewSceneProfile), &Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bPostProcessingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bPostProcessingEnabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bPostProcessingEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentCubeMapPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Storing path to environment cube to prevent it from getting cooked" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentCubeMapPath = { "EnvironmentCubeMapPath", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewSceneProfile, EnvironmentCubeMapPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentCubeMapPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentCubeMapPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentCubeMap_MetaData[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Sets environment cube map used for sky lighting and reflections" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentCubeMap = { "EnvironmentCubeMap", nullptr, (EPropertyFlags)0x0014000000002001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewSceneProfile, EnvironmentCubeMap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentCubeMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentCubeMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentIntensity_MetaData[] = {
		{ "Category", "Lighting" },
		{ "EditCondition", "!bShowEnvironment" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "The environment intensity (0.0 - 20.0), used if Show Environment is false." },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentIntensity = { "EnvironmentIntensity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewSceneProfile, EnvironmentIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentColor_MetaData[] = {
		{ "Category", "Environment" },
		{ "EditCondition", "!bShowEnvironment" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "The environment color, used if Show Environment is false." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentColor = { "EnvironmentColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewSceneProfile, EnvironmentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowFloor_MetaData[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Toggle visibility of the floor mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowFloor_SetBit(void* Obj)
	{
		((FPreviewSceneProfile*)Obj)->bShowFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowFloor = { "bShowFloor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPreviewSceneProfile), &Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowFloor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowFloor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowEnvironment_MetaData[] = {
		{ "Category", "Environment" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Toggle visibility of the environment sphere" },
	};
#endif
	void Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowEnvironment_SetBit(void* Obj)
	{
		((FPreviewSceneProfile*)Obj)->bShowEnvironment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowEnvironment = { "bShowEnvironment", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPreviewSceneProfile), &Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowEnvironment_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowEnvironment_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowEnvironment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bRotateLightingRig_MetaData[] = {
		{ "Category", "Lighting" },
		{ "DisplayName", "Rotate Sky and Directional Lighting" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Toggle rotating of the sky and directional lighting, press K and drag for manual rotating of Sky and L for Directional lighting" },
	};
#endif
	void Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bRotateLightingRig_SetBit(void* Obj)
	{
		((FPreviewSceneProfile*)Obj)->bRotateLightingRig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bRotateLightingRig = { "bRotateLightingRig", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPreviewSceneProfile), &Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bRotateLightingRig_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bRotateLightingRig_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bRotateLightingRig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_SkyLightIntensity_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Manually set the sky light intensity (0.0 - 20.0)" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_SkyLightIntensity = { "SkyLightIntensity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewSceneProfile, SkyLightIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_SkyLightIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_SkyLightIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightColor_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Manually set the directional light colour" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightColor = { "DirectionalLightColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewSceneProfile, DirectionalLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightIntensity_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Manually set the directional light intensity (0.0 - 20.0)" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightIntensity = { "DirectionalLightIntensity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewSceneProfile, DirectionalLightIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bUseSkyLighting_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Whether or not image based lighting is enabled for the environment cube map" },
	};
#endif
	void Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bUseSkyLighting_SetBit(void* Obj)
	{
		((FPreviewSceneProfile*)Obj)->bUseSkyLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bUseSkyLighting = { "bUseSkyLighting", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPreviewSceneProfile), &Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bUseSkyLighting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bUseSkyLighting_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bUseSkyLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bSharedProfile_MetaData[] = {
		{ "Category", "Profile" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Whether or not this profile should be stored in the Project ini file" },
	};
#endif
	void Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bSharedProfile_SetBit(void* Obj)
	{
		((FPreviewSceneProfile*)Obj)->bSharedProfile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bSharedProfile = { "bSharedProfile", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPreviewSceneProfile), &Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bSharedProfile_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bSharedProfile_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bSharedProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_ProfileName_MetaData[] = {
		{ "Category", "Profile" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Name to identify the profile" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewSceneProfile, ProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_ProfileName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_ProfileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_RotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_LightingRigRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_PostProcessingSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bPostProcessingEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentCubeMapPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentCubeMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_EnvironmentColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bShowEnvironment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bRotateLightingRig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_SkyLightIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_DirectionalLightIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bUseSkyLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_bSharedProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::NewProp_ProfileName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedPreviewScene,
		nullptr,
		&NewStructOps,
		"PreviewSceneProfile",
		sizeof(FPreviewSceneProfile),
		alignof(FPreviewSceneProfile),
		Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPreviewSceneProfile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPreviewSceneProfile_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AdvancedPreviewScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PreviewSceneProfile"), sizeof(FPreviewSceneProfile), Get_Z_Construct_UScriptStruct_FPreviewSceneProfile_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPreviewSceneProfile_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPreviewSceneProfile_Hash() { return 2344985666U; }
	void ULocalProfiles::StaticRegisterNativesULocalProfiles()
	{
	}
	UClass* Z_Construct_UClass_ULocalProfiles_NoRegister()
	{
		return ULocalProfiles::StaticClass();
	}
	struct Z_Construct_UClass_ULocalProfiles_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Profiles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Profiles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalProfiles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedPreviewScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalProfiles_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetViewerSettings.h" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalProfiles_Statics::NewProp_Profiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Collection of local scene profiles" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULocalProfiles_Statics::NewProp_Profiles = { "Profiles", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocalProfiles, Profiles), METADATA_PARAMS(Z_Construct_UClass_ULocalProfiles_Statics::NewProp_Profiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalProfiles_Statics::NewProp_Profiles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocalProfiles_Statics::NewProp_Profiles_Inner = { "Profiles", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPreviewSceneProfile, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalProfiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalProfiles_Statics::NewProp_Profiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalProfiles_Statics::NewProp_Profiles_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalProfiles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalProfiles>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalProfiles_Statics::ClassParams = {
		&ULocalProfiles::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULocalProfiles_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULocalProfiles_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalProfiles_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULocalProfiles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalProfiles()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalProfiles_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalProfiles, 2605425522);
	template<> ADVANCEDPREVIEWSCENE_API UClass* StaticClass<ULocalProfiles>()
	{
		return ULocalProfiles::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalProfiles(Z_Construct_UClass_ULocalProfiles, &ULocalProfiles::StaticClass, TEXT("/Script/AdvancedPreviewScene"), TEXT("ULocalProfiles"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalProfiles);
	void USharedProfiles::StaticRegisterNativesUSharedProfiles()
	{
	}
	UClass* Z_Construct_UClass_USharedProfiles_NoRegister()
	{
		return USharedProfiles::StaticClass();
	}
	struct Z_Construct_UClass_USharedProfiles_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Profiles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Profiles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USharedProfiles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedPreviewScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedProfiles_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetViewerSettings.h" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedProfiles_Statics::NewProp_Profiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Collection of shared scene profiles" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USharedProfiles_Statics::NewProp_Profiles = { "Profiles", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USharedProfiles, Profiles), METADATA_PARAMS(Z_Construct_UClass_USharedProfiles_Statics::NewProp_Profiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_USharedProfiles_Statics::NewProp_Profiles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USharedProfiles_Statics::NewProp_Profiles_Inner = { "Profiles", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPreviewSceneProfile, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USharedProfiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedProfiles_Statics::NewProp_Profiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedProfiles_Statics::NewProp_Profiles_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USharedProfiles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USharedProfiles>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USharedProfiles_Statics::ClassParams = {
		&USharedProfiles::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USharedProfiles_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USharedProfiles_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USharedProfiles_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USharedProfiles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USharedProfiles()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USharedProfiles_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USharedProfiles, 3425571643);
	template<> ADVANCEDPREVIEWSCENE_API UClass* StaticClass<USharedProfiles>()
	{
		return USharedProfiles::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USharedProfiles(Z_Construct_UClass_USharedProfiles, &USharedProfiles::StaticClass, TEXT("/Script/AdvancedPreviewScene"), TEXT("USharedProfiles"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USharedProfiles);
	void UAssetViewerSettings::StaticRegisterNativesUAssetViewerSettings()
	{
	}
	UClass* Z_Construct_UClass_UAssetViewerSettings_NoRegister()
	{
		return UAssetViewerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAssetViewerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Profiles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Profiles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetViewerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedPreviewScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetViewerSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Asset Viewer" },
		{ "IncludePath", "AssetViewerSettings.h" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ToolTip", "Default asset viewer settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_Profiles_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AssetViewerSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Collection of scene profiles" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_Profiles = { "Profiles", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAssetViewerSettings, Profiles), METADATA_PARAMS(Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_Profiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_Profiles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_Profiles_Inner = { "Profiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPreviewSceneProfile, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetViewerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_Profiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetViewerSettings_Statics::NewProp_Profiles_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetViewerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetViewerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetViewerSettings_Statics::ClassParams = {
		&UAssetViewerSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetViewerSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAssetViewerSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetViewerSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAssetViewerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetViewerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetViewerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetViewerSettings, 2937738664);
	template<> ADVANCEDPREVIEWSCENE_API UClass* StaticClass<UAssetViewerSettings>()
	{
		return UAssetViewerSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetViewerSettings(Z_Construct_UClass_UAssetViewerSettings, &UAssetViewerSettings::StaticClass, TEXT("/Script/AdvancedPreviewScene"), TEXT("UAssetViewerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetViewerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
