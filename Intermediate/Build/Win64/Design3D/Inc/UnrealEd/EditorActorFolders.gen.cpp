// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/EditorActorFolders.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorActorFolders() {}
// Cross Module References
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FActorFolderProps();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UEditorActorFolders_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorActorFolders();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FActorFolderProps::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FActorFolderProps_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorFolderProps, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ActorFolderProps"), sizeof(FActorFolderProps), Get_Z_Construct_UScriptStruct_FActorFolderProps_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FActorFolderProps>()
{
	return FActorFolderProps::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorFolderProps(FActorFolderProps::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("ActorFolderProps"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFActorFolderProps
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFActorFolderProps()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorFolderProps")),new UScriptStruct::TCppStructOps<FActorFolderProps>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFActorFolderProps;
	struct Z_Construct_UScriptStruct_FActorFolderProps_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorFolderProps_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorActorFolders.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorFolderProps_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorFolderProps>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorFolderProps_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ActorFolderProps",
		sizeof(FActorFolderProps),
		alignof(FActorFolderProps),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorFolderProps_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorFolderProps_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorFolderProps()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorFolderProps_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorFolderProps"), sizeof(FActorFolderProps), Get_Z_Construct_UScriptStruct_FActorFolderProps_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorFolderProps_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorFolderProps_Hash() { return 1772025389U; }
	void UEditorActorFolders::StaticRegisterNativesUEditorActorFolders()
	{
	}
	UClass* Z_Construct_UClass_UEditorActorFolders_NoRegister()
	{
		return UEditorActorFolders::StaticClass();
	}
	struct Z_Construct_UClass_UEditorActorFolders_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorActorFolders_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorActorFolders_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorActorFolders.h" },
		{ "ModuleRelativePath", "Public/EditorActorFolders.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Actor Folder UObject. This is used to support undo/redo reliably" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorActorFolders_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorActorFolders>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorActorFolders_Statics::ClassParams = {
		&UEditorActorFolders::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorActorFolders_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorActorFolders_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorActorFolders()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorActorFolders_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorActorFolders, 1986606231);
	template<> UNREALED_API UClass* StaticClass<UEditorActorFolders>()
	{
		return UEditorActorFolders::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorActorFolders(Z_Construct_UClass_UEditorActorFolders, &UEditorActorFolders::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UEditorActorFolders"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorActorFolders);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEditorActorFolders)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
