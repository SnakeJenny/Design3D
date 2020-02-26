// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Animation/WidgetAnimationBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetAnimationBinding() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetAnimationBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FWidgetAnimationBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FWidgetAnimationBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetAnimationBinding, Z_Construct_UPackage__Script_UMG(), TEXT("WidgetAnimationBinding"), sizeof(FWidgetAnimationBinding), Get_Z_Construct_UScriptStruct_FWidgetAnimationBinding_Hash());
	}
	return Singleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FWidgetAnimationBinding>()
{
	return FWidgetAnimationBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWidgetAnimationBinding(FWidgetAnimationBinding::StaticStruct, TEXT("/Script/UMG"), TEXT("WidgetAnimationBinding"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFWidgetAnimationBinding
{
	FScriptStruct_UMG_StaticRegisterNativesFWidgetAnimationBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WidgetAnimationBinding")),new UScriptStruct::TCppStructOps<FWidgetAnimationBinding>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFWidgetAnimationBinding;
	struct Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRootWidget_MetaData[];
#endif
		static void NewProp_bIsRootWidget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRootWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotWidgetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotWidgetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WidgetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationBinding.h" },
		{ "ToolTip", "A single object bound to a UMG sequence." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetAnimationBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_bIsRootWidget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationBinding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_bIsRootWidget_SetBit(void* Obj)
	{
		((FWidgetAnimationBinding*)Obj)->bIsRootWidget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_bIsRootWidget = { "bIsRootWidget", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWidgetAnimationBinding), &Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_bIsRootWidget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_bIsRootWidget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_bIsRootWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_AnimationGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_AnimationGuid = { "AnimationGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetAnimationBinding, AnimationGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_AnimationGuid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_AnimationGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_SlotWidgetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_SlotWidgetName = { "SlotWidgetName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetAnimationBinding, SlotWidgetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_SlotWidgetName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_SlotWidgetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_WidgetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_WidgetName = { "WidgetName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetAnimationBinding, WidgetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_WidgetName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_WidgetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_bIsRootWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_AnimationGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_SlotWidgetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_WidgetName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"WidgetAnimationBinding",
		sizeof(FWidgetAnimationBinding),
		alignof(FWidgetAnimationBinding),
		Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetAnimationBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWidgetAnimationBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WidgetAnimationBinding"), sizeof(FWidgetAnimationBinding), Get_Z_Construct_UScriptStruct_FWidgetAnimationBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWidgetAnimationBinding_Hash() { return 3337735030U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
