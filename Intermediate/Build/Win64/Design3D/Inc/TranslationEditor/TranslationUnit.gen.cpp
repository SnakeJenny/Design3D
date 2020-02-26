// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TranslationEditor/Private/TranslationUnit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTranslationUnit() {}
// Cross Module References
	TRANSLATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTranslationContextInfo();
	UPackage* Z_Construct_UPackage__Script_TranslationEditor();
	TRANSLATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTranslationChange();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	TRANSLATIONEDITOR_API UClass* Z_Construct_UClass_UTranslationUnit_NoRegister();
	TRANSLATIONEDITOR_API UClass* Z_Construct_UClass_UTranslationUnit();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FTranslationContextInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRANSLATIONEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FTranslationContextInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTranslationContextInfo, Z_Construct_UPackage__Script_TranslationEditor(), TEXT("TranslationContextInfo"), sizeof(FTranslationContextInfo), Get_Z_Construct_UScriptStruct_FTranslationContextInfo_Hash());
	}
	return Singleton;
}
template<> TRANSLATIONEDITOR_API UScriptStruct* StaticStruct<FTranslationContextInfo>()
{
	return FTranslationContextInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTranslationContextInfo(FTranslationContextInfo::StaticStruct, TEXT("/Script/TranslationEditor"), TEXT("TranslationContextInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TranslationEditor_StaticRegisterNativesFTranslationContextInfo
{
	FScriptStruct_TranslationEditor_StaticRegisterNativesFTranslationContextInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TranslationContextInfo")),new UScriptStruct::TCppStructOps<FTranslationContextInfo>);
	}
} ScriptStruct_TranslationEditor_StaticRegisterNativesFTranslationContextInfo;
	struct Z_Construct_UScriptStruct_FTranslationContextInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Changes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Changes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Changes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTranslationContextInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Changes_MetaData[] = {
		{ "Category", "Translation" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "ToolTip", "List of previous versions of the source text for this context" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Changes = { "Changes", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTranslationContextInfo, Changes), METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Changes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Changes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Changes_Inner = { "Changes", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTranslationChange, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "Translation" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "ToolTip", "What file and line this translation is from" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTranslationContextInfo, Context), METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Context_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Context_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Translation" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "ToolTip", "The key specified in LOCTEXT" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTranslationContextInfo, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Changes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Changes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TranslationEditor,
		nullptr,
		&NewStructOps,
		"TranslationContextInfo",
		sizeof(FTranslationContextInfo),
		alignof(FTranslationContextInfo),
		Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTranslationContextInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTranslationContextInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TranslationEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TranslationContextInfo"), sizeof(FTranslationContextInfo), Get_Z_Construct_UScriptStruct_FTranslationContextInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTranslationContextInfo_Hash() { return 2191887564U; }
class UScriptStruct* FTranslationChange::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRANSLATIONEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FTranslationChange_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTranslationChange, Z_Construct_UPackage__Script_TranslationEditor(), TEXT("TranslationChange"), sizeof(FTranslationChange), Get_Z_Construct_UScriptStruct_FTranslationChange_Hash());
	}
	return Singleton;
}
template<> TRANSLATIONEDITOR_API UScriptStruct* StaticStruct<FTranslationChange>()
{
	return FTranslationChange::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTranslationChange(FTranslationChange::StaticStruct, TEXT("/Script/TranslationEditor"), TEXT("TranslationChange"), false, nullptr, nullptr);
static struct FScriptStruct_TranslationEditor_StaticRegisterNativesFTranslationChange
{
	FScriptStruct_TranslationEditor_StaticRegisterNativesFTranslationChange()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TranslationChange")),new UScriptStruct::TCppStructOps<FTranslationChange>);
	}
} ScriptStruct_TranslationEditor_StaticRegisterNativesFTranslationChange;
	struct Z_Construct_UScriptStruct_FTranslationChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DateAndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DateAndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationChange_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTranslationChange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTranslationChange>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Translation" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Translation at time of this change" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTranslationChange, Translation), METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Translation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Translation" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Source at time of this change" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTranslationChange, Source), METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Source_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_DateAndTime_MetaData[] = {
		{ "Category", "Translation" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "ToolTip", "Date of this change //, meta=(DisplayName = \"Date & Time\"))" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_DateAndTime = { "DateAndTime", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTranslationChange, DateAndTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_DateAndTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_DateAndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Translation" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "ToolTip", "The changelist of this change" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTranslationChange, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Version_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTranslationChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Translation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_DateAndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTranslationChange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TranslationEditor,
		nullptr,
		&NewStructOps,
		"TranslationChange",
		sizeof(FTranslationChange),
		alignof(FTranslationChange),
		Z_Construct_UScriptStruct_FTranslationChange_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationChange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationChange_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationChange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTranslationChange()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTranslationChange_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TranslationEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TranslationChange"), sizeof(FTranslationChange), Get_Z_Construct_UScriptStruct_FTranslationChange_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTranslationChange_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTranslationChange_Hash() { return 2203010045U; }
	void UTranslationUnit::StaticRegisterNativesUTranslationUnit()
	{
	}
	UClass* Z_Construct_UClass_UTranslationUnit_NoRegister()
	{
		return UTranslationUnit::StaticClass();
	}
	struct Z_Construct_UClass_UTranslationUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocresPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocresPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationBeforeImport_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TranslationBeforeImport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasBeenReviewed_MetaData[];
#endif
		static void NewProp_HasBeenReviewed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasBeenReviewed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Contexts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Contexts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTranslationUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TranslationEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationUnit_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "TranslationUnit.h" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationUnit_Statics::NewProp_LocresPath_MetaData[] = {
		{ "Category", "Translation" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "ToolTip", "Optional: Which Locres File this translation is in" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTranslationUnit_Statics::NewProp_LocresPath = { "LocresPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTranslationUnit, LocresPath), METADATA_PARAMS(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_LocresPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_LocresPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationUnit_Statics::NewProp_TranslationBeforeImport_MetaData[] = {
		{ "Category", "Translation" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "If this Translation Unit had a different translation before import, it will be stored here" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTranslationUnit_Statics::NewProp_TranslationBeforeImport = { "TranslationBeforeImport", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTranslationUnit, TranslationBeforeImport), METADATA_PARAMS(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_TranslationBeforeImport_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_TranslationBeforeImport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationUnit_Statics::NewProp_HasBeenReviewed_MetaData[] = {
		{ "Category", "Translation" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "ToolTip", "Whether the changes have been reviewed" },
	};
#endif
	void Z_Construct_UClass_UTranslationUnit_Statics::NewProp_HasBeenReviewed_SetBit(void* Obj)
	{
		((UTranslationUnit*)Obj)->HasBeenReviewed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTranslationUnit_Statics::NewProp_HasBeenReviewed = { "HasBeenReviewed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTranslationUnit), &Z_Construct_UClass_UTranslationUnit_Statics::NewProp_HasBeenReviewed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_HasBeenReviewed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_HasBeenReviewed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Contexts_MetaData[] = {
		{ "Category", "Translation" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "ToolTip", "Contexts the source was found in" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Contexts = { "Contexts", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTranslationUnit, Contexts), METADATA_PARAMS(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Contexts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Contexts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Contexts_Inner = { "Contexts", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTranslationContextInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Translation" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Translations" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTranslationUnit, Translation), METADATA_PARAMS(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Translation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Translation" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Original text from the source language" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTranslationUnit, Source), METADATA_PARAMS(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Source_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Translation" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "ToolTip", "The localization key for this translation" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTranslationUnit, Key), METADATA_PARAMS(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Namespace_MetaData[] = {
		{ "Category", "Translation" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "ToolTip", "The localization namespace for this translation" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTranslationUnit, Namespace), METADATA_PARAMS(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Namespace_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Namespace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTranslationUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationUnit_Statics::NewProp_LocresPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationUnit_Statics::NewProp_TranslationBeforeImport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationUnit_Statics::NewProp_HasBeenReviewed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Contexts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Contexts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Translation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Namespace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTranslationUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTranslationUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTranslationUnit_Statics::ClassParams = {
		&UTranslationUnit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTranslationUnit_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTranslationUnit_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTranslationUnit_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTranslationUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTranslationUnit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTranslationUnit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTranslationUnit, 1087126110);
	template<> TRANSLATIONEDITOR_API UClass* StaticClass<UTranslationUnit>()
	{
		return UTranslationUnit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTranslationUnit(Z_Construct_UClass_UTranslationUnit, &UTranslationUnit::StaticClass, TEXT("/Script/TranslationEditor"), TEXT("UTranslationUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTranslationUnit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
