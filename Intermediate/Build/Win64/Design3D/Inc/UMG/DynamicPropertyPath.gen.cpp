// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Binding/DynamicPropertyPath.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicPropertyPath() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicPropertyPath();
	UPackage* Z_Construct_UPackage__Script_UMG();
	PROPERTYPATH_API UScriptStruct* Z_Construct_UScriptStruct_FCachedPropertyPath();
// End Cross Module References
class UScriptStruct* FDynamicPropertyPath::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FDynamicPropertyPath_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicPropertyPath, Z_Construct_UPackage__Script_UMG(), TEXT("DynamicPropertyPath"), sizeof(FDynamicPropertyPath), Get_Z_Construct_UScriptStruct_FDynamicPropertyPath_Hash());
	}
	return Singleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FDynamicPropertyPath>()
{
	return FDynamicPropertyPath::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDynamicPropertyPath(FDynamicPropertyPath::StaticStruct, TEXT("/Script/UMG"), TEXT("DynamicPropertyPath"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFDynamicPropertyPath
{
	FScriptStruct_UMG_StaticRegisterNativesFDynamicPropertyPath()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DynamicPropertyPath")),new UScriptStruct::TCppStructOps<FDynamicPropertyPath>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFDynamicPropertyPath;
	struct Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/DynamicPropertyPath.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicPropertyPath>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		Z_Construct_UScriptStruct_FCachedPropertyPath,
		&NewStructOps,
		"DynamicPropertyPath",
		sizeof(FDynamicPropertyPath),
		alignof(FDynamicPropertyPath),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDynamicPropertyPath()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDynamicPropertyPath_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DynamicPropertyPath"), sizeof(FDynamicPropertyPath), Get_Z_Construct_UScriptStruct_FDynamicPropertyPath_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDynamicPropertyPath_Hash() { return 1039770661U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
