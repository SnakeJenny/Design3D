// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeDialoguePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeDialoguePlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDialoguePlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDialoguePlayer();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueWaveParameter();
// End Cross Module References
	void USoundNodeDialoguePlayer::StaticRegisterNativesUSoundNodeDialoguePlayer()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeDialoguePlayer_NoRegister()
	{
		return USoundNodeDialoguePlayer::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeDialoguePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueWaveParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DialogueWaveParameter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Dialogue Player" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeDialoguePlayer.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDialoguePlayer.h" },
		{ "ToolTip", "Sound node that contains a reference to the dialogue table to pull from and be played" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "DialoguePlayer" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDialoguePlayer.h" },
		{ "ToolTip", "Whether the dialogue line should be played looping" },
	};
#endif
	void Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((USoundNodeDialoguePlayer*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundNodeDialoguePlayer), &Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_bLooping_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_DialogueWaveParameter_MetaData[] = {
		{ "Category", "DialoguePlayer" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDialoguePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_DialogueWaveParameter = { "DialogueWaveParameter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeDialoguePlayer, DialogueWaveParameter), Z_Construct_UScriptStruct_FDialogueWaveParameter, METADATA_PARAMS(Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_DialogueWaveParameter_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_DialogueWaveParameter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::NewProp_DialogueWaveParameter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeDialoguePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::ClassParams = {
		&USoundNodeDialoguePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeDialoguePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeDialoguePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeDialoguePlayer, 981085170);
	template<> ENGINE_API UClass* StaticClass<USoundNodeDialoguePlayer>()
	{
		return USoundNodeDialoguePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeDialoguePlayer(Z_Construct_UClass_USoundNodeDialoguePlayer, &USoundNodeDialoguePlayer::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeDialoguePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeDialoguePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
