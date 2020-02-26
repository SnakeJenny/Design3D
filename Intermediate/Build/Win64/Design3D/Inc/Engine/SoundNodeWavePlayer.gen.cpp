// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeWavePlayer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeWavePlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeWavePlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeWavePlayer();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeAssetReferencer();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
// End Cross Module References
	void USoundNodeWavePlayer::StaticRegisterNativesUSoundNodeWavePlayer()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeWavePlayer_NoRegister()
	{
		return USoundNodeWavePlayer::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeWavePlayer_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundWaveAssetPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SoundWaveAssetPtr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeWavePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNodeAssetReferencer,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeWavePlayer_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Wave Player" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeWavePlayer.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeWavePlayer.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Sound node that contains a reference to the raw wave file to be played" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "WavePlayer" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeWavePlayer.h" },
	};
#endif
	void Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((USoundNodeWavePlayer*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundNodeWavePlayer), &Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_bLooping_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_SoundWave_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeWavePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeWavePlayer, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_SoundWave_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_SoundWave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_SoundWaveAssetPtr_MetaData[] = {
		{ "Category", "WavePlayer" },
		{ "DisplayName", "Sound Wave" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeWavePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_SoundWaveAssetPtr = { "SoundWaveAssetPtr", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeWavePlayer, SoundWaveAssetPtr), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_SoundWaveAssetPtr_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_SoundWaveAssetPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeWavePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_SoundWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_SoundWaveAssetPtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeWavePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeWavePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeWavePlayer_Statics::ClassParams = {
		&USoundNodeWavePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeWavePlayer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundNodeWavePlayer_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeWavePlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNodeWavePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeWavePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeWavePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeWavePlayer, 2052058799);
	template<> ENGINE_API UClass* StaticClass<USoundNodeWavePlayer>()
	{
		return USoundNodeWavePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeWavePlayer(Z_Construct_UClass_USoundNodeWavePlayer, &USoundNodeWavePlayer::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeWavePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeWavePlayer);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundNodeWavePlayer)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
