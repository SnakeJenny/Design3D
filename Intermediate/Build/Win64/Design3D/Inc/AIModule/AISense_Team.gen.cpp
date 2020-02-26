// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AISense_Team.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Team() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAITeamStimulusEvent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Team_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Team();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
// End Cross Module References
class UScriptStruct* FAITeamStimulusEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAITeamStimulusEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAITeamStimulusEvent, Z_Construct_UPackage__Script_AIModule(), TEXT("AITeamStimulusEvent"), sizeof(FAITeamStimulusEvent), Get_Z_Construct_UScriptStruct_FAITeamStimulusEvent_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAITeamStimulusEvent>()
{
	return FAITeamStimulusEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAITeamStimulusEvent(FAITeamStimulusEvent::StaticStruct, TEXT("/Script/AIModule"), TEXT("AITeamStimulusEvent"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAITeamStimulusEvent
{
	FScriptStruct_AIModule_StaticRegisterNativesFAITeamStimulusEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AITeamStimulusEvent")),new UScriptStruct::TCppStructOps<FAITeamStimulusEvent>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAITeamStimulusEvent;
	struct Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Broadcaster_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Broadcaster;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Team.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAITeamStimulusEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Enemy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITeamStimulusEvent, Enemy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Enemy_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Enemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Broadcaster_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Broadcaster = { "Broadcaster", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITeamStimulusEvent, Broadcaster), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Broadcaster_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Broadcaster_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Enemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Broadcaster,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"AITeamStimulusEvent",
		sizeof(FAITeamStimulusEvent),
		alignof(FAITeamStimulusEvent),
		Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAITeamStimulusEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAITeamStimulusEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AITeamStimulusEvent"), sizeof(FAITeamStimulusEvent), Get_Z_Construct_UScriptStruct_FAITeamStimulusEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAITeamStimulusEvent_Hash() { return 3764191325U; }
	void UAISense_Team::StaticRegisterNativesUAISense_Team()
	{
	}
	UClass* Z_Construct_UClass_UAISense_Team_NoRegister()
	{
		return UAISense_Team::StaticClass();
	}
	struct Z_Construct_UClass_UAISense_Team_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegisteredEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RegisteredEvents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISense_Team_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISense,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Team_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense_Team.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Team.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Team_Statics::NewProp_RegisteredEvents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Team.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Team_Statics::NewProp_RegisteredEvents = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Team, RegisteredEvents), METADATA_PARAMS(Z_Construct_UClass_UAISense_Team_Statics::NewProp_RegisteredEvents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Team_Statics::NewProp_RegisteredEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISense_Team_Statics::NewProp_RegisteredEvents_Inner = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAITeamStimulusEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Team_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Team_Statics::NewProp_RegisteredEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Team_Statics::NewProp_RegisteredEvents_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISense_Team_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Team>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Team_Statics::ClassParams = {
		&UAISense_Team::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISense_Team_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAISense_Team_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISense_Team_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISense_Team_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISense_Team()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISense_Team_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISense_Team, 566254747);
	template<> AIMODULE_API UClass* StaticClass<UAISense_Team>()
	{
		return UAISense_Team::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense_Team(Z_Construct_UClass_UAISense_Team, &UAISense_Team::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISense_Team"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Team);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
