// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AugmentedReality/Public/ARSessionConfig.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARSessionConfig() {}
// Cross Module References
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionType();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARWorldAlignment();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSessionConfig_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSessionConfig();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_AddCandidateImage();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateImage_NoRegister();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_AddCandidateObject();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateObject_NoRegister();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARVideoFormat();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_GetSessionType();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_GetWorldMapData();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_SetWorldMapData();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects();
// End Cross Module References
	static UEnum* EARFaceTrackingUpdate_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARFaceTrackingUpdate"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFaceTrackingUpdate>()
	{
		return EARFaceTrackingUpdate_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARFaceTrackingUpdate(EARFaceTrackingUpdate_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARFaceTrackingUpdate"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate_Hash() { return 183000698U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARFaceTrackingUpdate"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARFaceTrackingUpdate::CurvesAndGeo", (int64)EARFaceTrackingUpdate::CurvesAndGeo },
				{ "EARFaceTrackingUpdate::CurvesOnly", (int64)EARFaceTrackingUpdate::CurvesOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CurvesAndGeo.ToolTip", "Curves and geometry will be updated (only needed for mesh visualization)" },
				{ "CurvesOnly.ToolTip", "Only the curve data is updated" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "ToolTip", "Tells the AR system how much of the face work to perform" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARFaceTrackingUpdate",
				"EARFaceTrackingUpdate",
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
	static UEnum* EAREnvironmentCaptureProbeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EAREnvironmentCaptureProbeType"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EAREnvironmentCaptureProbeType>()
	{
		return EAREnvironmentCaptureProbeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAREnvironmentCaptureProbeType(EAREnvironmentCaptureProbeType_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EAREnvironmentCaptureProbeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType_Hash() { return 4185954186U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAREnvironmentCaptureProbeType"), 0, Get_Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAREnvironmentCaptureProbeType::None", (int64)EAREnvironmentCaptureProbeType::None },
				{ "EAREnvironmentCaptureProbeType::Manual", (int64)EAREnvironmentCaptureProbeType::Manual },
				{ "EAREnvironmentCaptureProbeType::Automatic", (int64)EAREnvironmentCaptureProbeType::Automatic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Automatic.ToolTip", "Capturing will be automatic with probes placed by the AR system" },
				{ "BlueprintType", "true" },
				{ "Manual.ToolTip", "Capturing will be manual with the app specifying where the probes are and their size" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "None.ToolTip", "No capturing will happen" },
				{ "ToolTip", "Tells the AR system what type of environmental texture capturing to perform" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EAREnvironmentCaptureProbeType",
				"EAREnvironmentCaptureProbeType",
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
	static UEnum* EARFrameSyncMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARFrameSyncMode"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFrameSyncMode>()
	{
		return EARFrameSyncMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARFrameSyncMode(EARFrameSyncMode_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARFrameSyncMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode_Hash() { return 3050002662U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARFrameSyncMode"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARFrameSyncMode::SyncTickWithCameraImage", (int64)EARFrameSyncMode::SyncTickWithCameraImage },
				{ "EARFrameSyncMode::SyncTickWithoutCameraImage", (int64)EARFrameSyncMode::SyncTickWithoutCameraImage },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "SyncTickWithCameraImage.ToolTip", "Unreal tick will be synced with the camera image update rate." },
				{ "SyncTickWithoutCameraImage.ToolTip", "Unreal tick will not related to the camera image update rate." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARFrameSyncMode",
				"EARFrameSyncMode",
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
	static UEnum* EARLightEstimationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARLightEstimationMode"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARLightEstimationMode>()
	{
		return EARLightEstimationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARLightEstimationMode(EARLightEstimationMode_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARLightEstimationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode_Hash() { return 2947498916U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARLightEstimationMode"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARLightEstimationMode::None", (int64)EARLightEstimationMode::None },
				{ "EARLightEstimationMode::AmbientLightEstimate", (int64)EARLightEstimationMode::AmbientLightEstimate },
				{ "EARLightEstimationMode::DirectionalLightEstimate", (int64)EARLightEstimationMode::DirectionalLightEstimate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AmbientLightEstimate.ToolTip", "Enable light estimation for ambient intensity; returned as a UARBasicLightEstimate" },
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "DirectionalLightEstimate.ToolTip", "Enable directional light estimation of environment with an additional key light.\nCurrently not supported." },
				{ "Experimental", "" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "None.ToolTip", "Light estimation disabled." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARLightEstimationMode",
				"EARLightEstimationMode",
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
	static UEnum* EARPlaneDetectionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARPlaneDetectionMode"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARPlaneDetectionMode>()
	{
		return EARPlaneDetectionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARPlaneDetectionMode(EARPlaneDetectionMode_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARPlaneDetectionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode_Hash() { return 3523644022U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARPlaneDetectionMode"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARPlaneDetectionMode::None", (int64)EARPlaneDetectionMode::None },
				{ "EARPlaneDetectionMode::HorizontalPlaneDetection", (int64)EARPlaneDetectionMode::HorizontalPlaneDetection },
				{ "EARPlaneDetectionMode::VerticalPlaneDetection", (int64)EARPlaneDetectionMode::VerticalPlaneDetection },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "HorizontalPlaneDetection.ToolTip", "Detect Horizontal Surfaces" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "VerticalPlaneDetection.ToolTip", "Detects Vertical Surfaces" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARPlaneDetectionMode",
				"EARPlaneDetectionMode",
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
	static UEnum* EARSessionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSessionType, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARSessionType"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARSessionType>()
	{
		return EARSessionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARSessionType(EARSessionType_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARSessionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARSessionType_Hash() { return 3812072817U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARSessionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARSessionType"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARSessionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARSessionType::None", (int64)EARSessionType::None },
				{ "EARSessionType::Orientation", (int64)EARSessionType::Orientation },
				{ "EARSessionType::World", (int64)EARSessionType::World },
				{ "EARSessionType::Face", (int64)EARSessionType::Face },
				{ "EARSessionType::Image", (int64)EARSessionType::Image },
				{ "EARSessionType::ObjectScanning", (int64)EARSessionType::ObjectScanning },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "Face.ToolTip", "AR meant to overlay onto a face" },
				{ "Image.ToolTip", "Tracking of images supplied by the app. No world tracking, just images" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
				{ "None.ToolTip", "AR tracking is not supported" },
				{ "ObjectScanning.ToolTip", "A session used to scan objects for object detection in a world tracking session" },
				{ "Orientation.ToolTip", "AR session used to track orientation of the device only" },
				{ "World.ToolTip", "AR meant to overlay onto the world with tracking" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARSessionType",
				"EARSessionType",
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
	static UEnum* EARWorldAlignment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARWorldAlignment, Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARWorldAlignment"));
		}
		return Singleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARWorldAlignment>()
	{
		return EARWorldAlignment_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EARWorldAlignment(EARWorldAlignment_StaticEnum, TEXT("/Script/AugmentedReality"), TEXT("EARWorldAlignment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AugmentedReality_EARWorldAlignment_Hash() { return 1024175840U; }
	UEnum* Z_Construct_UEnum_AugmentedReality_EARWorldAlignment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AugmentedReality();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EARWorldAlignment"), 0, Get_Z_Construct_UEnum_AugmentedReality_EARWorldAlignment_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EARWorldAlignment::Gravity", (int64)EARWorldAlignment::Gravity },
				{ "EARWorldAlignment::GravityAndHeading", (int64)EARWorldAlignment::GravityAndHeading },
				{ "EARWorldAlignment::Camera", (int64)EARWorldAlignment::Camera },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Camera.ToolTip", "Aligns the world with the camera's orientation, which is best for Face AR" },
				{ "Category", "AR AugmentedReality" },
				{ "Experimental", "" },
				{ "Gravity.ToolTip", "Aligns the world with gravity that is defined by vector (0, -1, 0)" },
				{ "GravityAndHeading.ToolTip", "Aligns the world with gravity that is defined by the vector (0, -1, 0)\nand heading (w.r.t. True North) that is given by the vector (0, 0, -1)" },
				{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
				nullptr,
				"EARWorldAlignment",
				"EARWorldAlignment",
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
	void UARSessionConfig::StaticRegisterNativesUARSessionConfig()
	{
		UClass* Class = UARSessionConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCandidateImage", &UARSessionConfig::execAddCandidateImage },
			{ "AddCandidateObject", &UARSessionConfig::execAddCandidateObject },
			{ "GetCandidateImageList", &UARSessionConfig::execGetCandidateImageList },
			{ "GetCandidateObjectList", &UARSessionConfig::execGetCandidateObjectList },
			{ "GetDesiredVideoFormat", &UARSessionConfig::execGetDesiredVideoFormat },
			{ "GetEnvironmentCaptureProbeType", &UARSessionConfig::execGetEnvironmentCaptureProbeType },
			{ "GetFaceTrackingDirection", &UARSessionConfig::execGetFaceTrackingDirection },
			{ "GetFaceTrackingUpdate", &UARSessionConfig::execGetFaceTrackingUpdate },
			{ "GetFrameSyncMode", &UARSessionConfig::execGetFrameSyncMode },
			{ "GetLightEstimationMode", &UARSessionConfig::execGetLightEstimationMode },
			{ "GetMaxNumSimultaneousImagesTracked", &UARSessionConfig::execGetMaxNumSimultaneousImagesTracked },
			{ "GetPlaneDetectionMode", &UARSessionConfig::execGetPlaneDetectionMode },
			{ "GetSessionType", &UARSessionConfig::execGetSessionType },
			{ "GetWorldAlignment", &UARSessionConfig::execGetWorldAlignment },
			{ "GetWorldMapData", &UARSessionConfig::execGetWorldMapData },
			{ "SetCandidateObjectList", &UARSessionConfig::execSetCandidateObjectList },
			{ "SetDesiredVideoFormat", &UARSessionConfig::execSetDesiredVideoFormat },
			{ "SetEnableAutoFocus", &UARSessionConfig::execSetEnableAutoFocus },
			{ "SetFaceTrackingDirection", &UARSessionConfig::execSetFaceTrackingDirection },
			{ "SetFaceTrackingUpdate", &UARSessionConfig::execSetFaceTrackingUpdate },
			{ "SetResetCameraTracking", &UARSessionConfig::execSetResetCameraTracking },
			{ "SetResetTrackedObjects", &UARSessionConfig::execSetResetTrackedObjects },
			{ "SetWorldMapData", &UARSessionConfig::execSetWorldMapData },
			{ "ShouldEnableAutoFocus", &UARSessionConfig::execShouldEnableAutoFocus },
			{ "ShouldEnableCameraTracking", &UARSessionConfig::execShouldEnableCameraTracking },
			{ "ShouldRenderCameraOverlay", &UARSessionConfig::execShouldRenderCameraOverlay },
			{ "ShouldResetCameraTracking", &UARSessionConfig::execShouldResetCameraTracking },
			{ "ShouldResetTrackedObjects", &UARSessionConfig::execShouldResetTrackedObjects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics
	{
		struct ARSessionConfig_eventAddCandidateImage_Parms
		{
			UARCandidateImage* NewCandidateImage;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCandidateImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::NewProp_NewCandidateImage = { "NewCandidateImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventAddCandidateImage_Parms, NewCandidateImage), Z_Construct_UClass_UARCandidateImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::NewProp_NewCandidateImage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Add a new CandidateImage to the ARSessionConfig." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "AddCandidateImage", sizeof(ARSessionConfig_eventAddCandidateImage_Parms), Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_AddCandidateImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics
	{
		struct ARSessionConfig_eventAddCandidateObject_Parms
		{
			UARCandidateObject* CandidateObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CandidateObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::NewProp_CandidateObject = { "CandidateObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventAddCandidateObject_Parms, CandidateObject), Z_Construct_UClass_UARCandidateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::NewProp_CandidateObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see CandidateObjects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "AddCandidateObject", sizeof(ARSessionConfig_eventAddCandidateObject_Parms), Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_AddCandidateObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics
	{
		struct ARSessionConfig_eventGetCandidateImageList_Parms
		{
			TArray<UARCandidateImage*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetCandidateImageList_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UARCandidateImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see CandidateImages" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetCandidateImageList", sizeof(ARSessionConfig_eventGetCandidateImageList_Parms), Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics
	{
		struct ARSessionConfig_eventGetCandidateObjectList_Parms
		{
			TArray<UARCandidateObject*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetCandidateObjectList_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UARCandidateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see CandidateObjects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetCandidateObjectList", sizeof(ARSessionConfig_eventGetCandidateObjectList_Parms), Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics
	{
		struct ARSessionConfig_eventGetDesiredVideoFormat_Parms
		{
			FARVideoFormat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetDesiredVideoFormat_Parms, ReturnValue), Z_Construct_UScriptStruct_FARVideoFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see DesiredVideoFormat" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetDesiredVideoFormat", sizeof(ARSessionConfig_eventGetDesiredVideoFormat_Parms), Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics
	{
		struct ARSessionConfig_eventGetEnvironmentCaptureProbeType_Parms
		{
			EAREnvironmentCaptureProbeType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetEnvironmentCaptureProbeType_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EnvironmentCaptureProbeType" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetEnvironmentCaptureProbeType", sizeof(ARSessionConfig_eventGetEnvironmentCaptureProbeType_Parms), Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics
	{
		struct ARSessionConfig_eventGetFaceTrackingDirection_Parms
		{
			EARFaceTrackingDirection ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetFaceTrackingDirection_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see FaceTrackingDirection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetFaceTrackingDirection", sizeof(ARSessionConfig_eventGetFaceTrackingDirection_Parms), Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics
	{
		struct ARSessionConfig_eventGetFaceTrackingUpdate_Parms
		{
			EARFaceTrackingUpdate ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetFaceTrackingUpdate_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see FaceTrackingUpdate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetFaceTrackingUpdate", sizeof(ARSessionConfig_eventGetFaceTrackingUpdate_Parms), Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics
	{
		struct ARSessionConfig_eventGetFrameSyncMode_Parms
		{
			EARFrameSyncMode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetFrameSyncMode_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see FrameSyncMode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetFrameSyncMode", sizeof(ARSessionConfig_eventGetFrameSyncMode_Parms), Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics
	{
		struct ARSessionConfig_eventGetLightEstimationMode_Parms
		{
			EARLightEstimationMode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetLightEstimationMode_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see LightEstimationMode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetLightEstimationMode", sizeof(ARSessionConfig_eventGetLightEstimationMode_Parms), Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics
	{
		struct ARSessionConfig_eventGetMaxNumSimultaneousImagesTracked_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetMaxNumSimultaneousImagesTracked_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see MaxNumSimultaneousImagesTracked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetMaxNumSimultaneousImagesTracked", sizeof(ARSessionConfig_eventGetMaxNumSimultaneousImagesTracked_Parms), Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics
	{
		struct ARSessionConfig_eventGetPlaneDetectionMode_Parms
		{
			EARPlaneDetectionMode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetPlaneDetectionMode_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see PlaneDetectionMode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetPlaneDetectionMode", sizeof(ARSessionConfig_eventGetPlaneDetectionMode_Parms), Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics
	{
		struct ARSessionConfig_eventGetSessionType_Parms
		{
			EARSessionType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetSessionType_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARSessionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see SessionType" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetSessionType", sizeof(ARSessionConfig_eventGetSessionType_Parms), Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetSessionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics
	{
		struct ARSessionConfig_eventGetWorldAlignment_Parms
		{
			EARWorldAlignment ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetWorldAlignment_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARWorldAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARWorldAlignment" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetWorldAlignment", sizeof(ARSessionConfig_eventGetWorldAlignment_Parms), Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics
	{
		struct ARSessionConfig_eventGetWorldMapData_Parms
		{
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventGetWorldMapData_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see WorldMapData" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "GetWorldMapData", sizeof(ARSessionConfig_eventGetWorldMapData_Parms), Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_GetWorldMapData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics
	{
		struct ARSessionConfig_eventSetCandidateObjectList_Parms
		{
			TArray<UARCandidateObject*> InCandidateObjects;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCandidateObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InCandidateObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCandidateObjects_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects = { "InCandidateObjects", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventSetCandidateObjectList_Parms, InCandidateObjects), METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects_Inner = { "InCandidateObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UARCandidateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::NewProp_InCandidateObjects_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see CandidateObjects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetCandidateObjectList", sizeof(ARSessionConfig_eventSetCandidateObjectList_Parms), Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics
	{
		struct ARSessionConfig_eventSetDesiredVideoFormat_Parms
		{
			FARVideoFormat NewFormat;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewFormat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::NewProp_NewFormat = { "NewFormat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventSetDesiredVideoFormat_Parms, NewFormat), Z_Construct_UScriptStruct_FARVideoFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::NewProp_NewFormat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see DesiredVideoFormat" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetDesiredVideoFormat", sizeof(ARSessionConfig_eventSetDesiredVideoFormat_Parms), Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics
	{
		struct ARSessionConfig_eventSetEnableAutoFocus_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventSetEnableAutoFocus_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARSessionConfig_eventSetEnableAutoFocus_Parms), &Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bEnableAutoFocus" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetEnableAutoFocus", sizeof(ARSessionConfig_eventSetEnableAutoFocus_Parms), Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics
	{
		struct ARSessionConfig_eventSetFaceTrackingDirection_Parms
		{
			EARFaceTrackingDirection InDirection;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InDirection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InDirection_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::NewProp_InDirection = { "InDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventSetFaceTrackingDirection_Parms, InDirection), Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::NewProp_InDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::NewProp_InDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::NewProp_InDirection_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see FaceTrackingDirection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetFaceTrackingDirection", sizeof(ARSessionConfig_eventSetFaceTrackingDirection_Parms), Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics
	{
		struct ARSessionConfig_eventSetFaceTrackingUpdate_Parms
		{
			EARFaceTrackingUpdate InUpdate;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InUpdate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InUpdate_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::NewProp_InUpdate = { "InUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventSetFaceTrackingUpdate_Parms, InUpdate), Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::NewProp_InUpdate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::NewProp_InUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::NewProp_InUpdate_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see FaceTrackingUpdate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetFaceTrackingUpdate", sizeof(ARSessionConfig_eventSetFaceTrackingUpdate_Parms), Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics
	{
		struct ARSessionConfig_eventSetResetCameraTracking_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventSetResetCameraTracking_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARSessionConfig_eventSetResetCameraTracking_Parms), &Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bResetCameraTracking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetResetCameraTracking", sizeof(ARSessionConfig_eventSetResetCameraTracking_Parms), Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics
	{
		struct ARSessionConfig_eventSetResetTrackedObjects_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventSetResetTrackedObjects_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARSessionConfig_eventSetResetTrackedObjects_Parms), &Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bResetTrackedObjects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetResetTrackedObjects", sizeof(ARSessionConfig_eventSetResetTrackedObjects_Parms), Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics
	{
		struct ARSessionConfig_eventSetWorldMapData_Parms
		{
			TArray<uint8> WorldMapData;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorldMapData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WorldMapData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::NewProp_WorldMapData = { "WorldMapData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARSessionConfig_eventSetWorldMapData_Parms, WorldMapData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::NewProp_WorldMapData_Inner = { "WorldMapData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::NewProp_WorldMapData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::NewProp_WorldMapData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see WorldMapData" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "SetWorldMapData", sizeof(ARSessionConfig_eventSetWorldMapData_Parms), Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_SetWorldMapData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics
	{
		struct ARSessionConfig_eventShouldEnableAutoFocus_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventShouldEnableAutoFocus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARSessionConfig_eventShouldEnableAutoFocus_Parms), &Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bEnableAutoFocus" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "ShouldEnableAutoFocus", sizeof(ARSessionConfig_eventShouldEnableAutoFocus_Parms), Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics
	{
		struct ARSessionConfig_eventShouldEnableCameraTracking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventShouldEnableCameraTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARSessionConfig_eventShouldEnableCameraTracking_Parms), &Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bEnableAutomaticCameraTracking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "ShouldEnableCameraTracking", sizeof(ARSessionConfig_eventShouldEnableCameraTracking_Parms), Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics
	{
		struct ARSessionConfig_eventShouldRenderCameraOverlay_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventShouldRenderCameraOverlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARSessionConfig_eventShouldRenderCameraOverlay_Parms), &Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bEnableAutomaticCameraOverlay" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "ShouldRenderCameraOverlay", sizeof(ARSessionConfig_eventShouldRenderCameraOverlay_Parms), Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics
	{
		struct ARSessionConfig_eventShouldResetCameraTracking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventShouldResetCameraTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARSessionConfig_eventShouldResetCameraTracking_Parms), &Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bResetCameraTracking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "ShouldResetCameraTracking", sizeof(ARSessionConfig_eventShouldResetCameraTracking_Parms), Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics
	{
		struct ARSessionConfig_eventShouldResetTrackedObjects_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARSessionConfig_eventShouldResetTrackedObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARSessionConfig_eventShouldResetTrackedObjects_Parms), &Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see bResetTrackedObjects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARSessionConfig, nullptr, "ShouldResetTrackedObjects", sizeof(ARSessionConfig_eventShouldResetTrackedObjects_Parms), Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UARSessionConfig_NoRegister()
	{
		return UARSessionConfig::StaticClass();
	}
	struct Z_Construct_UClass_UARSessionConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SerializedARCandidateImageDatabase_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SerializedARCandidateImageDatabase;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SerializedARCandidateImageDatabase_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceTrackingUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FaceTrackingUpdate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FaceTrackingUpdate_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceTrackingDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FaceTrackingDirection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FaceTrackingDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredVideoFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredVideoFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CandidateObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CandidateObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CandidateObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldMapData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorldMapData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WorldMapData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentCaptureProbeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnvironmentCaptureProbeType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnvironmentCaptureProbeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumSimultaneousImagesTracked_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumSimultaneousImagesTracked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CandidateImages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CandidateImages;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CandidateImages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetTrackedObjects_MetaData[];
#endif
		static void NewProp_bResetTrackedObjects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetTrackedObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetCameraTracking_MetaData[];
#endif
		static void NewProp_bResetCameraTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetCameraTracking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAutomaticCameraTracking_MetaData[];
#endif
		static void NewProp_bEnableAutomaticCameraTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAutomaticCameraTracking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAutomaticCameraOverlay_MetaData[];
#endif
		static void NewProp_bEnableAutomaticCameraOverlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAutomaticCameraOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameSyncMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FrameSyncMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrameSyncMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightEstimationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LightEstimationMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LightEstimationMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoFocus_MetaData[];
#endif
		static void NewProp_bEnableAutoFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVerticalPlaneDetection_MetaData[];
#endif
		static void NewProp_bVerticalPlaneDetection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVerticalPlaneDetection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHorizontalPlaneDetection_MetaData[];
#endif
		static void NewProp_bHorizontalPlaneDetection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHorizontalPlaneDetection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneDetectionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlaneDetectionMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaneDetectionMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SessionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SessionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WorldAlignment;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WorldAlignment_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARSessionConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARSessionConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARSessionConfig_AddCandidateImage, "AddCandidateImage" }, // 1857015984
		{ &Z_Construct_UFunction_UARSessionConfig_AddCandidateObject, "AddCandidateObject" }, // 3543005908
		{ &Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList, "GetCandidateImageList" }, // 1541073429
		{ &Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList, "GetCandidateObjectList" }, // 2586557950
		{ &Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat, "GetDesiredVideoFormat" }, // 2206327809
		{ &Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType, "GetEnvironmentCaptureProbeType" }, // 1847247700
		{ &Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection, "GetFaceTrackingDirection" }, // 3686628013
		{ &Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate, "GetFaceTrackingUpdate" }, // 4192333502
		{ &Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode, "GetFrameSyncMode" }, // 2315415322
		{ &Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode, "GetLightEstimationMode" }, // 2277702689
		{ &Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked, "GetMaxNumSimultaneousImagesTracked" }, // 3904493913
		{ &Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode, "GetPlaneDetectionMode" }, // 3173606380
		{ &Z_Construct_UFunction_UARSessionConfig_GetSessionType, "GetSessionType" }, // 60991691
		{ &Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment, "GetWorldAlignment" }, // 3626417753
		{ &Z_Construct_UFunction_UARSessionConfig_GetWorldMapData, "GetWorldMapData" }, // 4204038063
		{ &Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList, "SetCandidateObjectList" }, // 277920805
		{ &Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat, "SetDesiredVideoFormat" }, // 3136510863
		{ &Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus, "SetEnableAutoFocus" }, // 3654806695
		{ &Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection, "SetFaceTrackingDirection" }, // 3684634493
		{ &Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate, "SetFaceTrackingUpdate" }, // 283826754
		{ &Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking, "SetResetCameraTracking" }, // 306566572
		{ &Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects, "SetResetTrackedObjects" }, // 3183404132
		{ &Z_Construct_UFunction_UARSessionConfig_SetWorldMapData, "SetWorldMapData" }, // 3605809803
		{ &Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus, "ShouldEnableAutoFocus" }, // 1728883182
		{ &Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking, "ShouldEnableCameraTracking" }, // 224792739
		{ &Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay, "ShouldRenderCameraOverlay" }, // 3443316232
		{ &Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking, "ShouldResetCameraTracking" }, // 137210659
		{ &Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects, "ShouldResetTrackedObjects" }, // 1632329029
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR Settings" },
		{ "IncludePath", "ARSessionConfig.h" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Data array for storing the cooked image database" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase = { "SerializedARCandidateImageDatabase", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, SerializedARCandidateImageDatabase), METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase_Inner = { "SerializedARCandidateImageDatabase", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate_MetaData[] = {
		{ "Category", "Face AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether to track the face as if you are looking out of the device or as a mirror" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate = { "FaceTrackingUpdate", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, FaceTrackingUpdate), Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection_MetaData[] = {
		{ "Category", "Face AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether to track the face as if you are looking out of the device or as a mirror" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection = { "FaceTrackingDirection", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, FaceTrackingDirection), Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DesiredVideoFormat_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "The desired video format (or the default if not supported) that this session should use if the camera is enabled\nNote: Call GetSupportedVideoFormats to get a list of device supported formats" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DesiredVideoFormat = { "DesiredVideoFormat", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, DesiredVideoFormat), Z_Construct_UScriptStruct_FARVideoFormat, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DesiredVideoFormat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DesiredVideoFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "A list of candidate objects to search for in the scene" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects = { "CandidateObjects", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, CandidateObjects), METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects_Inner = { "CandidateObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UARCandidateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "A previously saved world that is to be loaded when the session starts" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData = { "WorldMapData", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, WorldMapData), METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData_Inner = { "WorldMapData", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "How the AR system should handle texture probe capturing" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType = { "EnvironmentCaptureProbeType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, EnvironmentCaptureProbeType), Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MaxNumSimultaneousImagesTracked_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "The maximum number of images to track at the same time. Defaults to 1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MaxNumSimultaneousImagesTracked = { "MaxNumSimultaneousImagesTracked", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, MaxNumSimultaneousImagesTracked), METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MaxNumSimultaneousImagesTracked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MaxNumSimultaneousImagesTracked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "The list of candidate images to detect within the AR camera view" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages = { "CandidateImages", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, CandidateImages), METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages_Inner = { "CandidateImages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UARCandidateImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether the AR system should remove any tracked objects or not. Defaults to true." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bResetTrackedObjects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects = { "bResetTrackedObjects", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether the AR system should reset camera tracking (origin, transform) or not. Defaults to true." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bResetCameraTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking = { "bResetCameraTracking", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether the game camera should track the device movement or not. Defaults to true." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bEnableAutomaticCameraTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking = { "bEnableAutomaticCameraTracking", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether the AR camera feed should be drawn as an overlay or not. Defaults to true." },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bEnableAutomaticCameraOverlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay = { "bEnableAutomaticCameraOverlay", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARFrameSyncMode" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode = { "FrameSyncMode", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, FrameSyncMode), Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARLightEstimationMode" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode = { "LightEstimationMode", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, LightEstimationMode), Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Whether the camera should use autofocus or not (can cause subtle shifts in position for small objects at macro camera distance)" },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bEnableAutoFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus = { "bEnableAutoFocus", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Should we detect flat vertical surfaces: e.g. paintings, monitors, book cases" },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bVerticalPlaneDetection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection = { "bVerticalPlaneDetection", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "Should we detect flat horizontal surfaces: e.g. table tops, windows sills" },
	};
#endif
	void Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection_SetBit(void* Obj)
	{
		((UARSessionConfig*)Obj)->bHorizontalPlaneDetection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection = { "bHorizontalPlaneDetection", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UARSessionConfig), &Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARPlaneDetectionMode" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode = { "PlaneDetectionMode", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, PlaneDetectionMode_DEPRECATED), Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARSessionType" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, SessionType), Z_Construct_UEnum_AugmentedReality_EARSessionType, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/ARSessionConfig.h" },
		{ "ToolTip", "@see EARWorldAlignment" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment = { "WorldAlignment", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UARSessionConfig, WorldAlignment), Z_Construct_UEnum_AugmentedReality_EARWorldAlignment, METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARSessionConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SerializedARCandidateImageDatabase_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingUpdate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FaceTrackingDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_DesiredVideoFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldMapData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_EnvironmentCaptureProbeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_MaxNumSimultaneousImagesTracked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_CandidateImages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_FrameSyncMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_LightEstimationMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_PlaneDetectionMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_SessionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARSessionConfig_Statics::NewProp_WorldAlignment_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARSessionConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARSessionConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UARSessionConfig_Statics::ClassParams = {
		&UARSessionConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARSessionConfig_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARSessionConfig_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UARSessionConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARSessionConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UARSessionConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UARSessionConfig, 3797677193);
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARSessionConfig>()
	{
		return UARSessionConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UARSessionConfig(Z_Construct_UClass_UARSessionConfig, &UARSessionConfig::StaticClass, TEXT("/Script/AugmentedReality"), TEXT("UARSessionConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARSessionConfig);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UARSessionConfig)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
