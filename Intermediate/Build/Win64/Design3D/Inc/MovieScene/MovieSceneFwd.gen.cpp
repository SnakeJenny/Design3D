// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/MovieSceneFwd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFwd() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EUpdateClockSource();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus();
// End Cross Module References
	static UEnum* EUpdateClockSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EUpdateClockSource, Z_Construct_UPackage__Script_MovieScene(), TEXT("EUpdateClockSource"));
		}
		return Singleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EUpdateClockSource>()
	{
		return EUpdateClockSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUpdateClockSource(EUpdateClockSource_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EUpdateClockSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EUpdateClockSource_Hash() { return 861156311U; }
	UEnum* Z_Construct_UEnum_MovieScene_EUpdateClockSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUpdateClockSource"), 0, Get_Z_Construct_UEnum_MovieScene_EUpdateClockSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUpdateClockSource::Tick", (int64)EUpdateClockSource::Tick },
				{ "EUpdateClockSource::Platform", (int64)EUpdateClockSource::Platform },
				{ "EUpdateClockSource::Audio", (int64)EUpdateClockSource::Audio },
				{ "EUpdateClockSource::Timecode", (int64)EUpdateClockSource::Timecode },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Audio.ToolTip", "Use the audio clock for timing. Does not honor world or actor pause state." },
				{ "ModuleRelativePath", "Public/MovieSceneFwd.h" },
				{ "Platform.ToolTip", "Use the platform clock for timing. Does not honor world or actor pause state." },
				{ "Tick.ToolTip", "Use the default world tick delta for timing. Honors world and actor pause state, but is susceptible to accumulation errors" },
				{ "Timecode.ToolTip", "Use current timecode provider for timing. Does not honor world or actor pause state." },
				{ "ToolTip", "Enum used to define how to update to a particular time" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				"EUpdateClockSource",
				"EUpdateClockSource",
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
	static UEnum* EMovieSceneEvaluationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType, Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneEvaluationType"));
		}
		return Singleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneEvaluationType>()
	{
		return EMovieSceneEvaluationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieSceneEvaluationType(EMovieSceneEvaluationType_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EMovieSceneEvaluationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType_Hash() { return 2844380165U; }
	UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieSceneEvaluationType"), 0, Get_Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieSceneEvaluationType::FrameLocked", (int64)EMovieSceneEvaluationType::FrameLocked },
				{ "EMovieSceneEvaluationType::WithSubFrames", (int64)EMovieSceneEvaluationType::WithSubFrames },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FrameLocked.ToolTip", "Play the sequence frame-locked to its playback rate (snapped to the tick resolution - no sub-frames)" },
				{ "ModuleRelativePath", "Public/MovieSceneFwd.h" },
				{ "WithSubFrames.ToolTip", "Play the sequence in real-time, with sub-frame interpolation if necessary" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				"EMovieSceneEvaluationType",
				"EMovieSceneEvaluationType",
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
	static UEnum* EMovieScenePlayerStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus, Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieScenePlayerStatus"));
		}
		return Singleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EMovieScenePlayerStatus::Type>()
	{
		return EMovieScenePlayerStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieScenePlayerStatus(EMovieScenePlayerStatus_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EMovieScenePlayerStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus_Hash() { return 4004485863U; }
	UEnum* Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieScenePlayerStatus"), 0, Get_Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieScenePlayerStatus::Stopped", (int64)EMovieScenePlayerStatus::Stopped },
				{ "EMovieScenePlayerStatus::Playing", (int64)EMovieScenePlayerStatus::Playing },
				{ "EMovieScenePlayerStatus::Recording", (int64)EMovieScenePlayerStatus::Recording },
				{ "EMovieScenePlayerStatus::Scrubbing", (int64)EMovieScenePlayerStatus::Scrubbing },
				{ "EMovieScenePlayerStatus::Jumping", (int64)EMovieScenePlayerStatus::Jumping },
				{ "EMovieScenePlayerStatus::Stepping", (int64)EMovieScenePlayerStatus::Stepping },
				{ "EMovieScenePlayerStatus::Paused", (int64)EMovieScenePlayerStatus::Paused },
				{ "EMovieScenePlayerStatus::MAX", (int64)EMovieScenePlayerStatus::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MovieSceneFwd.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				nullptr,
				"EMovieScenePlayerStatus",
				"EMovieScenePlayerStatus::Type",
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
