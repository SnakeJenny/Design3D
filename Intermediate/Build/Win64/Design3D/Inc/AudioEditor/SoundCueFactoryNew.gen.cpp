// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioEditor/Classes/Factories/SoundCueFactoryNew.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundCueFactoryNew() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueFactoryNew_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
// End Cross Module References
	void USoundCueFactoryNew::StaticRegisterNativesUSoundCueFactoryNew()
	{
	}
	UClass* Z_Construct_UClass_USoundCueFactoryNew_NoRegister()
	{
		return USoundCueFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_USoundCueFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialDialogueWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitialDialogueWave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialSoundWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitialSoundWave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundCueFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundCueFactoryNew.h" },
		{ "ModuleRelativePath", "Classes/Factories/SoundCueFactoryNew.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialDialogueWave_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/SoundCueFactoryNew.h" },
		{ "ToolTip", "An initial dialogue wave to place in the newly created cue" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialDialogueWave = { "InitialDialogueWave", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundCueFactoryNew, InitialDialogueWave), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialDialogueWave_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialDialogueWave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialSoundWave_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/SoundCueFactoryNew.h" },
		{ "ToolTip", "An initial sound wave to place in the newly created cue" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialSoundWave = { "InitialSoundWave", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundCueFactoryNew, InitialSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialSoundWave_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialSoundWave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundCueFactoryNew_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialDialogueWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueFactoryNew_Statics::NewProp_InitialSoundWave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundCueFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundCueFactoryNew>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundCueFactoryNew_Statics::ClassParams = {
		&USoundCueFactoryNew::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundCueFactoryNew_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundCueFactoryNew_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundCueFactoryNew_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundCueFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundCueFactoryNew()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundCueFactoryNew_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundCueFactoryNew, 3561333797);
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundCueFactoryNew>()
	{
		return USoundCueFactoryNew::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundCueFactoryNew(Z_Construct_UClass_USoundCueFactoryNew, &USoundCueFactoryNew::StaticClass, TEXT("/Script/AudioEditor"), TEXT("USoundCueFactoryNew"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCueFactoryNew);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
