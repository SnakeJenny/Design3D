// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Commandlets/ExportDialogueScriptCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExportDialogueScriptCommandlet() {}
// Cross Module References
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueScriptEntry();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UExportDialogueScriptCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UExportDialogueScriptCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase();
// End Cross Module References
class UScriptStruct* FDialogueScriptEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FDialogueScriptEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueScriptEntry, Z_Construct_UPackage__Script_UnrealEd(), TEXT("DialogueScriptEntry"), sizeof(FDialogueScriptEntry), Get_Z_Construct_UScriptStruct_FDialogueScriptEntry_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FDialogueScriptEntry>()
{
	return FDialogueScriptEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDialogueScriptEntry(FDialogueScriptEntry::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("DialogueScriptEntry"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFDialogueScriptEntry
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFDialogueScriptEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DialogueScriptEntry")),new UScriptStruct::TCppStructOps<FDialogueScriptEntry>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFDialogueScriptEntry;
	struct Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueAssetGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialogueAssetGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetVoiceGUIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetVoiceGUIDs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetVoiceGUIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeakingVoiceGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpeakingVoiceGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizationKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalizationKeys;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizationKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRecorded_MetaData[];
#endif
		static void NewProp_IsRecorded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRecorded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialogueAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AudioFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceActorDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VoiceActorDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpokenDialogue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpokenDialogue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetVoices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetVoices;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetVoices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeakingVoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpeakingVoice;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueScriptEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_DialogueAssetGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_DialogueAssetGUID = { "DialogueAssetGUID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueScriptEntry, DialogueAssetGUID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_DialogueAssetGUID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_DialogueAssetGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoiceGUIDs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoiceGUIDs = { "TargetVoiceGUIDs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueScriptEntry, TargetVoiceGUIDs), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoiceGUIDs_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoiceGUIDs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoiceGUIDs_Inner = { "TargetVoiceGUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpeakingVoiceGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpeakingVoiceGUID = { "SpeakingVoiceGUID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueScriptEntry, SpeakingVoiceGUID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpeakingVoiceGUID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpeakingVoiceGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_LocalizationKeys_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_LocalizationKeys = { "LocalizationKeys", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueScriptEntry, LocalizationKeys), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_LocalizationKeys_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_LocalizationKeys_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_LocalizationKeys_Inner = { "LocalizationKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_IsRecorded_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_IsRecorded_SetBit(void* Obj)
	{
		((FDialogueScriptEntry*)Obj)->IsRecorded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_IsRecorded = { "IsRecorded", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDialogueScriptEntry), &Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_IsRecorded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_IsRecorded_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_IsRecorded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_DialogueAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_DialogueAsset = { "DialogueAsset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueScriptEntry, DialogueAsset), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_DialogueAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_DialogueAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_AudioFileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_AudioFileName = { "AudioFileName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueScriptEntry, AudioFileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_AudioFileName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_AudioFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_VoiceActorDirection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_VoiceActorDirection = { "VoiceActorDirection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueScriptEntry, VoiceActorDirection), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_VoiceActorDirection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_VoiceActorDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpokenDialogue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpokenDialogue = { "SpokenDialogue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueScriptEntry, SpokenDialogue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpokenDialogue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpokenDialogue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoices = { "TargetVoices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueScriptEntry, TargetVoices), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoices_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoices_Inner = { "TargetVoices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpeakingVoice_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpeakingVoice = { "SpeakingVoice", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueScriptEntry, SpeakingVoice), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpeakingVoice_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpeakingVoice_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_DialogueAssetGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoiceGUIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoiceGUIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpeakingVoiceGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_LocalizationKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_LocalizationKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_IsRecorded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_DialogueAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_AudioFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_VoiceActorDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpokenDialogue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_TargetVoices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::NewProp_SpeakingVoice,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"DialogueScriptEntry",
		sizeof(FDialogueScriptEntry),
		alignof(FDialogueScriptEntry),
		Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueScriptEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDialogueScriptEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DialogueScriptEntry"), sizeof(FDialogueScriptEntry), Get_Z_Construct_UScriptStruct_FDialogueScriptEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDialogueScriptEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDialogueScriptEntry_Hash() { return 2819136872U; }
	void UExportDialogueScriptCommandlet::StaticRegisterNativesUExportDialogueScriptCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UExportDialogueScriptCommandlet_NoRegister()
	{
		return UExportDialogueScriptCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UExportDialogueScriptCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExportDialogueScriptCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGatherTextCommandletBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportDialogueScriptCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/ExportDialogueScriptCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/ExportDialogueScriptCommandlet.h" },
		{ "ToolTip", "UExportDialogueScriptCommandlet: Handles exporting localized script sheets for dialogue wave assets." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExportDialogueScriptCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExportDialogueScriptCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExportDialogueScriptCommandlet_Statics::ClassParams = {
		&UExportDialogueScriptCommandlet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UExportDialogueScriptCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UExportDialogueScriptCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExportDialogueScriptCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExportDialogueScriptCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExportDialogueScriptCommandlet, 2717301733);
	template<> UNREALED_API UClass* StaticClass<UExportDialogueScriptCommandlet>()
	{
		return UExportDialogueScriptCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExportDialogueScriptCommandlet(Z_Construct_UClass_UExportDialogueScriptCommandlet, &UExportDialogueScriptCommandlet::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UExportDialogueScriptCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExportDialogueScriptCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
