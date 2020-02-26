// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSystemReplay() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemReplayFrame();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleEmitterReplayFrame();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemReplay_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemReplay();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FParticleSystemReplayFrame::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleSystemReplayFrame, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleSystemReplayFrame"), sizeof(FParticleSystemReplayFrame), Get_Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleSystemReplayFrame>()
{
	return FParticleSystemReplayFrame::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParticleSystemReplayFrame(FParticleSystemReplayFrame::StaticStruct, TEXT("/Script/Engine"), TEXT("ParticleSystemReplayFrame"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParticleSystemReplayFrame
{
	FScriptStruct_Engine_StaticRegisterNativesFParticleSystemReplayFrame()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParticleSystemReplayFrame")),new UScriptStruct::TCppStructOps<FParticleSystemReplayFrame>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFParticleSystemReplayFrame;
	struct Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemReplay.h" },
		{ "ToolTip", "A single frame within this replay" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleSystemReplayFrame>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleSystemReplayFrame",
		sizeof(FParticleSystemReplayFrame),
		alignof(FParticleSystemReplayFrame),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemReplayFrame()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParticleSystemReplayFrame"), sizeof(FParticleSystemReplayFrame), Get_Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParticleSystemReplayFrame_Hash() { return 3415019144U; }
class UScriptStruct* FParticleEmitterReplayFrame::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleEmitterReplayFrame, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleEmitterReplayFrame"), sizeof(FParticleEmitterReplayFrame), Get_Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleEmitterReplayFrame>()
{
	return FParticleEmitterReplayFrame::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParticleEmitterReplayFrame(FParticleEmitterReplayFrame::StaticStruct, TEXT("/Script/Engine"), TEXT("ParticleEmitterReplayFrame"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParticleEmitterReplayFrame
{
	FScriptStruct_Engine_StaticRegisterNativesFParticleEmitterReplayFrame()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParticleEmitterReplayFrame")),new UScriptStruct::TCppStructOps<FParticleEmitterReplayFrame>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFParticleEmitterReplayFrame;
	struct Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemReplay.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleEmitterReplayFrame>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleEmitterReplayFrame",
		sizeof(FParticleEmitterReplayFrame),
		alignof(FParticleEmitterReplayFrame),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleEmitterReplayFrame()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParticleEmitterReplayFrame"), sizeof(FParticleEmitterReplayFrame), Get_Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParticleEmitterReplayFrame_Hash() { return 1328288909U; }
	void UParticleSystemReplay::StaticRegisterNativesUParticleSystemReplay()
	{
	}
	UClass* Z_Construct_UClass_UParticleSystemReplay_NoRegister()
	{
		return UParticleSystemReplay::StaticClass();
	}
	struct Z_Construct_UClass_UParticleSystemReplay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipIDNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClipIDNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleSystemReplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemReplay_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "ParticleSystemReplay" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Particles/ParticleSystemReplay.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemReplay.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemReplay_Statics::NewProp_ClipIDNumber_MetaData[] = {
		{ "Category", "ParticleSystemReplay" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemReplay.h" },
		{ "ToolTip", "Unique ID number for this replay clip" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleSystemReplay_Statics::NewProp_ClipIDNumber = { "ClipIDNumber", nullptr, (EPropertyFlags)0x0010000000202001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystemReplay, ClipIDNumber), METADATA_PARAMS(Z_Construct_UClass_UParticleSystemReplay_Statics::NewProp_ClipIDNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystemReplay_Statics::NewProp_ClipIDNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleSystemReplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemReplay_Statics::NewProp_ClipIDNumber,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleSystemReplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleSystemReplay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleSystemReplay_Statics::ClassParams = {
		&UParticleSystemReplay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleSystemReplay_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleSystemReplay_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleSystemReplay_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleSystemReplay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleSystemReplay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleSystemReplay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleSystemReplay, 4231880160);
	template<> ENGINE_API UClass* StaticClass<UParticleSystemReplay>()
	{
		return UParticleSystemReplay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleSystemReplay(Z_Construct_UClass_UParticleSystemReplay, &UParticleSystemReplay::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleSystemReplay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleSystemReplay);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleSystemReplay)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
