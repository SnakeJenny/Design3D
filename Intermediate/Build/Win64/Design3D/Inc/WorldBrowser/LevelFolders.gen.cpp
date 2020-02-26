// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldBrowser/Private/LevelFolders.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelFolders() {}
// Cross Module References
	WORLDBROWSER_API UScriptStruct* Z_Construct_UScriptStruct_FLevelFolderProps();
	UPackage* Z_Construct_UPackage__Script_WorldBrowser();
	WORLDBROWSER_API UClass* Z_Construct_UClass_UEditorLevelFolders_NoRegister();
	WORLDBROWSER_API UClass* Z_Construct_UClass_UEditorLevelFolders();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FLevelFolderProps::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WORLDBROWSER_API uint32 Get_Z_Construct_UScriptStruct_FLevelFolderProps_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelFolderProps, Z_Construct_UPackage__Script_WorldBrowser(), TEXT("LevelFolderProps"), sizeof(FLevelFolderProps), Get_Z_Construct_UScriptStruct_FLevelFolderProps_Hash());
	}
	return Singleton;
}
template<> WORLDBROWSER_API UScriptStruct* StaticStruct<FLevelFolderProps>()
{
	return FLevelFolderProps::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelFolderProps(FLevelFolderProps::StaticStruct, TEXT("/Script/WorldBrowser"), TEXT("LevelFolderProps"), false, nullptr, nullptr);
static struct FScriptStruct_WorldBrowser_StaticRegisterNativesFLevelFolderProps
{
	FScriptStruct_WorldBrowser_StaticRegisterNativesFLevelFolderProps()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelFolderProps")),new UScriptStruct::TCppStructOps<FLevelFolderProps>);
	}
} ScriptStruct_WorldBrowser_StaticRegisterNativesFLevelFolderProps;
	struct Z_Construct_UScriptStruct_FLevelFolderProps_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelFolderProps_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/LevelFolders.h" },
		{ "ToolTip", "Properties for level folders" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelFolderProps_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelFolderProps>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelFolderProps_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldBrowser,
		nullptr,
		&NewStructOps,
		"LevelFolderProps",
		sizeof(FLevelFolderProps),
		alignof(FLevelFolderProps),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelFolderProps_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelFolderProps_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelFolderProps()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelFolderProps_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_WorldBrowser();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelFolderProps"), sizeof(FLevelFolderProps), Get_Z_Construct_UScriptStruct_FLevelFolderProps_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelFolderProps_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelFolderProps_Hash() { return 3817666042U; }
	void UEditorLevelFolders::StaticRegisterNativesUEditorLevelFolders()
	{
	}
	UClass* Z_Construct_UClass_UEditorLevelFolders_NoRegister()
	{
		return UEditorLevelFolders::StaticClass();
	}
	struct Z_Construct_UClass_UEditorLevelFolders_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorLevelFolders_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldBrowser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLevelFolders_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelFolders.h" },
		{ "ModuleRelativePath", "Private/LevelFolders.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Level folder UObject, for supporting undo/redo functionality" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorLevelFolders_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorLevelFolders>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorLevelFolders_Statics::ClassParams = {
		&UEditorLevelFolders::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorLevelFolders_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorLevelFolders_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorLevelFolders()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorLevelFolders_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorLevelFolders, 4187574082);
	template<> WORLDBROWSER_API UClass* StaticClass<UEditorLevelFolders>()
	{
		return UEditorLevelFolders::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorLevelFolders(Z_Construct_UClass_UEditorLevelFolders, &UEditorLevelFolders::StaticClass, TEXT("/Script/WorldBrowser"), TEXT("UEditorLevelFolders"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorLevelFolders);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEditorLevelFolders)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
