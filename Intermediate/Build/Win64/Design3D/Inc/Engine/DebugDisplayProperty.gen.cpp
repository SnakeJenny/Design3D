// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/DebugDisplayProperty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugDisplayProperty() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebugDisplayProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FDebugDisplayProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDebugDisplayProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugDisplayProperty, Z_Construct_UPackage__Script_Engine(), TEXT("DebugDisplayProperty"), sizeof(FDebugDisplayProperty), Get_Z_Construct_UScriptStruct_FDebugDisplayProperty_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDebugDisplayProperty>()
{
	return FDebugDisplayProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebugDisplayProperty(FDebugDisplayProperty::StaticStruct, TEXT("/Script/Engine"), TEXT("DebugDisplayProperty"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDebugDisplayProperty
{
	FScriptStruct_Engine_StaticRegisterNativesFDebugDisplayProperty()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DebugDisplayProperty")),new UScriptStruct::TCppStructOps<FDebugDisplayProperty>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDebugDisplayProperty;
	struct Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WithinClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WithinClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Obj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Obj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/DebugDisplayProperty.h" },
		{ "ToolTip", "Debug property display functionality to interact with this, use \"display\", \"displayall\", \"displayclear\"\n\n@see UGameViewportClient\n@see FDebugDisplayProperty\n@see DrawStatsHUD" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugDisplayProperty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_WithinClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DebugDisplayProperty.h" },
		{ "ToolTip", "if Obj is a class and WithinClass is not nullptr, further limit the display to objects that have an Outer of WithinClass" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_WithinClass = { "WithinClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugDisplayProperty, WithinClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_WithinClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_WithinClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_Obj_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DebugDisplayProperty.h" },
		{ "ToolTip", "the object whose property to display. If this is a class, all objects of that class are drawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugDisplayProperty, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_Obj_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_Obj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_WithinClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_Obj,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DebugDisplayProperty",
		sizeof(FDebugDisplayProperty),
		alignof(FDebugDisplayProperty),
		Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugDisplayProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebugDisplayProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebugDisplayProperty"), sizeof(FDebugDisplayProperty), Get_Z_Construct_UScriptStruct_FDebugDisplayProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebugDisplayProperty_Hash() { return 679745229U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
