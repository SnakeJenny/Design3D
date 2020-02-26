// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/DialogueWave.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueWave() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueContextMapping();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueSoundWaveProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueContext();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FDialogueContextMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDialogueContextMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueContextMapping, Z_Construct_UPackage__Script_Engine(), TEXT("DialogueContextMapping"), sizeof(FDialogueContextMapping), Get_Z_Construct_UScriptStruct_FDialogueContextMapping_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDialogueContextMapping>()
{
	return FDialogueContextMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDialogueContextMapping(FDialogueContextMapping::StaticStruct, TEXT("/Script/Engine"), TEXT("DialogueContextMapping"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDialogueContextMapping
{
	FScriptStruct_Engine_StaticRegisterNativesFDialogueContextMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DialogueContextMapping")),new UScriptStruct::TCppStructOps<FDialogueContextMapping>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDialogueContextMapping;
	struct Z_Construct_UScriptStruct_FDialogueContextMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Proxy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Proxy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizationKeyFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizationKeyFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueContextMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Proxy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "Cached object for playing the soundwave with subtitle information included." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueContextMapping, Proxy), Z_Construct_UClass_UDialogueSoundWaveProxy_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Proxy_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Proxy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_LocalizationKeyFormat_MetaData[] = {
		{ "Category", "DialogueContextMapping" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "The format string to use when generating the localization key for this context. This must be unique within the owner dialogue wave.\nAvailable format markers:\n  * {ContextHash} - A hash generated from the speaker and target voices." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_LocalizationKeyFormat = { "LocalizationKeyFormat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueContextMapping, LocalizationKeyFormat), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_LocalizationKeyFormat_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_LocalizationKeyFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_SoundWave_MetaData[] = {
		{ "Category", "DialogueContextMapping" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "The soundwave to play for this dialogue." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueContextMapping, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_SoundWave_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_SoundWave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "DialogueContextMapping" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "The context of the dialogue." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueContextMapping, Context), Z_Construct_UScriptStruct_FDialogueContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Context_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Proxy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_LocalizationKeyFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_SoundWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::NewProp_Context,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DialogueContextMapping",
		sizeof(FDialogueContextMapping),
		alignof(FDialogueContextMapping),
		Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueContextMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDialogueContextMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DialogueContextMapping"), sizeof(FDialogueContextMapping), Get_Z_Construct_UScriptStruct_FDialogueContextMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDialogueContextMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDialogueContextMapping_Hash() { return 309926000U; }
	void UDialogueWave::StaticRegisterNativesUDialogueWave()
	{
	}
	UClass* Z_Construct_UClass_UDialogueWave_NoRegister()
	{
		return UDialogueWave::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueWave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizationGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalizationGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ContextMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContextMappings_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceActorDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VoiceActorDirection;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitleOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubtitleOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpokenText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpokenText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_SubtitleOverride_MetaData[];
#endif
		static void NewProp_bOverride_SubtitleOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_SubtitleOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMature_MetaData[];
#endif
		static void NewProp_bMature_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMature;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueWave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWave_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/DialogueWave.h" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWave_Statics::NewProp_LocalizationGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_LocalizationGUID = { "LocalizationGUID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueWave, LocalizationGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UDialogueWave_Statics::NewProp_LocalizationGUID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::NewProp_LocalizationGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWave_Statics::NewProp_ContextMappings_MetaData[] = {
		{ "Category", "DialogueContexts" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "Mappings between dialogue contexts and associated soundwaves." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_ContextMappings = { "ContextMappings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueWave, ContextMappings), METADATA_PARAMS(Z_Construct_UClass_UDialogueWave_Statics::NewProp_ContextMappings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::NewProp_ContextMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_ContextMappings_Inner = { "ContextMappings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDialogueContextMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWave_Statics::NewProp_VoiceActorDirection_MetaData[] = {
		{ "Category", "Script" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "Provides general notes to the voice actor intended to direct their performance, as well as contextual information to the translator." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_VoiceActorDirection = { "VoiceActorDirection", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueWave, VoiceActorDirection), METADATA_PARAMS(Z_Construct_UClass_UDialogueWave_Statics::NewProp_VoiceActorDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::NewProp_VoiceActorDirection_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWave_Statics::NewProp_SubtitleOverride_MetaData[] = {
		{ "Category", "Script" },
		{ "EditCondition", "bOverride_SubtitleOverride" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "A localized version of the subtitle text that should be displayed for this audio. By default this will be the same as the Spoken Text." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_SubtitleOverride = { "SubtitleOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueWave, SubtitleOverride), METADATA_PARAMS(Z_Construct_UClass_UDialogueWave_Statics::NewProp_SubtitleOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::NewProp_SubtitleOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWave_Statics::NewProp_SpokenText_MetaData[] = {
		{ "Category", "Script" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "A localized version of the text that is actually spoken phonetically in the audio." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_SpokenText = { "SpokenText", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueWave, SpokenText), METADATA_PARAMS(Z_Construct_UClass_UDialogueWave_Statics::NewProp_SpokenText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::NewProp_SpokenText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWave_Statics::NewProp_bOverride_SubtitleOverride_MetaData[] = {
		{ "Category", "Script" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
	};
#endif
	void Z_Construct_UClass_UDialogueWave_Statics::NewProp_bOverride_SubtitleOverride_SetBit(void* Obj)
	{
		((UDialogueWave*)Obj)->bOverride_SubtitleOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_bOverride_SubtitleOverride = { "bOverride_SubtitleOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDialogueWave), &Z_Construct_UClass_UDialogueWave_Statics::NewProp_bOverride_SubtitleOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogueWave_Statics::NewProp_bOverride_SubtitleOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::NewProp_bOverride_SubtitleOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWave_Statics::NewProp_bMature_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueWave.h" },
		{ "ToolTip", "true if this dialogue is considered to contain mature/adult content." },
	};
#endif
	void Z_Construct_UClass_UDialogueWave_Statics::NewProp_bMature_SetBit(void* Obj)
	{
		((UDialogueWave*)Obj)->bMature = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueWave_Statics::NewProp_bMature = { "bMature", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDialogueWave), &Z_Construct_UClass_UDialogueWave_Statics::NewProp_bMature_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogueWave_Statics::NewProp_bMature_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::NewProp_bMature_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueWave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_LocalizationGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_ContextMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_ContextMappings_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_VoiceActorDirection,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_SubtitleOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_SpokenText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_bOverride_SubtitleOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWave_Statics::NewProp_bMature,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueWave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueWave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueWave_Statics::ClassParams = {
		&UDialogueWave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueWave_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueWave_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDialogueWave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueWave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueWave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueWave, 2452347951);
	template<> ENGINE_API UClass* StaticClass<UDialogueWave>()
	{
		return UDialogueWave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueWave(Z_Construct_UClass_UDialogueWave, &UDialogueWave::StaticClass, TEXT("/Script/Engine"), TEXT("UDialogueWave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueWave);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDialogueWave)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
