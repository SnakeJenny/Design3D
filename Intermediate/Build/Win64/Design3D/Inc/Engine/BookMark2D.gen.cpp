// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/BookMark2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBookMark2D() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBookmark2DJumpToSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBookMark2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBookMark2D();
	ENGINE_API UClass* Z_Construct_UClass_UBookmarkBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
class UScriptStruct* FBookmark2DJumpToSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBookmark2DJumpToSettings, Z_Construct_UPackage__Script_Engine(), TEXT("Bookmark2DJumpToSettings"), sizeof(FBookmark2DJumpToSettings), Get_Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBookmark2DJumpToSettings>()
{
	return FBookmark2DJumpToSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBookmark2DJumpToSettings(FBookmark2DJumpToSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("Bookmark2DJumpToSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBookmark2DJumpToSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFBookmark2DJumpToSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Bookmark2DJumpToSettings")),new UScriptStruct::TCppStructOps<FBookmark2DJumpToSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBookmark2DJumpToSettings;
	struct Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BookMark2D.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBookmark2DJumpToSettings>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"Bookmark2DJumpToSettings",
		sizeof(FBookmark2DJumpToSettings),
		alignof(FBookmark2DJumpToSettings),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBookmark2DJumpToSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Bookmark2DJumpToSettings"), sizeof(FBookmark2DJumpToSettings), Get_Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Hash() { return 1777372847U; }
	void UBookMark2D::StaticRegisterNativesUBookMark2D()
	{
	}
	UClass* Z_Construct_UClass_UBookMark2D_NoRegister()
	{
		return UBookMark2D::StaticClass();
	}
	struct Z_Construct_UClass_UBookMark2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zoom2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Zoom2D;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBookMark2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBookmarkBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBookMark2D_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Engine/BookMark2D.h" },
		{ "ModuleRelativePath", "Classes/Engine/BookMark2D.h" },
		{ "ToolTip", "Simple class to store 2D camera information." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBookMark2D_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "BookMark2D" },
		{ "ModuleRelativePath", "Classes/Engine/BookMark2D.h" },
		{ "ToolTip", "Location of the camera" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBookMark2D_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBookMark2D, Location), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UBookMark2D_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBookMark2D_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBookMark2D_Statics::NewProp_Zoom2D_MetaData[] = {
		{ "Category", "BookMark2D" },
		{ "ModuleRelativePath", "Classes/Engine/BookMark2D.h" },
		{ "ToolTip", "Zoom of the camera" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBookMark2D_Statics::NewProp_Zoom2D = { "Zoom2D", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBookMark2D, Zoom2D), METADATA_PARAMS(Z_Construct_UClass_UBookMark2D_Statics::NewProp_Zoom2D_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBookMark2D_Statics::NewProp_Zoom2D_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBookMark2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBookMark2D_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBookMark2D_Statics::NewProp_Zoom2D,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBookMark2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBookMark2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBookMark2D_Statics::ClassParams = {
		&UBookMark2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBookMark2D_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBookMark2D_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBookMark2D_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBookMark2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBookMark2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBookMark2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBookMark2D, 3364294290);
	template<> ENGINE_API UClass* StaticClass<UBookMark2D>()
	{
		return UBookMark2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBookMark2D(Z_Construct_UClass_UBookMark2D, &UBookMark2D::StaticClass, TEXT("/Script/Engine"), TEXT("UBookMark2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBookMark2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
