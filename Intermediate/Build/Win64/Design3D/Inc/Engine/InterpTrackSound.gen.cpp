// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackSound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackSound() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundTrackKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackSound_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackSound();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorBase();
// End Cross Module References
class UScriptStruct* FSoundTrackKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundTrackKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundTrackKey, Z_Construct_UPackage__Script_Engine(), TEXT("SoundTrackKey"), sizeof(FSoundTrackKey), Get_Z_Construct_UScriptStruct_FSoundTrackKey_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundTrackKey>()
{
	return FSoundTrackKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundTrackKey(FSoundTrackKey::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundTrackKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundTrackKey
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundTrackKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundTrackKey")),new UScriptStruct::TCppStructOps<FSoundTrackKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundTrackKey;
	struct Z_Construct_UScriptStruct_FSoundTrackKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundTrackKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
		{ "ToolTip", "Information for one sound in the track." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundTrackKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "SoundTrackKey" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundTrackKey, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Sound_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Pitch_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundTrackKey, Pitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Pitch_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Volume_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundTrackKey, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Volume_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundTrackKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundTrackKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundTrackKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundTrackKey",
		sizeof(FSoundTrackKey),
		alignof(FSoundTrackKey),
		Z_Construct_UScriptStruct_FSoundTrackKey_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundTrackKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundTrackKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundTrackKey"), sizeof(FSoundTrackKey), Get_Z_Construct_UScriptStruct_FSoundTrackKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundTrackKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundTrackKey_Hash() { return 3816334022U; }
	void UInterpTrackSound::StaticRegisterNativesUInterpTrackSound()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackSound_NoRegister()
	{
		return UInterpTrackSound::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttach_MetaData[];
#endif
		static void NewProp_bAttach_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTreatAsDialogue_MetaData[];
#endif
		static void NewProp_bTreatAsDialogue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTreatAsDialogue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuppressSubtitles_MetaData[];
#endif
		static void NewProp_bSuppressSubtitles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuppressSubtitles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bContinueSoundOnMatineeEnd_MetaData[];
#endif
		static void NewProp_bContinueSoundOnMatineeEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bContinueSoundOnMatineeEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayOnReverse_MetaData[];
#endif
		static void NewProp_bPlayOnReverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayOnReverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sounds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sounds_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackVectorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackSound_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Sound Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackSound.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bAttach_MetaData[] = {
		{ "Category", "InterpTrackSound" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
	};
#endif
	void Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bAttach_SetBit(void* Obj)
	{
		((UInterpTrackSound*)Obj)->bAttach = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bAttach = { "bAttach", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackSound), &Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bAttach_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bAttach_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bAttach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bTreatAsDialogue_MetaData[] = {
		{ "Category", "InterpTrackSound" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
		{ "ToolTip", "If true and track is controlling a pawn, makes the pawn \"speak\" the given audio." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bTreatAsDialogue_SetBit(void* Obj)
	{
		((UInterpTrackSound*)Obj)->bTreatAsDialogue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bTreatAsDialogue = { "bTreatAsDialogue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackSound), &Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bTreatAsDialogue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bTreatAsDialogue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bTreatAsDialogue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bSuppressSubtitles_MetaData[] = {
		{ "Category", "InterpTrackSound" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
		{ "ToolTip", "If true, don't show subtitles for sounds played by this track." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bSuppressSubtitles_SetBit(void* Obj)
	{
		((UInterpTrackSound*)Obj)->bSuppressSubtitles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bSuppressSubtitles = { "bSuppressSubtitles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackSound), &Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bSuppressSubtitles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bSuppressSubtitles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bSuppressSubtitles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bContinueSoundOnMatineeEnd_MetaData[] = {
		{ "Category", "InterpTrackSound" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
		{ "ToolTip", "If true, sounds on this track will not be forced to finish when the matinee sequence finishes." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bContinueSoundOnMatineeEnd_SetBit(void* Obj)
	{
		((UInterpTrackSound*)Obj)->bContinueSoundOnMatineeEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bContinueSoundOnMatineeEnd = { "bContinueSoundOnMatineeEnd", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackSound), &Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bContinueSoundOnMatineeEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bContinueSoundOnMatineeEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bContinueSoundOnMatineeEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bPlayOnReverse_MetaData[] = {
		{ "Category", "InterpTrackSound" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
		{ "ToolTip", "if set, sound plays only when playing the matinee in reverse instead of when the matinee plays forward" },
	};
#endif
	void Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bPlayOnReverse_SetBit(void* Obj)
	{
		((UInterpTrackSound*)Obj)->bPlayOnReverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bPlayOnReverse = { "bPlayOnReverse", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackSound), &Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bPlayOnReverse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bPlayOnReverse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bPlayOnReverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_Sounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
		{ "ToolTip", "Array of sounds to play at specific times." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_Sounds = { "Sounds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackSound, Sounds), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_Sounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_Sounds_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_Sounds_Inner = { "Sounds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoundTrackKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bAttach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bTreatAsDialogue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bSuppressSubtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bContinueSoundOnMatineeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bPlayOnReverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_Sounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_Sounds_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackSound>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackSound_Statics::ClassParams = {
		&UInterpTrackSound::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackSound_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackSound_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackSound_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackSound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackSound_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackSound, 903158471);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackSound>()
	{
		return UInterpTrackSound::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackSound(Z_Construct_UClass_UInterpTrackSound, &UInterpTrackSound::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
