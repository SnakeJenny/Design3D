// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_PlaySound() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_PlaySound_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_PlaySound();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void UAnimNotify_PlaySound::StaticRegisterNativesUAnimNotify_PlaySound()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_PlaySound_NoRegister()
	{
		return UAnimNotify_PlaySound::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_PlaySound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFollow_MetaData[];
#endif
		static void NewProp_bFollow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_PlaySound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlaySound_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Play Sound" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotify_PlaySound.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_AttachName_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "EditCondition", "bFollow" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h" },
		{ "ToolTip", "Socket or bone name to attach sound to" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_AttachName = { "AttachName", nullptr, (EPropertyFlags)0x0011000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_PlaySound, AttachName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_AttachName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_AttachName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bFollow_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h" },
		{ "ToolTip", "If this sound should follow its owner" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bFollow_SetBit(void* Obj)
	{
		((UAnimNotify_PlaySound*)Obj)->bFollow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bFollow = { "bFollow", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimNotify_PlaySound), &Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bFollow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bFollow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bFollow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h" },
		{ "ToolTip", "Pitch Multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0011000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_PlaySound, PitchMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_PitchMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_PitchMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h" },
		{ "ToolTip", "Volume Multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0011000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_PlaySound, VolumeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_VolumeMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_VolumeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h" },
		{ "ToolTip", "Sound to Play" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0011000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_PlaySound, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_Sound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_Sound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_PlaySound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_AttachName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_bFollow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlaySound_Statics::NewProp_Sound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_PlaySound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_PlaySound>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_PlaySound_Statics::ClassParams = {
		&UAnimNotify_PlaySound::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotify_PlaySound_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlaySound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_PlaySound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_PlaySound_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_PlaySound, 1126998697);
	template<> ENGINE_API UClass* StaticClass<UAnimNotify_PlaySound>()
	{
		return UAnimNotify_PlaySound::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_PlaySound(Z_Construct_UClass_UAnimNotify_PlaySound, &UAnimNotify_PlaySound::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimNotify_PlaySound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PlaySound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
