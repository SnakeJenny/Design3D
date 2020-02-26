// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeRandom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeRandom() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeRandom_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeRandom();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeRandom::StaticRegisterNativesUSoundNodeRandom()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeRandom_NoRegister()
	{
		return USoundNodeRandom::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeRandom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PIEHiddenNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PIEHiddenNodes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PIEHiddenNodes_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumRandomUsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumRandomUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasBeenUsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HasBeenUsed;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasBeenUsed_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomizeWithoutReplacement_MetaData[];
#endif
		static void NewProp_bRandomizeWithoutReplacement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomizeWithoutReplacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoundCueExcludedFromBranchCulling_MetaData[];
#endif
		static void NewProp_bSoundCueExcludedFromBranchCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSoundCueExcludedFromBranchCulling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldExcludeFromBranchCulling_MetaData[];
#endif
		static void NewProp_bShouldExcludeFromBranchCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldExcludeFromBranchCulling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreselectAtLevelLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreselectAtLevelLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Weights;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weights_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeRandom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeRandom_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Random" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeRandom.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
		{ "ToolTip", "Selects sounds from a random set" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PIEHiddenNodes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
		{ "ToolTip", "Editor only list of nodes hidden to duplicate behavior of PreselectAtLevelLoad" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PIEHiddenNodes = { "PIEHiddenNodes", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeRandom, PIEHiddenNodes), METADATA_PARAMS(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PIEHiddenNodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PIEHiddenNodes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PIEHiddenNodes_Inner = { "PIEHiddenNodes", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_NumRandomUsed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
		{ "ToolTip", "Counter var so we don't have to count all of the used sounds each time we choose a sound *" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_NumRandomUsed = { "NumRandomUsed", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeRandom, NumRandomUsed), METADATA_PARAMS(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_NumRandomUsed_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_NumRandomUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_HasBeenUsed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
		{ "ToolTip", "Internal state of which sounds have been played.  This is only used at runtime\nto keep track of which sounds have been played" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_HasBeenUsed = { "HasBeenUsed", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeRandom, HasBeenUsed), METADATA_PARAMS(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_HasBeenUsed_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_HasBeenUsed_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_HasBeenUsed_Inner = { "HasBeenUsed", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bRandomizeWithoutReplacement_MetaData[] = {
		{ "Category", "Random" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
		{ "ToolTip", "Determines whether or not this SoundNodeRandom should randomize with or without\nreplacement.\n\nWithoutReplacement means that only nodes left will be valid for\nselection.  So with that, you are guarenteed to have only one occurrence of the\nsound played until all of the other sounds in the set have all been played.\n\nWithReplacement means that a node will be chosen and then placed back into the set.\nSo one could play the same sound over and over if the probabilities don't go your way :-)" },
	};
#endif
	void Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bRandomizeWithoutReplacement_SetBit(void* Obj)
	{
		((USoundNodeRandom*)Obj)->bRandomizeWithoutReplacement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bRandomizeWithoutReplacement = { "bRandomizeWithoutReplacement", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundNodeRandom), &Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bRandomizeWithoutReplacement_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bRandomizeWithoutReplacement_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bRandomizeWithoutReplacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bSoundCueExcludedFromBranchCulling_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
		{ "ToolTip", "Exclusion for branch culling set by the sound cue." },
	};
#endif
	void Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bSoundCueExcludedFromBranchCulling_SetBit(void* Obj)
	{
		((USoundNodeRandom*)Obj)->bSoundCueExcludedFromBranchCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bSoundCueExcludedFromBranchCulling = { "bSoundCueExcludedFromBranchCulling", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundNodeRandom), &Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bSoundCueExcludedFromBranchCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bSoundCueExcludedFromBranchCulling_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bSoundCueExcludedFromBranchCulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bShouldExcludeFromBranchCulling_MetaData[] = {
		{ "Category", "Random" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
		{ "ToolTip", "If set to true, this random node will not be culled on load for platforms with a maximum amount of preloaded random branches\n set in project settings" },
	};
#endif
	void Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bShouldExcludeFromBranchCulling_SetBit(void* Obj)
	{
		((USoundNodeRandom*)Obj)->bShouldExcludeFromBranchCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bShouldExcludeFromBranchCulling = { "bShouldExcludeFromBranchCulling", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundNodeRandom), &Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bShouldExcludeFromBranchCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bShouldExcludeFromBranchCulling_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bShouldExcludeFromBranchCulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PreselectAtLevelLoad_MetaData[] = {
		{ "Category", "Random" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
		{ "ToolTip", "If greater than 0, then upon each level load such a number of inputs will be randomly selected\nand the rest will be removed. This can be used to cut down the memory usage of large randomizing\ncues." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PreselectAtLevelLoad = { "PreselectAtLevelLoad", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeRandom, PreselectAtLevelLoad), METADATA_PARAMS(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PreselectAtLevelLoad_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PreselectAtLevelLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_Weights_MetaData[] = {
		{ "Category", "Random" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeRandom.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_Weights = { "Weights", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeRandom, Weights), METADATA_PARAMS(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_Weights_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_Weights_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_Weights_Inner = { "Weights", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeRandom_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PIEHiddenNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PIEHiddenNodes_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_NumRandomUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_HasBeenUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_HasBeenUsed_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bRandomizeWithoutReplacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bSoundCueExcludedFromBranchCulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_bShouldExcludeFromBranchCulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_PreselectAtLevelLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_Weights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeRandom_Statics::NewProp_Weights_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeRandom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeRandom>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeRandom_Statics::ClassParams = {
		&USoundNodeRandom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeRandom_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundNodeRandom_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeRandom_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNodeRandom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeRandom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeRandom_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeRandom, 1826841831);
	template<> ENGINE_API UClass* StaticClass<USoundNodeRandom>()
	{
		return USoundNodeRandom::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeRandom(Z_Construct_UClass_USoundNodeRandom, &USoundNodeRandom::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeRandom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeRandom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
