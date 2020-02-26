// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/BookMark.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBookMark() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBookmarkJumpToSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings();
	ENGINE_API UClass* Z_Construct_UClass_UBookMark_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBookMark();
	ENGINE_API UClass* Z_Construct_UClass_UBookmarkBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FBookmarkJumpToSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBookmarkJumpToSettings, Z_Construct_UPackage__Script_Engine(), TEXT("BookmarkJumpToSettings"), sizeof(FBookmarkJumpToSettings), Get_Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBookmarkJumpToSettings>()
{
	return FBookmarkJumpToSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBookmarkJumpToSettings(FBookmarkJumpToSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("BookmarkJumpToSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBookmarkJumpToSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFBookmarkJumpToSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BookmarkJumpToSettings")),new UScriptStruct::TCppStructOps<FBookmarkJumpToSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBookmarkJumpToSettings;
	struct Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BookMark.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBookmarkJumpToSettings>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings,
		&NewStructOps,
		"BookmarkJumpToSettings",
		sizeof(FBookmarkJumpToSettings),
		alignof(FBookmarkJumpToSettings),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBookmarkJumpToSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BookmarkJumpToSettings"), sizeof(FBookmarkJumpToSettings), Get_Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Hash() { return 1459843010U; }
	void UBookMark::StaticRegisterNativesUBookMark()
	{
	}
	UClass* Z_Construct_UClass_UBookMark_NoRegister()
	{
		return UBookMark::StaticClass();
	}
	struct Z_Construct_UClass_UBookMark_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HiddenLevels;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HiddenLevels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBookMark_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBookmarkBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBookMark_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Engine/BookMark.h" },
		{ "ModuleRelativePath", "Classes/Engine/BookMark.h" },
		{ "ToolTip", "A camera position the current level." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBookMark_Statics::NewProp_HiddenLevels_MetaData[] = {
		{ "Category", "BookMark" },
		{ "ModuleRelativePath", "Classes/Engine/BookMark.h" },
		{ "ToolTip", "Array of levels that are hidden" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBookMark_Statics::NewProp_HiddenLevels = { "HiddenLevels", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBookMark, HiddenLevels), METADATA_PARAMS(Z_Construct_UClass_UBookMark_Statics::NewProp_HiddenLevels_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBookMark_Statics::NewProp_HiddenLevels_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBookMark_Statics::NewProp_HiddenLevels_Inner = { "HiddenLevels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBookMark_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "BookMark" },
		{ "ModuleRelativePath", "Classes/Engine/BookMark.h" },
		{ "ToolTip", "Camera rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBookMark_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBookMark, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UBookMark_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBookMark_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBookMark_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "BookMark" },
		{ "ModuleRelativePath", "Classes/Engine/BookMark.h" },
		{ "ToolTip", "Camera position" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBookMark_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBookMark, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBookMark_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBookMark_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBookMark_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBookMark_Statics::NewProp_HiddenLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBookMark_Statics::NewProp_HiddenLevels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBookMark_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBookMark_Statics::NewProp_Location,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBookMark_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBookMark>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBookMark_Statics::ClassParams = {
		&UBookMark::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBookMark_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBookMark_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBookMark_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBookMark_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBookMark()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBookMark_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBookMark, 2828215540);
	template<> ENGINE_API UClass* StaticClass<UBookMark>()
	{
		return UBookMark::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBookMark(Z_Construct_UClass_UBookMark, &UBookMark::StaticClass, TEXT("/Script/Engine"), TEXT("UBookMark"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBookMark);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
