// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/MemberReference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMemberReference() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMemberReference();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FMemberReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMemberReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMemberReference, Z_Construct_UPackage__Script_Engine(), TEXT("MemberReference"), sizeof(FMemberReference), Get_Z_Construct_UScriptStruct_FMemberReference_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMemberReference>()
{
	return FMemberReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMemberReference(FMemberReference::StaticStruct, TEXT("/Script/Engine"), TEXT("MemberReference"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMemberReference
{
	FScriptStruct_Engine_StaticRegisterNativesFMemberReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MemberReference")),new UScriptStruct::TCppStructOps<FMemberReference>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMemberReference;
	struct Z_Construct_UScriptStruct_FMemberReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasDeprecated_MetaData[];
#endif
		static void NewProp_bWasDeprecated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasDeprecated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelfContext_MetaData[];
#endif
		static void NewProp_bSelfContext_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelfContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MemberGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MemberName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberScope_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemberScope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MemberParent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemberReference_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
		{ "ToolTip", "@TODO: this can encapsulate globally defined fields as well (like with native\n       delegate signatures); consider renaming to FFieldReference" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMemberReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMemberReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bWasDeprecated_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
		{ "ToolTip", "Whether or not this property has been deprecated" },
	};
#endif
	void Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bWasDeprecated_SetBit(void* Obj)
	{
		((FMemberReference*)Obj)->bWasDeprecated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bWasDeprecated = { "bWasDeprecated", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMemberReference), &Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bWasDeprecated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bWasDeprecated_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bWasDeprecated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bSelfContext_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
		{ "ToolTip", "Whether or not this should be a \"self\" context" },
	};
#endif
	void Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bSelfContext_SetBit(void* Obj)
	{
		((FMemberReference*)Obj)->bSelfContext = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bSelfContext = { "bSelfContext", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMemberReference), &Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bSelfContext_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bSelfContext_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bSelfContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
		{ "ToolTip", "The Guid of the variable" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberGuid = { "MemberGuid", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMemberReference, MemberGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberGuid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
		{ "ToolTip", "Name of variable" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberName = { "MemberName", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMemberReference, MemberName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberScope_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberScope = { "MemberScope", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMemberReference, MemberScope), METADATA_PARAMS(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberScope_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberScope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberParent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
		{ "ToolTip", "Most often the Class that this member is defined in. Could be a UPackage\nif it is a native delegate signature function (declared globally). Should\nbe NULL if bSelfContext is true." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberParent = { "MemberParent", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMemberReference, MemberParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberParent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberParent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMemberReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bWasDeprecated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bSelfContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberScope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberParent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMemberReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MemberReference",
		sizeof(FMemberReference),
		alignof(FMemberReference),
		Z_Construct_UScriptStruct_FMemberReference_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMemberReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMemberReference_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMemberReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMemberReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMemberReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MemberReference"), sizeof(FMemberReference), Get_Z_Construct_UScriptStruct_FMemberReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMemberReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMemberReference_Hash() { return 1537989992U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
