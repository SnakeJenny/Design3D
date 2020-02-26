// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Sound/SlateSound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateSound() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FSlateSound::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FSlateSound_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateSound, Z_Construct_UPackage__Script_SlateCore(), TEXT("SlateSound"), sizeof(FSlateSound), Get_Z_Construct_UScriptStruct_FSlateSound_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSlateSound>()
{
	return FSlateSound::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlateSound(FSlateSound::StaticStruct, TEXT("/Script/SlateCore"), TEXT("SlateSound"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFSlateSound
{
	FScriptStruct_SlateCore_StaticRegisterNativesFSlateSound()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlateSound")),new UScriptStruct::TCppStructOps<FSlateSound>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFSlateSound;
	struct Z_Construct_UScriptStruct_FSlateSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResourceObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateSound_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Sound/SlateSound.h" },
		{ "ToolTip", "An intermediary to make UBaseSound available for Slate to play sounds" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlateSound_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateSound>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateSound_Statics::NewProp_ResourceObject_MetaData[] = {
		{ "AllowedClasses", "SoundBase" },
		{ "Category", "Sound" },
		{ "DisplayName", "Sound" },
		{ "ModuleRelativePath", "Public/Sound/SlateSound.h" },
		{ "ToolTip", "Pointer to the USoundBase. Holding onto it as a UObject because USoundBase is not available in Slate core.\nEdited via FSlateSoundStructCustomization to ensure you can only set USoundBase assets on it." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSlateSound_Statics::NewProp_ResourceObject = { "ResourceObject", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateSound, ResourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateSound_Statics::NewProp_ResourceObject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateSound_Statics::NewProp_ResourceObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateSound_Statics::NewProp_ResourceObject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateSound_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"SlateSound",
		sizeof(FSlateSound),
		alignof(FSlateSound),
		Z_Construct_UScriptStruct_FSlateSound_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateSound_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateSound_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateSound_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlateSound()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlateSound_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlateSound"), sizeof(FSlateSound), Get_Z_Construct_UScriptStruct_FSlateSound_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSlateSound_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlateSound_Hash() { return 4247327320U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
