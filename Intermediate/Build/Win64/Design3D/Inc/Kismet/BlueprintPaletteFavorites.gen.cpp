// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kismet/Classes/BlueprintPaletteFavorites.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintPaletteFavorites() {}
// Cross Module References
	KISMET_API UScriptStruct* Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem();
	UPackage* Z_Construct_UPackage__Script_Kismet();
	KISMET_API UClass* Z_Construct_UClass_UBlueprintPaletteFavorites_NoRegister();
	KISMET_API UClass* Z_Construct_UClass_UBlueprintPaletteFavorites();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FFavoritedBlueprintPaletteItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KISMET_API uint32 Get_Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem, Z_Construct_UPackage__Script_Kismet(), TEXT("FavoritedBlueprintPaletteItem"), sizeof(FFavoritedBlueprintPaletteItem), Get_Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Hash());
	}
	return Singleton;
}
template<> KISMET_API UScriptStruct* StaticStruct<FFavoritedBlueprintPaletteItem>()
{
	return FFavoritedBlueprintPaletteItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFavoritedBlueprintPaletteItem(FFavoritedBlueprintPaletteItem::StaticStruct, TEXT("/Script/Kismet"), TEXT("FavoritedBlueprintPaletteItem"), false, nullptr, nullptr);
static struct FScriptStruct_Kismet_StaticRegisterNativesFFavoritedBlueprintPaletteItem
{
	FScriptStruct_Kismet_StaticRegisterNativesFFavoritedBlueprintPaletteItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FavoritedBlueprintPaletteItem")),new UScriptStruct::TCppStructOps<FFavoritedBlueprintPaletteItem>);
	}
} ScriptStruct_Kismet_StaticRegisterNativesFFavoritedBlueprintPaletteItem;
	struct Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BlueprintPaletteFavorites.h" },
		{ "ToolTip", "FFavoritedPaletteItem" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFavoritedBlueprintPaletteItem>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Kismet,
		nullptr,
		&NewStructOps,
		"FavoritedBlueprintPaletteItem",
		sizeof(FFavoritedBlueprintPaletteItem),
		alignof(FFavoritedBlueprintPaletteItem),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Kismet();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FavoritedBlueprintPaletteItem"), sizeof(FFavoritedBlueprintPaletteItem), Get_Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Hash() { return 2843605660U; }
	void UBlueprintPaletteFavorites::StaticRegisterNativesUBlueprintPaletteFavorites()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintPaletteFavorites_NoRegister()
	{
		return UBlueprintPaletteFavorites::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintPaletteFavorites_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFavorites_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentFavorites;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentFavorites_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomFavorites_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomFavorites;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomFavorites_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Kismet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintPaletteFavorites.h" },
		{ "ModuleRelativePath", "Classes/BlueprintPaletteFavorites.h" },
		{ "ToolTip", "FBlueprintPaletteFavorites" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentProfile_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintPaletteFavorites.h" },
		{ "ToolTip", "Users could load pre-existing profiles (intended to share favorites, and\nhook into tutorials). If empty, the default profile will be loaded; if\nthe user has customized a pre-existing profile, then this will be \"CustomProfile\"." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentProfile = { "CurrentProfile", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintPaletteFavorites, CurrentProfile), METADATA_PARAMS(Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentProfile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentFavorites_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintPaletteFavorites.h" },
		{ "ToolTip", "A list of favorites that is constructed in PostLoad() (either from a\nprofile or the user's set of CustomFavorites). This list is up to date\nand maintained at runtime." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentFavorites = { "CurrentFavorites", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintPaletteFavorites, CurrentFavorites), METADATA_PARAMS(Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentFavorites_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentFavorites_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentFavorites_Inner = { "CurrentFavorites", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CustomFavorites_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintPaletteFavorites.h" },
		{ "ToolTip", "A list of strings that are used to identify specific palette actions.\nThis is what gets saved out when the user has customized their own set,\nand is not updated until PreSave(const class ITargetPlatform* TargetPlatform)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CustomFavorites = { "CustomFavorites", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintPaletteFavorites, CustomFavorites), METADATA_PARAMS(Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CustomFavorites_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CustomFavorites_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CustomFavorites_Inner = { "CustomFavorites", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentFavorites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentFavorites_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CustomFavorites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CustomFavorites_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintPaletteFavorites>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::ClassParams = {
		&UBlueprintPaletteFavorites::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintPaletteFavorites()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintPaletteFavorites, 216191254);
	template<> KISMET_API UClass* StaticClass<UBlueprintPaletteFavorites>()
	{
		return UBlueprintPaletteFavorites::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintPaletteFavorites(Z_Construct_UClass_UBlueprintPaletteFavorites, &UBlueprintPaletteFavorites::StaticClass, TEXT("/Script/Kismet"), TEXT("UBlueprintPaletteFavorites"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintPaletteFavorites);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
