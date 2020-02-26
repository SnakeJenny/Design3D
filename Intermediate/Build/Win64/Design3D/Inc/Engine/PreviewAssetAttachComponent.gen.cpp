// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreviewAssetAttachComponent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewAssetAttachContainer();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewAttachedObjectPair();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FPreviewAssetAttachContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPreviewAssetAttachContainer, Z_Construct_UPackage__Script_Engine(), TEXT("PreviewAssetAttachContainer"), sizeof(FPreviewAssetAttachContainer), Get_Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPreviewAssetAttachContainer>()
{
	return FPreviewAssetAttachContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPreviewAssetAttachContainer(FPreviewAssetAttachContainer::StaticStruct, TEXT("/Script/Engine"), TEXT("PreviewAssetAttachContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPreviewAssetAttachContainer
{
	FScriptStruct_Engine_StaticRegisterNativesFPreviewAssetAttachContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PreviewAssetAttachContainer")),new UScriptStruct::TCppStructOps<FPreviewAssetAttachContainer>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPreviewAssetAttachContainer;
	struct Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttachedObjects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachedObjects_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/PreviewAssetAttachComponent.h" },
		{ "ToolTip", "Component which deals with attaching assets" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPreviewAssetAttachContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::NewProp_AttachedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PreviewAssetAttachComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::NewProp_AttachedObjects = { "AttachedObjects", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewAssetAttachContainer, AttachedObjects), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::NewProp_AttachedObjects_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::NewProp_AttachedObjects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::NewProp_AttachedObjects_Inner = { "AttachedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPreviewAttachedObjectPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::NewProp_AttachedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::NewProp_AttachedObjects_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PreviewAssetAttachContainer",
		sizeof(FPreviewAssetAttachContainer),
		alignof(FPreviewAssetAttachContainer),
		Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPreviewAssetAttachContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PreviewAssetAttachContainer"), sizeof(FPreviewAssetAttachContainer), Get_Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Hash() { return 3188005231U; }
class UScriptStruct* FPreviewAttachedObjectPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair, Z_Construct_UPackage__Script_Engine(), TEXT("PreviewAttachedObjectPair"), sizeof(FPreviewAttachedObjectPair), Get_Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPreviewAttachedObjectPair>()
{
	return FPreviewAttachedObjectPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPreviewAttachedObjectPair(FPreviewAttachedObjectPair::StaticStruct, TEXT("/Script/Engine"), TEXT("PreviewAttachedObjectPair"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPreviewAttachedObjectPair
{
	FScriptStruct_Engine_StaticRegisterNativesFPreviewAttachedObjectPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PreviewAttachedObjectPair")),new UScriptStruct::TCppStructOps<FPreviewAttachedObjectPair>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPreviewAttachedObjectPair;
	struct Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachedTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AttachedObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/PreviewAssetAttachComponent.h" },
		{ "ToolTip", "Preview items that are attached to the skeleton *" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPreviewAttachedObjectPair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_AttachedTo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PreviewAssetAttachComponent.h" },
		{ "ToolTip", "The name of the attach point of the Object (for example a bone or socket name)" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_AttachedTo = { "AttachedTo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewAttachedObjectPair, AttachedTo), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_AttachedTo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_AttachedTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_Object_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PreviewAssetAttachComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewAttachedObjectPair, Object_DEPRECATED), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_Object_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_AttachedObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PreviewAssetAttachComponent.h" },
		{ "ToolTip", "the object to be attached" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_AttachedObject = { "AttachedObject", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewAttachedObjectPair, AttachedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_AttachedObject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_AttachedObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_AttachedTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_AttachedObject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PreviewAttachedObjectPair",
		sizeof(FPreviewAttachedObjectPair),
		alignof(FPreviewAttachedObjectPair),
		Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPreviewAttachedObjectPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PreviewAttachedObjectPair"), sizeof(FPreviewAttachedObjectPair), Get_Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Hash() { return 3770423951U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
