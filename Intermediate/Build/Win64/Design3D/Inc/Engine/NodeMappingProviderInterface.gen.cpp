// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Animation/NodeMappingProviderInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeMappingProviderInterface() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeItem();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingProviderInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
class UScriptStruct* FNodeItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNodeItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeItem, Z_Construct_UPackage__Script_Engine(), TEXT("NodeItem"), sizeof(FNodeItem), Get_Z_Construct_UScriptStruct_FNodeItem_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNodeItem>()
{
	return FNodeItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeItem(FNodeItem::StaticStruct, TEXT("/Script/Engine"), TEXT("NodeItem"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNodeItem
{
	FScriptStruct_Engine_StaticRegisterNativesFNodeItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NodeItem")),new UScriptStruct::TCppStructOps<FNodeItem>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNodeItem;
	struct Z_Construct_UScriptStruct_FNodeItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/NodeMappingProviderInterface.h" },
		{ "ToolTip", "Node Information to save with" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/NodeMappingProviderInterface.h" },
		{ "ToolTip", "Space transform (Not based on parent). Used by control rig system" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeItem, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_Transform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_ParentName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/NodeMappingProviderInterface.h" },
		{ "ToolTip", "Parent Name. If NAME_None, it will consider no parent" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNodeItem, ParentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_ParentName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_ParentName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_ParentName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NodeItem",
		sizeof(FNodeItem),
		alignof(FNodeItem),
		Z_Construct_UScriptStruct_FNodeItem_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeItem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeItem"), sizeof(FNodeItem), Get_Z_Construct_UScriptStruct_FNodeItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNodeItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeItem_Hash() { return 826665482U; }
	void UNodeMappingProviderInterface::StaticRegisterNativesUNodeMappingProviderInterface()
	{
	}
	UClass* Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister()
	{
		return UNodeMappingProviderInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNodeMappingProviderInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNodeMappingProviderInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeMappingProviderInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingProviderInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNodeMappingProviderInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INodeMappingProviderInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNodeMappingProviderInterface_Statics::ClassParams = {
		&UNodeMappingProviderInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNodeMappingProviderInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNodeMappingProviderInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNodeMappingProviderInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNodeMappingProviderInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNodeMappingProviderInterface, 185348332);
	template<> ENGINE_API UClass* StaticClass<UNodeMappingProviderInterface>()
	{
		return UNodeMappingProviderInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNodeMappingProviderInterface(Z_Construct_UClass_UNodeMappingProviderInterface, &UNodeMappingProviderInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UNodeMappingProviderInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNodeMappingProviderInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
