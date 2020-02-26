// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstParticleReplay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstParticleReplay() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstParticleReplay_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstParticleReplay();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackInstParticleReplay::StaticRegisterNativesUInterpTrackInstParticleReplay()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstParticleReplay_NoRegister()
	{
		return UInterpTrackInstParticleReplay::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdatePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastUpdatePosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstParticleReplay.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstParticleReplay.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::NewProp_LastUpdatePosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstParticleReplay.h" },
		{ "ToolTip", "Position we were in last time we evaluated.\nDuring UpdateTrack, events between this time and the current time will be processed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::NewProp_LastUpdatePosition = { "LastUpdatePosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstParticleReplay, LastUpdatePosition), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::NewProp_LastUpdatePosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::NewProp_LastUpdatePosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::NewProp_LastUpdatePosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstParticleReplay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::ClassParams = {
		&UInterpTrackInstParticleReplay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstParticleReplay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstParticleReplay, 4187476275);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstParticleReplay>()
	{
		return UInterpTrackInstParticleReplay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstParticleReplay(Z_Construct_UClass_UInterpTrackInstParticleReplay, &UInterpTrackInstParticleReplay::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstParticleReplay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstParticleReplay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
