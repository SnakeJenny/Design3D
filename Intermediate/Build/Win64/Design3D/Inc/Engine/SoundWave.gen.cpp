// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundWave.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundWave() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundWaveFFTSize();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDecompressionType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveSpectralData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamedAudioPlatformData();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase();
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitleCue();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundGroup();
	AUDIOPLATFORMCONFIGURATION_API UEnum* Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings();
// End Cross Module References
	static UEnum* ESoundWaveFFTSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESoundWaveFFTSize, Z_Construct_UPackage__Script_Engine(), TEXT("ESoundWaveFFTSize"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESoundWaveFFTSize>()
	{
		return ESoundWaveFFTSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESoundWaveFFTSize(ESoundWaveFFTSize_StaticEnum, TEXT("/Script/Engine"), TEXT("ESoundWaveFFTSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESoundWaveFFTSize_Hash() { return 1457071912U; }
	UEnum* Z_Construct_UEnum_Engine_ESoundWaveFFTSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESoundWaveFFTSize"), 0, Get_Z_Construct_UEnum_Engine_ESoundWaveFFTSize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESoundWaveFFTSize::VerySmall_64", (int64)ESoundWaveFFTSize::VerySmall_64 },
				{ "ESoundWaveFFTSize::Small_256", (int64)ESoundWaveFFTSize::Small_256 },
				{ "ESoundWaveFFTSize::Medium_512", (int64)ESoundWaveFFTSize::Medium_512 },
				{ "ESoundWaveFFTSize::Large_1024", (int64)ESoundWaveFFTSize::Large_1024 },
				{ "ESoundWaveFFTSize::VeryLarge_2048", (int64)ESoundWaveFFTSize::VeryLarge_2048 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
				{ "ToolTip", "The FFT size (in audio frames) to use for baked FFT analysis" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESoundWaveFFTSize",
				"ESoundWaveFFTSize",
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
	static UEnum* EDecompressionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDecompressionType, Z_Construct_UPackage__Script_Engine(), TEXT("EDecompressionType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDecompressionType>()
	{
		return EDecompressionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDecompressionType(EDecompressionType_StaticEnum, TEXT("/Script/Engine"), TEXT("EDecompressionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDecompressionType_Hash() { return 1595365090U; }
	UEnum* Z_Construct_UEnum_Engine_EDecompressionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDecompressionType"), 0, Get_Z_Construct_UEnum_Engine_EDecompressionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DTYPE_Setup", (int64)DTYPE_Setup },
				{ "DTYPE_Invalid", (int64)DTYPE_Invalid },
				{ "DTYPE_Preview", (int64)DTYPE_Preview },
				{ "DTYPE_Native", (int64)DTYPE_Native },
				{ "DTYPE_RealTime", (int64)DTYPE_RealTime },
				{ "DTYPE_Procedural", (int64)DTYPE_Procedural },
				{ "DTYPE_Xenon", (int64)DTYPE_Xenon },
				{ "DTYPE_Streaming", (int64)DTYPE_Streaming },
				{ "DTYPE_MAX", (int64)DTYPE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EDecompressionType",
				"EDecompressionType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSoundWaveEnvelopeTimeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData, Z_Construct_UPackage__Script_Engine(), TEXT("SoundWaveEnvelopeTimeData"), sizeof(FSoundWaveEnvelopeTimeData), Get_Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundWaveEnvelopeTimeData>()
{
	return FSoundWaveEnvelopeTimeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundWaveEnvelopeTimeData(FSoundWaveEnvelopeTimeData::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundWaveEnvelopeTimeData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundWaveEnvelopeTimeData
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundWaveEnvelopeTimeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundWaveEnvelopeTimeData")),new UScriptStruct::TCppStructOps<FSoundWaveEnvelopeTimeData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundWaveEnvelopeTimeData;
	struct Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Struct used to store time-stamped envelope data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundWaveEnvelopeTimeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::NewProp_TimeSec_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The timestamp of the audio" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::NewProp_TimeSec = { "TimeSec", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundWaveEnvelopeTimeData, TimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::NewProp_TimeSec_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::NewProp_TimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::NewProp_Amplitude_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The normalized linear amplitude of the audio" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundWaveEnvelopeTimeData, Amplitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::NewProp_Amplitude_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::NewProp_Amplitude_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::NewProp_TimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::NewProp_Amplitude,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundWaveEnvelopeTimeData",
		sizeof(FSoundWaveEnvelopeTimeData),
		alignof(FSoundWaveEnvelopeTimeData),
		Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundWaveEnvelopeTimeData"), sizeof(FSoundWaveEnvelopeTimeData), Get_Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Hash() { return 996035182U; }
class UScriptStruct* FSoundWaveSpectralTimeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData, Z_Construct_UPackage__Script_Engine(), TEXT("SoundWaveSpectralTimeData"), sizeof(FSoundWaveSpectralTimeData), Get_Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundWaveSpectralTimeData>()
{
	return FSoundWaveSpectralTimeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundWaveSpectralTimeData(FSoundWaveSpectralTimeData::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundWaveSpectralTimeData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundWaveSpectralTimeData
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundWaveSpectralTimeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundWaveSpectralTimeData")),new UScriptStruct::TCppStructOps<FSoundWaveSpectralTimeData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundWaveSpectralTimeData;
	struct Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Struct used to store spectral data with time-stamps" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundWaveSpectralTimeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewProp_TimeSec_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The timestamp associated with this spectral data" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewProp_TimeSec = { "TimeSec", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundWaveSpectralTimeData, TimeSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewProp_TimeSec_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewProp_TimeSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The spectral data at the given time. The array indices correspond to the frequencies set to analyze." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundWaveSpectralTimeData, Data), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewProp_Data_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewProp_TimeSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::NewProp_Data_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundWaveSpectralTimeData",
		sizeof(FSoundWaveSpectralTimeData),
		alignof(FSoundWaveSpectralTimeData),
		Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundWaveSpectralTimeData"), sizeof(FSoundWaveSpectralTimeData), Get_Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Hash() { return 1121806545U; }
class UScriptStruct* FSoundWaveSpectralDataEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry, Z_Construct_UPackage__Script_Engine(), TEXT("SoundWaveSpectralDataEntry"), sizeof(FSoundWaveSpectralDataEntry), Get_Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundWaveSpectralDataEntry>()
{
	return FSoundWaveSpectralDataEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundWaveSpectralDataEntry(FSoundWaveSpectralDataEntry::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundWaveSpectralDataEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundWaveSpectralDataEntry
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundWaveSpectralDataEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundWaveSpectralDataEntry")),new UScriptStruct::TCppStructOps<FSoundWaveSpectralDataEntry>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundWaveSpectralDataEntry;
	struct Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalizedMagnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalizedMagnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Struct used to store spectral data with time-stamps" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundWaveSpectralDataEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::NewProp_NormalizedMagnitude_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The normalized magnitude of the spectrum at this frequency" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::NewProp_NormalizedMagnitude = { "NormalizedMagnitude", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundWaveSpectralDataEntry, NormalizedMagnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::NewProp_NormalizedMagnitude_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::NewProp_NormalizedMagnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::NewProp_Magnitude_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The magnitude of the spectrum at this frequency" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundWaveSpectralDataEntry, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::NewProp_Magnitude_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::NewProp_Magnitude_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::NewProp_NormalizedMagnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::NewProp_Magnitude,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundWaveSpectralDataEntry",
		sizeof(FSoundWaveSpectralDataEntry),
		alignof(FSoundWaveSpectralDataEntry),
		Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundWaveSpectralDataEntry"), sizeof(FSoundWaveSpectralDataEntry), Get_Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Hash() { return 3020043374U; }
class UScriptStruct* FSoundWaveSpectralData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundWaveSpectralData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundWaveSpectralData, Z_Construct_UPackage__Script_Engine(), TEXT("SoundWaveSpectralData"), sizeof(FSoundWaveSpectralData), Get_Z_Construct_UScriptStruct_FSoundWaveSpectralData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundWaveSpectralData>()
{
	return FSoundWaveSpectralData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundWaveSpectralData(FSoundWaveSpectralData::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundWaveSpectralData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundWaveSpectralData
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundWaveSpectralData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundWaveSpectralData")),new UScriptStruct::TCppStructOps<FSoundWaveSpectralData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundWaveSpectralData;
	struct Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalizedMagnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalizedMagnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrequencyHz_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequencyHz;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Struct used to retrieve the spectral magnitude of an audio signal at a given frequency to BP" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundWaveSpectralData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_NormalizedMagnitude_MetaData[] = {
		{ "Category", "SpectralData|Bar" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The normalized magnitude of the spectrum at this frequency" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_NormalizedMagnitude = { "NormalizedMagnitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundWaveSpectralData, NormalizedMagnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_NormalizedMagnitude_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_NormalizedMagnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "SpectralData|Bar" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The magnitude of the spectrum at this frequency" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundWaveSpectralData, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_Magnitude_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_FrequencyHz_MetaData[] = {
		{ "Category", "SpectralData|Foo" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The frequency hz of the spectrum value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_FrequencyHz = { "FrequencyHz", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundWaveSpectralData, FrequencyHz), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_FrequencyHz_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_FrequencyHz_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_NormalizedMagnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_Magnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::NewProp_FrequencyHz,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundWaveSpectralData",
		sizeof(FSoundWaveSpectralData),
		alignof(FSoundWaveSpectralData),
		Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveSpectralData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundWaveSpectralData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundWaveSpectralData"), sizeof(FSoundWaveSpectralData), Get_Z_Construct_UScriptStruct_FSoundWaveSpectralData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundWaveSpectralData_Hash() { return 1578354444U; }
class UScriptStruct* FStreamedAudioPlatformData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamedAudioPlatformData, Z_Construct_UPackage__Script_Engine(), TEXT("StreamedAudioPlatformData"), sizeof(FStreamedAudioPlatformData), Get_Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStreamedAudioPlatformData>()
{
	return FStreamedAudioPlatformData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreamedAudioPlatformData(FStreamedAudioPlatformData::StaticStruct, TEXT("/Script/Engine"), TEXT("StreamedAudioPlatformData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStreamedAudioPlatformData
{
	FScriptStruct_Engine_StaticRegisterNativesFStreamedAudioPlatformData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreamedAudioPlatformData")),new UScriptStruct::TCppStructOps<FStreamedAudioPlatformData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStreamedAudioPlatformData;
	struct Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Platform-specific data used streaming audio at runtime." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamedAudioPlatformData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StreamedAudioPlatformData",
		sizeof(FStreamedAudioPlatformData),
		alignof(FStreamedAudioPlatformData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreamedAudioPlatformData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreamedAudioPlatformData"), sizeof(FStreamedAudioPlatformData), Get_Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Hash() { return 2446676977U; }
	void USoundWave::StaticRegisterNativesUSoundWave()
	{
	}
	UClass* Z_Construct_UClass_USoundWave_NoRegister()
	{
		return USoundWave::StaticClass();
	}
	struct Z_Construct_UClass_USoundWave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCurves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Curves;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Subtitles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Subtitles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelSizes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChannelSizes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChannelSizes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChannelOffsets;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChannelOffsets_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SubtitlePriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpokenText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpokenText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookedEnvelopeTimeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CookedEnvelopeTimeData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CookedEnvelopeTimeData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookedSpectralTimeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CookedSpectralTimeData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CookedSpectralTimeData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrequenciesToAnalyze_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FrequenciesToAnalyze;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrequenciesToAnalyze_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerReleaseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerReleaseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerAttackTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerAttackTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerFrameSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerFrameSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FFTAnalysisFrameSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FFTAnalysisFrameSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FFTSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FFTSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FFTSize_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAmplitudeEnvelopeAnalysis_MetaData[];
#endif
		static void NewProp_bEnableAmplitudeEnvelopeAnalysis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAmplitudeEnvelopeAnalysis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableBakedFFTAnalysis_MetaData[];
#endif
		static void NewProp_bEnableBakedFFTAnalysis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableBakedFFTAnalysis;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAmbisonics_MetaData[];
#endif
		static void NewProp_bIsAmbisonics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAmbisonics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVirtualizeWhenSilent_MetaData[];
#endif
		static void NewProp_bVirtualizeWhenSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVirtualizeWhenSilent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSingleLine_MetaData[];
#endif
		static void NewProp_bSingleLine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSingleLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManualWordWrap_MetaData[];
#endif
		static void NewProp_bManualWordWrap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManualWordWrap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMature_MetaData[];
#endif
		static void NewProp_bMature_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStreaming_MetaData[];
#endif
		static void NewProp_bStreaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStreaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SoundGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRateQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SampleRateQuality;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SampleRateQuality_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StreamingPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompressionQuality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundWave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundWave.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_InternalCurves_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Hold a reference to our internal curve so we can switch back to it if we want to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_InternalCurves = { "InternalCurves", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, InternalCurves), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_InternalCurves_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_InternalCurves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_Curves_MetaData[] = {
		{ "Category", "SoundWave" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Curves associated with this sound wave" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, Curves), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_Curves_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_Curves_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00120008000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_AssetImportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFileTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFileTimestamp = { "SourceFileTimestamp", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, SourceFileTimestamp_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFileTimestamp_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFileTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFilePath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, SourceFilePath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFilePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_Comment_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Provides contextual information for the sound to the translator." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, Comment), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_Comment_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_Comment_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_Subtitles_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Subtitle cues.  If empty, use SpokenText as the subtitle.  Will often be empty,\nas the contents of the subtitle is commonly identical to what is spoken." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_Subtitles = { "Subtitles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, Subtitles), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_Subtitles_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_Subtitles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_Subtitles_Inner = { "Subtitles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSubtitleCue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Cached sample rate for displaying in the tools" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0020090000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, SampleRate), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRate_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelSizes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Sizes of the bulk data for the source wav data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelSizes = { "ChannelSizes", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, ChannelSizes), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelSizes_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelSizes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelSizes_Inner = { "ChannelSizes", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelOffsets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Offsets into the bulk data for the source wav data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelOffsets = { "ChannelOffsets", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, ChannelOffsets), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelOffsets_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelOffsets_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelOffsets_Inner = { "ChannelOffsets", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_NumChannels_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Number of channels of multichannel data; 1 or 2 for regular mono and stereo files" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, NumChannels), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_NumChannels_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_NumChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.125" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Playback pitch for sound." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, Pitch), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_Pitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Playback volume of sound 0 to 1 - Default is 1.0." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, Volume), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_Volume_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_SubtitlePriority_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The priority of the subtitle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SubtitlePriority = { "SubtitlePriority", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, SubtitlePriority), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_SubtitlePriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_SubtitlePriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_SpokenText_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "A localized version of the text that is actually spoken phonetically in the audio." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SpokenText = { "SpokenText", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, SpokenText), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_SpokenText_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_SpokenText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_CookedEnvelopeTimeData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The cooked cooked envelope data." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_CookedEnvelopeTimeData = { "CookedEnvelopeTimeData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, CookedEnvelopeTimeData), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_CookedEnvelopeTimeData_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_CookedEnvelopeTimeData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_CookedEnvelopeTimeData_Inner = { "CookedEnvelopeTimeData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_CookedSpectralTimeData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The cooked spectral time data." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_CookedSpectralTimeData = { "CookedSpectralTimeData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, CookedSpectralTimeData), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_CookedSpectralTimeData_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_CookedSpectralTimeData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_CookedSpectralTimeData_Inner = { "CookedSpectralTimeData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_FrequenciesToAnalyze_MetaData[] = {
		{ "Category", "Analysis|FFT" },
		{ "EditCondition", "bEnableBakedFFTAnalysis" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The frequencies (in hz) to analyze when doing baked FFT analysis." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_FrequenciesToAnalyze = { "FrequenciesToAnalyze", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, FrequenciesToAnalyze), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_FrequenciesToAnalyze_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_FrequenciesToAnalyze_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_FrequenciesToAnalyze_Inner = { "FrequenciesToAnalyze", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData[] = {
		{ "Category", "Analysis|Envelope" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bEnableAmplitudeEnvelopeAnalysis" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "How quickly the envelope analyzer responds to decreasing amplitudes." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerReleaseTime = { "EnvelopeFollowerReleaseTime", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, EnvelopeFollowerReleaseTime), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData[] = {
		{ "Category", "Analysis|Envelope" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bEnableAmplitudeEnvelopeAnalysis" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "How quickly the envelope analyzer responds to increasing amplitudes." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerAttackTime = { "EnvelopeFollowerAttackTime", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, EnvelopeFollowerAttackTime), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerFrameSize_MetaData[] = {
		{ "Category", "Analysis|Envelope" },
		{ "ClampMin", "512" },
		{ "EditCondition", "bEnableAmplitudeEnvelopeAnalysis" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "How many audio frames to average a new envelope value. Larger values use less memory for audio envelope data but will result in lower envelope accuracy." },
		{ "UIMin", "512" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerFrameSize = { "EnvelopeFollowerFrameSize", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, EnvelopeFollowerFrameSize), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerFrameSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerFrameSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_FFTAnalysisFrameSize_MetaData[] = {
		{ "Category", "Analysis|FFT" },
		{ "ClampMin", "512" },
		{ "EditCondition", "bEnableAmplitudeEnvelopeAnalysis" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "How many audio frames analyze at a time." },
		{ "UIMin", "512" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_FFTAnalysisFrameSize = { "FFTAnalysisFrameSize", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, FFTAnalysisFrameSize), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_FFTAnalysisFrameSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_FFTAnalysisFrameSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_FFTSize_MetaData[] = {
		{ "Category", "Analysis|FFT" },
		{ "EditCondition", "bEnableBakedFFTAnalysis" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The FFT window size to use for fft analysis." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_FFTSize = { "FFTSize", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, FFTSize), Z_Construct_UEnum_Engine_ESoundWaveFFTSize, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_FFTSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_FFTSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_FFTSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableAmplitudeEnvelopeAnalysis_MetaData[] = {
		{ "Category", "Analysis|Envelope" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Whether or not to enable cook-time amplitude envelope analysis." },
	};
#endif
	void Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableAmplitudeEnvelopeAnalysis_SetBit(void* Obj)
	{
		((USoundWave*)Obj)->bEnableAmplitudeEnvelopeAnalysis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableAmplitudeEnvelopeAnalysis = { "bEnableAmplitudeEnvelopeAnalysis", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableAmplitudeEnvelopeAnalysis_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableAmplitudeEnvelopeAnalysis_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableAmplitudeEnvelopeAnalysis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableBakedFFTAnalysis_MetaData[] = {
		{ "Category", "Analysis|FFT" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Whether or not to enable cook-time baked FFT analysis." },
	};
#endif
	void Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableBakedFFTAnalysis_SetBit(void* Obj)
	{
		((USoundWave*)Obj)->bEnableBakedFFTAnalysis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableBakedFFTAnalysis = { "bEnableBakedFFTAnalysis", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableBakedFFTAnalysis_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableBakedFFTAnalysis_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableBakedFFTAnalysis_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_bIsAmbisonics_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Whether or not this source is ambisonics file format." },
	};
#endif
	void Z_Construct_UClass_USoundWave_Statics::NewProp_bIsAmbisonics_SetBit(void* Obj)
	{
		((USoundWave*)Obj)->bIsAmbisonics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bIsAmbisonics = { "bIsAmbisonics", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bIsAmbisonics_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_bIsAmbisonics_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_bIsAmbisonics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_bVirtualizeWhenSilent_MetaData[] = {
		{ "Category", "Sound" },
		{ "DisplayName", "Play When Silent" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Allows sound to continue playing when silent. This prevents issues with sounds restarting when coming back in range, etc." },
	};
#endif
	void Z_Construct_UClass_USoundWave_Statics::NewProp_bVirtualizeWhenSilent_SetBit(void* Obj)
	{
		((USoundWave*)Obj)->bVirtualizeWhenSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bVirtualizeWhenSilent = { "bVirtualizeWhenSilent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bVirtualizeWhenSilent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_bVirtualizeWhenSilent_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_bVirtualizeWhenSilent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_bSingleLine_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "If set to true the subtitles display as a sequence of single lines as opposed to multiline." },
	};
#endif
	void Z_Construct_UClass_USoundWave_Statics::NewProp_bSingleLine_SetBit(void* Obj)
	{
		((USoundWave*)Obj)->bSingleLine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bSingleLine = { "bSingleLine", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bSingleLine_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_bSingleLine_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_bSingleLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_bManualWordWrap_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "If set to true will disable automatic generation of line breaks - use if the subtitles have been split manually." },
	};
#endif
	void Z_Construct_UClass_USoundWave_Statics::NewProp_bManualWordWrap_SetBit(void* Obj)
	{
		((USoundWave*)Obj)->bManualWordWrap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bManualWordWrap = { "bManualWordWrap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bManualWordWrap_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_bManualWordWrap_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_bManualWordWrap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_bMature_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "If set to true if this sound is considered to contain mature/adult content." },
	};
#endif
	void Z_Construct_UClass_USoundWave_Statics::NewProp_bMature_SetBit(void* Obj)
	{
		((USoundWave*)Obj)->bMature = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bMature = { "bMature", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bMature_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_bMature_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_bMature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_bStreaming_MetaData[] = {
		{ "Category", "Streaming" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Whether this sound can be streamed to avoid increased memory usage" },
	};
#endif
	void Z_Construct_UClass_USoundWave_Statics::NewProp_bStreaming_SetBit(void* Obj)
	{
		((USoundWave*)Obj)->bStreaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bStreaming = { "bStreaming", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_bStreaming_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_bStreaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "SoundWave" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "If set, when played directly (not through a sound cue) the wave will be played looping." },
	};
#endif
	void Z_Construct_UClass_USoundWave_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((USoundWave*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_bLooping_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_SoundGroup_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SoundGroup = { "SoundGroup", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, SoundGroup), Z_Construct_UEnum_Engine_ESoundGroup, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_SoundGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_SoundGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRateQuality_MetaData[] = {
		{ "Category", "Quality" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Quality of sample rate conversion for platforms that opt into resampling during cook." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRateQuality = { "SampleRateQuality", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, SampleRateQuality), Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRateQuality_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRateQuality_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRateQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_StreamingPriority_MetaData[] = {
		{ "Category", "Streaming" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Priority of this sound when streaming (lower priority streams may not always play)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_StreamingPriority = { "StreamingPriority", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, StreamingPriority), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_StreamingPriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_StreamingPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Platform agnostic compression quality. 1..100 with 1 being best compression and 100 being best quality." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_CompressionQuality = { "CompressionQuality", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundWave, CompressionQuality), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_CompressionQuality_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_CompressionQuality_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundWave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_InternalCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_Curves,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_AssetImportData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFileTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_Comment,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_Subtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_Subtitles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRate,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelSizes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelSizes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelOffsets_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_NumChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SubtitlePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SpokenText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_CookedEnvelopeTimeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_CookedEnvelopeTimeData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_CookedSpectralTimeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_CookedSpectralTimeData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_FrequenciesToAnalyze,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_FrequenciesToAnalyze_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerReleaseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerAttackTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_EnvelopeFollowerFrameSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_FFTAnalysisFrameSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_FFTSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_FFTSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableAmplitudeEnvelopeAnalysis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bEnableBakedFFTAnalysis,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bIsAmbisonics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bVirtualizeWhenSilent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bSingleLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bManualWordWrap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bMature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SoundGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRateQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRateQuality_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_StreamingPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_CompressionQuality,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundWave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundWave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundWave_Statics::ClassParams = {
		&USoundWave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundWave_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundWave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundWave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundWave, 2361411657);
	template<> ENGINE_API UClass* StaticClass<USoundWave>()
	{
		return USoundWave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundWave(Z_Construct_UClass_USoundWave, &USoundWave::StaticClass, TEXT("/Script/Engine"), TEXT("USoundWave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundWave);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundWave)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
