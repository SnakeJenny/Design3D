// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AISense_Sight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Sight() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISightEvent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Sight_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Sight();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
// End Cross Module References
class UScriptStruct* FAISightEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAISightEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAISightEvent, Z_Construct_UPackage__Script_AIModule(), TEXT("AISightEvent"), sizeof(FAISightEvent), Get_Z_Construct_UScriptStruct_FAISightEvent_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAISightEvent>()
{
	return FAISightEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAISightEvent(FAISightEvent::StaticStruct, TEXT("/Script/AIModule"), TEXT("AISightEvent"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAISightEvent
{
	FScriptStruct_AIModule_StaticRegisterNativesFAISightEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AISightEvent")),new UScriptStruct::TCppStructOps<FAISightEvent>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAISightEvent;
	struct Z_Construct_UScriptStruct_FAISightEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Observer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeenActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeenActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISightEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAISightEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAISightEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISightEvent_Statics::NewProp_Observer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAISightEvent_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISightEvent, Observer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISightEvent_Statics::NewProp_Observer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAISightEvent_Statics::NewProp_Observer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISightEvent_Statics::NewProp_SeenActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAISightEvent_Statics::NewProp_SeenActor = { "SeenActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISightEvent, SeenActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISightEvent_Statics::NewProp_SeenActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAISightEvent_Statics::NewProp_SeenActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAISightEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISightEvent_Statics::NewProp_Observer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISightEvent_Statics::NewProp_SeenActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAISightEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"AISightEvent",
		sizeof(FAISightEvent),
		alignof(FAISightEvent),
		Z_Construct_UScriptStruct_FAISightEvent_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAISightEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAISightEvent_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAISightEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAISightEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAISightEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AISightEvent"), sizeof(FAISightEvent), Get_Z_Construct_UScriptStruct_FAISightEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAISightEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAISightEvent_Hash() { return 2268687096U; }
	void UAISense_Sight::StaticRegisterNativesUAISense_Sight()
	{
	}
	UClass* Z_Construct_UClass_UAISense_Sight_NoRegister()
	{
		return UAISense_Sight::StaticClass();
	}
	struct Z_Construct_UClass_UAISense_Sight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightLimitQueryImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightLimitQueryImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxQueryImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxQueryImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighImportanceQueryDistanceThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighImportanceQueryDistanceThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTimeSlicePerTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_MaxTimeSlicePerTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinQueriesPerTimeSliceCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinQueriesPerTimeSliceCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTracesPerTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTracesPerTick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISense_Sight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISense,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense_Sight.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_Statics::NewProp_SightLimitQueryImportance_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Sight_Statics::NewProp_SightLimitQueryImportance = { "SightLimitQueryImportance", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Sight, SightLimitQueryImportance), METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_Statics::NewProp_SightLimitQueryImportance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_Statics::NewProp_SightLimitQueryImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxQueryImportance_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxQueryImportance = { "MaxQueryImportance", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Sight, MaxQueryImportance), METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxQueryImportance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxQueryImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_Statics::NewProp_HighImportanceQueryDistanceThreshold_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Sight_Statics::NewProp_HighImportanceQueryDistanceThreshold = { "HighImportanceQueryDistanceThreshold", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Sight, HighImportanceQueryDistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_Statics::NewProp_HighImportanceQueryDistanceThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_Statics::NewProp_HighImportanceQueryDistanceThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxTimeSlicePerTick_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxTimeSlicePerTick = { "MaxTimeSlicePerTick", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Sight, MaxTimeSlicePerTick), METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxTimeSlicePerTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxTimeSlicePerTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MinQueriesPerTimeSliceCheck_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MinQueriesPerTimeSliceCheck = { "MinQueriesPerTimeSliceCheck", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Sight, MinQueriesPerTimeSliceCheck), METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MinQueriesPerTimeSliceCheck_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MinQueriesPerTimeSliceCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxTracesPerTick_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxTracesPerTick = { "MaxTracesPerTick", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Sight, MaxTracesPerTick), METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxTracesPerTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxTracesPerTick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Sight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_Statics::NewProp_SightLimitQueryImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxQueryImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_Statics::NewProp_HighImportanceQueryDistanceThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxTimeSlicePerTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MinQueriesPerTimeSliceCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxTracesPerTick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISense_Sight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Sight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Sight_Statics::ClassParams = {
		&UAISense_Sight::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISense_Sight_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISense_Sight_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISense_Sight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISense_Sight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISense_Sight, 369466708);
	template<> AIMODULE_API UClass* StaticClass<UAISense_Sight>()
	{
		return UAISense_Sight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense_Sight(Z_Construct_UClass_UAISense_Sight, &UAISense_Sight::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISense_Sight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Sight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
