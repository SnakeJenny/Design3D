// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackEvent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEventTrackKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackEvent();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
// End Cross Module References
class UScriptStruct* FEventTrackKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEventTrackKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventTrackKey, Z_Construct_UPackage__Script_Engine(), TEXT("EventTrackKey"), sizeof(FEventTrackKey), Get_Z_Construct_UScriptStruct_FEventTrackKey_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEventTrackKey>()
{
	return FEventTrackKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventTrackKey(FEventTrackKey::StaticStruct, TEXT("/Script/Engine"), TEXT("EventTrackKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEventTrackKey
{
	FScriptStruct_Engine_StaticRegisterNativesFEventTrackKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EventTrackKey")),new UScriptStruct::TCppStructOps<FEventTrackKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEventTrackKey;
	struct Z_Construct_UScriptStruct_FEventTrackKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventTrackKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
		{ "ToolTip", "Information for one event in the track." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventTrackKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "EventTrackKey" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventTrackKey, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewProp_EventName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventTrackKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventTrackKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventTrackKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EventTrackKey",
		sizeof(FEventTrackKey),
		alignof(FEventTrackKey),
		Z_Construct_UScriptStruct_FEventTrackKey_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEventTrackKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventTrackKey_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventTrackKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventTrackKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventTrackKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventTrackKey"), sizeof(FEventTrackKey), Get_Z_Construct_UScriptStruct_FEventTrackKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventTrackKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventTrackKey_Hash() { return 2559343951U; }
	void UInterpTrackEvent::StaticRegisterNativesUInterpTrackEvent()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackEvent_NoRegister()
	{
		return UInterpTrackEvent::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomEventName_MetaData[];
#endif
		static void NewProp_bUseCustomEventName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomEventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenJumpingForwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenJumpingForwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenJumpingForwards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenBackwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenBackwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenBackwards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenForwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenForwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenForwards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventTrack;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTrack_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackEvent_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Event Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackEvent.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bUseCustomEventName_MetaData[] = {
		{ "Category", "InterpTrackEvent" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
		{ "ToolTip", "If checked each key's event name is the exact name of the custom event function in level script that will be called" },
	};
#endif
	void Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bUseCustomEventName_SetBit(void* Obj)
	{
		((UInterpTrackEvent*)Obj)->bUseCustomEventName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bUseCustomEventName = { "bUseCustomEventName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackEvent), &Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bUseCustomEventName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bUseCustomEventName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bUseCustomEventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData[] = {
		{ "Category", "InterpTrackEvent" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
		{ "ToolTip", "If true, events on this track are fired even when jumping forwads through a sequence - for example, skipping a cinematic." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenJumpingForwards_SetBit(void* Obj)
	{
		((UInterpTrackEvent*)Obj)->bFireEventsWhenJumpingForwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenJumpingForwards = { "bFireEventsWhenJumpingForwards", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackEvent), &Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenJumpingForwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenBackwards_MetaData[] = {
		{ "Category", "InterpTrackEvent" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
		{ "ToolTip", "If events should be fired when passed playing the sequence backwards." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenBackwards_SetBit(void* Obj)
	{
		((UInterpTrackEvent*)Obj)->bFireEventsWhenBackwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenBackwards = { "bFireEventsWhenBackwards", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackEvent), &Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenBackwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenBackwards_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenBackwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenForwards_MetaData[] = {
		{ "Category", "InterpTrackEvent" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
		{ "ToolTip", "If events should be fired when passed playing the sequence forwards." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenForwards_SetBit(void* Obj)
	{
		((UInterpTrackEvent*)Obj)->bFireEventsWhenForwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenForwards = { "bFireEventsWhenForwards", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackEvent), &Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenForwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenForwards_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenForwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_EventTrack_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
		{ "ToolTip", "Array of events to fire off." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_EventTrack = { "EventTrack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackEvent, EventTrack), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_EventTrack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_EventTrack_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_EventTrack_Inner = { "EventTrack", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEventTrackKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bUseCustomEventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenJumpingForwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenBackwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenForwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_EventTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_EventTrack_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackEvent_Statics::ClassParams = {
		&UInterpTrackEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackEvent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackEvent_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackEvent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackEvent, 1897540018);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackEvent>()
	{
		return UInterpTrackEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackEvent(Z_Construct_UClass_UInterpTrackEvent, &UInterpTrackEvent::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
