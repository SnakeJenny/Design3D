// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HTML5PlatformEditor/Private/HTML5SDKSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHTML5SDKSettings() {}
// Cross Module References
	HTML5PLATFORMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHTML5DeviceMapping();
	UPackage* Z_Construct_UPackage__Script_HTML5PlatformEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	HTML5PLATFORMEDITOR_API UClass* Z_Construct_UClass_UHTML5SDKSettings_NoRegister();
	HTML5PLATFORMEDITOR_API UClass* Z_Construct_UClass_UHTML5SDKSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FHTML5DeviceMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HTML5PLATFORMEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FHTML5DeviceMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHTML5DeviceMapping, Z_Construct_UPackage__Script_HTML5PlatformEditor(), TEXT("HTML5DeviceMapping"), sizeof(FHTML5DeviceMapping), Get_Z_Construct_UScriptStruct_FHTML5DeviceMapping_Hash());
	}
	return Singleton;
}
template<> HTML5PLATFORMEDITOR_API UScriptStruct* StaticStruct<FHTML5DeviceMapping>()
{
	return FHTML5DeviceMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHTML5DeviceMapping(FHTML5DeviceMapping::StaticStruct, TEXT("/Script/HTML5PlatformEditor"), TEXT("HTML5DeviceMapping"), false, nullptr, nullptr);
static struct FScriptStruct_HTML5PlatformEditor_StaticRegisterNativesFHTML5DeviceMapping
{
	FScriptStruct_HTML5PlatformEditor_StaticRegisterNativesFHTML5DeviceMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HTML5DeviceMapping")),new UScriptStruct::TCppStructOps<FHTML5DeviceMapping>);
	}
} ScriptStruct_HTML5PlatformEditor_StaticRegisterNativesFHTML5DeviceMapping;
	struct Z_Construct_UScriptStruct_FHTML5DeviceMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrowserPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BrowserPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrowserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BrowserName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHTML5DeviceMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HTML5SDKSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHTML5DeviceMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHTML5DeviceMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHTML5DeviceMapping_Statics::NewProp_BrowserPath_MetaData[] = {
		{ "Category", "HTML5_Devices" },
		{ "DisplayName", "Browser filepath" },
		{ "ModuleRelativePath", "Private/HTML5SDKSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHTML5DeviceMapping_Statics::NewProp_BrowserPath = { "BrowserPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHTML5DeviceMapping, BrowserPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FHTML5DeviceMapping_Statics::NewProp_BrowserPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHTML5DeviceMapping_Statics::NewProp_BrowserPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHTML5DeviceMapping_Statics::NewProp_BrowserName_MetaData[] = {
		{ "Category", "HTML5_Devices" },
		{ "DisplayName", "Browser name" },
		{ "ModuleRelativePath", "Private/HTML5SDKSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHTML5DeviceMapping_Statics::NewProp_BrowserName = { "BrowserName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHTML5DeviceMapping, BrowserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHTML5DeviceMapping_Statics::NewProp_BrowserName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHTML5DeviceMapping_Statics::NewProp_BrowserName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHTML5DeviceMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTML5DeviceMapping_Statics::NewProp_BrowserPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHTML5DeviceMapping_Statics::NewProp_BrowserName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHTML5DeviceMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HTML5PlatformEditor,
		nullptr,
		&NewStructOps,
		"HTML5DeviceMapping",
		sizeof(FHTML5DeviceMapping),
		alignof(FHTML5DeviceMapping),
		Z_Construct_UScriptStruct_FHTML5DeviceMapping_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FHTML5DeviceMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHTML5DeviceMapping_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FHTML5DeviceMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHTML5DeviceMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHTML5DeviceMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HTML5PlatformEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HTML5DeviceMapping"), sizeof(FHTML5DeviceMapping), Get_Z_Construct_UScriptStruct_FHTML5DeviceMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHTML5DeviceMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHTML5DeviceMapping_Hash() { return 3893927577U; }
	void UHTML5SDKSettings::StaticRegisterNativesUHTML5SDKSettings()
	{
	}
	UClass* Z_Construct_UClass_UHTML5SDKSettings_NoRegister()
	{
		return UHTML5SDKSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHTML5SDKSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHTML5SDKSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HTML5PlatformEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTML5SDKSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HTML5SDKSettings.h" },
		{ "ModuleRelativePath", "Private/HTML5SDKSettings.h" },
		{ "ToolTip", "Implements the settings for the HTML5 SDK setup." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHTML5SDKSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHTML5SDKSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHTML5SDKSettings_Statics::ClassParams = {
		&UHTML5SDKSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x081000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHTML5SDKSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHTML5SDKSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHTML5SDKSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHTML5SDKSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHTML5SDKSettings, 390158780);
	template<> HTML5PLATFORMEDITOR_API UClass* StaticClass<UHTML5SDKSettings>()
	{
		return UHTML5SDKSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHTML5SDKSettings(Z_Construct_UClass_UHTML5SDKSettings, &UHTML5SDKSettings::StaticClass, TEXT("/Script/HTML5PlatformEditor"), TEXT("UHTML5SDKSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHTML5SDKSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
