// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioMixer/Public/AudioMixerBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerBlueprintLibrary() {}
// Cross Module References
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_EFFTWindowType();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_EFFTPeakInterpolationMethod();
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_EFFTSize();
	AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChainEntry();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput();
	AUDIOMIXER_API UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioRecordingExportType();
// End Cross Module References
	static UEnum* EFFTWindowType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_EFFTWindowType, Z_Construct_UPackage__Script_AudioMixer(), TEXT("EFFTWindowType"));
		}
		return Singleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<EFFTWindowType>()
	{
		return EFFTWindowType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFFTWindowType(EFFTWindowType_StaticEnum, TEXT("/Script/AudioMixer"), TEXT("EFFTWindowType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AudioMixer_EFFTWindowType_Hash() { return 1081834141U; }
	UEnum* Z_Construct_UEnum_AudioMixer_EFFTWindowType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFFTWindowType"), 0, Get_Z_Construct_UEnum_AudioMixer_EFFTWindowType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFFTWindowType::None", (int64)EFFTWindowType::None },
				{ "EFFTWindowType::Hamming", (int64)EFFTWindowType::Hamming },
				{ "EFFTWindowType::Hann", (int64)EFFTWindowType::Hann },
				{ "EFFTWindowType::Blackman", (int64)EFFTWindowType::Blackman },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Blackman.ToolTip", "Mainlobe width of -3 dB and sidelobe attenuation of ~-60db. Tricky for COLA." },
				{ "Hamming.ToolTip", "Mainlobe width of -3 dB and sidelove attenuation of ~-40 dB. Good for COLA." },
				{ "Hann.ToolTip", "Mainlobe width of -3 dB and sidelobe attenuation of ~-30dB. Good for COLA." },
				{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
				{ "None.ToolTip", "No window is applied. Technically a boxcar window." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
				nullptr,
				"EFFTWindowType",
				"EFFTWindowType",
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
	static UEnum* EFFTPeakInterpolationMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_EFFTPeakInterpolationMethod, Z_Construct_UPackage__Script_AudioMixer(), TEXT("EFFTPeakInterpolationMethod"));
		}
		return Singleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<EFFTPeakInterpolationMethod>()
	{
		return EFFTPeakInterpolationMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFFTPeakInterpolationMethod(EFFTPeakInterpolationMethod_StaticEnum, TEXT("/Script/AudioMixer"), TEXT("EFFTPeakInterpolationMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AudioMixer_EFFTPeakInterpolationMethod_Hash() { return 602593350U; }
	UEnum* Z_Construct_UEnum_AudioMixer_EFFTPeakInterpolationMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFFTPeakInterpolationMethod"), 0, Get_Z_Construct_UEnum_AudioMixer_EFFTPeakInterpolationMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFFTPeakInterpolationMethod::NearestNeighbor", (int64)EFFTPeakInterpolationMethod::NearestNeighbor },
				{ "EFFTPeakInterpolationMethod::Linear", (int64)EFFTPeakInterpolationMethod::Linear },
				{ "EFFTPeakInterpolationMethod::Quadratic", (int64)EFFTPeakInterpolationMethod::Quadratic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
				nullptr,
				"EFFTPeakInterpolationMethod",
				"EFFTPeakInterpolationMethod",
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
	static UEnum* EFFTSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_EFFTSize, Z_Construct_UPackage__Script_AudioMixer(), TEXT("EFFTSize"));
		}
		return Singleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<EFFTSize>()
	{
		return EFFTSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFFTSize(EFFTSize_StaticEnum, TEXT("/Script/AudioMixer"), TEXT("EFFTSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AudioMixer_EFFTSize_Hash() { return 713613293U; }
	UEnum* Z_Construct_UEnum_AudioMixer_EFFTSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AudioMixer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFFTSize"), 0, Get_Z_Construct_UEnum_AudioMixer_EFFTSize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFFTSize::DefaultSize", (int64)EFFTSize::DefaultSize },
				{ "EFFTSize::Min", (int64)EFFTSize::Min },
				{ "EFFTSize::Small", (int64)EFFTSize::Small },
				{ "EFFTSize::Medium", (int64)EFFTSize::Medium },
				{ "EFFTSize::Large", (int64)EFFTSize::Large },
				{ "EFFTSize::Max", (int64)EFFTSize::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DefaultSize.ToolTip", "512" },
				{ "Large.ToolTip", "1024" },
				{ "Max.ToolTip", "4096" },
				{ "Medium.ToolTip", "512" },
				{ "Min.ToolTip", "64" },
				{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
				{ "Small.ToolTip", "256" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
				nullptr,
				"EFFTSize",
				"EFFTSize",
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
	void UAudioMixerBlueprintLibrary::StaticRegisterNativesUAudioMixerBlueprintLibrary()
	{
		UClass* Class = UAudioMixerBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMasterSubmixEffect", &UAudioMixerBlueprintLibrary::execAddMasterSubmixEffect },
			{ "AddSourceEffectToPresetChain", &UAudioMixerBlueprintLibrary::execAddSourceEffectToPresetChain },
			{ "ClearMasterSubmixEffects", &UAudioMixerBlueprintLibrary::execClearMasterSubmixEffects },
			{ "GetMagnitudeForFrequencies", &UAudioMixerBlueprintLibrary::execGetMagnitudeForFrequencies },
			{ "GetNumberOfEntriesInSourceEffectChain", &UAudioMixerBlueprintLibrary::execGetNumberOfEntriesInSourceEffectChain },
			{ "GetPhaseForFrequencies", &UAudioMixerBlueprintLibrary::execGetPhaseForFrequencies },
			{ "PauseRecordingOutput", &UAudioMixerBlueprintLibrary::execPauseRecordingOutput },
			{ "RemoveMasterSubmixEffect", &UAudioMixerBlueprintLibrary::execRemoveMasterSubmixEffect },
			{ "RemoveSourceEffectFromPresetChain", &UAudioMixerBlueprintLibrary::execRemoveSourceEffectFromPresetChain },
			{ "ResumeRecordingOutput", &UAudioMixerBlueprintLibrary::execResumeRecordingOutput },
			{ "SetBypassSourceEffectChainEntry", &UAudioMixerBlueprintLibrary::execSetBypassSourceEffectChainEntry },
			{ "StartAnalyzingOutput", &UAudioMixerBlueprintLibrary::execStartAnalyzingOutput },
			{ "StartRecordingOutput", &UAudioMixerBlueprintLibrary::execStartRecordingOutput },
			{ "StopAnalyzingOutput", &UAudioMixerBlueprintLibrary::execStopAnalyzingOutput },
			{ "StopRecordingOutput", &UAudioMixerBlueprintLibrary::execStopRecordingOutput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics
	{
		struct AudioMixerBlueprintLibrary_eventAddMasterSubmixEffect_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSubmixPreset* SubmixEffectPreset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectPreset;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_SubmixEffectPreset = { "SubmixEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddMasterSubmixEffect_Parms, SubmixEffectPreset), Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddMasterSubmixEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_SubmixEffectPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Adds a submix effect preset to the master submix." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "AddMasterSubmixEffect", sizeof(AudioMixerBlueprintLibrary_eventAddMasterSubmixEffect_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics
	{
		struct AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSourcePresetChain* PresetChain;
			FSourceEffectChainEntry Entry;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entry;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PresetChain;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms, Entry), Z_Construct_UScriptStruct_FSourceEffectChainEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_PresetChain = { "PresetChain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms, PresetChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_Entry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_PresetChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Adds source effect entry to preset chain. Only effects the instance of the preset chain" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "AddSourceEffectToPresetChain", sizeof(AudioMixerBlueprintLibrary_eventAddSourceEffectToPresetChain_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics
	{
		struct AudioMixerBlueprintLibrary_eventClearMasterSubmixEffects_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventClearMasterSubmixEffects_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Clears all master submix effects." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "ClearMasterSubmixEffects", sizeof(AudioMixerBlueprintLibrary_eventClearMasterSubmixEffects_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics
	{
		struct AudioMixerBlueprintLibrary_eventGetMagnitudeForFrequencies_Parms
		{
			const UObject* WorldContextObject;
			TArray<float> Frequencies;
			TArray<float> Magnitudes;
			USoundSubmix* SubmixToAnalyze;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToAnalyze;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Magnitudes;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magnitudes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Frequencies;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequencies_Inner;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_SubmixToAnalyze = { "SubmixToAnalyze", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetMagnitudeForFrequencies_Parms, SubmixToAnalyze), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Magnitudes = { "Magnitudes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetMagnitudeForFrequencies_Parms, Magnitudes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Magnitudes_Inner = { "Magnitudes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies = { "Frequencies", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetMagnitudeForFrequencies_Parms, Frequencies), METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies_Inner = { "Frequencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetMagnitudeForFrequencies_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_SubmixToAnalyze,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Magnitudes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Magnitudes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_Frequencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audio|Analysis" },
		{ "CPP_Default_SubmixToAnalyze", "None" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Start spectrum analysis of the audio output. By leaving the Submix To Analyze blank, you can analyze the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "GetMagnitudeForFrequencies", sizeof(AudioMixerBlueprintLibrary_eventGetMagnitudeForFrequencies_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics
	{
		struct AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSourcePresetChain* PresetChain;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PresetChain;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_PresetChain = { "PresetChain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms, PresetChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_PresetChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Returns the number of effect chain entries in the given source effect chain." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "GetNumberOfEntriesInSourceEffectChain", sizeof(AudioMixerBlueprintLibrary_eventGetNumberOfEntriesInSourceEffectChain_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics
	{
		struct AudioMixerBlueprintLibrary_eventGetPhaseForFrequencies_Parms
		{
			const UObject* WorldContextObject;
			TArray<float> Frequencies;
			TArray<float> Phases;
			USoundSubmix* SubmixToAnalyze;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToAnalyze;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Phases;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Phases_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Frequencies;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequencies_Inner;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_SubmixToAnalyze = { "SubmixToAnalyze", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetPhaseForFrequencies_Parms, SubmixToAnalyze), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Phases = { "Phases", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetPhaseForFrequencies_Parms, Phases), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Phases_Inner = { "Phases", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies = { "Frequencies", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetPhaseForFrequencies_Parms, Frequencies), METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies_Inner = { "Frequencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventGetPhaseForFrequencies_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_SubmixToAnalyze,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Phases,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Phases_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_Frequencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audio|Analysis" },
		{ "CPP_Default_SubmixToAnalyze", "None" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Start spectrum analysis of the audio output. By leaving the Submix To Analyze blank, you can analyze the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "GetPhaseForFrequencies", sizeof(AudioMixerBlueprintLibrary_eventGetPhaseForFrequencies_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics
	{
		struct AudioMixerBlueprintLibrary_eventPauseRecordingOutput_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SubmixToPause;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToPause;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_SubmixToPause = { "SubmixToPause", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventPauseRecordingOutput_Parms, SubmixToPause), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventPauseRecordingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_SubmixToPause,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio" },
		{ "CPP_Default_SubmixToPause", "None" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Pause recording audio, without finalizing the recording to disk. By leaving the Submix To Record field blank, you can record the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "PauseRecordingOutput", sizeof(AudioMixerBlueprintLibrary_eventPauseRecordingOutput_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics
	{
		struct AudioMixerBlueprintLibrary_eventRemoveMasterSubmixEffect_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSubmixPreset* SubmixEffectPreset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectPreset;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_SubmixEffectPreset = { "SubmixEffectPreset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveMasterSubmixEffect_Parms, SubmixEffectPreset), Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveMasterSubmixEffect_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_SubmixEffectPreset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Removes a submix effect preset from the master submix." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "RemoveMasterSubmixEffect", sizeof(AudioMixerBlueprintLibrary_eventRemoveMasterSubmixEffect_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics
	{
		struct AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSourcePresetChain* PresetChain;
			int32 EntryIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EntryIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PresetChain;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_EntryIndex = { "EntryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms, EntryIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_PresetChain = { "PresetChain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms, PresetChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_EntryIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_PresetChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Adds source effect entry to preset chain. Only affects the instance of preset chain." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "RemoveSourceEffectFromPresetChain", sizeof(AudioMixerBlueprintLibrary_eventRemoveSourceEffectFromPresetChain_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics
	{
		struct AudioMixerBlueprintLibrary_eventResumeRecordingOutput_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SubmixToPause;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToPause;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_SubmixToPause = { "SubmixToPause", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventResumeRecordingOutput_Parms, SubmixToPause), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventResumeRecordingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_SubmixToPause,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio" },
		{ "CPP_Default_SubmixToPause", "None" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Resume recording audio after pausing. By leaving the Submix To Pause field blank, you can record the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "ResumeRecordingOutput", sizeof(AudioMixerBlueprintLibrary_eventResumeRecordingOutput_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics
	{
		struct AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms
		{
			const UObject* WorldContextObject;
			USoundEffectSourcePresetChain* PresetChain;
			int32 EntryIndex;
			bool bBypassed;
		};
		static void NewProp_bBypassed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBypassed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EntryIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PresetChain;
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
	void Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_bBypassed_SetBit(void* Obj)
	{
		((AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms*)Obj)->bBypassed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_bBypassed = { "bBypassed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms), &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_bBypassed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_EntryIndex = { "EntryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms, EntryIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_PresetChain = { "PresetChain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms, PresetChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_bBypassed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_EntryIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_PresetChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Set whether or not to bypass the effect at the source effect chain index." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "SetBypassSourceEffectChainEntry", sizeof(AudioMixerBlueprintLibrary_eventSetBypassSourceEffectChainEntry_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics
	{
		struct AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SubmixToAnalyze;
			EFFTSize FFTSize;
			EFFTPeakInterpolationMethod InterpolationMethod;
			EFFTWindowType WindowType;
			float HopSize;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HopSize;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WindowType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WindowType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InterpolationMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InterpolationMethod_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FFTSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FFTSize_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToAnalyze;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_HopSize = { "HopSize", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms, HopSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WindowType = { "WindowType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms, WindowType), Z_Construct_UEnum_AudioMixer_EFFTWindowType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WindowType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_InterpolationMethod = { "InterpolationMethod", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms, InterpolationMethod), Z_Construct_UEnum_AudioMixer_EFFTPeakInterpolationMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_InterpolationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_FFTSize = { "FFTSize", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms, FFTSize), Z_Construct_UEnum_AudioMixer_EFFTSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_FFTSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_SubmixToAnalyze = { "SubmixToAnalyze", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms, SubmixToAnalyze), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_HopSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WindowType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WindowType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_InterpolationMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_InterpolationMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_FFTSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_FFTSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_SubmixToAnalyze,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio|Analysis" },
		{ "CPP_Default_FFTSize", "DefaultSize" },
		{ "CPP_Default_HopSize", "0.000000" },
		{ "CPP_Default_InterpolationMethod", "Linear" },
		{ "CPP_Default_SubmixToAnalyze", "None" },
		{ "CPP_Default_WindowType", "Hann" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Start spectrum analysis of the audio output. By leaving the Submix To Analyze blank, you can analyze the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "StartAnalyzingOutput", sizeof(AudioMixerBlueprintLibrary_eventStartAnalyzingOutput_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics
	{
		struct AudioMixerBlueprintLibrary_eventStartRecordingOutput_Parms
		{
			const UObject* WorldContextObject;
			float ExpectedDuration;
			USoundSubmix* SubmixToRecord;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToRecord;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_SubmixToRecord = { "SubmixToRecord", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartRecordingOutput_Parms, SubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_ExpectedDuration = { "ExpectedDuration", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartRecordingOutput_Parms, ExpectedDuration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStartRecordingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_SubmixToRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_ExpectedDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio" },
		{ "CPP_Default_SubmixToRecord", "None" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Start recording audio. By leaving the Submix To Record field blank, you can record the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "StartRecordingOutput", sizeof(AudioMixerBlueprintLibrary_eventStartRecordingOutput_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics
	{
		struct AudioMixerBlueprintLibrary_eventStopAnalyzingOutput_Parms
		{
			const UObject* WorldContextObject;
			USoundSubmix* SubmixToStopAnalyzing;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToStopAnalyzing;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_SubmixToStopAnalyzing = { "SubmixToStopAnalyzing", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopAnalyzingOutput_Parms, SubmixToStopAnalyzing), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopAnalyzingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_SubmixToStopAnalyzing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audio|Analysis" },
		{ "CPP_Default_SubmixToStopAnalyzing", "None" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Start spectrum analysis of the audio output. By leaving the Submix To Stop Analyzing blank, you can analyze the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "StopAnalyzingOutput", sizeof(AudioMixerBlueprintLibrary_eventStopAnalyzingOutput_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics
	{
		struct AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms
		{
			const UObject* WorldContextObject;
			EAudioRecordingExportType ExportType;
			FString Name;
			FString Path;
			USoundSubmix* SubmixToRecord;
			USoundWave* ExistingSoundWaveToOverwrite;
			USoundWave* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExistingSoundWaveToOverwrite;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubmixToRecord;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, ReturnValue), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ExistingSoundWaveToOverwrite = { "ExistingSoundWaveToOverwrite", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, ExistingSoundWaveToOverwrite), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_SubmixToRecord = { "SubmixToRecord", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, SubmixToRecord), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, Path), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ExportType = { "ExportType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, ExportType), Z_Construct_UEnum_Engine_EAudioRecordingExportType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ExportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ExistingSoundWaveToOverwrite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_SubmixToRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ExportType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_ExportType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "Audio" },
		{ "CPP_Default_ExistingSoundWaveToOverwrite", "None" },
		{ "CPP_Default_SubmixToRecord", "None" },
		{ "DisplayName", "Finish Recording Output" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ToolTip", "Stop recording audio. Path can be absolute, or relative (to the /Saved/BouncedWavFiles folder). By leaving the Submix To Record field blank, you can record the master output of the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioMixerBlueprintLibrary, nullptr, "StopRecordingOutput", sizeof(AudioMixerBlueprintLibrary_eventStopRecordingOutput_Parms), Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary_NoRegister()
	{
		return UAudioMixerBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddMasterSubmixEffect, "AddMasterSubmixEffect" }, // 2480688236
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain, "AddSourceEffectToPresetChain" }, // 1465135122
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects, "ClearMasterSubmixEffects" }, // 3605006899
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies, "GetMagnitudeForFrequencies" }, // 1623142684
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain, "GetNumberOfEntriesInSourceEffectChain" }, // 2754740265
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_GetPhaseForFrequencies, "GetPhaseForFrequencies" }, // 4016665543
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_PauseRecordingOutput, "PauseRecordingOutput" }, // 3050796332
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect, "RemoveMasterSubmixEffect" }, // 268432718
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain, "RemoveSourceEffectFromPresetChain" }, // 442000347
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_ResumeRecordingOutput, "ResumeRecordingOutput" }, // 3804845539
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry, "SetBypassSourceEffectChainEntry" }, // 3988194669
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartAnalyzingOutput, "StartAnalyzingOutput" }, // 553374612
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StartRecordingOutput, "StartRecordingOutput" }, // 2952013084
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopAnalyzingOutput, "StopAnalyzingOutput" }, // 682167839
		{ &Z_Construct_UFunction_UAudioMixerBlueprintLibrary_StopRecordingOutput, "StopRecordingOutput" }, // 3892121479
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AudioMixerBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/AudioMixerBlueprintLibrary.h" },
		{ "ScriptName", "AudioMixerLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioMixerBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::ClassParams = {
		&UAudioMixerBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioMixerBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioMixerBlueprintLibrary, 690164640);
	template<> AUDIOMIXER_API UClass* StaticClass<UAudioMixerBlueprintLibrary>()
	{
		return UAudioMixerBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioMixerBlueprintLibrary(Z_Construct_UClass_UAudioMixerBlueprintLibrary, &UAudioMixerBlueprintLibrary::StaticClass, TEXT("/Script/AudioMixer"), TEXT("UAudioMixerBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMixerBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
