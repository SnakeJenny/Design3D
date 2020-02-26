// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EyeTracker/Public/EyeTrackerTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEyeTrackerTypes() {}
// Cross Module References
	EYETRACKER_API UEnum* Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus();
	UPackage* Z_Construct_UPackage__Script_EyeTracker();
	EYETRACKER_API UScriptStruct* Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EYETRACKER_API UScriptStruct* Z_Construct_UScriptStruct_FEyeTrackerGazeData();
// End Cross Module References
	static UEnum* EEyeTrackerStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus, Z_Construct_UPackage__Script_EyeTracker(), TEXT("EEyeTrackerStatus"));
		}
		return Singleton;
	}
	template<> EYETRACKER_API UEnum* StaticEnum<EEyeTrackerStatus>()
	{
		return EEyeTrackerStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEyeTrackerStatus(EEyeTrackerStatus_StaticEnum, TEXT("/Script/EyeTracker"), TEXT("EEyeTrackerStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus_Hash() { return 890809996U; }
	UEnum* Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EyeTracker();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEyeTrackerStatus"), 0, Get_Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEyeTrackerStatus::NotConnected", (int64)EEyeTrackerStatus::NotConnected },
				{ "EEyeTrackerStatus::NotTracking", (int64)EEyeTrackerStatus::NotTracking },
				{ "EEyeTrackerStatus::Tracking", (int64)EEyeTrackerStatus::Tracking },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
				{ "NotConnected.ToolTip", "Eyetracking feature is not available (device not plugged in, etc)" },
				{ "NotTracking.ToolTip", "Eyetracking is operating, but eyes are not being tracked" },
				{ "Tracking.ToolTip", "Eyetracking is operating and eyes are being tracked" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EyeTracker,
				nullptr,
				"EEyeTrackerStatus",
				"EEyeTrackerStatus",
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
class UScriptStruct* FEyeTrackerStereoGazeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EYETRACKER_API uint32 Get_Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData, Z_Construct_UPackage__Script_EyeTracker(), TEXT("EyeTrackerStereoGazeData"), sizeof(FEyeTrackerStereoGazeData), Get_Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Hash());
	}
	return Singleton;
}
template<> EYETRACKER_API UScriptStruct* StaticStruct<FEyeTrackerStereoGazeData>()
{
	return FEyeTrackerStereoGazeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEyeTrackerStereoGazeData(FEyeTrackerStereoGazeData::StaticStruct, TEXT("/Script/EyeTracker"), TEXT("EyeTrackerStereoGazeData"), false, nullptr, nullptr);
static struct FScriptStruct_EyeTracker_StaticRegisterNativesFEyeTrackerStereoGazeData
{
	FScriptStruct_EyeTracker_StaticRegisterNativesFEyeTrackerStereoGazeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EyeTrackerStereoGazeData")),new UScriptStruct::TCppStructOps<FEyeTrackerStereoGazeData>);
	}
} ScriptStruct_EyeTracker_StaticRegisterNativesFEyeTrackerStereoGazeData;
	struct Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfidenceValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConfidenceValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixationPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FixationPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightEyeDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightEyeDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightEyeOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightEyeOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftEyeDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftEyeDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftEyeOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftEyeOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Stereo gaze data that contains information for each eye individually.\nThis may not be available with all devices." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEyeTrackerStereoGazeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_ConfidenceValue_MetaData[] = {
		{ "Category", "Stereo Gaze Data" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Value [0..1] that represents confidence in the gaze ray data above. Stable, reliably tracked eyes will be at or near 1. Fast-moving or unreliably tracked eyes will be at or near 0." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_ConfidenceValue = { "ConfidenceValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEyeTrackerStereoGazeData, ConfidenceValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_ConfidenceValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_ConfidenceValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_FixationPoint_MetaData[] = {
		{ "Category", "Stereo Gaze Data" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Location that the eyes converge. This is the 3d point where the tracked viewer is looking." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_FixationPoint = { "FixationPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEyeTrackerStereoGazeData, FixationPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_FixationPoint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_FixationPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_RightEyeDirection_MetaData[] = {
		{ "Category", "Stereo Gaze Data" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Forward direction of the right eye's gaze ray." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_RightEyeDirection = { "RightEyeDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEyeTrackerStereoGazeData, RightEyeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_RightEyeDirection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_RightEyeDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_RightEyeOrigin_MetaData[] = {
		{ "Category", "Stereo Gaze Data" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Origin of the right eye's gaze ray." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_RightEyeOrigin = { "RightEyeOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEyeTrackerStereoGazeData, RightEyeOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_RightEyeOrigin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_RightEyeOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_LeftEyeDirection_MetaData[] = {
		{ "Category", "Stereo Gaze Data" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Forward direction of the left eye's gaze ray." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_LeftEyeDirection = { "LeftEyeDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEyeTrackerStereoGazeData, LeftEyeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_LeftEyeDirection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_LeftEyeDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_LeftEyeOrigin_MetaData[] = {
		{ "Category", "Stereo Gaze Data" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Origin of the left eye's gaze ray." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_LeftEyeOrigin = { "LeftEyeOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEyeTrackerStereoGazeData, LeftEyeOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_LeftEyeOrigin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_LeftEyeOrigin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_ConfidenceValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_FixationPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_RightEyeDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_RightEyeOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_LeftEyeDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_LeftEyeOrigin,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EyeTracker,
		nullptr,
		&NewStructOps,
		"EyeTrackerStereoGazeData",
		sizeof(FEyeTrackerStereoGazeData),
		alignof(FEyeTrackerStereoGazeData),
		Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EyeTracker();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EyeTrackerStereoGazeData"), sizeof(FEyeTrackerStereoGazeData), Get_Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Hash() { return 3357058568U; }
class UScriptStruct* FEyeTrackerGazeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EYETRACKER_API uint32 Get_Z_Construct_UScriptStruct_FEyeTrackerGazeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEyeTrackerGazeData, Z_Construct_UPackage__Script_EyeTracker(), TEXT("EyeTrackerGazeData"), sizeof(FEyeTrackerGazeData), Get_Z_Construct_UScriptStruct_FEyeTrackerGazeData_Hash());
	}
	return Singleton;
}
template<> EYETRACKER_API UScriptStruct* StaticStruct<FEyeTrackerGazeData>()
{
	return FEyeTrackerGazeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEyeTrackerGazeData(FEyeTrackerGazeData::StaticStruct, TEXT("/Script/EyeTracker"), TEXT("EyeTrackerGazeData"), false, nullptr, nullptr);
static struct FScriptStruct_EyeTracker_StaticRegisterNativesFEyeTrackerGazeData
{
	FScriptStruct_EyeTracker_StaticRegisterNativesFEyeTrackerGazeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EyeTrackerGazeData")),new UScriptStruct::TCppStructOps<FEyeTrackerGazeData>);
	}
} ScriptStruct_EyeTracker_StaticRegisterNativesFEyeTrackerGazeData;
	struct Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfidenceValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConfidenceValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixationPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FixationPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GazeDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GazeDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GazeOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GazeOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Represents a unified gaze ray that incorporates both eyes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEyeTrackerGazeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_ConfidenceValue_MetaData[] = {
		{ "Category", "Gaze Data" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Value [0..1] that represents confidence in the gaze ray data above. Stable, reliably tracked eyes will be at or near 1. Fast-moving or unreliably tracked eyes will be at or near 0." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_ConfidenceValue = { "ConfidenceValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEyeTrackerGazeData, ConfidenceValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_ConfidenceValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_ConfidenceValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_FixationPoint_MetaData[] = {
		{ "Category", "Gaze Data" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Location that the eyes converge. This is the 3d point where the tracked viewer is looking." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_FixationPoint = { "FixationPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEyeTrackerGazeData, FixationPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_FixationPoint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_FixationPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_GazeDirection_MetaData[] = {
		{ "Category", "Gaze Data" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Forward direction of the unified gaze ray." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_GazeDirection = { "GazeDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEyeTrackerGazeData, GazeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_GazeDirection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_GazeDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_GazeOrigin_MetaData[] = {
		{ "Category", "Gaze Data" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Origin of the unified gaze ray." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_GazeOrigin = { "GazeOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEyeTrackerGazeData, GazeOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_GazeOrigin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_GazeOrigin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_ConfidenceValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_FixationPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_GazeDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_GazeOrigin,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EyeTracker,
		nullptr,
		&NewStructOps,
		"EyeTrackerGazeData",
		sizeof(FEyeTrackerGazeData),
		alignof(FEyeTrackerGazeData),
		Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEyeTrackerGazeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEyeTrackerGazeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EyeTracker();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EyeTrackerGazeData"), sizeof(FEyeTrackerGazeData), Get_Z_Construct_UScriptStruct_FEyeTrackerGazeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEyeTrackerGazeData_Hash() { return 1553831603U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
