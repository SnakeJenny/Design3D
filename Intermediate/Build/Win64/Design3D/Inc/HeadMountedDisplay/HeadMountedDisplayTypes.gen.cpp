// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeadMountedDisplayTypes() {}
// Cross Module References
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector();
// End Cross Module References
	static UEnum* EXRTrackedDeviceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("EXRTrackedDeviceType"));
		}
		return Singleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EXRTrackedDeviceType>()
	{
		return EXRTrackedDeviceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EXRTrackedDeviceType(EXRTrackedDeviceType_StaticEnum, TEXT("/Script/HeadMountedDisplay"), TEXT("EXRTrackedDeviceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType_Hash() { return 4210576017U; }
	UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HeadMountedDisplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EXRTrackedDeviceType"), 0, Get_Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EXRTrackedDeviceType::HeadMountedDisplay", (int64)EXRTrackedDeviceType::HeadMountedDisplay },
				{ "EXRTrackedDeviceType::Controller", (int64)EXRTrackedDeviceType::Controller },
				{ "EXRTrackedDeviceType::TrackingReference", (int64)EXRTrackedDeviceType::TrackingReference },
				{ "EXRTrackedDeviceType::Other", (int64)EXRTrackedDeviceType::Other },
				{ "EXRTrackedDeviceType::Invalid", (int64)EXRTrackedDeviceType::Invalid },
				{ "EXRTrackedDeviceType::Any", (int64)EXRTrackedDeviceType::Any },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Any.ToolTip", "Pass to EnumerateTrackedDevices to get all devices regardless of type" },
				{ "BlueprintType", "true" },
				{ "Controller.ToolTip", "Represents a controller" },
				{ "HeadMountedDisplay.ToolTip", "Represents a head mounted display" },
				{ "Invalid.Hidden", "" },
				{ "Invalid.ToolTip", "DeviceId is invalid" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
				{ "Other.ToolTip", "Misc. device types, for future expansion" },
				{ "TrackingReference.ToolTip", "Represents a static tracking reference device, such as a Lighthouse or tracking camera" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
				nullptr,
				"EXRTrackedDeviceType",
				"EXRTrackedDeviceType",
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
	static UEnum* ESpectatorScreenMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("ESpectatorScreenMode"));
		}
		return Singleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<ESpectatorScreenMode>()
	{
		return ESpectatorScreenMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpectatorScreenMode(ESpectatorScreenMode_StaticEnum, TEXT("/Script/HeadMountedDisplay"), TEXT("ESpectatorScreenMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode_Hash() { return 1303143850U; }
	UEnum* Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HeadMountedDisplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpectatorScreenMode"), 0, Get_Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpectatorScreenMode::Disabled", (int64)ESpectatorScreenMode::Disabled },
				{ "ESpectatorScreenMode::SingleEyeLetterboxed", (int64)ESpectatorScreenMode::SingleEyeLetterboxed },
				{ "ESpectatorScreenMode::Undistorted", (int64)ESpectatorScreenMode::Undistorted },
				{ "ESpectatorScreenMode::Distorted", (int64)ESpectatorScreenMode::Distorted },
				{ "ESpectatorScreenMode::SingleEye", (int64)ESpectatorScreenMode::SingleEye },
				{ "ESpectatorScreenMode::SingleEyeCroppedToFill", (int64)ESpectatorScreenMode::SingleEyeCroppedToFill },
				{ "ESpectatorScreenMode::Texture", (int64)ESpectatorScreenMode::Texture },
				{ "ESpectatorScreenMode::TexturePlusEye", (int64)ESpectatorScreenMode::TexturePlusEye },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Disabled.DisplayName", "Disabled" },
				{ "Distorted.DisplayName", "Distorted" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
				{ "SingleEye.DisplayName", "SingleEye" },
				{ "SingleEyeCroppedToFill.DisplayName", "SingleEyeCroppedToFill" },
				{ "SingleEyeLetterboxed.DisplayName", "SingleEyeLetterboxed" },
				{ "Texture.DisplayName", "Texture" },
				{ "TexturePlusEye.DisplayName", "TexturePlusEye" },
				{ "ToolTip", "The Spectator Screen Mode controls what the non-vr video device displays on platforms that support one.\nNot all modes are universal.\nModes SingleEyeCroppedToFill, Texture, and MirrorPlusTexture are supported on all.\nDisabled is supported on all except PSVR." },
				{ "Undistorted.DisplayName", "Undistorted" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
				nullptr,
				"ESpectatorScreenMode",
				"ESpectatorScreenMode",
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
	static UEnum* EHMDWornState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("EHMDWornState"));
		}
		return Singleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EHMDWornState::Type>()
	{
		return EHMDWornState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHMDWornState(EHMDWornState_StaticEnum, TEXT("/Script/HeadMountedDisplay"), TEXT("EHMDWornState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState_Hash() { return 602382703U; }
	UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HeadMountedDisplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHMDWornState"), 0, Get_Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHMDWornState::Unknown", (int64)EHMDWornState::Unknown },
				{ "EHMDWornState::Worn", (int64)EHMDWornState::Worn },
				{ "EHMDWornState::NotWorn", (int64)EHMDWornState::NotWorn },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
				{ "NotWorn.DisplayName", "Not Worn" },
				{ "ToolTip", "Stores if the user is wearing the HMD or not. For HMDs without a sensor to detect the user wearing it, the state defaults to Unknown." },
				{ "Unknown.DisplayName", "Unknown" },
				{ "Worn.DisplayName", "Worn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
				nullptr,
				"EHMDWornState",
				"EHMDWornState::Type",
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
	static UEnum* EHMDTrackingOrigin_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("EHMDTrackingOrigin"));
		}
		return Singleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EHMDTrackingOrigin::Type>()
	{
		return EHMDTrackingOrigin_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHMDTrackingOrigin(EHMDTrackingOrigin_StaticEnum, TEXT("/Script/HeadMountedDisplay"), TEXT("EHMDTrackingOrigin"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin_Hash() { return 3325205628U; }
	UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HeadMountedDisplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHMDTrackingOrigin"), 0, Get_Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHMDTrackingOrigin::Floor", (int64)EHMDTrackingOrigin::Floor },
				{ "EHMDTrackingOrigin::Eye", (int64)EHMDTrackingOrigin::Eye },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Eye.DisplayName", "Eye Level" },
				{ "Floor.DisplayName", "Floor Level" },
				{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
				{ "ToolTip", "For HMDs that support it, this specifies whether the origin of the tracking universe will be at the floor, or at the user's eye height" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
				nullptr,
				"EHMDTrackingOrigin",
				"EHMDTrackingOrigin::Type",
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
	static UEnum* EOrientPositionSelector_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector, Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("EOrientPositionSelector"));
		}
		return Singleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EOrientPositionSelector::Type>()
	{
		return EOrientPositionSelector_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOrientPositionSelector(EOrientPositionSelector_StaticEnum, TEXT("/Script/HeadMountedDisplay"), TEXT("EOrientPositionSelector"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector_Hash() { return 1300614090U; }
	UEnum* Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HeadMountedDisplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOrientPositionSelector"), 0, Get_Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOrientPositionSelector::Orientation", (int64)EOrientPositionSelector::Orientation },
				{ "EOrientPositionSelector::Position", (int64)EOrientPositionSelector::Position },
				{ "EOrientPositionSelector::OrientationAndPosition", (int64)EOrientPositionSelector::OrientationAndPosition },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
				{ "Orientation.DisplayName", "Orientation" },
				{ "OrientationAndPosition.DisplayName", "Orientation and Position" },
				{ "Position.DisplayName", "Position" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
				nullptr,
				"EOrientPositionSelector",
				"EOrientPositionSelector::Type",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
