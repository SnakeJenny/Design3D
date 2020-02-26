// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneCapture/Public/MovieSceneCaptureSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCaptureSettings() {}
// Cross Module References
	MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCaptureSettings();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
	MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FCaptureResolution();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
class UScriptStruct* FMovieSceneCaptureSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENECAPTURE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings, Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("MovieSceneCaptureSettings"), sizeof(FMovieSceneCaptureSettings), Get_Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Hash());
	}
	return Singleton;
}
template<> MOVIESCENECAPTURE_API UScriptStruct* StaticStruct<FMovieSceneCaptureSettings>()
{
	return FMovieSceneCaptureSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneCaptureSettings(FMovieSceneCaptureSettings::StaticStruct, TEXT("/Script/MovieSceneCapture"), TEXT("MovieSceneCaptureSettings"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneCapture_StaticRegisterNativesFMovieSceneCaptureSettings
{
	FScriptStruct_MovieSceneCapture_StaticRegisterNativesFMovieSceneCaptureSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneCaptureSettings")),new UScriptStruct::TCppStructOps<FMovieSceneCaptureSettings>);
	}
} ScriptStruct_MovieSceneCapture_StaticRegisterNativesFMovieSceneCaptureSettings;
	struct Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathTracerSamplePerPixel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PathTracerSamplePerPixel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePathTracer_MetaData[];
#endif
		static void NewProp_bUsePathTracer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePathTracer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowHUD_MetaData[];
#endif
		static void NewProp_bShowHUD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowHUD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPlayer_MetaData[];
#endif
		static void NewProp_bShowPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowTurning_MetaData[];
#endif
		static void NewProp_bAllowTurning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowTurning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowMovement_MetaData[];
#endif
		static void NewProp_bAllowMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCinematicMode_MetaData[];
#endif
		static void NewProp_bCinematicMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCinematicMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCinematicEngineScalability_MetaData[];
#endif
		static void NewProp_bCinematicEngineScalability_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCinematicEngineScalability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTextureStreaming_MetaData[];
#endif
		static void NewProp_bEnableTextureStreaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTextureStreaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZeroPadFrameNumbers_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ZeroPadFrameNumbers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MovieExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandleFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HandleFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRelativeFrameNumbers_MetaData[];
#endif
		static void NewProp_bUseRelativeFrameNumbers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRelativeFrameNumbers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverwriteExisting_MetaData[];
#endif
		static void NewProp_bOverwriteExisting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverwriteExisting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutputFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameModeOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputDirectory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Common movie-scene capture settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCaptureSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_PathTracerSamplePerPixel_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bUsePathTracer" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Number of sampler per pixel to be used when rendering the scene with the path tracer (if supported)" },
		{ "UIMax", "4096" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_PathTracerSamplePerPixel = { "PathTracerSamplePerPixel", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCaptureSettings, PathTracerSamplePerPixel), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_PathTracerSamplePerPixel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_PathTracerSamplePerPixel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUsePathTracer_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Whether to use the path tracer (if supported) to render the scene" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUsePathTracer_SetBit(void* Obj)
	{
		((FMovieSceneCaptureSettings*)Obj)->bUsePathTracer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUsePathTracer = { "bUsePathTracer", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUsePathTracer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUsePathTracer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUsePathTracer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowHUD_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "EditCondition", "bCinematicMode" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Whether to show the in-game HUD whilst capturing" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowHUD_SetBit(void* Obj)
	{
		((FMovieSceneCaptureSettings*)Obj)->bShowHUD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowHUD = { "bShowHUD", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowHUD_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowHUD_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowHUD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowPlayer_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "EditCondition", "bCinematicMode" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Whether to show the local player whilst capturing" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowPlayer_SetBit(void* Obj)
	{
		((FMovieSceneCaptureSettings*)Obj)->bShowPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowPlayer = { "bShowPlayer", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowPlayer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowPlayer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowTurning_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "EditCondition", "bCinematicMode" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Whether to allow player rotation whilst capturing" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowTurning_SetBit(void* Obj)
	{
		((FMovieSceneCaptureSettings*)Obj)->bAllowTurning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowTurning = { "bAllowTurning", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowTurning_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowTurning_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowTurning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowMovement_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "EditCondition", "bCinematicMode" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Whether to allow player movement whilst capturing" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowMovement_SetBit(void* Obj)
	{
		((FMovieSceneCaptureSettings*)Obj)->bAllowMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowMovement = { "bAllowMovement", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowMovement_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowMovement_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicMode_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Whether to enable cinematic mode whilst capturing" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicMode_SetBit(void* Obj)
	{
		((FMovieSceneCaptureSettings*)Obj)->bCinematicMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicMode = { "bCinematicMode", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicEngineScalability_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Whether to enable cinematic engine scalability settings" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicEngineScalability_SetBit(void* Obj)
	{
		((FMovieSceneCaptureSettings*)Obj)->bCinematicEngineScalability = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicEngineScalability = { "bCinematicEngineScalability", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicEngineScalability_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicEngineScalability_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicEngineScalability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bEnableTextureStreaming_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Whether to texture streaming should be enabled while capturing.  Turning off texture streaming may cause much more memory to be used, but also reduces the chance of blurry textures in your captured video." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bEnableTextureStreaming_SetBit(void* Obj)
	{
		((FMovieSceneCaptureSettings*)Obj)->bEnableTextureStreaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bEnableTextureStreaming = { "bEnableTextureStreaming", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bEnableTextureStreaming_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bEnableTextureStreaming_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bEnableTextureStreaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The resolution at which to capture" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCaptureSettings, Resolution), Z_Construct_UScriptStruct_FCaptureResolution, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_Resolution_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_Resolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "ClampMax", "200" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "The frame rate at which to capture" },
		{ "UIMax", "200" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCaptureSettings, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_FrameRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_ZeroPadFrameNumbers_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "How much to zero-pad frame numbers on filenames" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_ZeroPadFrameNumbers = { "ZeroPadFrameNumbers", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCaptureSettings, ZeroPadFrameNumbers), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_ZeroPadFrameNumbers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_ZeroPadFrameNumbers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_MovieExtension_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Filename extension for movies referenced in the XMLs/EDLs" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_MovieExtension = { "MovieExtension", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCaptureSettings, MovieExtension), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_MovieExtension_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_MovieExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_HandleFrames_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Number of frame handles to include for each shot" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_HandleFrames = { "HandleFrames", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCaptureSettings, HandleFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_HandleFrames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_HandleFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUseRelativeFrameNumbers_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "True if frame numbers in the output files should be relative to zero, rather than the actual frame numbers in the originating animation content." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUseRelativeFrameNumbers_SetBit(void* Obj)
	{
		((FMovieSceneCaptureSettings*)Obj)->bUseRelativeFrameNumbers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUseRelativeFrameNumbers = { "bUseRelativeFrameNumbers", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUseRelativeFrameNumbers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUseRelativeFrameNumbers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUseRelativeFrameNumbers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bOverwriteExisting_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Whether to overwrite existing files or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bOverwriteExisting_SetBit(void* Obj)
	{
		((FMovieSceneCaptureSettings*)Obj)->bOverwriteExisting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bOverwriteExisting = { "bOverwriteExisting", nullptr, (EPropertyFlags)0x0010040000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneCaptureSettings), &Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bOverwriteExisting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bOverwriteExisting_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bOverwriteExisting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_OutputFormat_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Filename Format" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "The format to use for the resulting filename. Extension will be added automatically. Any tokens of the form {token} will be replaced with the corresponding value:\n{fps}                - The captured framerate\n{frame}              - The current frame number (only relevant for image sequences)\n{width}              - The width of the captured frames\n{height}             - The height of the captured frames\n{world}              - The name of the current world\n{quality}    - The image compression quality setting\n{material}   - The material/render pass\n{shot}       - The name of the level sequence asset shot being played\n{camera}     - The name of the current camera" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_OutputFormat = { "OutputFormat", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCaptureSettings, OutputFormat), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_OutputFormat_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_OutputFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_GameModeOverride_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Optional game mode to override the map's default game mode with.  This can be useful if the game's normal mode displays UI elements or loading screens that you don't want captured." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_GameModeOverride = { "GameModeOverride", nullptr, (EPropertyFlags)0x0014040000004005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCaptureSettings, GameModeOverride), Z_Construct_UClass_AGameModeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_GameModeOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_GameModeOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_OutputDirectory_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "The directory to output the captured file(s) in" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_OutputDirectory = { "OutputDirectory", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCaptureSettings, OutputDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_OutputDirectory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_OutputDirectory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_PathTracerSamplePerPixel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUsePathTracer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowHUD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bShowPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowTurning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bAllowMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bCinematicEngineScalability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bEnableTextureStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_Resolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_FrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_ZeroPadFrameNumbers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_MovieExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_HandleFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bUseRelativeFrameNumbers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_bOverwriteExisting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_OutputFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_GameModeOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::NewProp_OutputDirectory,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
		nullptr,
		&NewStructOps,
		"MovieSceneCaptureSettings",
		sizeof(FMovieSceneCaptureSettings),
		alignof(FMovieSceneCaptureSettings),
		Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCaptureSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneCapture();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneCaptureSettings"), sizeof(FMovieSceneCaptureSettings), Get_Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCaptureSettings_Hash() { return 3552966081U; }
class UScriptStruct* FCaptureResolution::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENECAPTURE_API uint32 Get_Z_Construct_UScriptStruct_FCaptureResolution_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCaptureResolution, Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("CaptureResolution"), sizeof(FCaptureResolution), Get_Z_Construct_UScriptStruct_FCaptureResolution_Hash());
	}
	return Singleton;
}
template<> MOVIESCENECAPTURE_API UScriptStruct* StaticStruct<FCaptureResolution>()
{
	return FCaptureResolution::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCaptureResolution(FCaptureResolution::StaticStruct, TEXT("/Script/MovieSceneCapture"), TEXT("CaptureResolution"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneCapture_StaticRegisterNativesFCaptureResolution
{
	FScriptStruct_MovieSceneCapture_StaticRegisterNativesFCaptureResolution()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CaptureResolution")),new UScriptStruct::TCppStructOps<FCaptureResolution>);
	}
} ScriptStruct_MovieSceneCapture_StaticRegisterNativesFCaptureResolution;
	struct Z_Construct_UScriptStruct_FCaptureResolution_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureResolution_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
		{ "ToolTip", "Structure representing a capture resolution" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCaptureResolution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCaptureResolution>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureResolution_Statics::NewProp_ResY_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ClampMax", "7680" },
		{ "ClampMin", "16" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCaptureResolution_Statics::NewProp_ResY = { "ResY", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureResolution, ResY), METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureResolution_Statics::NewProp_ResY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureResolution_Statics::NewProp_ResY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureResolution_Statics::NewProp_ResX_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ClampMax", "7680" },
		{ "ClampMin", "16" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCaptureResolution_Statics::NewProp_ResX = { "ResX", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureResolution, ResX), METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureResolution_Statics::NewProp_ResX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureResolution_Statics::NewProp_ResX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCaptureResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureResolution_Statics::NewProp_ResY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureResolution_Statics::NewProp_ResX,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCaptureResolution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
		nullptr,
		&NewStructOps,
		"CaptureResolution",
		sizeof(FCaptureResolution),
		alignof(FCaptureResolution),
		Z_Construct_UScriptStruct_FCaptureResolution_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureResolution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureResolution_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureResolution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCaptureResolution()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCaptureResolution_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneCapture();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CaptureResolution"), sizeof(FCaptureResolution), Get_Z_Construct_UScriptStruct_FCaptureResolution_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCaptureResolution_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCaptureResolution_Hash() { return 2004974568U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
