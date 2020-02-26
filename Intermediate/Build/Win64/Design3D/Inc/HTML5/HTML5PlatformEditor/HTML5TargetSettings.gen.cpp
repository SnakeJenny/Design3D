// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HTML5PlatformEditor/Classes/HTML5TargetSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHTML5TargetSettings() {}
// Cross Module References
	HTML5PLATFORMEDITOR_API UEnum* Z_Construct_UEnum_HTML5PlatformEditor_ECanvasScalingMode();
	UPackage* Z_Construct_UPackage__Script_HTML5PlatformEditor();
	HTML5PLATFORMEDITOR_API UClass* Z_Construct_UClass_UHTML5TargetSettings_NoRegister();
	HTML5PLATFORMEDITOR_API UClass* Z_Construct_UClass_UHTML5TargetSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ECanvasScalingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HTML5PlatformEditor_ECanvasScalingMode, Z_Construct_UPackage__Script_HTML5PlatformEditor(), TEXT("ECanvasScalingMode"));
		}
		return Singleton;
	}
	template<> HTML5PLATFORMEDITOR_API UEnum* StaticEnum<ECanvasScalingMode::Type>()
	{
		return ECanvasScalingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECanvasScalingMode(ECanvasScalingMode_StaticEnum, TEXT("/Script/HTML5PlatformEditor"), TEXT("ECanvasScalingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HTML5PlatformEditor_ECanvasScalingMode_Hash() { return 2914394842U; }
	UEnum* Z_Construct_UEnum_HTML5PlatformEditor_ECanvasScalingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HTML5PlatformEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECanvasScalingMode"), 0, Get_Z_Construct_UEnum_HTML5PlatformEditor_ECanvasScalingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECanvasScalingMode::Stretch", (int64)ECanvasScalingMode::Stretch },
				{ "ECanvasScalingMode::Aspect", (int64)ECanvasScalingMode::Aspect },
				{ "ECanvasScalingMode::Fixed", (int64)ECanvasScalingMode::Fixed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/HTML5TargetSettings.h" },
				{ "ToolTip", "Enumerates available Canvas Scaling Modes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HTML5PlatformEditor,
				nullptr,
				"ECanvasScalingMode",
				"ECanvasScalingMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UHTML5TargetSettings::StaticRegisterNativesUHTML5TargetSettings()
	{
	}
	UClass* Z_Construct_UClass_UHTML5TargetSettings_NoRegister()
	{
		return UHTML5TargetSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHTML5TargetSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionPlugin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OcclusionPlugin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbPlugin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReverbPlugin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatializationPlugin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpatializationPlugin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_S3FolderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_S3FolderName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_S3BucketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_S3BucketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_S3SecretAccessKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_S3SecretAccessKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_S3KeyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_S3KeyID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_S3Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_S3Region;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UploadToS3_MetaData[];
#endif
		static void NewProp_UploadToS3_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UploadToS3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeployServerPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeployServerPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Compressed_MetaData[];
#endif
		static void NewProp_Compressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Compressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasScalingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CanvasScalingMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableTracing_MetaData[];
#endif
		static void NewProp_EnableTracing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableTracing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableMultithreading_MetaData[];
#endif
		static void NewProp_EnableMultithreading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableMultithreading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseFixedTimeStep_MetaData[];
#endif
		static void NewProp_UseFixedTimeStep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseFixedTimeStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableIndexedDB_MetaData[];
#endif
		static void NewProp_EnableIndexedDB_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableIndexedDB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHTML5TargetSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HTML5PlatformEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTML5TargetSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HTML5TargetSettings.h" },
		{ "ModuleRelativePath", "Classes/HTML5TargetSettings.h" },
		{ "ToolTip", "Implements the settings for the HTML5 target platform." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_OcclusionPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/HTML5TargetSettings.h" },
		{ "ToolTip", "Which of the currently enabled occlusion plugins to use on Windows." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_OcclusionPlugin = { "OcclusionPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHTML5TargetSettings, OcclusionPlugin), METADATA_PARAMS(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_OcclusionPlugin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_OcclusionPlugin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_ReverbPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/HTML5TargetSettings.h" },
		{ "ToolTip", "Which of the currently enabled reverb plugins to use on Windows." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_ReverbPlugin = { "ReverbPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHTML5TargetSettings, ReverbPlugin), METADATA_PARAMS(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_ReverbPlugin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_ReverbPlugin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_SpatializationPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/HTML5TargetSettings.h" },
		{ "ToolTip", "Which of the currently enabled spatialization plugins to use on Windows." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_SpatializationPlugin = { "SpatializationPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHTML5TargetSettings, SpatializationPlugin), METADATA_PARAMS(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_SpatializationPlugin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_SpatializationPlugin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3FolderName_MetaData[] = {
		{ "Category", "Amazon_S3" },
		{ "DisplayName", "Nested Folder Name" },
		{ "EditCondition", "UploadToS3" },
		{ "ModuleRelativePath", "Classes/HTML5TargetSettings.h" },
		{ "ToolTip", "Provide another level of nesting beyond the bucket. Can be left empty, defaults to game name. DO NOT LEAVE A TRAILING SLASH!" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3FolderName = { "S3FolderName", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHTML5TargetSettings, S3FolderName), METADATA_PARAMS(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3FolderName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3FolderName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3BucketName_MetaData[] = {
		{ "Category", "Amazon_S3" },
		{ "DisplayName", "Amazon S3 Bucket Name" },
		{ "EditCondition", "UploadToS3" },
		{ "ModuleRelativePath", "Classes/HTML5TargetSettings.h" },
		{ "ToolTip", "Required" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3BucketName = { "S3BucketName", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHTML5TargetSettings, S3BucketName), METADATA_PARAMS(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3BucketName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3BucketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3SecretAccessKey_MetaData[] = {
		{ "Category", "Amazon_S3" },
		{ "DisplayName", "Amazon S3 Secret Access Key" },
		{ "EditCondition", "UploadToS3" },
		{ "ModuleRelativePath", "Classes/HTML5TargetSettings.h" },
		{ "ToolTip", "Required" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3SecretAccessKey = { "S3SecretAccessKey", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHTML5TargetSettings, S3SecretAccessKey), METADATA_PARAMS(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3SecretAccessKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3SecretAccessKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3KeyID_MetaData[] = {
		{ "Category", "Amazon_S3" },
		{ "DisplayName", "Amazon S3 Key ID" },
		{ "EditCondition", "UploadToS3" },
		{ "ModuleRelativePath", "Classes/HTML5TargetSettings.h" },
		{ "ToolTip", "Required" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3KeyID = { "S3KeyID", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHTML5TargetSettings, S3KeyID), METADATA_PARAMS(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3KeyID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3KeyID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3Region_MetaData[] = {
		{ "Category", "Amazon_S3" },
		{ "DisplayName", "Amazon S3 Region" },
		{ "EditCondition", "UploadToS3" },
		{ "ModuleRelativePath", "Classes/HTML5TargetSettings.h" },
		{ "ToolTip", "Required" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3Region = { "S3Region", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHTML5TargetSettings, S3Region), METADATA_PARAMS(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3Region_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3Region_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_UploadToS3_MetaData[] = {
		{ "Category", "Amazon_S3" },
		{ "DisplayName", "Upload builds to Amazon S3 when packaging" },
		{ "ModuleRelativePath", "Classes/HTML5TargetSettings.h" },
	};
#endif
	void Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_UploadToS3_SetBit(void* Obj)
	{
		((UHTML5TargetSettings*)Obj)->UploadToS3 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_UploadToS3 = { "UploadToS3", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHTML5TargetSettings), &Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_UploadToS3_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_UploadToS3_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_UploadToS3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_DeployServerPort_MetaData[] = {
		{ "Category", "Launch" },
		{ "ClampMax", "65535" },
		{ "ClampMin", "49152" },
		{ "DisplayName", "Port to use when deploying game from the editor" },
		{ "ModuleRelativePath", "Classes/HTML5TargetSettings.h" },
		{ "ToolTip", "Port to use when deploying game from the editor" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_DeployServerPort = { "DeployServerPort", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHTML5TargetSettings, DeployServerPort), METADATA_PARAMS(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_DeployServerPort_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_DeployServerPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_Compressed_MetaData[] = {
		{ "Category", "Packaging" },
		{ "DisplayName", "Compress files during shipping packaging" },
		{ "ModuleRelativePath", "Classes/HTML5TargetSettings.h" },
		{ "ToolTip", "Compress Files\nNOTE 1: it is also recommended to NOT enable PAK file packaging - this is currently redundant\nNOTE 2: future emscripten version will allow separate (asset) files in a new FileSystem feature - which will make use of this (as well as PAK file) option again" },
	};
#endif
	void Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_Compressed_SetBit(void* Obj)
	{
		((UHTML5TargetSettings*)Obj)->Compressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_Compressed = { "Compressed", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHTML5TargetSettings), &Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_Compressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_Compressed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_Compressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_CanvasScalingMode_MetaData[] = {
		{ "Category", "Canvas" },
		{ "ModuleRelativePath", "Classes/HTML5TargetSettings.h" },
		{ "ToolTip", "Canvas scaling mode\nHow the canvas size changes when the browser window is resized by dragging from the corner.\nSTRETCH : dynamic dimensions (both canvas size and app resolution scales)\nASPECT  : use the aspect ratio that the canvas will be constrained to (canvas will scale while app stays locked)\nFIXED   : fixed resolution that the app will render to (canvas and app dimensions will be locked)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_CanvasScalingMode = { "CanvasScalingMode", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHTML5TargetSettings, CanvasScalingMode), Z_Construct_UEnum_HTML5PlatformEditor_ECanvasScalingMode, METADATA_PARAMS(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_CanvasScalingMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_CanvasScalingMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableTracing_MetaData[] = {
		{ "Category", "Emscripten" },
		{ "DisplayName", "Tracing support" },
		{ "ModuleRelativePath", "Classes/HTML5TargetSettings.h" },
		{ "ToolTip", "Enable Tracing (trace.h)" },
	};
#endif
	void Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableTracing_SetBit(void* Obj)
	{
		((UHTML5TargetSettings*)Obj)->EnableTracing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableTracing = { "EnableTracing", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHTML5TargetSettings), &Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableTracing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableTracing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableTracing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableMultithreading_MetaData[] = {
		{ "Category", "Emscripten" },
		{ "DisplayName", "Multithreading support" },
		{ "ModuleRelativePath", "Classes/HTML5TargetSettings.h" },
		{ "ToolTip", "Enable Multithreading (Experimental)" },
	};
#endif
	void Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableMultithreading_SetBit(void* Obj)
	{
		((UHTML5TargetSettings*)Obj)->EnableMultithreading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableMultithreading = { "EnableMultithreading", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHTML5TargetSettings), &Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableMultithreading_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableMultithreading_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableMultithreading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_UseFixedTimeStep_MetaData[] = {
		{ "Category", "Emscripten" },
		{ "DisplayName", "Fixed TimeStep (i.e. use requestAnimationFrame)" },
		{ "ModuleRelativePath", "Classes/HTML5TargetSettings.h" },
		{ "ToolTip", "Use Fixed TimeStep" },
	};
#endif
	void Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_UseFixedTimeStep_SetBit(void* Obj)
	{
		((UHTML5TargetSettings*)Obj)->UseFixedTimeStep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_UseFixedTimeStep = { "UseFixedTimeStep", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHTML5TargetSettings), &Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_UseFixedTimeStep_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_UseFixedTimeStep_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_UseFixedTimeStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableIndexedDB_MetaData[] = {
		{ "Category", "Emscripten" },
		{ "DisplayName", "IndexedDB storage" },
		{ "ModuleRelativePath", "Classes/HTML5TargetSettings.h" },
		{ "ToolTip", "Use IndexedDB storage" },
	};
#endif
	void Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableIndexedDB_SetBit(void* Obj)
	{
		((UHTML5TargetSettings*)Obj)->EnableIndexedDB = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableIndexedDB = { "EnableIndexedDB", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHTML5TargetSettings), &Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableIndexedDB_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableIndexedDB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableIndexedDB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHTML5TargetSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_OcclusionPlugin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_ReverbPlugin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_SpatializationPlugin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3FolderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3BucketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3SecretAccessKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3KeyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_S3Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_UploadToS3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_DeployServerPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_Compressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_CanvasScalingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableTracing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableMultithreading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_UseFixedTimeStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTML5TargetSettings_Statics::NewProp_EnableIndexedDB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHTML5TargetSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHTML5TargetSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHTML5TargetSettings_Statics::ClassParams = {
		&UHTML5TargetSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHTML5TargetSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UHTML5TargetSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UHTML5TargetSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHTML5TargetSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHTML5TargetSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHTML5TargetSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHTML5TargetSettings, 930544029);
	template<> HTML5PLATFORMEDITOR_API UClass* StaticClass<UHTML5TargetSettings>()
	{
		return UHTML5TargetSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHTML5TargetSettings(Z_Construct_UClass_UHTML5TargetSettings, &UHTML5TargetSettings::StaticClass, TEXT("/Script/HTML5PlatformEditor"), TEXT("UHTML5TargetSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHTML5TargetSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
