// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Net/VoiceConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoiceConfig() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVOIPTalker_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVOIPTalker();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd();
	ENGINE_API UFunction* Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel();
	ENGINE_API UFunction* Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_UVOIPStatics_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVOIPStatics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UFunction* Z_Construct_UFunction_UVOIPStatics_SetMicThreshold();
// End Cross Module References
class UScriptStruct* FVoiceSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVoiceSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoiceSettings, Z_Construct_UPackage__Script_Engine(), TEXT("VoiceSettings"), sizeof(FVoiceSettings), Get_Z_Construct_UScriptStruct_FVoiceSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVoiceSettings>()
{
	return FVoiceSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoiceSettings(FVoiceSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("VoiceSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVoiceSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFVoiceSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoiceSettings")),new UScriptStruct::TCppStructOps<FVoiceSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVoiceSettings;
	struct Z_Construct_UScriptStruct_FVoiceSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceEffectChain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceEffectChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToAttachTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentToAttachTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoiceSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_SourceEffectChain_MetaData[] = {
		{ "Category", "Audio|Voice|Effects" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Optional audio effects to apply to this player's voice." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_SourceEffectChain = { "SourceEffectChain", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoiceSettings, SourceEffectChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_SourceEffectChain_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_SourceEffectChain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Audio|Voice|Spatialization" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Optional attenuation settings to attach to this player's voice.\nThis should only be used when ComponentToAttachTo is set." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoiceSettings, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_AttenuationSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_ComponentToAttachTo_MetaData[] = {
		{ "Category", "Audio|Voice|Spatialization" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Optionally attach the voice source to a Scene Component to give the appearance\nthat the voice is coming from that scene component.\nIf this is not set, the voice will not be spatialized." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_ComponentToAttachTo = { "ComponentToAttachTo", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoiceSettings, ComponentToAttachTo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_ComponentToAttachTo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_ComponentToAttachTo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoiceSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_SourceEffectChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceSettings_Statics::NewProp_ComponentToAttachTo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoiceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"VoiceSettings",
		sizeof(FVoiceSettings),
		alignof(FVoiceSettings),
		Z_Construct_UScriptStruct_FVoiceSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoiceSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoiceSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoiceSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoiceSettings"), sizeof(FVoiceSettings), Get_Z_Construct_UScriptStruct_FVoiceSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoiceSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoiceSettings_Hash() { return 164979012U; }
	static FName NAME_UVOIPTalker_BPOnTalkingBegin = FName(TEXT("BPOnTalkingBegin"));
	void UVOIPTalker::BPOnTalkingBegin(UAudioComponent* AudioComponent)
	{
		VOIPTalker_eventBPOnTalkingBegin_Parms Parms;
		Parms.AudioComponent=AudioComponent;
		ProcessEvent(FindFunctionChecked(NAME_UVOIPTalker_BPOnTalkingBegin),&Parms);
	}
	static FName NAME_UVOIPTalker_BPOnTalkingEnd = FName(TEXT("BPOnTalkingEnd"));
	void UVOIPTalker::BPOnTalkingEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVOIPTalker_BPOnTalkingEnd),NULL);
	}
	void UVOIPTalker::StaticRegisterNativesUVOIPTalker()
	{
		UClass* Class = UVOIPTalker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BPOnTalkingBegin", &UVOIPTalker::execBPOnTalkingBegin },
			{ "BPOnTalkingEnd", &UVOIPTalker::execBPOnTalkingEnd },
			{ "CreateTalkerForPlayer", &UVOIPTalker::execCreateTalkerForPlayer },
			{ "GetVoiceLevel", &UVOIPTalker::execGetVoiceLevel },
			{ "RegisterWithPlayerState", &UVOIPTalker::execRegisterWithPlayerState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VOIPTalker_eventBPOnTalkingBegin_Parms, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::NewProp_AudioComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::NewProp_AudioComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::NewProp_AudioComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Notification" },
		{ "DisplayName", "Begin Talking" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Blueprint native event for when this player starts speaking." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPTalker, nullptr, "BPOnTalkingBegin", sizeof(VOIPTalker_eventBPOnTalkingBegin_Parms), Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Notification" },
		{ "DisplayName", "End Talking" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Blueprint native event for when this player stops speaking." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPTalker, nullptr, "BPOnTalkingEnd", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics
	{
		struct VOIPTalker_eventCreateTalkerForPlayer_Parms
		{
			APlayerState* OwningState;
			UVOIPTalker* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VOIPTalker_eventCreateTalkerForPlayer_Parms, ReturnValue), Z_Construct_UClass_UVOIPTalker_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::NewProp_OwningState = { "OwningState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VOIPTalker_eventCreateTalkerForPlayer_Parms, OwningState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::NewProp_OwningState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Notification" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "function for creating and registering a UVOIPTalker." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPTalker, nullptr, "CreateTalkerForPlayer", sizeof(VOIPTalker_eventCreateTalkerForPlayer_Parms), Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics
	{
		struct VOIPTalker_eventGetVoiceLevel_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VOIPTalker_eventGetVoiceLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Notification" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Get the current level of how loud this player is speaking. Will return 0.0\nif player is not talking." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPTalker, nullptr, "GetVoiceLevel", sizeof(VOIPTalker_eventGetVoiceLevel_Parms), Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics
	{
		struct VOIPTalker_eventRegisterWithPlayerState_Parms
		{
			APlayerState* OwningState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::NewProp_OwningState = { "OwningState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VOIPTalker_eventRegisterWithPlayerState_Parms, OwningState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::NewProp_OwningState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Notification" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "This function sets up this talker with a specific player.\nIt is necessary to use this to properly control a specific player's voice\nand receive events." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPTalker, nullptr, "RegisterWithPlayerState", sizeof(VOIPTalker_eventRegisterWithPlayerState_Parms), Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVOIPTalker_NoRegister()
	{
		return UVOIPTalker::StaticClass();
	}
	struct Z_Construct_UClass_UVOIPTalker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVOIPTalker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVOIPTalker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVOIPTalker_BPOnTalkingBegin, "BPOnTalkingBegin" }, // 2392854671
		{ &Z_Construct_UFunction_UVOIPTalker_BPOnTalkingEnd, "BPOnTalkingEnd" }, // 1067311993
		{ &Z_Construct_UFunction_UVOIPTalker_CreateTalkerForPlayer, "CreateTalkerForPlayer" }, // 658976270
		{ &Z_Construct_UFunction_UVOIPTalker_GetVoiceLevel, "GetVoiceLevel" }, // 3432062789
		{ &Z_Construct_UFunction_UVOIPTalker_RegisterWithPlayerState, "RegisterWithPlayerState" }, // 2565830246
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVOIPTalker_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VOIP" },
		{ "IncludePath", "Net/VoiceConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "A VOIPTalker is a component that can be used to control the audio characteristics of a player's voice." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVOIPTalker_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Voice" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "Configurable settings for this player's voice. When set, this will update the next time the player speaks." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVOIPTalker_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVOIPTalker, Settings), Z_Construct_UScriptStruct_FVoiceSettings, METADATA_PARAMS(Z_Construct_UClass_UVOIPTalker_Statics::NewProp_Settings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVOIPTalker_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVOIPTalker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVOIPTalker_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVOIPTalker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVOIPTalker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVOIPTalker_Statics::ClassParams = {
		&UVOIPTalker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVOIPTalker_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UVOIPTalker_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVOIPTalker_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVOIPTalker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVOIPTalker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVOIPTalker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVOIPTalker, 1719867181);
	template<> ENGINE_API UClass* StaticClass<UVOIPTalker>()
	{
		return UVOIPTalker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVOIPTalker(Z_Construct_UClass_UVOIPTalker, &UVOIPTalker::StaticClass, TEXT("/Script/Engine"), TEXT("UVOIPTalker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVOIPTalker);
	void UVOIPStatics::StaticRegisterNativesUVOIPStatics()
	{
		UClass* Class = UVOIPStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMicThreshold", &UVOIPStatics::execSetMicThreshold },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics
	{
		struct VOIPStatics_eventSetMicThreshold_Parms
		{
			float InThreshold;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::NewProp_InThreshold = { "InThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VOIPStatics_eventSetMicThreshold_Parms, InThreshold), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::NewProp_InThreshold,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Voice|Mic" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
		{ "ToolTip", "This function sets the Mic threshold for VOIP chat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIPStatics, nullptr, "SetMicThreshold", sizeof(VOIPStatics_eventSetMicThreshold_Parms), Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVOIPStatics_SetMicThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVOIPStatics_SetMicThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVOIPStatics_NoRegister()
	{
		return UVOIPStatics::StaticClass();
	}
	struct Z_Construct_UClass_UVOIPStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVOIPStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVOIPStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVOIPStatics_SetMicThreshold, "SetMicThreshold" }, // 34052273
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVOIPStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Net/VoiceConfig.h" },
		{ "ModuleRelativePath", "Public/Net/VoiceConfig.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVOIPStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVOIPStatics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVOIPStatics_Statics::ClassParams = {
		&UVOIPStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVOIPStatics_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVOIPStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVOIPStatics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVOIPStatics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVOIPStatics, 2498067305);
	template<> ENGINE_API UClass* StaticClass<UVOIPStatics>()
	{
		return UVOIPStatics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVOIPStatics(Z_Construct_UClass_UVOIPStatics, &UVOIPStatics::StaticClass, TEXT("/Script/Engine"), TEXT("UVOIPStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVOIPStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
