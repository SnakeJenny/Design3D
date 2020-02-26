// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroTutorials/Private/EditorTutorialSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorTutorialSettings() {}
// Cross Module References
	INTROTUTORIALS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialContext();
	UPackage* Z_Construct_UPackage__Script_IntroTutorials();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UEditorTutorialSettings_NoRegister();
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UEditorTutorialSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTROTUTORIALS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialCategory();
// End Cross Module References
class UScriptStruct* FTutorialContext::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INTROTUTORIALS_API uint32 Get_Z_Construct_UScriptStruct_FTutorialContext_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialContext, Z_Construct_UPackage__Script_IntroTutorials(), TEXT("TutorialContext"), sizeof(FTutorialContext), Get_Z_Construct_UScriptStruct_FTutorialContext_Hash());
	}
	return Singleton;
}
template<> INTROTUTORIALS_API UScriptStruct* StaticStruct<FTutorialContext>()
{
	return FTutorialContext::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTutorialContext(FTutorialContext::StaticStruct, TEXT("/Script/IntroTutorials"), TEXT("TutorialContext"), false, nullptr, nullptr);
static struct FScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialContext
{
	FScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialContext()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TutorialContext")),new UScriptStruct::TCppStructOps<FTutorialContext>);
	}
} ScriptStruct_IntroTutorials_StaticRegisterNativesFTutorialContext;
	struct Z_Construct_UScriptStruct_FTutorialContext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchTutorial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaunchTutorial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttractTutorial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttractTutorial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrowserFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BrowserFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContext_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditorTutorialSettings.h" },
		{ "ToolTip", "Named context that corresponds to a particular tutorial" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialContext>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_LaunchTutorial_MetaData[] = {
		{ "Category", "Tutorials" },
		{ "MetaClass", "EditorTutorial" },
		{ "ModuleRelativePath", "Private/EditorTutorialSettings.h" },
		{ "ToolTip", "The tutorial to use in this context when the user chooses to launch" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_LaunchTutorial = { "LaunchTutorial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialContext, LaunchTutorial), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_LaunchTutorial_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_LaunchTutorial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_AttractTutorial_MetaData[] = {
		{ "Category", "Tutorials" },
		{ "MetaClass", "EditorTutorial" },
		{ "ModuleRelativePath", "Private/EditorTutorialSettings.h" },
		{ "ToolTip", "The tutorial to use in this context to let the user know there is a tutorial available" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_AttractTutorial = { "AttractTutorial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialContext, AttractTutorial), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_AttractTutorial_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_AttractTutorial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_BrowserFilter_MetaData[] = {
		{ "Category", "Tutorials" },
		{ "ModuleRelativePath", "Private/EditorTutorialSettings.h" },
		{ "ToolTip", "The filter string to apply to the tutorials browser when launched from this context" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_BrowserFilter = { "BrowserFilter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialContext, BrowserFilter), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_BrowserFilter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_BrowserFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "Tutorials" },
		{ "ModuleRelativePath", "Private/EditorTutorialSettings.h" },
		{ "ToolTip", "The context that this tutorial is used in" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialContext, Context), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_Context_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_LaunchTutorial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_AttractTutorial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_BrowserFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContext_Statics::NewProp_Context,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
		nullptr,
		&NewStructOps,
		"TutorialContext",
		sizeof(FTutorialContext),
		alignof(FTutorialContext),
		Z_Construct_UScriptStruct_FTutorialContext_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContext_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialContext()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTutorialContext_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_IntroTutorials();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TutorialContext"), sizeof(FTutorialContext), Get_Z_Construct_UScriptStruct_FTutorialContext_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTutorialContext_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTutorialContext_Hash() { return 129820832U; }
	void UEditorTutorialSettings::StaticRegisterNativesUEditorTutorialSettings()
	{
	}
	UClass* Z_Construct_UClass_UEditorTutorialSettings_NoRegister()
	{
		return UEditorTutorialSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEditorTutorialSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialContexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TutorialContexts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TutorialContexts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartupTutorial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartupTutorial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Categories;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Categories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableAllTutorialAlerts_MetaData[];
#endif
		static void NewProp_bDisableAllTutorialAlerts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableAllTutorialAlerts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorTutorialSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorialSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorTutorialSettings.h" },
		{ "ModuleRelativePath", "Private/EditorTutorialSettings.h" },
		{ "ToolTip", "Editor-wide tutorial settings" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_TutorialContexts_MetaData[] = {
		{ "Category", "Tutorials" },
		{ "ModuleRelativePath", "Private/EditorTutorialSettings.h" },
		{ "ToolTip", "Tutorials used in various contexts - e.g. the various asset editors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_TutorialContexts = { "TutorialContexts", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorTutorialSettings, TutorialContexts), METADATA_PARAMS(Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_TutorialContexts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_TutorialContexts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_TutorialContexts_Inner = { "TutorialContexts", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTutorialContext, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_StartupTutorial_MetaData[] = {
		{ "Category", "Tutorials" },
		{ "MetaClass", "EditorTutorial" },
		{ "ModuleRelativePath", "Private/EditorTutorialSettings.h" },
		{ "ToolTip", "Tutorial to start on Editor startup" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_StartupTutorial = { "StartupTutorial", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorTutorialSettings, StartupTutorial), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_StartupTutorial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_StartupTutorial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_Categories_MetaData[] = {
		{ "Category", "Tutorials" },
		{ "ModuleRelativePath", "Private/EditorTutorialSettings.h" },
		{ "ToolTip", "Categories for tutorials" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorTutorialSettings, Categories), METADATA_PARAMS(Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_Categories_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_Categories_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTutorialCategory, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_bDisableAllTutorialAlerts_MetaData[] = {
		{ "Category", "Tutorials" },
		{ "ModuleRelativePath", "Private/EditorTutorialSettings.h" },
		{ "ToolTip", "Disable the pulsing alert that indicates a new tutorial is available." },
	};
#endif
	void Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_bDisableAllTutorialAlerts_SetBit(void* Obj)
	{
		((UEditorTutorialSettings*)Obj)->bDisableAllTutorialAlerts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_bDisableAllTutorialAlerts = { "bDisableAllTutorialAlerts", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEditorTutorialSettings), &Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_bDisableAllTutorialAlerts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_bDisableAllTutorialAlerts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_bDisableAllTutorialAlerts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorTutorialSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_TutorialContexts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_TutorialContexts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_StartupTutorial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_Categories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_Categories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorialSettings_Statics::NewProp_bDisableAllTutorialAlerts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorTutorialSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorTutorialSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorTutorialSettings_Statics::ClassParams = {
		&UEditorTutorialSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorTutorialSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEditorTutorialSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorTutorialSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorTutorialSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorTutorialSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorTutorialSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorTutorialSettings, 754511289);
	template<> INTROTUTORIALS_API UClass* StaticClass<UEditorTutorialSettings>()
	{
		return UEditorTutorialSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorTutorialSettings(Z_Construct_UClass_UEditorTutorialSettings, &UEditorTutorialSettings::StaticClass, TEXT("/Script/IntroTutorials"), TEXT("UEditorTutorialSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorTutorialSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
