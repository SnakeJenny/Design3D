// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AISense_Touch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Touch() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAITouchEvent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Touch_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Touch();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
// End Cross Module References
class UScriptStruct* FAITouchEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAITouchEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAITouchEvent, Z_Construct_UPackage__Script_AIModule(), TEXT("AITouchEvent"), sizeof(FAITouchEvent), Get_Z_Construct_UScriptStruct_FAITouchEvent_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAITouchEvent>()
{
	return FAITouchEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAITouchEvent(FAITouchEvent::StaticStruct, TEXT("/Script/AIModule"), TEXT("AITouchEvent"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAITouchEvent
{
	FScriptStruct_AIModule_StaticRegisterNativesFAITouchEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AITouchEvent")),new UScriptStruct::TCppStructOps<FAITouchEvent>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAITouchEvent;
	struct Z_Construct_UScriptStruct_FAITouchEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchReceiver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TouchReceiver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITouchEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAITouchEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_OtherActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITouchEvent, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_OtherActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_OtherActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_TouchReceiver_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_TouchReceiver = { "TouchReceiver", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITouchEvent, TouchReceiver), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_TouchReceiver_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_TouchReceiver_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAITouchEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_TouchReceiver,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAITouchEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"AITouchEvent",
		sizeof(FAITouchEvent),
		alignof(FAITouchEvent),
		Z_Construct_UScriptStruct_FAITouchEvent_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAITouchEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAITouchEvent_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAITouchEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAITouchEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAITouchEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AITouchEvent"), sizeof(FAITouchEvent), Get_Z_Construct_UScriptStruct_FAITouchEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAITouchEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAITouchEvent_Hash() { return 3418815123U; }
	void UAISense_Touch::StaticRegisterNativesUAISense_Touch()
	{
	}
	UClass* Z_Construct_UClass_UAISense_Touch_NoRegister()
	{
		return UAISense_Touch::StaticClass();
	}
	struct Z_Construct_UClass_UAISense_Touch_Statics
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
	UObject* (*const Z_Construct_UClass_UAISense_Touch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISense,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Touch_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense_Touch.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Touch_Statics::NewProp_RegisteredEvents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Touch_Statics::NewProp_RegisteredEvents = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Touch, RegisteredEvents), METADATA_PARAMS(Z_Construct_UClass_UAISense_Touch_Statics::NewProp_RegisteredEvents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Touch_Statics::NewProp_RegisteredEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISense_Touch_Statics::NewProp_RegisteredEvents_Inner = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAITouchEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Touch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Touch_Statics::NewProp_RegisteredEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Touch_Statics::NewProp_RegisteredEvents_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISense_Touch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Touch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Touch_Statics::ClassParams = {
		&UAISense_Touch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISense_Touch_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAISense_Touch_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISense_Touch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISense_Touch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISense_Touch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISense_Touch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISense_Touch, 649352853);
	template<> AIMODULE_API UClass* StaticClass<UAISense_Touch>()
	{
		return UAISense_Touch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense_Touch(Z_Construct_UClass_UAISense_Touch, &UAISense_Touch::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISense_Touch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Touch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
