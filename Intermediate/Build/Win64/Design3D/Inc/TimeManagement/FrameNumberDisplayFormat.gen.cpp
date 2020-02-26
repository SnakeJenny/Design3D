// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeManagement/Public/FrameNumberDisplayFormat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrameNumberDisplayFormat() {}
// Cross Module References
	TIMEMANAGEMENT_API UEnum* Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats();
	UPackage* Z_Construct_UPackage__Script_TimeManagement();
// End Cross Module References
	static UEnum* EFrameNumberDisplayFormats_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats, Z_Construct_UPackage__Script_TimeManagement(), TEXT("EFrameNumberDisplayFormats"));
		}
		return Singleton;
	}
	template<> TIMEMANAGEMENT_API UEnum* StaticEnum<EFrameNumberDisplayFormats>()
	{
		return EFrameNumberDisplayFormats_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFrameNumberDisplayFormats(EFrameNumberDisplayFormats_StaticEnum, TEXT("/Script/TimeManagement"), TEXT("EFrameNumberDisplayFormats"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats_Hash() { return 3311866084U; }
	UEnum* Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TimeManagement();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFrameNumberDisplayFormats"), 0, Get_Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFrameNumberDisplayFormats::NonDropFrameTimecode", (int64)EFrameNumberDisplayFormats::NonDropFrameTimecode },
				{ "EFrameNumberDisplayFormats::DropFrameTimecode", (int64)EFrameNumberDisplayFormats::DropFrameTimecode },
				{ "EFrameNumberDisplayFormats::Seconds", (int64)EFrameNumberDisplayFormats::Seconds },
				{ "EFrameNumberDisplayFormats::Frames", (int64)EFrameNumberDisplayFormats::Frames },
				{ "EFrameNumberDisplayFormats::MAX_Count", (int64)EFrameNumberDisplayFormats::MAX_Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DropFrameTimecode.DisplayName", "DF Timecode" },
				{ "DropFrameTimecode.ToolTip", "Drop Frame Timecode" },
				{ "MAX_Count.Hidden", "" },
				{ "ModuleRelativePath", "Public/FrameNumberDisplayFormat.h" },
				{ "NonDropFrameTimecode.DisplayName", "NDF Timecode" },
				{ "NonDropFrameTimecode.ToolTip", "Non-Drop Frame Timecode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TimeManagement,
				nullptr,
				"EFrameNumberDisplayFormats",
				"EFrameNumberDisplayFormats",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
