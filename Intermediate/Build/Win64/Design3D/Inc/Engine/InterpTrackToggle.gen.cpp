// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackToggle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackToggle() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrackToggleAction();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FToggleTrackKey();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackToggle_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackToggle();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
// End Cross Module References
	static UEnum* ETrackToggleAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETrackToggleAction, Z_Construct_UPackage__Script_Engine(), TEXT("ETrackToggleAction"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETrackToggleAction>()
	{
		return ETrackToggleAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrackToggleAction(ETrackToggleAction_StaticEnum, TEXT("/Script/Engine"), TEXT("ETrackToggleAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETrackToggleAction_Hash() { return 1338341763U; }
	UEnum* Z_Construct_UEnum_Engine_ETrackToggleAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrackToggleAction"), 0, Get_Z_Construct_UEnum_Engine_ETrackToggleAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETTA_Off", (int64)ETTA_Off },
				{ "ETTA_On", (int64)ETTA_On },
				{ "ETTA_Toggle", (int64)ETTA_Toggle },
				{ "ETTA_Trigger", (int64)ETTA_Trigger },
				{ "ETTA_MAX", (int64)ETTA_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
				{ "ToolTip", "Enumeration indicating toggle action" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETrackToggleAction",
				"ETrackToggleAction",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FToggleTrackKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FToggleTrackKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FToggleTrackKey, Z_Construct_UPackage__Script_Engine(), TEXT("ToggleTrackKey"), sizeof(FToggleTrackKey), Get_Z_Construct_UScriptStruct_FToggleTrackKey_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FToggleTrackKey>()
{
	return FToggleTrackKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FToggleTrackKey(FToggleTrackKey::StaticStruct, TEXT("/Script/Engine"), TEXT("ToggleTrackKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFToggleTrackKey
{
	FScriptStruct_Engine_StaticRegisterNativesFToggleTrackKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ToggleTrackKey")),new UScriptStruct::TCppStructOps<FToggleTrackKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFToggleTrackKey;
	struct Z_Construct_UScriptStruct_FToggleTrackKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggleAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ToggleAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToggleTrackKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "Information for one toggle in the track." },
	};
#endif
	void* Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToggleTrackKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_ToggleAction_MetaData[] = {
		{ "Category", "ToggleTrackKey" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_ToggleAction = { "ToggleAction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToggleTrackKey, ToggleAction), Z_Construct_UEnum_Engine_ETrackToggleAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_ToggleAction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_ToggleAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToggleTrackKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToggleTrackKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_ToggleAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToggleTrackKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ToggleTrackKey",
		sizeof(FToggleTrackKey),
		alignof(FToggleTrackKey),
		Z_Construct_UScriptStruct_FToggleTrackKey_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FToggleTrackKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FToggleTrackKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ToggleTrackKey"), sizeof(FToggleTrackKey), Get_Z_Construct_UScriptStruct_FToggleTrackKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FToggleTrackKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FToggleTrackKey_Hash() { return 3961970768U; }
	void UInterpTrackToggle::StaticRegisterNativesUInterpTrackToggle()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackToggle_NoRegister()
	{
		return UInterpTrackToggle::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackToggle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActivateWithJustAttachedFlag_MetaData[];
#endif
		static void NewProp_bActivateWithJustAttachedFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActivateWithJustAttachedFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActivateSystemEachUpdate_MetaData[];
#endif
		static void NewProp_bActivateSystemEachUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActivateSystemEachUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggleTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ToggleTrack;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToggleTrack_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackToggle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Toggle Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackToggle.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData[] = {
		{ "Category", "InterpTrackToggle" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "If true, events on this track are fired even when jumping forwads through a sequence - for example, skipping a cinematic." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards_SetBit(void* Obj)
	{
		((UInterpTrackToggle*)Obj)->bFireEventsWhenJumpingForwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards = { "bFireEventsWhenJumpingForwards", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackToggle), &Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards_MetaData[] = {
		{ "Category", "InterpTrackToggle" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "If events should be fired when passed playing the sequence backwards." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards_SetBit(void* Obj)
	{
		((UInterpTrackToggle*)Obj)->bFireEventsWhenBackwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards = { "bFireEventsWhenBackwards", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackToggle), &Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards_MetaData[] = {
		{ "Category", "InterpTrackToggle" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "If events should be fired when passed playing the sequence forwards." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards_SetBit(void* Obj)
	{
		((UInterpTrackToggle*)Obj)->bFireEventsWhenForwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards = { "bFireEventsWhenForwards", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackToggle), &Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag_MetaData[] = {
		{ "Category", "InterpTrackToggle" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "If true, the track will activate the system w/ the 'Just Attached' flag." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag_SetBit(void* Obj)
	{
		((UInterpTrackToggle*)Obj)->bActivateWithJustAttachedFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag = { "bActivateWithJustAttachedFlag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackToggle), &Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate_MetaData[] = {
		{ "Category", "InterpTrackToggle" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "If true, the track will call ActivateSystem on the emitter each update (the old 'incorrect' behavior).\nIf false (the default), the System will only be activated if it was previously inactive." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate_SetBit(void* Obj)
	{
		((UInterpTrackToggle*)Obj)->bActivateSystemEachUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate = { "bActivateSystemEachUpdate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackToggle), &Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "Array of events to fire off." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack = { "ToggleTrack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackToggle, ToggleTrack), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack_Inner = { "ToggleTrack", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FToggleTrackKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackToggle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackToggle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackToggle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackToggle_Statics::ClassParams = {
		&UInterpTrackToggle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackToggle_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackToggle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackToggle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackToggle, 208178191);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackToggle>()
	{
		return UInterpTrackToggle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackToggle(Z_Construct_UClass_UInterpTrackToggle, &UInterpTrackToggle::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackToggle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackToggle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
