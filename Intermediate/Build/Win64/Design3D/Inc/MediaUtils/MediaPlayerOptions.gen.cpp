// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaUtils/Public/MediaPlayerOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlayerOptions() {}
// Cross Module References
	MEDIAUTILS_API UEnum* Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride();
	UPackage* Z_Construct_UPackage__Script_MediaUtils();
	MEDIAUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaPlayerOptions();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	MEDIAUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaPlayerTrackOptions();
// End Cross Module References
	static UEnum* EMediaPlayerOptionBooleanOverride_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride, Z_Construct_UPackage__Script_MediaUtils(), TEXT("EMediaPlayerOptionBooleanOverride"));
		}
		return Singleton;
	}
	template<> MEDIAUTILS_API UEnum* StaticEnum<EMediaPlayerOptionBooleanOverride>()
	{
		return EMediaPlayerOptionBooleanOverride_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMediaPlayerOptionBooleanOverride(EMediaPlayerOptionBooleanOverride_StaticEnum, TEXT("/Script/MediaUtils"), TEXT("EMediaPlayerOptionBooleanOverride"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride_Hash() { return 1650433947U; }
	UEnum* Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MediaUtils();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMediaPlayerOptionBooleanOverride"), 0, Get_Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMediaPlayerOptionBooleanOverride::UseMediaPlayerSetting", (int64)EMediaPlayerOptionBooleanOverride::UseMediaPlayerSetting },
				{ "EMediaPlayerOptionBooleanOverride::Enabled", (int64)EMediaPlayerOptionBooleanOverride::Enabled },
				{ "EMediaPlayerOptionBooleanOverride::Disabled", (int64)EMediaPlayerOptionBooleanOverride::Disabled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MediaUtils,
				nullptr,
				"EMediaPlayerOptionBooleanOverride",
				"EMediaPlayerOptionBooleanOverride",
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
class UScriptStruct* FMediaPlayerOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEDIAUTILS_API uint32 Get_Z_Construct_UScriptStruct_FMediaPlayerOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaPlayerOptions, Z_Construct_UPackage__Script_MediaUtils(), TEXT("MediaPlayerOptions"), sizeof(FMediaPlayerOptions), Get_Z_Construct_UScriptStruct_FMediaPlayerOptions_Hash());
	}
	return Singleton;
}
template<> MEDIAUTILS_API UScriptStruct* StaticStruct<FMediaPlayerOptions>()
{
	return FMediaPlayerOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMediaPlayerOptions(FMediaPlayerOptions::StaticStruct, TEXT("/Script/MediaUtils"), TEXT("MediaPlayerOptions"), false, nullptr, nullptr);
static struct FScriptStruct_MediaUtils_StaticRegisterNativesFMediaPlayerOptions
{
	FScriptStruct_MediaUtils_StaticRegisterNativesFMediaPlayerOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MediaPlayerOptions")),new UScriptStruct::TCppStructOps<FMediaPlayerOptions>);
	}
} ScriptStruct_MediaUtils_StaticRegisterNativesFMediaPlayerOptions;
	struct Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Loop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Loop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayOnOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayOnOpen;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayOnOpen_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeekTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SeekTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tracks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaPlayerOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Loop_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Loop = { "Loop", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaPlayerOptions, Loop), Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Loop_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Loop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Loop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_PlayOnOpen_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_PlayOnOpen = { "PlayOnOpen", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaPlayerOptions, PlayOnOpen), Z_Construct_UEnum_MediaUtils_EMediaPlayerOptionBooleanOverride, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_PlayOnOpen_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_PlayOnOpen_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_PlayOnOpen_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_SeekTime_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_SeekTime = { "SeekTime", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaPlayerOptions, SeekTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_SeekTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_SeekTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Tracks_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaPlayerOptions, Tracks), Z_Construct_UScriptStruct_FMediaPlayerTrackOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Tracks_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Tracks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Loop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Loop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_PlayOnOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_PlayOnOpen_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_SeekTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Tracks,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaUtils,
		nullptr,
		&NewStructOps,
		"MediaPlayerOptions",
		sizeof(FMediaPlayerOptions),
		alignof(FMediaPlayerOptions),
		Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaPlayerOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMediaPlayerOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MediaUtils();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MediaPlayerOptions"), sizeof(FMediaPlayerOptions), Get_Z_Construct_UScriptStruct_FMediaPlayerOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMediaPlayerOptions_Hash() { return 815245244U; }
class UScriptStruct* FMediaPlayerTrackOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEDIAUTILS_API uint32 Get_Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions, Z_Construct_UPackage__Script_MediaUtils(), TEXT("MediaPlayerTrackOptions"), sizeof(FMediaPlayerTrackOptions), Get_Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Hash());
	}
	return Singleton;
}
template<> MEDIAUTILS_API UScriptStruct* StaticStruct<FMediaPlayerTrackOptions>()
{
	return FMediaPlayerTrackOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMediaPlayerTrackOptions(FMediaPlayerTrackOptions::StaticStruct, TEXT("/Script/MediaUtils"), TEXT("MediaPlayerTrackOptions"), false, nullptr, nullptr);
static struct FScriptStruct_MediaUtils_StaticRegisterNativesFMediaPlayerTrackOptions
{
	FScriptStruct_MediaUtils_StaticRegisterNativesFMediaPlayerTrackOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MediaPlayerTrackOptions")),new UScriptStruct::TCppStructOps<FMediaPlayerTrackOptions>);
	}
} ScriptStruct_MediaUtils_StaticRegisterNativesFMediaPlayerTrackOptions;
	struct Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Video_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Video;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Subtitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Script_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Script;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Metadata;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Caption_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Caption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Audio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaPlayerTrackOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Video_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Video = { "Video", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaPlayerTrackOptions, Video), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Video_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Video_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaPlayerTrackOptions, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Subtitle_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaPlayerTrackOptions, Subtitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Subtitle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Subtitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Script_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaPlayerTrackOptions, Script), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Script_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Script_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaPlayerTrackOptions, Metadata), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Metadata_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Metadata_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Caption_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Caption = { "Caption", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaPlayerTrackOptions, Caption), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Caption_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Caption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Audio_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMediaPlayerTrackOptions, Audio), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Audio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Audio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Video,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Subtitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Script,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Metadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Caption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Audio,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaUtils,
		nullptr,
		&NewStructOps,
		"MediaPlayerTrackOptions",
		sizeof(FMediaPlayerTrackOptions),
		alignof(FMediaPlayerTrackOptions),
		Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaPlayerTrackOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MediaUtils();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MediaPlayerTrackOptions"), sizeof(FMediaPlayerTrackOptions), Get_Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Hash() { return 2023475076U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
