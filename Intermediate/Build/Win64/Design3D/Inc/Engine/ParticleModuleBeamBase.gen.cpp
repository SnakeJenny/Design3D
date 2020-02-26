// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Beam/ParticleModuleBeamBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleBeamBase() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_Beam2SourceTargetMethod();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
// End Cross Module References
	static UEnum* Beam2SourceTargetTangentMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod, Z_Construct_UPackage__Script_Engine(), TEXT("Beam2SourceTargetTangentMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<Beam2SourceTargetTangentMethod>()
	{
		return Beam2SourceTargetTangentMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Beam2SourceTargetTangentMethod(Beam2SourceTargetTangentMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("Beam2SourceTargetTangentMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod_Hash() { return 3128567208U; }
	UEnum* Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Beam2SourceTargetTangentMethod"), 0, Get_Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PEB2STTM_Direct", (int64)PEB2STTM_Direct },
				{ "PEB2STTM_UserSet", (int64)PEB2STTM_UserSet },
				{ "PEB2STTM_Distribution", (int64)PEB2STTM_Distribution },
				{ "PEB2STTM_Emitter", (int64)PEB2STTM_Emitter },
				{ "PEB2STTM_MAX", (int64)PEB2STTM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamBase.h" },
				{ "PEB2STTM_Direct.DisplayName", "Direct" },
				{ "PEB2STTM_Direct.ToolTip", "Direct - a direct line between source and target." },
				{ "PEB2STTM_Distribution.DisplayName", "Distribution" },
				{ "PEB2STTM_Distribution.ToolTip", "Distribution - use the distribution." },
				{ "PEB2STTM_Emitter.DisplayName", "Emitter" },
				{ "PEB2STTM_Emitter.ToolTip", "Emitter        - use the emitter direction." },
				{ "PEB2STTM_UserSet.DisplayName", "User Set" },
				{ "PEB2STTM_UserSet.ToolTip", "UserSet        - use the user set value." },
				{ "ToolTip", "The method to use in determining the source/target tangent." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"Beam2SourceTargetTangentMethod",
				"Beam2SourceTargetTangentMethod",
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
	static UEnum* Beam2SourceTargetMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_Beam2SourceTargetMethod, Z_Construct_UPackage__Script_Engine(), TEXT("Beam2SourceTargetMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<Beam2SourceTargetMethod>()
	{
		return Beam2SourceTargetMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Beam2SourceTargetMethod(Beam2SourceTargetMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("Beam2SourceTargetMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_Beam2SourceTargetMethod_Hash() { return 2360931844U; }
	UEnum* Z_Construct_UEnum_Engine_Beam2SourceTargetMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Beam2SourceTargetMethod"), 0, Get_Z_Construct_UEnum_Engine_Beam2SourceTargetMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PEB2STM_Default", (int64)PEB2STM_Default },
				{ "PEB2STM_UserSet", (int64)PEB2STM_UserSet },
				{ "PEB2STM_Emitter", (int64)PEB2STM_Emitter },
				{ "PEB2STM_Particle", (int64)PEB2STM_Particle },
				{ "PEB2STM_Actor", (int64)PEB2STM_Actor },
				{ "PEB2STM_MAX", (int64)PEB2STM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamBase.h" },
				{ "PEB2STM_Actor.DisplayName", "Actor" },
				{ "PEB2STM_Actor.ToolTip", "Actor          - use the actor as the source/target.\n    The name of the actor should be set in <Source/Target>Name." },
				{ "PEB2STM_Default.DisplayName", "Default" },
				{ "PEB2STM_Default.ToolTip", "Default        - use the distribution.\n    This is the fallback for when other modes can't be resolved." },
				{ "PEB2STM_Emitter.DisplayName", "Emitter" },
				{ "PEB2STM_Emitter.ToolTip", "Emitter        - use the emitter position as the source/target." },
				{ "PEB2STM_Particle.DisplayName", "Particle" },
				{ "PEB2STM_Particle.ToolTip", "Particle       - use the particles from a given emitter in the system.\n    The name of the emitter should be set in <Source/Target>Name." },
				{ "PEB2STM_UserSet.DisplayName", "User Set" },
				{ "PEB2STM_UserSet.ToolTip", "UserSet        - use the user set value.\n    Primarily intended for weapon effects." },
				{ "ToolTip", "The method to use in determining the source/target." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"Beam2SourceTargetMethod",
				"Beam2SourceTargetMethod",
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
	void UParticleModuleBeamBase::StaticRegisterNativesUParticleModuleBeamBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleBeamBase_NoRegister()
	{
		return UParticleModuleBeamBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleBeamBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleBeamBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Beam" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Beam/ParticleModuleBeamBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleBeamBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleBeamBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleBeamBase_Statics::ClassParams = {
		&UParticleModuleBeamBase::StaticClass,
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
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleBeamBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleBeamBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleBeamBase, 3844604896);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleBeamBase>()
	{
		return UParticleModuleBeamBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleBeamBase(Z_Construct_UClass_UParticleModuleBeamBase, &UParticleModuleBeamBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleBeamBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleBeamBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
