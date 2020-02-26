// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioEditor/Classes/Factories/DialogueWaveFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueWaveFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UDialogueWaveFactory_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UDialogueWaveFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueVoice_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
// End Cross Module References
	void UDialogueWaveFactory::StaticRegisterNativesUDialogueWaveFactory()
	{
	}
	UClass* Z_Construct_UClass_UDialogueWaveFactory_NoRegister()
	{
		return UDialogueWaveFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueWaveFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialTargetVoices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InitialTargetVoices;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitialTargetVoices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasSetInitialTargetVoice_MetaData[];
#endif
		static void NewProp_HasSetInitialTargetVoice_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasSetInitialTargetVoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialSpeakerVoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitialSpeakerVoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialSoundWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitialSoundWave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueWaveFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWaveFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/DialogueWaveFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/DialogueWaveFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialTargetVoices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/DialogueWaveFactory.h" },
		{ "ToolTip", "An initial target dialogue voices to place in the newly created dialogue wave" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialTargetVoices = { "InitialTargetVoices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueWaveFactory, InitialTargetVoices), METADATA_PARAMS(Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialTargetVoices_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialTargetVoices_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialTargetVoices_Inner = { "InitialTargetVoices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueVoice_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_HasSetInitialTargetVoice_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/DialogueWaveFactory.h" },
		{ "ToolTip", "Whether an initial target dialogue voice should be set" },
	};
#endif
	void Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_HasSetInitialTargetVoice_SetBit(void* Obj)
	{
		((UDialogueWaveFactory*)Obj)->HasSetInitialTargetVoice = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_HasSetInitialTargetVoice = { "HasSetInitialTargetVoice", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDialogueWaveFactory), &Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_HasSetInitialTargetVoice_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_HasSetInitialTargetVoice_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_HasSetInitialTargetVoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialSpeakerVoice_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/DialogueWaveFactory.h" },
		{ "ToolTip", "An initial speaking dialogue voice to place in the newly created dialogue wave" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialSpeakerVoice = { "InitialSpeakerVoice", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueWaveFactory, InitialSpeakerVoice), Z_Construct_UClass_UDialogueVoice_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialSpeakerVoice_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialSpeakerVoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialSoundWave_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/DialogueWaveFactory.h" },
		{ "ToolTip", "An initial sound wave to place in the newly created dialogue wave" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialSoundWave = { "InitialSoundWave", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueWaveFactory, InitialSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialSoundWave_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialSoundWave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueWaveFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialTargetVoices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialTargetVoices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_HasSetInitialTargetVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialSpeakerVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWaveFactory_Statics::NewProp_InitialSoundWave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueWaveFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueWaveFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueWaveFactory_Statics::ClassParams = {
		&UDialogueWaveFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueWaveFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDialogueWaveFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueWaveFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDialogueWaveFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueWaveFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueWaveFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueWaveFactory, 2807799282);
	template<> AUDIOEDITOR_API UClass* StaticClass<UDialogueWaveFactory>()
	{
		return UDialogueWaveFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueWaveFactory(Z_Construct_UClass_UDialogueWaveFactory, &UDialogueWaveFactory::StaticClass, TEXT("/Script/AudioEditor"), TEXT("UDialogueWaveFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueWaveFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
