// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EngineSettings/Classes/ConsoleSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleSettings() {}
// Cross Module References
	ENGINESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteCommand();
	UPackage* Z_Construct_UPackage__Script_EngineSettings();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UConsoleSettings_NoRegister();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UConsoleSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FAutoCompleteCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FAutoCompleteCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoCompleteCommand, Z_Construct_UPackage__Script_EngineSettings(), TEXT("AutoCompleteCommand"), sizeof(FAutoCompleteCommand), Get_Z_Construct_UScriptStruct_FAutoCompleteCommand_Hash());
	}
	return Singleton;
}
template<> ENGINESETTINGS_API UScriptStruct* StaticStruct<FAutoCompleteCommand>()
{
	return FAutoCompleteCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutoCompleteCommand(FAutoCompleteCommand::StaticStruct, TEXT("/Script/EngineSettings"), TEXT("AutoCompleteCommand"), false, nullptr, nullptr);
static struct FScriptStruct_EngineSettings_StaticRegisterNativesFAutoCompleteCommand
{
	FScriptStruct_EngineSettings_StaticRegisterNativesFAutoCompleteCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutoCompleteCommand")),new UScriptStruct::TCppStructOps<FAutoCompleteCommand>);
	}
} ScriptStruct_EngineSettings_StaticRegisterNativesFAutoCompleteCommand;
	struct Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Desc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "Structure for auto-complete commands and their descriptions." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoCompleteCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Desc_MetaData[] = {
		{ "Category", "Command" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutoCompleteCommand, Desc), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Desc_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Desc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Command_MetaData[] = {
		{ "Category", "Command" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutoCompleteCommand, Command), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Command_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Command_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Desc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::NewProp_Command,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
		nullptr,
		&NewStructOps,
		"AutoCompleteCommand",
		sizeof(FAutoCompleteCommand),
		alignof(FAutoCompleteCommand),
		Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutoCompleteCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutoCompleteCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_EngineSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutoCompleteCommand"), sizeof(FAutoCompleteCommand), Get_Z_Construct_UScriptStruct_FAutoCompleteCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutoCompleteCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutoCompleteCommand_Hash() { return 376262846U; }
	void UConsoleSettings::StaticRegisterNativesUConsoleSettings()
	{
	}
	UClass* Z_Construct_UClass_UConsoleSettings_NoRegister()
	{
		return UConsoleSettings::StaticClass();
	}
	struct Z_Construct_UClass_UConsoleSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteFadedColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutoCompleteFadedColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteCVarColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutoCompleteCVarColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteCommandColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutoCompleteCommandColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HistoryColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HistoryColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOrderTopToBottom_MetaData[];
#endif
		static void NewProp_bOrderTopToBottom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrderTopToBottom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundOpacityPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackgroundOpacityPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteMapPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AutoCompleteMapPaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AutoCompleteMapPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualAutoCompleteList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ManualAutoCompleteList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ManualAutoCompleteList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScrollbackSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxScrollbackSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConsoleSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConsoleSettings.h" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "Implements the settings for the UConsole class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteFadedColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "The autocomplete color used for command descriptions and read-only CVars." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteFadedColor = { "AutoCompleteFadedColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleSettings, AutoCompleteFadedColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteFadedColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteFadedColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCVarColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "The autocomplete color used for mutable CVars." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCVarColor = { "AutoCompleteCVarColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleSettings, AutoCompleteCVarColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCVarColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCVarColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCommandColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "The autocomplete color used for executable commands." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCommandColor = { "AutoCompleteCommandColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleSettings, AutoCompleteCommandColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCommandColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCommandColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_HistoryColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "The color used for the previously typed commands history." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_HistoryColor = { "HistoryColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleSettings, HistoryColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_HistoryColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_HistoryColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_InputColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "The color used for text input." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_InputColor = { "InputColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleSettings, InputColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_InputColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_InputColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bOrderTopToBottom_MetaData[] = {
		{ "Category", "AutoComplete" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "Whether we legacy bottom-to-top ordering or regular top-to-bottom ordering" },
	};
#endif
	void Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bOrderTopToBottom_SetBit(void* Obj)
	{
		((UConsoleSettings*)Obj)->bOrderTopToBottom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bOrderTopToBottom = { "bOrderTopToBottom", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConsoleSettings), &Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bOrderTopToBottom_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bOrderTopToBottom_MetaData, ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bOrderTopToBottom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_BackgroundOpacityPercentage_MetaData[] = {
		{ "Category", "Colors" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "Amount of transparency of the console background." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_BackgroundOpacityPercentage = { "BackgroundOpacityPercentage", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleSettings, BackgroundOpacityPercentage), METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_BackgroundOpacityPercentage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_BackgroundOpacityPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteMapPaths_MetaData[] = {
		{ "Category", "AutoComplete" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "List of relative paths (e.g. Content/Maps) to search for map names for auto-complete usage. Specified in BaseInput.ini." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteMapPaths = { "AutoCompleteMapPaths", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleSettings, AutoCompleteMapPaths), METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteMapPaths_MetaData, ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteMapPaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteMapPaths_Inner = { "AutoCompleteMapPaths", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_ManualAutoCompleteList_MetaData[] = {
		{ "Category", "AutoComplete" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "Manual list of auto-complete commands and info specified in BaseInput.ini" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_ManualAutoCompleteList = { "ManualAutoCompleteList", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleSettings, ManualAutoCompleteList), METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_ManualAutoCompleteList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_ManualAutoCompleteList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_ManualAutoCompleteList_Inner = { "ManualAutoCompleteList", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAutoCompleteCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleSettings_Statics::NewProp_MaxScrollbackSize_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Classes/ConsoleSettings.h" },
		{ "ToolTip", "Visible Console stuff" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConsoleSettings_Statics::NewProp_MaxScrollbackSize = { "MaxScrollbackSize", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleSettings, MaxScrollbackSize), METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_MaxScrollbackSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::NewProp_MaxScrollbackSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConsoleSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteFadedColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCVarColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteCommandColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_HistoryColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_InputColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_bOrderTopToBottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_BackgroundOpacityPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteMapPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_AutoCompleteMapPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_ManualAutoCompleteList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_ManualAutoCompleteList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleSettings_Statics::NewProp_MaxScrollbackSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConsoleSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConsoleSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConsoleSettings_Statics::ClassParams = {
		&UConsoleSettings::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConsoleSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UConsoleSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UConsoleSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConsoleSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConsoleSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConsoleSettings, 1723844078);
	template<> ENGINESETTINGS_API UClass* StaticClass<UConsoleSettings>()
	{
		return UConsoleSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConsoleSettings(Z_Construct_UClass_UConsoleSettings, &UConsoleSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UConsoleSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConsoleSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
