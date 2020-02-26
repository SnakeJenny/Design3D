// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Haptics/HapticFeedbackEffect_Buffer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticFeedbackEffect_Buffer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Buffer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Buffer();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UHapticFeedbackEffect_Buffer::StaticRegisterNativesUHapticFeedbackEffect_Buffer()
	{
	}
	UClass* Z_Construct_UClass_UHapticFeedbackEffect_Buffer_NoRegister()
	{
		return UHapticFeedbackEffect_Buffer::StaticClass();
	}
	struct Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amplitudes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Amplitudes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Amplitudes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHapticFeedbackEffect_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Haptics/HapticFeedbackEffect_Buffer.h" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Buffer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "HapticFeedbackEffect_Buffer" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Buffer.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHapticFeedbackEffect_Buffer, SampleRate), METADATA_PARAMS(Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_SampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_Amplitudes_MetaData[] = {
		{ "Category", "HapticFeedbackEffect_Buffer" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Buffer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_Amplitudes = { "Amplitudes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHapticFeedbackEffect_Buffer, Amplitudes), METADATA_PARAMS(Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_Amplitudes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_Amplitudes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_Amplitudes_Inner = { "Amplitudes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_SampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_Amplitudes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_Amplitudes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHapticFeedbackEffect_Buffer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::ClassParams = {
		&UHapticFeedbackEffect_Buffer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHapticFeedbackEffect_Buffer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHapticFeedbackEffect_Buffer, 2328299835);
	template<> ENGINE_API UClass* StaticClass<UHapticFeedbackEffect_Buffer>()
	{
		return UHapticFeedbackEffect_Buffer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHapticFeedbackEffect_Buffer(Z_Construct_UClass_UHapticFeedbackEffect_Buffer, &UHapticFeedbackEffect_Buffer::StaticClass, TEXT("/Script/Engine"), TEXT("UHapticFeedbackEffect_Buffer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHapticFeedbackEffect_Buffer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
