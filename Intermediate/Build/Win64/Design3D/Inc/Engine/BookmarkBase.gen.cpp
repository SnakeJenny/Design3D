// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/BookmarkBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBookmarkBase() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBookmarkBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBookmarkBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FBookmarkBaseJumpToSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings, Z_Construct_UPackage__Script_Engine(), TEXT("BookmarkBaseJumpToSettings"), sizeof(FBookmarkBaseJumpToSettings), Get_Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBookmarkBaseJumpToSettings>()
{
	return FBookmarkBaseJumpToSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBookmarkBaseJumpToSettings(FBookmarkBaseJumpToSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("BookmarkBaseJumpToSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBookmarkBaseJumpToSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFBookmarkBaseJumpToSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BookmarkBaseJumpToSettings")),new UScriptStruct::TCppStructOps<FBookmarkBaseJumpToSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBookmarkBaseJumpToSettings;
	struct Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BookmarkBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBookmarkBaseJumpToSettings>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BookmarkBaseJumpToSettings",
		sizeof(FBookmarkBaseJumpToSettings),
		alignof(FBookmarkBaseJumpToSettings),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BookmarkBaseJumpToSettings"), sizeof(FBookmarkBaseJumpToSettings), Get_Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings_Hash() { return 1988907643U; }
	void UBookmarkBase::StaticRegisterNativesUBookmarkBase()
	{
	}
	UClass* Z_Construct_UClass_UBookmarkBase_NoRegister()
	{
		return UBookmarkBase::StaticClass();
	}
	struct Z_Construct_UClass_UBookmarkBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBookmarkBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBookmarkBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/BookmarkBase.h" },
		{ "ModuleRelativePath", "Classes/Engine/BookmarkBase.h" },
		{ "ToolTip", "Bookmarks are objects that can keep track of specific locations within a level or scene, without\nnecessarily adding additional actors to that scene.\n\nDifferent implementations can be used depending on specific needs, and new implementations can\nbe generated by implementing a class Derived on UBookmarkBase.\n\nSee UBookMark, UBookMark2D, AGameWorldSettings::DefaultBookmarkClass, IBookmarkEditorInteractor." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBookmarkBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBookmarkBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBookmarkBase_Statics::ClassParams = {
		&UBookmarkBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBookmarkBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBookmarkBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBookmarkBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBookmarkBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBookmarkBase, 834950336);
	template<> ENGINE_API UClass* StaticClass<UBookmarkBase>()
	{
		return UBookmarkBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBookmarkBase(Z_Construct_UClass_UBookmarkBase, &UBookmarkBase::StaticClass, TEXT("/Script/Engine"), TEXT("UBookmarkBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBookmarkBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
