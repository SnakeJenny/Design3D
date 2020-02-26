// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Preferences/UnrealEdOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealEdOptions() {}
// Cross Module References
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FClassPickerDefaults();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorCommand();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorCommandCategory();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdOptions_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdKeyBindings_NoRegister();
// End Cross Module References
class UScriptStruct* FClassPickerDefaults::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FClassPickerDefaults_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassPickerDefaults, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ClassPickerDefaults"), sizeof(FClassPickerDefaults), Get_Z_Construct_UScriptStruct_FClassPickerDefaults_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FClassPickerDefaults>()
{
	return FClassPickerDefaults::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClassPickerDefaults(FClassPickerDefaults::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("ClassPickerDefaults"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFClassPickerDefaults
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFClassPickerDefaults()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClassPickerDefaults")),new UScriptStruct::TCppStructOps<FClassPickerDefaults>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFClassPickerDefaults;
	struct Z_Construct_UScriptStruct_FClassPickerDefaults_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClassName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
		{ "ToolTip", "Default Classes for the Class Picker Dialog" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassPickerDefaults>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewProp_AssetClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
		{ "ToolTip", "The name of the asset type being created" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassPickerDefaults, AssetClass), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewProp_AssetClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewProp_AssetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewProp_ClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
		{ "ToolTip", "The name of the class to select" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassPickerDefaults, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewProp_ClassName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewProp_ClassName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewProp_AssetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewProp_ClassName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ClassPickerDefaults",
		sizeof(FClassPickerDefaults),
		alignof(FClassPickerDefaults),
		Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClassPickerDefaults()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClassPickerDefaults_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClassPickerDefaults"), sizeof(FClassPickerDefaults), Get_Z_Construct_UScriptStruct_FClassPickerDefaults_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClassPickerDefaults_Hash() { return 3142045738U; }
class UScriptStruct* FEditorCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FEditorCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorCommand, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorCommand"), sizeof(FEditorCommand), Get_Z_Construct_UScriptStruct_FEditorCommand_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorCommand>()
{
	return FEditorCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorCommand(FEditorCommand::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("EditorCommand"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFEditorCommand
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFEditorCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorCommand")),new UScriptStruct::TCppStructOps<FEditorCommand>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFEditorCommand;
	struct Z_Construct_UScriptStruct_FEditorCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecCommand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExecCommand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CommandName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Parent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorCommand_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
		{ "ToolTip", "A parameterless exec command that can be bound to hotkeys and menu items in the editor." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorCommand, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_ExecCommand_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_ExecCommand = { "ExecCommand", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorCommand, ExecCommand), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_ExecCommand_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_ExecCommand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_CommandName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_CommandName = { "CommandName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorCommand, CommandName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_CommandName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_CommandName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorCommand, Parent), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_Parent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_Parent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_ExecCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_CommandName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_Parent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"EditorCommand",
		sizeof(FEditorCommand),
		alignof(FEditorCommand),
		Z_Construct_UScriptStruct_FEditorCommand_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorCommand_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorCommand"), sizeof(FEditorCommand), Get_Z_Construct_UScriptStruct_FEditorCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorCommand_Hash() { return 2145952535U; }
class UScriptStruct* FEditorCommandCategory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FEditorCommandCategory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorCommandCategory, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorCommandCategory"), sizeof(FEditorCommandCategory), Get_Z_Construct_UScriptStruct_FEditorCommandCategory_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorCommandCategory>()
{
	return FEditorCommandCategory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorCommandCategory(FEditorCommandCategory::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("EditorCommandCategory"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFEditorCommandCategory
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFEditorCommandCategory()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorCommandCategory")),new UScriptStruct::TCppStructOps<FEditorCommandCategory>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFEditorCommandCategory;
	struct Z_Construct_UScriptStruct_FEditorCommandCategory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Parent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
		{ "ToolTip", "A category to store a list of commands." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorCommandCategory>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorCommandCategory, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorCommandCategory, Parent), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewProp_Parent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewProp_Parent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewProp_Parent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"EditorCommandCategory",
		sizeof(FEditorCommandCategory),
		alignof(FEditorCommandCategory),
		Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorCommandCategory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorCommandCategory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorCommandCategory"), sizeof(FEditorCommandCategory), Get_Z_Construct_UScriptStruct_FEditorCommandCategory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorCommandCategory_Hash() { return 3824283813U; }
	void UUnrealEdOptions::StaticRegisterNativesUUnrealEdOptions()
	{
	}
	UClass* Z_Construct_UClass_UUnrealEdOptions_NoRegister()
	{
		return UUnrealEdOptions::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealEdOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewAssetDefaultClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewAssetDefaultClasses;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewAssetDefaultClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExpandClassPickerClassList_MetaData[];
#endif
		static void NewProp_bExpandClassPickerClassList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExpandClassPickerClassList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorKeyBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorKeyBindings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorCommands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorCommands;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorCommands_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorCategories;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorCategories_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealEdOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdOptions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Preferences/UnrealEdOptions.h" },
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_NewAssetDefaultClasses_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
		{ "ToolTip", "The array of default objects in the blueprint class dialog *" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_NewAssetDefaultClasses = { "NewAssetDefaultClasses", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnrealEdOptions, NewAssetDefaultClasses), METADATA_PARAMS(Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_NewAssetDefaultClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_NewAssetDefaultClasses_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_NewAssetDefaultClasses_Inner = { "NewAssetDefaultClasses", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClassPickerDefaults, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_bExpandClassPickerClassList_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
		{ "ToolTip", "If true, the list of classes in the class picker dialog will be expanded" },
	};
#endif
	void Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_bExpandClassPickerClassList_SetBit(void* Obj)
	{
		((UUnrealEdOptions*)Obj)->bExpandClassPickerClassList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_bExpandClassPickerClassList = { "bExpandClassPickerClassList", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUnrealEdOptions), &Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_bExpandClassPickerClassList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_bExpandClassPickerClassList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_bExpandClassPickerClassList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorKeyBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
		{ "ToolTip", "Pointer to the key bindings object that actually stores key bindings for the editor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorKeyBindings = { "EditorKeyBindings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnrealEdOptions, EditorKeyBindings), Z_Construct_UClass_UUnrealEdKeyBindings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorKeyBindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorKeyBindings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCommands_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
		{ "ToolTip", "Commands that can be bound to in the editor." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCommands = { "EditorCommands", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnrealEdOptions, EditorCommands), METADATA_PARAMS(Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCommands_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCommands_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCommands_Inner = { "EditorCommands", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditorCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCategories_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
		{ "ToolTip", "Categories of commands." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCategories = { "EditorCategories", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnrealEdOptions, EditorCategories), METADATA_PARAMS(Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCategories_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCategories_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCategories_Inner = { "EditorCategories", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditorCommandCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnrealEdOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_NewAssetDefaultClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_NewAssetDefaultClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_bExpandClassPickerClassList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorKeyBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCommands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCommands_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCategories_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealEdOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealEdOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnrealEdOptions_Statics::ClassParams = {
		&UUnrealEdOptions::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUnrealEdOptions_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UUnrealEdOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUnrealEdOptions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealEdOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnrealEdOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnrealEdOptions, 60568190);
	template<> UNREALED_API UClass* StaticClass<UUnrealEdOptions>()
	{
		return UUnrealEdOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnrealEdOptions(Z_Construct_UClass_UUnrealEdOptions, &UUnrealEdOptions::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UUnrealEdOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealEdOptions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
