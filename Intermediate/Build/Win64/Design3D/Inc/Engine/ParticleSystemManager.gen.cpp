// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/ParticleSystemManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSystemManager() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
// End Cross Module References
class UScriptStruct* FParticleSystemWorldManagerTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleSystemWorldManagerTickFunction"), sizeof(FParticleSystemWorldManagerTickFunction), Get_Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleSystemWorldManagerTickFunction>()
{
	return FParticleSystemWorldManagerTickFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParticleSystemWorldManagerTickFunction(FParticleSystemWorldManagerTickFunction::StaticStruct, TEXT("/Script/Engine"), TEXT("ParticleSystemWorldManagerTickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParticleSystemWorldManagerTickFunction
{
	FScriptStruct_Engine_StaticRegisterNativesFParticleSystemWorldManagerTickFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParticleSystemWorldManagerTickFunction")),new UScriptStruct::TCppStructOps<FParticleSystemWorldManagerTickFunction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFParticleSystemWorldManagerTickFunction;
	struct Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleSystemWorldManagerTickFunction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"ParticleSystemWorldManagerTickFunction",
		sizeof(FParticleSystemWorldManagerTickFunction),
		alignof(FParticleSystemWorldManagerTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParticleSystemWorldManagerTickFunction"), sizeof(FParticleSystemWorldManagerTickFunction), Get_Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParticleSystemWorldManagerTickFunction_Hash() { return 954369866U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
