// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Curves/IndexedCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIndexedCurve() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleMap();
// End Cross Module References
class UScriptStruct* FIndexedCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FIndexedCurve_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIndexedCurve, Z_Construct_UPackage__Script_Engine(), TEXT("IndexedCurve"), sizeof(FIndexedCurve), Get_Z_Construct_UScriptStruct_FIndexedCurve_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FIndexedCurve>()
{
	return FIndexedCurve::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIndexedCurve(FIndexedCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("IndexedCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFIndexedCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFIndexedCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IndexedCurve")),new UScriptStruct::TCppStructOps<FIndexedCurve>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFIndexedCurve;
	struct Z_Construct_UScriptStruct_FIndexedCurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyHandlesToIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyHandlesToIndices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIndexedCurve_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Curves/IndexedCurve.h" },
		{ "ToolTip", "A curve base class which enables key handles to index lookups.\n\n@todo sequencer: Some heavy refactoring can be done here. Much more stuff can go in this base class." },
	};
#endif
	void* Z_Construct_UScriptStruct_FIndexedCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIndexedCurve>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIndexedCurve_Statics::NewProp_KeyHandlesToIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/IndexedCurve.h" },
		{ "ToolTip", "Map of which key handles go to which indices." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIndexedCurve_Statics::NewProp_KeyHandlesToIndices = { "KeyHandlesToIndices", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIndexedCurve, KeyHandlesToIndices), Z_Construct_UScriptStruct_FKeyHandleMap, METADATA_PARAMS(Z_Construct_UScriptStruct_FIndexedCurve_Statics::NewProp_KeyHandlesToIndices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedCurve_Statics::NewProp_KeyHandlesToIndices_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIndexedCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIndexedCurve_Statics::NewProp_KeyHandlesToIndices,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIndexedCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"IndexedCurve",
		sizeof(FIndexedCurve),
		alignof(FIndexedCurve),
		Z_Construct_UScriptStruct_FIndexedCurve_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIndexedCurve_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FIndexedCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIndexedCurve_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IndexedCurve"), sizeof(FIndexedCurve), Get_Z_Construct_UScriptStruct_FIndexedCurve_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIndexedCurve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIndexedCurve_Hash() { return 1134370489U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
