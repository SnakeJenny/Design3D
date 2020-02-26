// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundSubmix.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSubmix() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioRecordingExportType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESubmixChannelFormat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing();
	ENGINE_API UFunction* Z_Construct_UFunction_USoundSubmix_StartRecordingOutput();
	ENGINE_API UFunction* Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing();
	ENGINE_API UFunction* Z_Construct_UFunction_USoundSubmix_StopRecordingOutput();
	ENGINE_API UClass* Z_Construct_UClass_UAmbisonicsSubmixSettingsBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnSubmixEnvelopeBP_Parms
		{
			TArray<float> Envelope;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Envelope_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Envelope;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Envelope_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope = { "Envelope", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnSubmixEnvelopeBP_Parms, Envelope), METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope_Inner = { "Envelope", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnSubmixEnvelopeBP__DelegateSignature", sizeof(_Script_Engine_eventOnSubmixEnvelopeBP_Parms), Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnSubmixEnvelope_Parms
		{
			TArray<float> Envelope;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Envelope_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Envelope;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Envelope_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope = { "Envelope", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnSubmixEnvelope_Parms, Envelope), METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope_Inner = { "Envelope", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::NewProp_Envelope_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Called when a new submix envelope value is generated on the given audio device id (different for multiple PIE). Array is an envelope value for each channel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnSubmixEnvelope__DelegateSignature", sizeof(_Script_Engine_eventOnSubmixEnvelope_Parms), Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelope__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnSubmixRecordedFileDone_Parms
		{
			const USoundWave* ResultingSoundWave;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultingSoundWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResultingSoundWave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::NewProp_ResultingSoundWave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::NewProp_ResultingSoundWave = { "ResultingSoundWave", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnSubmixRecordedFileDone_Parms, ResultingSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::NewProp_ResultingSoundWave_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::NewProp_ResultingSoundWave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::NewProp_ResultingSoundWave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Called when a recorded file has finished writing to disk." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnSubmixRecordedFileDone__DelegateSignature", sizeof(_Script_Engine_eventOnSubmixRecordedFileDone_Parms), Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EAudioRecordingExportType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioRecordingExportType, Z_Construct_UPackage__Script_Engine(), TEXT("EAudioRecordingExportType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAudioRecordingExportType>()
	{
		return EAudioRecordingExportType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAudioRecordingExportType(EAudioRecordingExportType_StaticEnum, TEXT("/Script/Engine"), TEXT("EAudioRecordingExportType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAudioRecordingExportType_Hash() { return 765681527U; }
	UEnum* Z_Construct_UEnum_Engine_EAudioRecordingExportType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAudioRecordingExportType"), 0, Get_Z_Construct_UEnum_Engine_EAudioRecordingExportType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAudioRecordingExportType::SoundWave", (int64)EAudioRecordingExportType::SoundWave },
				{ "EAudioRecordingExportType::WavFile", (int64)EAudioRecordingExportType::WavFile },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
				{ "SoundWave.ToolTip", "Exports a USoundWave." },
				{ "WavFile.ToolTip", "Exports a WAV file." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EAudioRecordingExportType",
				"EAudioRecordingExportType",
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
	static UEnum* ESubmixChannelFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESubmixChannelFormat, Z_Construct_UPackage__Script_Engine(), TEXT("ESubmixChannelFormat"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESubmixChannelFormat>()
	{
		return ESubmixChannelFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubmixChannelFormat(ESubmixChannelFormat_StaticEnum, TEXT("/Script/Engine"), TEXT("ESubmixChannelFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESubmixChannelFormat_Hash() { return 3467204243U; }
	UEnum* Z_Construct_UEnum_Engine_ESubmixChannelFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubmixChannelFormat"), 0, Get_Z_Construct_UEnum_Engine_ESubmixChannelFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubmixChannelFormat::Device", (int64)ESubmixChannelFormat::Device },
				{ "ESubmixChannelFormat::Stereo", (int64)ESubmixChannelFormat::Stereo },
				{ "ESubmixChannelFormat::Quad", (int64)ESubmixChannelFormat::Quad },
				{ "ESubmixChannelFormat::FiveDotOne", (int64)ESubmixChannelFormat::FiveDotOne },
				{ "ESubmixChannelFormat::SevenDotOne", (int64)ESubmixChannelFormat::SevenDotOne },
				{ "ESubmixChannelFormat::Ambisonics", (int64)ESubmixChannelFormat::Ambisonics },
				{ "ESubmixChannelFormat::Count", (int64)ESubmixChannelFormat::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ambisonics.DisplayName", "Ambisonics" },
				{ "Ambisonics.ToolTip", "Sets the submix to render audio as an ambisonics bed." },
				{ "BlueprintType", "true" },
				{ "Count.Hidden", "" },
				{ "Device.DisplayName", "Device" },
				{ "Device.ToolTip", "Sets the submix channels to the output device channel count" },
				{ "FiveDotOne.DisplayName", "5.1" },
				{ "FiveDotOne.ToolTip", "Sets the submix to mix 5.1 (FL, FR, FC, LF, SL, SR)" },
				{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
				{ "Quad.DisplayName", "Quad" },
				{ "Quad.ToolTip", "Sets the submix to mix to quad (FL, FR, SL, SR)" },
				{ "SevenDotOne.DisplayName", "7.1" },
				{ "SevenDotOne.ToolTip", "Sets the submix to mix audio to 7.1 (FL, FR, FC, LF, BL, BR, SL, SR)" },
				{ "Stereo.DisplayName", "Stereo" },
				{ "Stereo.ToolTip", "Sets the submix mix to stereo (FL, FR)" },
				{ "ToolTip", "Submix channel format.\nAllows submixes to have sources mix to a particular channel configuration for potential effect chain requirements.\nMaster submix will always render at the device channel count. All child submixes will be down-mixed (or up-mixed) to\nthe device channel count. This feature exists to allow specific submix effects to do their work on multi-channel mixes\nof audio." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESubmixChannelFormat",
				"ESubmixChannelFormat",
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
class UScriptStruct* FSoundSubmixSendInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundSubmixSendInfo, Z_Construct_UPackage__Script_Engine(), TEXT("SoundSubmixSendInfo"), sizeof(FSoundSubmixSendInfo), Get_Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundSubmixSendInfo>()
{
	return FSoundSubmixSendInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundSubmixSendInfo(FSoundSubmixSendInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundSubmixSendInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundSubmixSendInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundSubmixSendInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundSubmixSendInfo")),new UScriptStruct::TCppStructOps<FSoundSubmixSendInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundSubmixSendInfo;
	struct Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundSubmix_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Class used to send audio to submixes from USoundBase" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundSubmixSendInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SoundSubmix_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "The submix to send the audio to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSubmixSendInfo, SoundSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SoundSubmix_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SoundSubmix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevel_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "The amount of audio to send" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundSubmixSendInfo, SendLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SoundSubmix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundSubmixSendInfo",
		sizeof(FSoundSubmixSendInfo),
		alignof(FSoundSubmixSendInfo),
		Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundSubmixSendInfo"), sizeof(FSoundSubmixSendInfo), Get_Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Hash() { return 2826677975U; }
	void USoundSubmix::StaticRegisterNativesUSoundSubmix()
	{
		UClass* Class = USoundSubmix::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEnvelopeFollowerDelegate", &USoundSubmix::execAddEnvelopeFollowerDelegate },
			{ "StartEnvelopeFollowing", &USoundSubmix::execStartEnvelopeFollowing },
			{ "StartRecordingOutput", &USoundSubmix::execStartRecordingOutput },
			{ "StopEnvelopeFollowing", &USoundSubmix::execStopEnvelopeFollowing },
			{ "StopRecordingOutput", &USoundSubmix::execStopRecordingOutput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics
	{
		struct SoundSubmix_eventAddEnvelopeFollowerDelegate_Parms
		{
			const UObject* WorldContextObject;
			FScriptDelegate OnSubmixEnvelopeBP;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSubmixEnvelopeBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSubmixEnvelopeBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_OnSubmixEnvelopeBP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_OnSubmixEnvelopeBP = { "OnSubmixEnvelopeBP", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventAddEnvelopeFollowerDelegate_Parms, OnSubmixEnvelopeBP), Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_OnSubmixEnvelopeBP_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_OnSubmixEnvelopeBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventAddEnvelopeFollowerDelegate_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_OnSubmixEnvelopeBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|EnvelopeFollowing" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "AddEnvelopeFollowerDelegate", sizeof(SoundSubmix_eventAddEnvelopeFollowerDelegate_Parms), Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics
	{
		struct SoundSubmix_eventStartEnvelopeFollowing_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventStartEnvelopeFollowing_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|EnvelopeFollowing" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Start envelope following the submix output. Register with OnSubmixEnvelope to receive envelope follower data in BP." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "StartEnvelopeFollowing", sizeof(SoundSubmix_eventStartEnvelopeFollowing_Parms), Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics
	{
		struct SoundSubmix_eventStartRecordingOutput_Parms
		{
			const UObject* WorldContextObject;
			float ExpectedDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExpectedDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_ExpectedDuration = { "ExpectedDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventStartRecordingOutput_Parms, ExpectedDuration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventStartRecordingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_ExpectedDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Bounce" },
		{ "DisplayName", "Start Recording Submix Output" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Start recording the audio from this submix." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "StartRecordingOutput", sizeof(SoundSubmix_eventStartRecordingOutput_Parms), Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_StartRecordingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundSubmix_StartRecordingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics
	{
		struct SoundSubmix_eventStopEnvelopeFollowing_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventStopEnvelopeFollowing_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|EnvelopeFollowing" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Start envelope following the submix output. Register with OnSubmixEnvelope to receive envelope follower data in BP." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "StopEnvelopeFollowing", sizeof(SoundSubmix_eventStopEnvelopeFollowing_Parms), Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics
	{
		struct SoundSubmix_eventStopRecordingOutput_Parms
		{
			const UObject* WorldContextObject;
			EAudioRecordingExportType ExportType;
			FString Name;
			FString Path;
			USoundWave* ExistingSoundWaveToOverwrite;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExistingSoundWaveToOverwrite;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExportType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExportType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExistingSoundWaveToOverwrite = { "ExistingSoundWaveToOverwrite", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventStopRecordingOutput_Parms, ExistingSoundWaveToOverwrite), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventStopRecordingOutput_Parms, Path), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventStopRecordingOutput_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExportType = { "ExportType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventStopRecordingOutput_Parms, ExportType), Z_Construct_UEnum_Engine_EAudioRecordingExportType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundSubmix_eventStopRecordingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExistingSoundWaveToOverwrite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExportType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_ExportType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Bounce" },
		{ "CPP_Default_ExistingSoundWaveToOverwrite", "None" },
		{ "DisplayName", "Finish Recording Submix Output" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Finish recording the audio from this submix and export it as a wav file or a USoundWave." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmix, nullptr, "StopRecordingOutput", sizeof(SoundSubmix_eventStopRecordingOutput_Parms), Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmix_StopRecordingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundSubmix_StopRecordingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USoundSubmix_NoRegister()
	{
		return USoundSubmix::StaticClass();
	}
	struct Z_Construct_UClass_USoundSubmix_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSubmixRecordedFileDone_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSubmixRecordedFileDone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerReleaseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerReleaseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvelopeFollowerAttackTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnvelopeFollowerAttackTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbisonicsPluginSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmbisonicsPluginSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmixEffectChain_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubmixEffectChain;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectChain_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChannelFormat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChannelFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentSubmix_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentSubmix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildSubmixes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildSubmixes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildSubmixes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSubmix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundSubmix_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundSubmix_AddEnvelopeFollowerDelegate, "AddEnvelopeFollowerDelegate" }, // 4250445382
		{ &Z_Construct_UFunction_USoundSubmix_StartEnvelopeFollowing, "StartEnvelopeFollowing" }, // 1732156335
		{ &Z_Construct_UFunction_USoundSubmix_StartRecordingOutput, "StartRecordingOutput" }, // 3636571328
		{ &Z_Construct_UFunction_USoundSubmix_StopEnvelopeFollowing, "StopEnvelopeFollowing" }, // 1417622201
		{ &Z_Construct_UFunction_USoundSubmix_StopRecordingOutput, "StopRecordingOutput" }, // 579101009
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundSubmix.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_OnSubmixRecordedFileDone_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Blueprint delegate for when a recorded file is finished exporting." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_OnSubmixRecordedFileDone = { "OnSubmixRecordedFileDone", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSubmix, OnSubmixRecordedFileDone), Z_Construct_UDelegateFunction_Engine_OnSubmixRecordedFileDone__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_OnSubmixRecordedFileDone_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_OnSubmixRecordedFileDone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData[] = {
		{ "Category", "EnvelopeFollower" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this submix." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerReleaseTime = { "EnvelopeFollowerReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSubmix, EnvelopeFollowerReleaseTime), METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerReleaseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData[] = {
		{ "Category", "EnvelopeFollower" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this submix." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerAttackTime = { "EnvelopeFollowerAttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSubmix, EnvelopeFollowerAttackTime), METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerAttackTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_AmbisonicsPluginSettings_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "TODO: Hide this unless Channel Format is ambisonics. Also, worry about thread safety." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_AmbisonicsPluginSettings = { "AmbisonicsPluginSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSubmix, AmbisonicsPluginSettings), Z_Construct_UClass_UAmbisonicsSubmixSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_AmbisonicsPluginSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_AmbisonicsPluginSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSubmix, SubmixEffectChain), METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain_Inner = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_ChannelFormat_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Experimental! Specifies the channel format for the submix. Sources will be mixed at the specified format. Useful for specific effects that need to operate on a specific format." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_ChannelFormat = { "ChannelFormat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSubmix, ChannelFormat), Z_Construct_UEnum_Engine_ESubmixChannelFormat, METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_ChannelFormat_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_ChannelFormat_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_ChannelFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_ParentSubmix_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_ParentSubmix = { "ParentSubmix", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSubmix, ParentSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_ParentSubmix_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_ParentSubmix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmix_Statics::NewProp_ChildSubmixes_MetaData[] = {
		{ "Category", "SoundSubmix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmix.h" },
		{ "ToolTip", "Child submixes to this sound mix" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_ChildSubmixes = { "ChildSubmixes", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundSubmix, ChildSubmixes), METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::NewProp_ChildSubmixes_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::NewProp_ChildSubmixes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundSubmix_Statics::NewProp_ChildSubmixes_Inner = { "ChildSubmixes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSubmix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_OnSubmixRecordedFileDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerReleaseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_EnvelopeFollowerAttackTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_AmbisonicsPluginSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_SubmixEffectChain_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_ChannelFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_ChannelFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_ParentSubmix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_ChildSubmixes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmix_Statics::NewProp_ChildSubmixes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSubmix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSubmix>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundSubmix_Statics::ClassParams = {
		&USoundSubmix::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USoundSubmix_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundSubmix_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundSubmix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSubmix()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundSubmix_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundSubmix, 1158078907);
	template<> ENGINE_API UClass* StaticClass<USoundSubmix>()
	{
		return USoundSubmix::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundSubmix(Z_Construct_UClass_USoundSubmix, &USoundSubmix::StaticClass, TEXT("/Script/Engine"), TEXT("USoundSubmix"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSubmix);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
