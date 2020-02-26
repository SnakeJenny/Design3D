// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstAudioMaster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstAudioMaster() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstAudioMaster_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstAudioMaster();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackInstAudioMaster::StaticRegisterNativesUInterpTrackInstAudioMaster()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstAudioMaster_NoRegister()
	{
		return UInterpTrackInstAudioMaster::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstAudioMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstAudioMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstAudioMaster_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstAudioMaster.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstAudioMaster.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstAudioMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstAudioMaster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstAudioMaster_Statics::ClassParams = {
		&UInterpTrackInstAudioMaster::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstAudioMaster_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstAudioMaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstAudioMaster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInstAudioMaster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstAudioMaster, 1483537313);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstAudioMaster>()
	{
		return UInterpTrackInstAudioMaster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstAudioMaster(Z_Construct_UClass_UInterpTrackInstAudioMaster, &UInterpTrackInstAudioMaster::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstAudioMaster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstAudioMaster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
