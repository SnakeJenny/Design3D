// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMGEditor/Public/UMGEditorProjectSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGEditorProjectSettings() {}
// Cross Module References
	UMGEDITOR_API UEnum* Z_Construct_UEnum_UMGEditor_EPropertyBindingPermissionLevel();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
	UMGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions();
	UMGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetCompilerOptions();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprint_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetCompilerRule_NoRegister();
	UMGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDebugResolution();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMGEDITOR_API UClass* Z_Construct_UClass_UUMGEditorProjectSettings_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_UUMGEditorProjectSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
// End Cross Module References
	static UEnum* EPropertyBindingPermissionLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMGEditor_EPropertyBindingPermissionLevel, Z_Construct_UPackage__Script_UMGEditor(), TEXT("EPropertyBindingPermissionLevel"));
		}
		return Singleton;
	}
	template<> UMGEDITOR_API UEnum* StaticEnum<EPropertyBindingPermissionLevel>()
	{
		return EPropertyBindingPermissionLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPropertyBindingPermissionLevel(EPropertyBindingPermissionLevel_StaticEnum, TEXT("/Script/UMGEditor"), TEXT("EPropertyBindingPermissionLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMGEditor_EPropertyBindingPermissionLevel_Hash() { return 2375324650U; }
	UEnum* Z_Construct_UEnum_UMGEditor_EPropertyBindingPermissionLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMGEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPropertyBindingPermissionLevel"), 0, Get_Z_Construct_UEnum_UMGEditor_EPropertyBindingPermissionLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPropertyBindingPermissionLevel::Allow", (int64)EPropertyBindingPermissionLevel::Allow },
				{ "EPropertyBindingPermissionLevel::Prevent", (int64)EPropertyBindingPermissionLevel::Prevent },
				{ "EPropertyBindingPermissionLevel::PreventAndWarn", (int64)EPropertyBindingPermissionLevel::PreventAndWarn },
				{ "EPropertyBindingPermissionLevel::PreventAndError", (int64)EPropertyBindingPermissionLevel::PreventAndError },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Allow.ToolTip", "Freely allow the use of property binding." },
				{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
				{ "Prevent.ToolTip", "Prevent any new property binding, will still allow you to edit widgets with property binding, but\nthe buttons will be missing on all existing widgets that don't have bindings." },
				{ "PreventAndError.ToolTip", "Prevent any new property binding, and error when compiling any existing bindings." },
				{ "PreventAndWarn.ToolTip", "Prevent any new property binding, and warn when compiling any existing bindings." },
				{ "ToolTip", "Controls the level of support you want to have for widget property binding." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMGEditor,
				nullptr,
				"EPropertyBindingPermissionLevel",
				"EPropertyBindingPermissionLevel",
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
class UScriptStruct* FDirectoryWidgetCompilerOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMGEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions, Z_Construct_UPackage__Script_UMGEditor(), TEXT("DirectoryWidgetCompilerOptions"), sizeof(FDirectoryWidgetCompilerOptions), Get_Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Hash());
	}
	return Singleton;
}
template<> UMGEDITOR_API UScriptStruct* StaticStruct<FDirectoryWidgetCompilerOptions>()
{
	return FDirectoryWidgetCompilerOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDirectoryWidgetCompilerOptions(FDirectoryWidgetCompilerOptions::StaticStruct, TEXT("/Script/UMGEditor"), TEXT("DirectoryWidgetCompilerOptions"), false, nullptr, nullptr);
static struct FScriptStruct_UMGEditor_StaticRegisterNativesFDirectoryWidgetCompilerOptions
{
	FScriptStruct_UMGEditor_StaticRegisterNativesFDirectoryWidgetCompilerOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DirectoryWidgetCompilerOptions")),new UScriptStruct::TCppStructOps<FDirectoryWidgetCompilerOptions>);
	}
} ScriptStruct_UMGEditor_StaticRegisterNativesFDirectoryWidgetCompilerOptions;
	struct Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoredWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoredWidgets;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_IgnoredWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Directory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDirectoryWidgetCompilerOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "Compiler" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "The directory specific compiler options for these widgets." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDirectoryWidgetCompilerOptions, Options), Z_Construct_UScriptStruct_FWidgetCompilerOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_Options_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_Options_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_IgnoredWidgets_MetaData[] = {
		{ "Category", "Compiler" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "These widgets are ignored, and they will use the next most applicable directory to determine their rules." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_IgnoredWidgets = { "IgnoredWidgets", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDirectoryWidgetCompilerOptions, IgnoredWidgets), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_IgnoredWidgets_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_IgnoredWidgets_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_IgnoredWidgets_Inner = { "IgnoredWidgets", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_Directory_MetaData[] = {
		{ "Category", "Compiler" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "The directory to limit the rules effects to." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDirectoryWidgetCompilerOptions, Directory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_Directory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_Directory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_IgnoredWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_IgnoredWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_Directory,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
		nullptr,
		&NewStructOps,
		"DirectoryWidgetCompilerOptions",
		sizeof(FDirectoryWidgetCompilerOptions),
		alignof(FDirectoryWidgetCompilerOptions),
		Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMGEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DirectoryWidgetCompilerOptions"), sizeof(FDirectoryWidgetCompilerOptions), Get_Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Hash() { return 1128949688U; }
class UScriptStruct* FWidgetCompilerOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMGEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FWidgetCompilerOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetCompilerOptions, Z_Construct_UPackage__Script_UMGEditor(), TEXT("WidgetCompilerOptions"), sizeof(FWidgetCompilerOptions), Get_Z_Construct_UScriptStruct_FWidgetCompilerOptions_Hash());
	}
	return Singleton;
}
template<> UMGEDITOR_API UScriptStruct* StaticStruct<FWidgetCompilerOptions>()
{
	return FWidgetCompilerOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWidgetCompilerOptions(FWidgetCompilerOptions::StaticStruct, TEXT("/Script/UMGEditor"), TEXT("WidgetCompilerOptions"), false, nullptr, nullptr);
static struct FScriptStruct_UMGEditor_StaticRegisterNativesFWidgetCompilerOptions
{
	FScriptStruct_UMGEditor_StaticRegisterNativesFWidgetCompilerOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WidgetCompilerOptions")),new UScriptStruct::TCppStructOps<FWidgetCompilerOptions>);
	}
} ScriptStruct_UMGEditor_StaticRegisterNativesFWidgetCompilerOptions;
	struct Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Rules;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_Rules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyBindingRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyBindingRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyBindingRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowBlueprintPaint_MetaData[];
#endif
		static void NewProp_bAllowBlueprintPaint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowBlueprintPaint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowBlueprintTick_MetaData[];
#endif
		static void NewProp_bAllowBlueprintTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowBlueprintTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWidgetSupportsDynamicCreation_MetaData[];
#endif
		static void NewProp_bWidgetSupportsDynamicCreation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWidgetSupportsDynamicCreation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookSlowConstructionWidgetTree_MetaData[];
#endif
		static void NewProp_bCookSlowConstructionWidgetTree_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookSlowConstructionWidgetTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetCompilerOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_Rules_MetaData[] = {
		{ "Category", "Compiler" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "Custom rules." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetCompilerOptions, Rules), METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_Rules_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_Rules_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_Rules_Inner = { "Rules", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidgetCompilerRule_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_PropertyBindingRule_MetaData[] = {
		{ "Category", "Compiler" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "Controls if you allow property bindings in widgets.  They can have a large performance impact if used." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_PropertyBindingRule = { "PropertyBindingRule", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetCompilerOptions, PropertyBindingRule), Z_Construct_UEnum_UMGEditor_EPropertyBindingPermissionLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_PropertyBindingRule_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_PropertyBindingRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_PropertyBindingRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintPaint_MetaData[] = {
		{ "Category", "Compiler" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "If you disable this, these widgets these compiler options apply to will not be allowed to implement Paint." },
	};
#endif
	void Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintPaint_SetBit(void* Obj)
	{
		((FWidgetCompilerOptions*)Obj)->bAllowBlueprintPaint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintPaint = { "bAllowBlueprintPaint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWidgetCompilerOptions), &Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintPaint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintPaint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintPaint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintTick_MetaData[] = {
		{ "Category", "Compiler" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "If you disable this, these widgets these compiler options apply to will not be allowed to implement Tick." },
	};
#endif
	void Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintTick_SetBit(void* Obj)
	{
		((FWidgetCompilerOptions*)Obj)->bAllowBlueprintTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintTick = { "bAllowBlueprintTick", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWidgetCompilerOptions), &Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintTick_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintTick_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bWidgetSupportsDynamicCreation_MetaData[] = {
		{ "Category", "Compiler" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "By default all widgets can be dynamically created.  By disabling this by default you require widgets\nto opt into it, which saves memory, because a template doesn't need to be constructed for it." },
	};
#endif
	void Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bWidgetSupportsDynamicCreation_SetBit(void* Obj)
	{
		((FWidgetCompilerOptions*)Obj)->bWidgetSupportsDynamicCreation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bWidgetSupportsDynamicCreation = { "bWidgetSupportsDynamicCreation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWidgetCompilerOptions), &Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bWidgetSupportsDynamicCreation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bWidgetSupportsDynamicCreation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bWidgetSupportsDynamicCreation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bCookSlowConstructionWidgetTree_MetaData[] = {
		{ "Category", "Compiler" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "As a precaution, the slow construction widget tree is cooked in case some non-fast construct widget\nneeds it.  If your project does not need the slow path at all, then disable this, so that you can re-coop\nthat memory." },
	};
#endif
	void Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bCookSlowConstructionWidgetTree_SetBit(void* Obj)
	{
		((FWidgetCompilerOptions*)Obj)->bCookSlowConstructionWidgetTree = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bCookSlowConstructionWidgetTree = { "bCookSlowConstructionWidgetTree", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWidgetCompilerOptions), &Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bCookSlowConstructionWidgetTree_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bCookSlowConstructionWidgetTree_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bCookSlowConstructionWidgetTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_Rules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_Rules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_PropertyBindingRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_PropertyBindingRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintPaint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bWidgetSupportsDynamicCreation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bCookSlowConstructionWidgetTree,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
		nullptr,
		&NewStructOps,
		"WidgetCompilerOptions",
		sizeof(FWidgetCompilerOptions),
		alignof(FWidgetCompilerOptions),
		Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetCompilerOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWidgetCompilerOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMGEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WidgetCompilerOptions"), sizeof(FWidgetCompilerOptions), Get_Z_Construct_UScriptStruct_FWidgetCompilerOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWidgetCompilerOptions_Hash() { return 1412559128U; }
class UScriptStruct* FDebugResolution::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMGEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FDebugResolution_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugResolution, Z_Construct_UPackage__Script_UMGEditor(), TEXT("DebugResolution"), sizeof(FDebugResolution), Get_Z_Construct_UScriptStruct_FDebugResolution_Hash());
	}
	return Singleton;
}
template<> UMGEDITOR_API UScriptStruct* StaticStruct<FDebugResolution>()
{
	return FDebugResolution::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebugResolution(FDebugResolution::StaticStruct, TEXT("/Script/UMGEditor"), TEXT("DebugResolution"), false, nullptr, nullptr);
static struct FScriptStruct_UMGEditor_StaticRegisterNativesFDebugResolution
{
	FScriptStruct_UMGEditor_StaticRegisterNativesFDebugResolution()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DebugResolution")),new UScriptStruct::TCppStructOps<FDebugResolution>);
	}
} ScriptStruct_UMGEditor_StaticRegisterNativesFDebugResolution;
	struct Z_Construct_UScriptStruct_FDebugResolution_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugResolution_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugResolution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugResolution>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugResolution, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugResolution, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugResolution, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugResolution, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Width_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Width_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Width,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugResolution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
		nullptr,
		&NewStructOps,
		"DebugResolution",
		sizeof(FDebugResolution),
		alignof(FDebugResolution),
		Z_Construct_UScriptStruct_FDebugResolution_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugResolution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugResolution_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugResolution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugResolution()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebugResolution_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMGEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebugResolution"), sizeof(FDebugResolution), Get_Z_Construct_UScriptStruct_FDebugResolution_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebugResolution_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebugResolution_Hash() { return 3844989586U; }
	void UUMGEditorProjectSettings::StaticRegisterNativesUUMGEditorProjectSettings()
	{
	}
	UClass* Z_Construct_UClass_UUMGEditorProjectSettings_NoRegister()
	{
		return UUMGEditorProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UUMGEditorProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWidgetSupportsDynamicCreation_MetaData[];
#endif
		static void NewProp_bWidgetSupportsDynamicCreation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWidgetSupportsDynamicCreation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookSlowConstructionWidgetTree_MetaData[];
#endif
		static void NewProp_bCookSlowConstructionWidgetTree_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookSlowConstructionWidgetTree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugResolutions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebugResolutions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugResolutions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultRootWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultRootWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClassesToHide_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WidgetClassesToHide;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetClassesToHide_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoriesToHide_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CategoriesToHide;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoriesToHide_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowWidgetsFromDeveloperContent_MetaData[];
#endif
		static void NewProp_bShowWidgetsFromDeveloperContent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowWidgetsFromDeveloperContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowWidgetsFromEngineContent_MetaData[];
#endif
		static void NewProp_bShowWidgetsFromEngineContent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowWidgetsFromEngineContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectoryCompilerOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DirectoryCompilerOptions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectoryCompilerOptions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCompilerOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultCompilerOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGEditorProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGEditorProjectSettings.h" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "Implements the settings for the UMG Editor Project Settings" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bWidgetSupportsDynamicCreation_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	void Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bWidgetSupportsDynamicCreation_SetBit(void* Obj)
	{
		((UUMGEditorProjectSettings*)Obj)->bWidgetSupportsDynamicCreation_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bWidgetSupportsDynamicCreation = { "bWidgetSupportsDynamicCreation", nullptr, (EPropertyFlags)0x0040000020004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGEditorProjectSettings), &Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bWidgetSupportsDynamicCreation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bWidgetSupportsDynamicCreation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bWidgetSupportsDynamicCreation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bCookSlowConstructionWidgetTree_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	void Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bCookSlowConstructionWidgetTree_SetBit(void* Obj)
	{
		((UUMGEditorProjectSettings*)Obj)->bCookSlowConstructionWidgetTree_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bCookSlowConstructionWidgetTree = { "bCookSlowConstructionWidgetTree", nullptr, (EPropertyFlags)0x0040000020004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGEditorProjectSettings), &Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bCookSlowConstructionWidgetTree_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bCookSlowConstructionWidgetTree_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bCookSlowConstructionWidgetTree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGEditorProjectSettings, Version), METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_Version_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DebugResolutions_MetaData[] = {
		{ "Category", "Designer" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DebugResolutions = { "DebugResolutions", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGEditorProjectSettings, DebugResolutions), METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DebugResolutions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DebugResolutions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DebugResolutions_Inner = { "DebugResolutions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDebugResolution, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DefaultRootWidget_MetaData[] = {
		{ "Category", "Designer" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "The panel widget to place at the root of all newly constructed widget blueprints. Can be empty." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DefaultRootWidget = { "DefaultRootWidget", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGEditorProjectSettings, DefaultRootWidget), Z_Construct_UClass_UPanelWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DefaultRootWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DefaultRootWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_WidgetClassesToHide_MetaData[] = {
		{ "Category", "Class Filtering" },
		{ "MetaClass", "Widget" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_WidgetClassesToHide = { "WidgetClassesToHide", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGEditorProjectSettings, WidgetClassesToHide), METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_WidgetClassesToHide_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_WidgetClassesToHide_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_WidgetClassesToHide_Inner = { "WidgetClassesToHide", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CategoriesToHide_MetaData[] = {
		{ "Category", "Class Filtering" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CategoriesToHide = { "CategoriesToHide", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGEditorProjectSettings, CategoriesToHide), METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CategoriesToHide_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CategoriesToHide_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CategoriesToHide_Inner = { "CategoriesToHide", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromDeveloperContent_MetaData[] = {
		{ "Category", "Class Filtering" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	void Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromDeveloperContent_SetBit(void* Obj)
	{
		((UUMGEditorProjectSettings*)Obj)->bShowWidgetsFromDeveloperContent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromDeveloperContent = { "bShowWidgetsFromDeveloperContent", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGEditorProjectSettings), &Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromDeveloperContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromDeveloperContent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromDeveloperContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromEngineContent_MetaData[] = {
		{ "Category", "Class Filtering" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	void Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromEngineContent_SetBit(void* Obj)
	{
		((UUMGEditorProjectSettings*)Obj)->bShowWidgetsFromEngineContent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromEngineContent = { "bShowWidgetsFromEngineContent", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGEditorProjectSettings), &Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromEngineContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromEngineContent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromEngineContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DirectoryCompilerOptions_MetaData[] = {
		{ "Category", "Compiler" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DirectoryCompilerOptions = { "DirectoryCompilerOptions", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGEditorProjectSettings, DirectoryCompilerOptions), METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DirectoryCompilerOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DirectoryCompilerOptions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DirectoryCompilerOptions_Inner = { "DirectoryCompilerOptions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DefaultCompilerOptions_MetaData[] = {
		{ "Category", "Compiler" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DefaultCompilerOptions = { "DefaultCompilerOptions", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGEditorProjectSettings, DefaultCompilerOptions), Z_Construct_UScriptStruct_FWidgetCompilerOptions, METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DefaultCompilerOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DefaultCompilerOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGEditorProjectSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bWidgetSupportsDynamicCreation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bCookSlowConstructionWidgetTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_Version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DebugResolutions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DebugResolutions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DefaultRootWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_WidgetClassesToHide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_WidgetClassesToHide_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CategoriesToHide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CategoriesToHide_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromDeveloperContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromEngineContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DirectoryCompilerOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DirectoryCompilerOptions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DefaultCompilerOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGEditorProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGEditorProjectSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::ClassParams = {
		&UUMGEditorProjectSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGEditorProjectSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGEditorProjectSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGEditorProjectSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGEditorProjectSettings, 2781272679);
	template<> UMGEDITOR_API UClass* StaticClass<UUMGEditorProjectSettings>()
	{
		return UUMGEditorProjectSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGEditorProjectSettings(Z_Construct_UClass_UUMGEditorProjectSettings, &UUMGEditorProjectSettings::StaticClass, TEXT("/Script/UMGEditor"), TEXT("UUMGEditorProjectSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGEditorProjectSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
