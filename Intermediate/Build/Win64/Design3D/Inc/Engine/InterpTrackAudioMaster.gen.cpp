// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackAudioMaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackAudioMaster() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackAudioMaster_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackAudioMaster();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackAudioMaster::StaticRegisterNativesUInterpTrackAudioMaster()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackAudioMaster_NoRegister()
	{
		return UInterpTrackAudioMaster::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackAudioMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackAudioMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackVectorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackAudioMaster_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Audio Master Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackAudioMaster.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAudioMaster.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackAudioMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackAudioMaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackAudioMaster_Statics::ClassParams = {
		&UInterpTrackAudioMaster::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackAudioMaster_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAudioMaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackAudioMaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackAudioMaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackAudioMaster, 2729178425);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackAudioMaster>()
	{
		return UInterpTrackAudioMaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackAudioMaster(Z_Construct_UClass_UInterpTrackAudioMaster, &UInterpTrackAudioMaster::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackAudioMaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackAudioMaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
