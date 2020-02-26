// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/ParticleSpriteEmitter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSpriteEmitter() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleScreenAlignment();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSpriteEmitter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSpriteEmitter();
	ENGINE_API UClass* Z_Construct_UClass_UParticleEmitter();
// End Cross Module References
	static UEnum* EParticleScreenAlignment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleScreenAlignment, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleScreenAlignment"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleScreenAlignment>()
	{
		return EParticleScreenAlignment_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleScreenAlignment(EParticleScreenAlignment_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleScreenAlignment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleScreenAlignment_Hash() { return 2781518735U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleScreenAlignment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleScreenAlignment"), 0, Get_Z_Construct_UEnum_Engine_EParticleScreenAlignment_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PSA_FacingCameraPosition", (int64)PSA_FacingCameraPosition },
				{ "PSA_Square", (int64)PSA_Square },
				{ "PSA_Rectangle", (int64)PSA_Rectangle },
				{ "PSA_Velocity", (int64)PSA_Velocity },
				{ "PSA_AwayFromCenter", (int64)PSA_AwayFromCenter },
				{ "PSA_TypeSpecific", (int64)PSA_TypeSpecific },
				{ "PSA_FacingCameraDistanceBlend", (int64)PSA_FacingCameraDistanceBlend },
				{ "PSA_MAX", (int64)PSA_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSpriteEmitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EParticleScreenAlignment",
				"EParticleScreenAlignment",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UParticleSpriteEmitter::StaticRegisterNativesUParticleSpriteEmitter()
	{
	}
	UClass* Z_Construct_UClass_UParticleSpriteEmitter_NoRegister()
	{
		return UParticleSpriteEmitter::StaticClass();
	}
	struct Z_Construct_UClass_UParticleSpriteEmitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleSpriteEmitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleEmitter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSpriteEmitter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/ParticleSpriteEmitter.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSpriteEmitter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleSpriteEmitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleSpriteEmitter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleSpriteEmitter_Statics::ClassParams = {
		&UParticleSpriteEmitter::StaticClass,
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
		0x008830A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleSpriteEmitter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleSpriteEmitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleSpriteEmitter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleSpriteEmitter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleSpriteEmitter, 3408395525);
	template<> ENGINE_API UClass* StaticClass<UParticleSpriteEmitter>()
	{
		return UParticleSpriteEmitter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleSpriteEmitter(Z_Construct_UClass_UParticleSpriteEmitter, &UParticleSpriteEmitter::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleSpriteEmitter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleSpriteEmitter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
