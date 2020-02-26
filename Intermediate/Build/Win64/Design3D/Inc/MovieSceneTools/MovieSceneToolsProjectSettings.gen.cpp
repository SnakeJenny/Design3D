// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTools/Public/MovieSceneToolsProjectSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneToolsProjectSettings() {}
// Cross Module References
	MOVIESCENETOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTools();
	MOVIESCENETOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneToolsProjectSettings_NoRegister();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneToolsProjectSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FMovieSceneToolsFbxSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETOOLS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings, Z_Construct_UPackage__Script_MovieSceneTools(), TEXT("MovieSceneToolsFbxSettings"), sizeof(FMovieSceneToolsFbxSettings), Get_Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETOOLS_API UScriptStruct* StaticStruct<FMovieSceneToolsFbxSettings>()
{
	return FMovieSceneToolsFbxSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneToolsFbxSettings(FMovieSceneToolsFbxSettings::StaticStruct, TEXT("/Script/MovieSceneTools"), TEXT("MovieSceneToolsFbxSettings"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTools_StaticRegisterNativesFMovieSceneToolsFbxSettings
{
	FScriptStruct_MovieSceneTools_StaticRegisterNativesFMovieSceneToolsFbxSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneToolsFbxSettings")),new UScriptStruct::TCppStructOps<FMovieSceneToolsFbxSettings>);
	}
} ScriptStruct_MovieSceneTools_StaticRegisterNativesFMovieSceneToolsFbxSettings;
	struct Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PropertyPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FbxPropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FbxPropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneToolsFbxSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_PropertyPath_MetaData[] = {
		{ "Category", "TrackSettings" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The property track setting to map to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneToolsFbxSettings, PropertyPath), Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_PropertyPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_PropertyPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_FbxPropertyName_MetaData[] = {
		{ "Category", "TrackSettings" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The name of the fbx property" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_FbxPropertyName = { "FbxPropertyName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneToolsFbxSettings, FbxPropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_FbxPropertyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_FbxPropertyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_PropertyPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_FbxPropertyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
		nullptr,
		&NewStructOps,
		"MovieSceneToolsFbxSettings",
		sizeof(FMovieSceneToolsFbxSettings),
		alignof(FMovieSceneToolsFbxSettings),
		Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneToolsFbxSettings"), sizeof(FMovieSceneToolsFbxSettings), Get_Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Hash() { return 2668009523U; }
class UScriptStruct* FMovieSceneToolsPropertyTrackSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETOOLS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings, Z_Construct_UPackage__Script_MovieSceneTools(), TEXT("MovieSceneToolsPropertyTrackSettings"), sizeof(FMovieSceneToolsPropertyTrackSettings), Get_Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Hash());
	}
	return Singleton;
}
template<> MOVIESCENETOOLS_API UScriptStruct* StaticStruct<FMovieSceneToolsPropertyTrackSettings>()
{
	return FMovieSceneToolsPropertyTrackSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings(FMovieSceneToolsPropertyTrackSettings::StaticStruct, TEXT("/Script/MovieSceneTools"), TEXT("MovieSceneToolsPropertyTrackSettings"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTools_StaticRegisterNativesFMovieSceneToolsPropertyTrackSettings
{
	FScriptStruct_MovieSceneTools_StaticRegisterNativesFMovieSceneToolsPropertyTrackSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneToolsPropertyTrackSettings")),new UScriptStruct::TCppStructOps<FMovieSceneToolsPropertyTrackSettings>);
	}
} ScriptStruct_MovieSceneTools_StaticRegisterNativesFMovieSceneToolsPropertyTrackSettings;
	struct Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComponentName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneToolsPropertyTrackSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "PropertyTrack" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "Name to the keyed property within the Actor or ActorComponent." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneToolsPropertyTrackSettings, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewProp_PropertyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewProp_ComponentName_MetaData[] = {
		{ "Category", "PropertyTrack" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "Optional ActorComponent tag (when keying a component property)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneToolsPropertyTrackSettings, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewProp_ComponentName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewProp_ComponentName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewProp_ComponentName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
		nullptr,
		&NewStructOps,
		"MovieSceneToolsPropertyTrackSettings",
		sizeof(FMovieSceneToolsPropertyTrackSettings),
		alignof(FMovieSceneToolsPropertyTrackSettings),
		Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneToolsPropertyTrackSettings"), sizeof(FMovieSceneToolsPropertyTrackSettings), Get_Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Hash() { return 1173832966U; }
	void UMovieSceneToolsProjectSettings::StaticRegisterNativesUMovieSceneToolsProjectSettings()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneToolsProjectSettings_NoRegister()
	{
		return UMovieSceneToolsProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FbxSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FbxSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FbxSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubSequenceSeparator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubSequenceSeparator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TakeSeparator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TakeSeparator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstTakeNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_FirstTakeNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TakeNumDigits_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_TakeNumDigits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotNumDigits_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ShotNumDigits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotIncrement_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ShotIncrement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstShotNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_FirstShotNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotPrefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShotPrefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShotDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultStartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneToolsProjectSettings.h" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "Settings for the level sequences" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FbxSettings_MetaData[] = {
		{ "Category", "TrackSettings" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "Mapping between fbx property name and property track path" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FbxSettings = { "FbxSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, FbxSettings), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FbxSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FbxSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FbxSettings_Inner = { "FbxSettings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_SubSequenceSeparator_MetaData[] = {
		{ "Category", "Shots" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "A single character separator between the take number and the sub sequence name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_SubSequenceSeparator = { "SubSequenceSeparator", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, SubSequenceSeparator), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_SubSequenceSeparator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_SubSequenceSeparator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_TakeSeparator_MetaData[] = {
		{ "Category", "Shots" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "A single character separator between the shot number and the take number." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_TakeSeparator = { "TakeSeparator", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, TakeSeparator), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_TakeSeparator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_TakeSeparator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FirstTakeNumber_MetaData[] = {
		{ "Category", "Shots" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The first take number." },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FirstTakeNumber = { "FirstTakeNumber", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, FirstTakeNumber), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FirstTakeNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FirstTakeNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_TakeNumDigits_MetaData[] = {
		{ "Category", "Shots" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The number of digits for the take number." },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_TakeNumDigits = { "TakeNumDigits", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, TakeNumDigits), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_TakeNumDigits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_TakeNumDigits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotNumDigits_MetaData[] = {
		{ "Category", "Shots" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The number of digits for the shot number." },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotNumDigits = { "ShotNumDigits", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, ShotNumDigits), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotNumDigits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotNumDigits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotIncrement_MetaData[] = {
		{ "Category", "Shots" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The default shot increment." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotIncrement = { "ShotIncrement", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, ShotIncrement), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotIncrement_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotIncrement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FirstShotNumber_MetaData[] = {
		{ "Category", "Shots" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The first shot number." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FirstShotNumber = { "FirstShotNumber", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, FirstShotNumber), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FirstShotNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FirstShotNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotPrefix_MetaData[] = {
		{ "Category", "Shots" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The default prefix for shot names." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotPrefix = { "ShotPrefix", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, ShotPrefix), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotPrefix_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotPrefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotDirectory_MetaData[] = {
		{ "Category", "Shots" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The default directory for the shots." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotDirectory = { "ShotDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, ShotDirectory), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotDirectory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_DefaultDuration_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ClampMin", "0.000010" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The default duration for new level sequences in seconds." },
		{ "Units", "s" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_DefaultDuration = { "DefaultDuration", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, DefaultDuration), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_DefaultDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_DefaultDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_DefaultStartTime_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The default start time for new level sequences, in seconds." },
		{ "Units", "s" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_DefaultStartTime = { "DefaultStartTime", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, DefaultStartTime), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_DefaultStartTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_DefaultStartTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FbxSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FbxSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_SubSequenceSeparator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_TakeSeparator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FirstTakeNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_TakeNumDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotNumDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotIncrement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FirstShotNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_DefaultDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_DefaultStartTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneToolsProjectSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::ClassParams = {
		&UMovieSceneToolsProjectSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneToolsProjectSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneToolsProjectSettings, 451667503);
	template<> MOVIESCENETOOLS_API UClass* StaticClass<UMovieSceneToolsProjectSettings>()
	{
		return UMovieSceneToolsProjectSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneToolsProjectSettings(Z_Construct_UClass_UMovieSceneToolsProjectSettings, &UMovieSceneToolsProjectSettings::StaticClass, TEXT("/Script/MovieSceneTools"), TEXT("UMovieSceneToolsProjectSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneToolsProjectSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
