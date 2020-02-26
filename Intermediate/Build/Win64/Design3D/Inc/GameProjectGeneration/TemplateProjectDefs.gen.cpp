// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameProjectGeneration/Classes/TemplateProjectDefs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateProjectDefs() {}
// Cross Module References
	GAMEPROJECTGENERATION_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizedTemplateString();
	UPackage* Z_Construct_UPackage__Script_GameProjectGeneration();
	GAMEPROJECTGENERATION_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateFolderRename();
	GAMEPROJECTGENERATION_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateReplacement();
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UTemplateProjectDefs_NoRegister();
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UTemplateProjectDefs();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ADDCONTENTDIALOG_API UScriptStruct* Z_Construct_UScriptStruct_FFeaturePackLevelSet();
	ADDCONTENTDIALOG_API UEnum* Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel();
// End Cross Module References
class UScriptStruct* FLocalizedTemplateString::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPROJECTGENERATION_API uint32 Get_Z_Construct_UScriptStruct_FLocalizedTemplateString_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizedTemplateString, Z_Construct_UPackage__Script_GameProjectGeneration(), TEXT("LocalizedTemplateString"), sizeof(FLocalizedTemplateString), Get_Z_Construct_UScriptStruct_FLocalizedTemplateString_Hash());
	}
	return Singleton;
}
template<> GAMEPROJECTGENERATION_API UScriptStruct* StaticStruct<FLocalizedTemplateString>()
{
	return FLocalizedTemplateString::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalizedTemplateString(FLocalizedTemplateString::StaticStruct, TEXT("/Script/GameProjectGeneration"), TEXT("LocalizedTemplateString"), false, nullptr, nullptr);
static struct FScriptStruct_GameProjectGeneration_StaticRegisterNativesFLocalizedTemplateString
{
	FScriptStruct_GameProjectGeneration_StaticRegisterNativesFLocalizedTemplateString()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocalizedTemplateString")),new UScriptStruct::TCppStructOps<FLocalizedTemplateString>);
	}
} ScriptStruct_GameProjectGeneration_StaticRegisterNativesFLocalizedTemplateString;
	struct Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizedTemplateString>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizedTemplateString, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewProp_Language_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizedTemplateString, Language), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewProp_Language_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewProp_Language,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameProjectGeneration,
		nullptr,
		&NewStructOps,
		"LocalizedTemplateString",
		sizeof(FLocalizedTemplateString),
		alignof(FLocalizedTemplateString),
		Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizedTemplateString()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalizedTemplateString_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameProjectGeneration();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalizedTemplateString"), sizeof(FLocalizedTemplateString), Get_Z_Construct_UScriptStruct_FLocalizedTemplateString_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalizedTemplateString_Hash() { return 320729436U; }
class UScriptStruct* FTemplateFolderRename::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPROJECTGENERATION_API uint32 Get_Z_Construct_UScriptStruct_FTemplateFolderRename_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTemplateFolderRename, Z_Construct_UPackage__Script_GameProjectGeneration(), TEXT("TemplateFolderRename"), sizeof(FTemplateFolderRename), Get_Z_Construct_UScriptStruct_FTemplateFolderRename_Hash());
	}
	return Singleton;
}
template<> GAMEPROJECTGENERATION_API UScriptStruct* StaticStruct<FTemplateFolderRename>()
{
	return FTemplateFolderRename::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTemplateFolderRename(FTemplateFolderRename::StaticStruct, TEXT("/Script/GameProjectGeneration"), TEXT("TemplateFolderRename"), false, nullptr, nullptr);
static struct FScriptStruct_GameProjectGeneration_StaticRegisterNativesFTemplateFolderRename
{
	FScriptStruct_GameProjectGeneration_StaticRegisterNativesFTemplateFolderRename()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TemplateFolderRename")),new UScriptStruct::TCppStructOps<FTemplateFolderRename>);
	}
} ScriptStruct_GameProjectGeneration_StaticRegisterNativesFTemplateFolderRename;
	struct Z_Construct_UScriptStruct_FTemplateFolderRename_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_To;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTemplateFolderRename>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewProp_To_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateFolderRename, To), METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewProp_To_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewProp_To_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewProp_From_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateFolderRename, From), METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewProp_From_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewProp_From_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewProp_From,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameProjectGeneration,
		nullptr,
		&NewStructOps,
		"TemplateFolderRename",
		sizeof(FTemplateFolderRename),
		alignof(FTemplateFolderRename),
		Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTemplateFolderRename()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTemplateFolderRename_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameProjectGeneration();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TemplateFolderRename"), sizeof(FTemplateFolderRename), Get_Z_Construct_UScriptStruct_FTemplateFolderRename_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTemplateFolderRename_Hash() { return 372430882U; }
class UScriptStruct* FTemplateReplacement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPROJECTGENERATION_API uint32 Get_Z_Construct_UScriptStruct_FTemplateReplacement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTemplateReplacement, Z_Construct_UPackage__Script_GameProjectGeneration(), TEXT("TemplateReplacement"), sizeof(FTemplateReplacement), Get_Z_Construct_UScriptStruct_FTemplateReplacement_Hash());
	}
	return Singleton;
}
template<> GAMEPROJECTGENERATION_API UScriptStruct* StaticStruct<FTemplateReplacement>()
{
	return FTemplateReplacement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTemplateReplacement(FTemplateReplacement::StaticStruct, TEXT("/Script/GameProjectGeneration"), TEXT("TemplateReplacement"), false, nullptr, nullptr);
static struct FScriptStruct_GameProjectGeneration_StaticRegisterNativesFTemplateReplacement
{
	FScriptStruct_GameProjectGeneration_StaticRegisterNativesFTemplateReplacement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TemplateReplacement")),new UScriptStruct::TCppStructOps<FTemplateReplacement>);
	}
} ScriptStruct_GameProjectGeneration_StaticRegisterNativesFTemplateReplacement;
	struct Z_Construct_UScriptStruct_FTemplateReplacement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaseSensitive_MetaData[];
#endif
		static void NewProp_bCaseSensitive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaseSensitive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_To;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_From;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Extensions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Extensions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateReplacement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTemplateReplacement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_bCaseSensitive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_bCaseSensitive_SetBit(void* Obj)
	{
		((FTemplateReplacement*)Obj)->bCaseSensitive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_bCaseSensitive = { "bCaseSensitive", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTemplateReplacement), &Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_bCaseSensitive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_bCaseSensitive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_bCaseSensitive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_To_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateReplacement, To), METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_To_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_To_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_From_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateReplacement, From), METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_From_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_From_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_Extensions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_Extensions = { "Extensions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateReplacement, Extensions), METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_Extensions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_Extensions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_Extensions_Inner = { "Extensions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTemplateReplacement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_bCaseSensitive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_Extensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_Extensions_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTemplateReplacement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameProjectGeneration,
		nullptr,
		&NewStructOps,
		"TemplateReplacement",
		sizeof(FTemplateReplacement),
		alignof(FTemplateReplacement),
		Z_Construct_UScriptStruct_FTemplateReplacement_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTemplateReplacement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTemplateReplacement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameProjectGeneration();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TemplateReplacement"), sizeof(FTemplateReplacement), Get_Z_Construct_UScriptStruct_FTemplateReplacement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTemplateReplacement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTemplateReplacement_Hash() { return 169756475U; }
	void UTemplateProjectDefs::StaticRegisterNativesUTemplateProjectDefs()
	{
	}
	UClass* Z_Construct_UClass_UTemplateProjectDefs_NoRegister()
	{
		return UTemplateProjectDefs::StaticClass();
	}
	struct Z_Construct_UClass_UTemplateProjectDefs_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedContentPacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SharedContentPacks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SharedContentPacks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditDetailLevelPreference_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EditDetailLevelPreference;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EditDetailLevelPreference_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacksToInclude_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PacksToInclude;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PacksToInclude_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowProjectCreation_MetaData[];
#endif
		static void NewProp_bAllowProjectCreation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowProjectCreation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClassTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SortKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplacementsInFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReplacementsInFiles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplacementsInFiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilenameReplacements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FilenameReplacements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilenameReplacements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderRenames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FolderRenames;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FolderRenames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilesToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FilesToIgnore;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilesToIgnore_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoldersToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FoldersToIgnore;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FoldersToIgnore_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedDescriptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalizedDescriptions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalizedDescriptions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedDisplayNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalizedDisplayNames;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalizedDisplayNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplateProjectDefs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameProjectGeneration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TemplateProjectDefs.h" },
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SharedContentPacks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
		{ "ToolTip", "Shared feature packs. The files in these packs listed in these structures marked as 'additionalfiles' will be copied on project generation" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SharedContentPacks = { "SharedContentPacks", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateProjectDefs, SharedContentPacks), METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SharedContentPacks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SharedContentPacks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SharedContentPacks_Inner = { "SharedContentPacks", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFeaturePackLevelSet, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_EditDetailLevelPreference_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
		{ "ToolTip", "What detail level to edit when editing shared template resources" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_EditDetailLevelPreference = { "EditDetailLevelPreference", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateProjectDefs, EditDetailLevelPreference), Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel, METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_EditDetailLevelPreference_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_EditDetailLevelPreference_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_EditDetailLevelPreference_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_PacksToInclude_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
		{ "ToolTip", "Optional list of feature packs to include" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_PacksToInclude = { "PacksToInclude", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateProjectDefs, PacksToInclude), METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_PacksToInclude_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_PacksToInclude_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_PacksToInclude_Inner = { "PacksToInclude", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bAllowProjectCreation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
		{ "ToolTip", "Should we allow creation of a project from this template" },
	};
#endif
	void Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bAllowProjectCreation_SetBit(void* Obj)
	{
		((UTemplateProjectDefs*)Obj)->bAllowProjectCreation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bAllowProjectCreation = { "bAllowProjectCreation", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTemplateProjectDefs), &Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bAllowProjectCreation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bAllowProjectCreation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bAllowProjectCreation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_AssetTypes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_AssetTypes = { "AssetTypes", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateProjectDefs, AssetTypes), METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_AssetTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_AssetTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ClassTypes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ClassTypes = { "ClassTypes", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateProjectDefs, ClassTypes), METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ClassTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ClassTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateProjectDefs, Category), METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_Category_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SortKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SortKey = { "SortKey", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateProjectDefs, SortKey), METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SortKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SortKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ReplacementsInFiles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ReplacementsInFiles = { "ReplacementsInFiles", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateProjectDefs, ReplacementsInFiles), METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ReplacementsInFiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ReplacementsInFiles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ReplacementsInFiles_Inner = { "ReplacementsInFiles", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTemplateReplacement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilenameReplacements_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilenameReplacements = { "FilenameReplacements", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateProjectDefs, FilenameReplacements), METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilenameReplacements_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilenameReplacements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilenameReplacements_Inner = { "FilenameReplacements", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTemplateReplacement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FolderRenames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FolderRenames = { "FolderRenames", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateProjectDefs, FolderRenames), METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FolderRenames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FolderRenames_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FolderRenames_Inner = { "FolderRenames", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTemplateFolderRename, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilesToIgnore_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilesToIgnore = { "FilesToIgnore", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateProjectDefs, FilesToIgnore), METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilesToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilesToIgnore_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilesToIgnore_Inner = { "FilesToIgnore", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FoldersToIgnore_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FoldersToIgnore = { "FoldersToIgnore", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateProjectDefs, FoldersToIgnore), METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FoldersToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FoldersToIgnore_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FoldersToIgnore_Inner = { "FoldersToIgnore", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDescriptions = { "LocalizedDescriptions", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateProjectDefs, LocalizedDescriptions), METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDescriptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDescriptions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDescriptions_Inner = { "LocalizedDescriptions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLocalizedTemplateString, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDisplayNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDisplayNames = { "LocalizedDisplayNames", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplateProjectDefs, LocalizedDisplayNames), METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDisplayNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDisplayNames_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDisplayNames_Inner = { "LocalizedDisplayNames", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLocalizedTemplateString, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTemplateProjectDefs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SharedContentPacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SharedContentPacks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_EditDetailLevelPreference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_EditDetailLevelPreference_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_PacksToInclude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_PacksToInclude_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bAllowProjectCreation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_AssetTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ClassTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SortKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ReplacementsInFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ReplacementsInFiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilenameReplacements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilenameReplacements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FolderRenames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FolderRenames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilesToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilesToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FoldersToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FoldersToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDescriptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDescriptions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDisplayNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDisplayNames_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplateProjectDefs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateProjectDefs>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTemplateProjectDefs_Statics::ClassParams = {
		&UTemplateProjectDefs::StaticClass,
		"TemplateDefs",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTemplateProjectDefs_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::PropPointers),
		0,
		0x000800A5u,
		METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplateProjectDefs()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTemplateProjectDefs_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTemplateProjectDefs, 2625142092);
	template<> GAMEPROJECTGENERATION_API UClass* StaticClass<UTemplateProjectDefs>()
	{
		return UTemplateProjectDefs::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTemplateProjectDefs(Z_Construct_UClass_UTemplateProjectDefs, &UTemplateProjectDefs::StaticClass, TEXT("/Script/GameProjectGeneration"), TEXT("UTemplateProjectDefs"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateProjectDefs);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
