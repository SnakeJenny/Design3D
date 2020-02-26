// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackAnimControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackAnimControl() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimControlTrackKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackAnimControl_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackAnimControl();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
// End Cross Module References
class UScriptStruct* FAnimControlTrackKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimControlTrackKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimControlTrackKey, Z_Construct_UPackage__Script_Engine(), TEXT("AnimControlTrackKey"), sizeof(FAnimControlTrackKey), Get_Z_Construct_UScriptStruct_FAnimControlTrackKey_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimControlTrackKey>()
{
	return FAnimControlTrackKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimControlTrackKey(FAnimControlTrackKey::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimControlTrackKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimControlTrackKey
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimControlTrackKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimControlTrackKey")),new UScriptStruct::TCppStructOps<FAnimControlTrackKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimControlTrackKey;
	struct Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[];
#endif
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimEndOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimEndOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimStartOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimStartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSeq_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSeq;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Structure used for holding information for one animation played on the Anim Control track." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimControlTrackKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bReverse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Whether to play the animation in reverse or not." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((FAnimControlTrackKey*)Obj)->bReverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimControlTrackKey), &Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bReverse_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bReverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bLooping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Should this animation loop." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FAnimControlTrackKey*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimControlTrackKey), &Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bLooping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimPlayRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Playback speed of this animation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimPlayRate = { "AnimPlayRate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimControlTrackKey, AnimPlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimPlayRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimEndOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Time to end playing the AnimSequence at." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimEndOffset = { "AnimEndOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimControlTrackKey, AnimEndOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimEndOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimEndOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimStartOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Time to start playing AnimSequence at." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimStartOffset = { "AnimStartOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimControlTrackKey, AnimStartOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimStartOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimStartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimSeq_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Animation Sequence to play" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimSeq = { "AnimSeq", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimControlTrackKey, AnimSeq), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimSeq_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimSeq_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_StartTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Position in the Matinee sequence to start playing this animation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimControlTrackKey, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_StartTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_StartTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bReverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimEndOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimStartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimSeq,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_StartTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimControlTrackKey",
		sizeof(FAnimControlTrackKey),
		alignof(FAnimControlTrackKey),
		Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimControlTrackKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimControlTrackKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimControlTrackKey"), sizeof(FAnimControlTrackKey), Get_Z_Construct_UScriptStruct_FAnimControlTrackKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimControlTrackKey_Hash() { return 812883125U; }
	void UInterpTrackAnimControl::StaticRegisterNativesUInterpTrackAnimControl()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackAnimControl_NoRegister()
	{
		return UInterpTrackAnimControl::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackAnimControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipAnimNotifiers_MetaData[];
#endif
		static void NewProp_bSkipAnimNotifiers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimNotifiers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSeqs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimSeqs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimSeqs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackAnimControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackFloatBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackAnimControl_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Animation Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackAnimControl.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_bSkipAnimNotifiers_MetaData[] = {
		{ "Category", "InterpTrackAnimControl" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Skip all anim notifiers *" },
	};
#endif
	void Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_bSkipAnimNotifiers_SetBit(void* Obj)
	{
		((UInterpTrackAnimControl*)Obj)->bSkipAnimNotifiers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_bSkipAnimNotifiers = { "bSkipAnimNotifiers", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackAnimControl), &Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_bSkipAnimNotifiers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_bSkipAnimNotifiers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_bSkipAnimNotifiers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_AnimSeqs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Track of different animations to play and when to start playing them." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_AnimSeqs = { "AnimSeqs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackAnimControl, AnimSeqs), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_AnimSeqs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_AnimSeqs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_AnimSeqs_Inner = { "AnimSeqs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimControlTrackKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "InterpTrackAnimControl" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Name of slot to use when playing animation. Passed to Actor.\nWhen multiple tracks use the same slot name, they are each given a different ChannelIndex when SetAnimPosition is called." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackAnimControl, SlotName), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_SlotName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_SlotName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackAnimControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_bSkipAnimNotifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_AnimSeqs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_AnimSeqs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_SlotName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackAnimControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackAnimControl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackAnimControl_Statics::ClassParams = {
		&UInterpTrackAnimControl::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackAnimControl_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAnimControl_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackAnimControl_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAnimControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackAnimControl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackAnimControl_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackAnimControl, 981776551);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackAnimControl>()
	{
		return UInterpTrackAnimControl::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackAnimControl(Z_Construct_UClass_UInterpTrackAnimControl, &UInterpTrackAnimControl::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackAnimControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackAnimControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
