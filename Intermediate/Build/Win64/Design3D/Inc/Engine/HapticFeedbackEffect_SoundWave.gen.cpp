// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Haptics/HapticFeedbackEffect_SoundWave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticFeedbackEffect_SoundWave() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_SoundWave();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
// End Cross Module References
	void UHapticFeedbackEffect_SoundWave::StaticRegisterNativesUHapticFeedbackEffect_SoundWave()
	{
	}
	UClass* Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_NoRegister()
	{
		return UHapticFeedbackEffect_SoundWave::StaticClass();
	}
	struct Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHapticFeedbackEffect_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Haptics/HapticFeedbackEffect_SoundWave.h" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_SoundWave.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::NewProp_SoundWave_MetaData[] = {
		{ "Category", "HapticFeedbackEffect_SoundWave" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_SoundWave.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHapticFeedbackEffect_SoundWave, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::NewProp_SoundWave_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::NewProp_SoundWave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::NewProp_SoundWave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHapticFeedbackEffect_SoundWave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::ClassParams = {
		&UHapticFeedbackEffect_SoundWave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHapticFeedbackEffect_SoundWave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHapticFeedbackEffect_SoundWave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHapticFeedbackEffect_SoundWave, 1502867036);
	template<> ENGINE_API UClass* StaticClass<UHapticFeedbackEffect_SoundWave>()
	{
		return UHapticFeedbackEffect_SoundWave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHapticFeedbackEffect_SoundWave(Z_Construct_UClass_UHapticFeedbackEffect_SoundWave, &UHapticFeedbackEffect_SoundWave::StaticClass, TEXT("/Script/Engine"), TEXT("UHapticFeedbackEffect_SoundWave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHapticFeedbackEffect_SoundWave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
