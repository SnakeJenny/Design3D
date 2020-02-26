// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/ParticleSystem.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSystem() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ParticleSystemLODMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSystemUpdateMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedEmitterMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLODSoloTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemLOD();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_UParticleSystem_ContainsEmitterType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSignificanceLevel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UInterpCurveEdSetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleEmitter_NoRegister();
// End Cross Module References
	static UEnum* EParticleSystemOcclusionBoundsMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSystemOcclusionBoundsMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleSystemOcclusionBoundsMethod>()
	{
		return EParticleSystemOcclusionBoundsMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleSystemOcclusionBoundsMethod(EParticleSystemOcclusionBoundsMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleSystemOcclusionBoundsMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod_Hash() { return 1705685153U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleSystemOcclusionBoundsMethod"), 0, Get_Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPSOBM_None", (int64)EPSOBM_None },
				{ "EPSOBM_ParticleBounds", (int64)EPSOBM_ParticleBounds },
				{ "EPSOBM_CustomBounds", (int64)EPSOBM_CustomBounds },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EPSOBM_CustomBounds.DisplayName", "Custom Bounds" },
				{ "EPSOBM_CustomBounds.ToolTip", "Use the custom occlusion bounds when determining occlusion" },
				{ "EPSOBM_None.DisplayName", "None" },
				{ "EPSOBM_None.ToolTip", "Don't determine occlusion on this particle system" },
				{ "EPSOBM_ParticleBounds.DisplayName", "Particle Bounds" },
				{ "EPSOBM_ParticleBounds.ToolTip", "Use the bounds of the particle system component when determining occlusion" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "Occlusion method enumeration" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EParticleSystemOcclusionBoundsMethod",
				"EParticleSystemOcclusionBoundsMethod",
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
	static UEnum* ParticleSystemLODMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ParticleSystemLODMethod, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleSystemLODMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ParticleSystemLODMethod>()
	{
		return ParticleSystemLODMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ParticleSystemLODMethod(ParticleSystemLODMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("ParticleSystemLODMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ParticleSystemLODMethod_Hash() { return 684612317U; }
	UEnum* Z_Construct_UEnum_Engine_ParticleSystemLODMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ParticleSystemLODMethod"), 0, Get_Z_Construct_UEnum_Engine_ParticleSystemLODMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PARTICLESYSTEMLODMETHOD_Automatic", (int64)PARTICLESYSTEMLODMETHOD_Automatic },
				{ "PARTICLESYSTEMLODMETHOD_DirectSet", (int64)PARTICLESYSTEMLODMETHOD_DirectSet },
				{ "PARTICLESYSTEMLODMETHOD_ActivateAutomatic", (int64)PARTICLESYSTEMLODMETHOD_ActivateAutomatic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "PARTICLESYSTEMLODMETHOD_ActivateAutomatic.DisplayName", "Activate Automatic" },
				{ "PARTICLESYSTEMLODMETHOD_ActivateAutomatic.ToolTip", "LOD level is determined at Activation time, then left alone unless directly set by game code." },
				{ "PARTICLESYSTEMLODMETHOD_Automatic.DisplayName", "Automatic" },
				{ "PARTICLESYSTEMLODMETHOD_Automatic.ToolTip", "Automatically set the LOD level, checking every LODDistanceCheckTime seconds." },
				{ "PARTICLESYSTEMLODMETHOD_DirectSet.DisplayName", "Direct Set" },
				{ "PARTICLESYSTEMLODMETHOD_DirectSet.ToolTip", "LOD level is directly set by the game code." },
				{ "ToolTip", "ParticleSystemLODMethod" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ParticleSystemLODMethod",
				"ParticleSystemLODMethod",
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
	static UEnum* EParticleSystemUpdateMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSystemUpdateMode, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSystemUpdateMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleSystemUpdateMode>()
	{
		return EParticleSystemUpdateMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleSystemUpdateMode(EParticleSystemUpdateMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleSystemUpdateMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleSystemUpdateMode_Hash() { return 2310328413U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleSystemUpdateMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleSystemUpdateMode"), 0, Get_Z_Construct_UEnum_Engine_EParticleSystemUpdateMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPSUM_RealTime", (int64)EPSUM_RealTime },
				{ "EPSUM_FixedTime", (int64)EPSUM_FixedTime },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EPSUM_FixedTime.DisplayName", "Fixed-Time" },
				{ "EPSUM_FixedTime.ToolTip", "FixedTime      - update via a fixed time step" },
				{ "EPSUM_RealTime.DisplayName", "Real-Time" },
				{ "EPSUM_RealTime.ToolTip", "RealTime       - update via the delta time passed in" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
				{ "ToolTip", "ParticleSystemUpdateMode\nEnumeration indicating the method by which the system should be updated" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EParticleSystemUpdateMode",
				"EParticleSystemUpdateMode",
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
class UScriptStruct* FNamedEmitterMaterial::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNamedEmitterMaterial_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedEmitterMaterial, Z_Construct_UPackage__Script_Engine(), TEXT("NamedEmitterMaterial"), sizeof(FNamedEmitterMaterial), Get_Z_Construct_UScriptStruct_FNamedEmitterMaterial_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNamedEmitterMaterial>()
{
	return FNamedEmitterMaterial::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedEmitterMaterial(FNamedEmitterMaterial::StaticStruct, TEXT("/Script/Engine"), TEXT("NamedEmitterMaterial"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNamedEmitterMaterial
{
	FScriptStruct_Engine_StaticRegisterNativesFNamedEmitterMaterial()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedEmitterMaterial")),new UScriptStruct::TCppStructOps<FNamedEmitterMaterial>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNamedEmitterMaterial;
	struct Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedEmitterMaterial>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "NamedMaterial" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedEmitterMaterial, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "NamedMaterial" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedEmitterMaterial, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NamedEmitterMaterial",
		sizeof(FNamedEmitterMaterial),
		alignof(FNamedEmitterMaterial),
		Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedEmitterMaterial()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedEmitterMaterial_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedEmitterMaterial"), sizeof(FNamedEmitterMaterial), Get_Z_Construct_UScriptStruct_FNamedEmitterMaterial_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNamedEmitterMaterial_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedEmitterMaterial_Hash() { return 1099009525U; }
class UScriptStruct* FLODSoloTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLODSoloTrack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLODSoloTrack, Z_Construct_UPackage__Script_Engine(), TEXT("LODSoloTrack"), sizeof(FLODSoloTrack), Get_Z_Construct_UScriptStruct_FLODSoloTrack_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLODSoloTrack>()
{
	return FLODSoloTrack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLODSoloTrack(FLODSoloTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("LODSoloTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLODSoloTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFLODSoloTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LODSoloTrack")),new UScriptStruct::TCppStructOps<FLODSoloTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLODSoloTrack;
	struct Z_Construct_UScriptStruct_FLODSoloTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoloEnableSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoloEnableSetting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SoloEnableSetting_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODSoloTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Temporary array for tracking 'solo' emitter mode.\nEntry will be true if emitter was enabled" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLODSoloTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLODSoloTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODSoloTrack_Statics::NewProp_SoloEnableSetting_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLODSoloTrack_Statics::NewProp_SoloEnableSetting = { "SoloEnableSetting", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLODSoloTrack, SoloEnableSetting), METADATA_PARAMS(Z_Construct_UScriptStruct_FLODSoloTrack_Statics::NewProp_SoloEnableSetting_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLODSoloTrack_Statics::NewProp_SoloEnableSetting_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLODSoloTrack_Statics::NewProp_SoloEnableSetting_Inner = { "SoloEnableSetting", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLODSoloTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODSoloTrack_Statics::NewProp_SoloEnableSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODSoloTrack_Statics::NewProp_SoloEnableSetting_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLODSoloTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LODSoloTrack",
		sizeof(FLODSoloTrack),
		alignof(FLODSoloTrack),
		Z_Construct_UScriptStruct_FLODSoloTrack_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLODSoloTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLODSoloTrack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLODSoloTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLODSoloTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLODSoloTrack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LODSoloTrack"), sizeof(FLODSoloTrack), Get_Z_Construct_UScriptStruct_FLODSoloTrack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLODSoloTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLODSoloTrack_Hash() { return 3132428349U; }
class UScriptStruct* FParticleSystemLOD::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParticleSystemLOD_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleSystemLOD, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleSystemLOD"), sizeof(FParticleSystemLOD), Get_Z_Construct_UScriptStruct_FParticleSystemLOD_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleSystemLOD>()
{
	return FParticleSystemLOD::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParticleSystemLOD(FParticleSystemLOD::StaticStruct, TEXT("/Script/Engine"), TEXT("ParticleSystemLOD"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParticleSystemLOD
{
	FScriptStruct_Engine_StaticRegisterNativesFParticleSystemLOD()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParticleSystemLOD")),new UScriptStruct::TCppStructOps<FParticleSystemLOD>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFParticleSystemLOD;
	struct Z_Construct_UScriptStruct_FParticleSystemLOD_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleSystemLOD_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Structure containing per-LOD settings that pertain to the entire UParticleSystem." },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleSystemLOD_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleSystemLOD>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleSystemLOD_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleSystemLOD",
		sizeof(FParticleSystemLOD),
		alignof(FParticleSystemLOD),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleSystemLOD_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSystemLOD_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleSystemLOD()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParticleSystemLOD_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParticleSystemLOD"), sizeof(FParticleSystemLOD), Get_Z_Construct_UScriptStruct_FParticleSystemLOD_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParticleSystemLOD_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParticleSystemLOD_Hash() { return 2822926302U; }
	void UParticleSystem::StaticRegisterNativesUParticleSystem()
	{
		UClass* Class = UParticleSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ContainsEmitterType", &UParticleSystem::execContainsEmitterType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics
	{
		struct ParticleSystem_eventContainsEmitterType_Parms
		{
			UClass* TypeData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TypeData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ParticleSystem_eventContainsEmitterType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ParticleSystem_eventContainsEmitterType_Parms), &Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::NewProp_TypeData = { "TypeData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParticleSystem_eventContainsEmitterType_Parms, TypeData), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::NewProp_TypeData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle System" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Returns true if this system contains an emitter of the pasesd type.\n@ param TypeData - The emitter type to check for. Must be a child class of UParticleModuleTypeDataBase" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystem, nullptr, "ContainsEmitterType", sizeof(ParticleSystem_eventContainsEmitterType_Parms), Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystem_ContainsEmitterType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UParticleSystem_ContainsEmitterType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UParticleSystem_NoRegister()
	{
		return UParticleSystem::StaticClass();
	}
	struct Z_Construct_UClass_UParticleSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NamedMaterialSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NamedMaterialSlots;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NamedMaterialSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoloTracking_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoloTracking;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoloTracking_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomOcclusionBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomOcclusionBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionBoundsMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OcclusionBoundsMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MacroUVRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MacroUVRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MacroUVPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MacroUVPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxPoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSignificanceLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaxSignificanceLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxSignificanceLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsignificanceDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InsignificanceDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsignificantReaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InsignificantReaction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InsignificantReaction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTimeBetweenTicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MinTimeBetweenTicks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDeactivate_MetaData[];
#endif
		static void NewProp_bAutoDeactivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDeactivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowManagedTicking_MetaData[];
#endif
		static void NewProp_bAllowManagedTicking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowManagedTicking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDelayRange_MetaData[];
#endif
		static void NewProp_bUseDelayRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDelayRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayLow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayLow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailImage;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImageOutOfDate_MetaData[];
#endif
		static void NewProp_ThumbnailImageOutOfDate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThumbnailImageOutOfDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRealtimeThumbnail_MetaData[];
#endif
		static void NewProp_bUseRealtimeThumbnail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRealtimeThumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasPhysics_MetaData[];
#endif
		static void NewProp_bHasPhysics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPhysics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldResetPeakCounts_MetaData[];
#endif
		static void NewProp_bShouldResetPeakCounts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldResetPeakCounts;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorScale3D_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloorScale3D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloorScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloorRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloorPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FloorMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsBeforeInactive_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondsBeforeInactive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedRelativeBoundingBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FixedRelativeBoundingBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFixedRelativeBoundingBox_MetaData[];
#endif
		static void NewProp_bUseFixedRelativeBoundingBox_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFixedRelativeBoundingBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LODSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRegenerateLODDuplicate_MetaData[];
#endif
		static void NewProp_bRegenerateLODDuplicate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRegenerateLODDuplicate;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorLODSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EditorLODSetting;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDistances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODDistances;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODDistances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LODMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDistanceCheckTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODDistanceCheckTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOrientZAxisTowardCamera_MetaData[];
#endif
		static void NewProp_bOrientZAxisTowardCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrientZAxisTowardCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveEdSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveEdSetup;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailWarmup_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThumbnailWarmup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThumbnailDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThumbnailAngle;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Emitters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Emitters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Emitters_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Emitters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarmupTickRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WarmupTickRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarmupTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WarmupTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateTime_Delta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateTime_Delta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateTime_FPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateTime_FPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemUpdateMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SystemUpdateMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UParticleSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UParticleSystem_ContainsEmitterType, "ContainsEmitterType" }, // 1060227166
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Particles/ParticleSystem.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A ParticleSystem is a complete particle effect that contains any number of ParticleEmitters. By allowing multiple emitters\nin a system, the designer can create elaborate particle effects that are held in a single system. Once created using\nCascade, a ParticleSystem can then be inserted into a level or created in script." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_NamedMaterialSlots_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Array of named material slots for use by emitters of this system.\nEmitters can use these instead of their own materials by providing the name to the NamedMaterialOverrides property of their required module.\nThese materials can be overridden using CreateNamedDynamicMaterialInstance() on a ParticleSystemComponent." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_NamedMaterialSlots = { "NamedMaterialSlots", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, NamedMaterialSlots), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_NamedMaterialSlots_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_NamedMaterialSlots_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_NamedMaterialSlots_Inner = { "NamedMaterialSlots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNamedEmitterMaterial, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_SoloTracking_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_SoloTracking = { "SoloTracking", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, SoloTracking), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_SoloTracking_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_SoloTracking_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_SoloTracking_Inner = { "SoloTracking", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLODSoloTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_CustomOcclusionBounds_MetaData[] = {
		{ "Category", "Occlusion" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The occlusion bounds to use if OcclusionBoundsMethod is set to EPSOBM_CustomBounds" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_CustomOcclusionBounds = { "CustomOcclusionBounds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, CustomOcclusionBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_CustomOcclusionBounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_CustomOcclusionBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_OcclusionBoundsMethod_MetaData[] = {
		{ "Category", "Occlusion" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Which occlusion bounds method to use for this particle system.\nEPSOBM_None - Don't determine occlusion for this system.\nEPSOBM_ParticleBounds - Use the bounds of the component when determining occlusion." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_OcclusionBoundsMethod = { "OcclusionBoundsMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, OcclusionBoundsMethod), Z_Construct_UEnum_Engine_EParticleSystemOcclusionBoundsMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_OcclusionBoundsMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_OcclusionBoundsMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_MacroUVRadius_MetaData[] = {
		{ "Category", "MacroUV" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "World space radius that UVs generated with the ParticleMacroUV material node will tile based on." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_MacroUVRadius = { "MacroUVRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, MacroUVRadius), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_MacroUVRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_MacroUVRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_MacroUVPosition_MetaData[] = {
		{ "Category", "MacroUV" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Local space position that UVs generated with the ParticleMacroUV material node will be centered on." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_MacroUVPosition = { "MacroUVPosition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, MacroUVPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_MacroUVPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_MacroUVPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_MaxPoolSize_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Max number of components of this system to keep resident in the world PSC pool." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_MaxPoolSize = { "MaxPoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, MaxPoolSize), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_MaxPoolSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_MaxPoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_MaxSignificanceLevel_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The maximum level of significance for emitters in this system. Any emitters with a higher significance will be capped at this significance level." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_MaxSignificanceLevel = { "MaxSignificanceLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, MaxSignificanceLevel), Z_Construct_UEnum_Engine_EParticleSignificanceLevel, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_MaxSignificanceLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_MaxSignificanceLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_MaxSignificanceLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificanceDelay_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Time delay between all emitters becoming insignificant and the systems insignificant reaction." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificanceDelay = { "InsignificanceDelay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, InsignificanceDelay), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificanceDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificanceDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificantReaction_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The reaction this system takes when all emitters are insignificant." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificantReaction = { "InsignificantReaction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, InsignificantReaction), Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificantReaction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificantReaction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificantReaction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_MinTimeBetweenTicks_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Minimum duration between ticks; 33=tick at max. 30FPS, 16=60FPS, 8=120FPS" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_MinTimeBetweenTicks = { "MinTimeBetweenTicks", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, MinTimeBetweenTicks), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_MinTimeBetweenTicks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_MinTimeBetweenTicks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAutoDeactivate_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Auto-deactivate system if all emitters are determined to not spawn particles again, regardless of lifetime." },
	};
#endif
	void Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAutoDeactivate_SetBit(void* Obj)
	{
		((UParticleSystem*)Obj)->bAutoDeactivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAutoDeactivate = { "bAutoDeactivate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleSystem), &Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAutoDeactivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAutoDeactivate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAutoDeactivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAllowManagedTicking_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Whether or not to allow instances of this system to have their ticks managed." },
	};
#endif
	void Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAllowManagedTicking_SetBit(void* Obj)
	{
		((UParticleSystem*)Obj)->bAllowManagedTicking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAllowManagedTicking = { "bAllowManagedTicking", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleSystem), &Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAllowManagedTicking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAllowManagedTicking_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAllowManagedTicking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseDelayRange_MetaData[] = {
		{ "Category", "Delay" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "If true, select the emitter delay from the range\n        [DelayLow..Delay]" },
	};
#endif
	void Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseDelayRange_SetBit(void* Obj)
	{
		((UParticleSystem*)Obj)->bUseDelayRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseDelayRange = { "bUseDelayRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleSystem), &Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseDelayRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseDelayRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseDelayRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_DelayLow_MetaData[] = {
		{ "Category", "Delay" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The low end of the emitter delay if using a range." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_DelayLow = { "DelayLow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, DelayLow), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_DelayLow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_DelayLow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_Delay_MetaData[] = {
		{ "Category", "Delay" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "How long this Particle system should delay when ActivateSystem is called on it." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, Delay), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_Delay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_Delay_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Internal: The PSys thumbnail image" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImage_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImageOutOfDate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Internal: Indicates the PSys thumbnail image is out of date" },
	};
#endif
	void Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImageOutOfDate_SetBit(void* Obj)
	{
		((UParticleSystem*)Obj)->ThumbnailImageOutOfDate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImageOutOfDate = { "ThumbnailImageOutOfDate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleSystem), &Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImageOutOfDate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImageOutOfDate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImageOutOfDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseRealtimeThumbnail_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Inidicates the old 'real-time' thumbnail rendering should be used" },
	};
#endif
	void Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseRealtimeThumbnail_SetBit(void* Obj)
	{
		((UParticleSystem*)Obj)->bUseRealtimeThumbnail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseRealtimeThumbnail = { "bUseRealtimeThumbnail", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleSystem), &Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseRealtimeThumbnail_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseRealtimeThumbnail_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseRealtimeThumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_bHasPhysics_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Set during load time to indicate that physics is used..." },
	};
#endif
	void Z_Construct_UClass_UParticleSystem_Statics::NewProp_bHasPhysics_SetBit(void* Obj)
	{
		((UParticleSystem*)Obj)->bHasPhysics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_bHasPhysics = { "bHasPhysics", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleSystem), &Z_Construct_UClass_UParticleSystem_Statics::NewProp_bHasPhysics_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bHasPhysics_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bHasPhysics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_bShouldResetPeakCounts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "EDITOR ONLY: Indicates that Cascade would like to have the PeakActiveParticles count reset" },
	};
#endif
	void Z_Construct_UClass_UParticleSystem_Statics::NewProp_bShouldResetPeakCounts_SetBit(void* Obj)
	{
		((UParticleSystem*)Obj)->bShouldResetPeakCounts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_bShouldResetPeakCounts = { "bShouldResetPeakCounts", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleSystem), &Z_Construct_UClass_UParticleSystem_Statics::NewProp_bShouldResetPeakCounts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bShouldResetPeakCounts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bShouldResetPeakCounts_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The background color to display in Cascade" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, BackgroundColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_BackgroundColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorScale3D_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorScale3D = { "FloorScale3D", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, FloorScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorScale3D_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorScale3D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorScale = { "FloorScale", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, FloorScale), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorRotation = { "FloorRotation", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, FloorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorPosition = { "FloorPosition", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, FloorPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Cascade 'floor' mesh information." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorMesh = { "FloorMesh", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, FloorMesh), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_SecondsBeforeInactive_MetaData[] = {
		{ "Category", "ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Number of seconds of emitter not being rendered that need to pass before it\nno longer gets ticked/ becomes inactive." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_SecondsBeforeInactive = { "SecondsBeforeInactive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, SecondsBeforeInactive), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_SecondsBeforeInactive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_SecondsBeforeInactive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_FixedRelativeBoundingBox_MetaData[] = {
		{ "Category", "Bounds" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Fixed relative bounding box for particle system." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_FixedRelativeBoundingBox = { "FixedRelativeBoundingBox", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, FixedRelativeBoundingBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FixedRelativeBoundingBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_FixedRelativeBoundingBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseFixedRelativeBoundingBox_MetaData[] = {
		{ "Category", "Bounds" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Whether to use the fixed relative bounding box or calculate it every frame." },
	};
#endif
	void Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseFixedRelativeBoundingBox_SetBit(void* Obj)
	{
		((UParticleSystem*)Obj)->bUseFixedRelativeBoundingBox = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseFixedRelativeBoundingBox = { "bUseFixedRelativeBoundingBox", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleSystem), &Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseFixedRelativeBoundingBox_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseFixedRelativeBoundingBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseFixedRelativeBoundingBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODSettings_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODSettings = { "LODSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, LODSettings), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODSettings_Inner = { "LODSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FParticleSystemLOD, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_bRegenerateLODDuplicate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Internal value that tracks the regenerate LOD levels preference.\nIf true, when autoregenerating LOD levels in code, the low level will\nbe a duplicate of the high." },
	};
#endif
	void Z_Construct_UClass_UParticleSystem_Statics::NewProp_bRegenerateLODDuplicate_SetBit(void* Obj)
	{
		((UParticleSystem*)Obj)->bRegenerateLODDuplicate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_bRegenerateLODDuplicate = { "bRegenerateLODDuplicate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleSystem), &Z_Construct_UClass_UParticleSystem_Statics::NewProp_bRegenerateLODDuplicate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bRegenerateLODDuplicate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bRegenerateLODDuplicate_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_EditorLODSetting_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "LOD setting for intepolation (set by Cascade) Range [0..100]" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_EditorLODSetting = { "EditorLODSetting", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, EditorLODSetting), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_EditorLODSetting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_EditorLODSetting_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistances_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The array of distances for each LOD level in the system.\nUsed when LODMethod is set to PARTICLESYSTEMLODMETHOD_Automatic.\n\nExample: System with 3 LOD levels\n        LODDistances(0) = 0.0\n        LODDistances(1) = 2500.0\n        LODDistances(2) = 5000.0\n\n        In this case, when the system is [   0.0 ..   2499.9] from the camera, LOD level 0 will be used.\n                                                                         [2500.0 ..   4999.9] from the camera, LOD level 1 will be used.\n                                                                         [5000.0 .. INFINITY] from the camera, LOD level 2 will be used." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistances = { "LODDistances", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, LODDistances), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistances_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistances_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistances_Inner = { "LODDistances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODMethod_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The method of LOD level determination to utilize for this particle system\n  PARTICLESYSTEMLODMETHOD_Automatic - Automatically set the LOD level, checking every LODDistanceCheckTime seconds.\nPARTICLESYSTEMLODMETHOD_DirectSet - LOD level is directly set by the game code.\nPARTICLESYSTEMLODMETHOD_ActivateAutomatic - LOD level is determined at Activation time, then left alone unless directly set by game code." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODMethod = { "LODMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, LODMethod), Z_Construct_UEnum_Engine_ParticleSystemLODMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistanceCheckTime_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "How often (in seconds) the system should perform the LOD distance check." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistanceCheckTime = { "LODDistanceCheckTime", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, LODDistanceCheckTime), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistanceCheckTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistanceCheckTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_bOrientZAxisTowardCamera_MetaData[] = {
		{ "Category", "ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "If true, the system's Z axis will be oriented toward the camera" },
	};
#endif
	void Z_Construct_UClass_UParticleSystem_Statics::NewProp_bOrientZAxisTowardCamera_SetBit(void* Obj)
	{
		((UParticleSystem*)Obj)->bOrientZAxisTowardCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_bOrientZAxisTowardCamera = { "bOrientZAxisTowardCamera", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleSystem), &Z_Construct_UClass_UParticleSystem_Statics::NewProp_bOrientZAxisTowardCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bOrientZAxisTowardCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_bOrientZAxisTowardCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_CurveEdSetup_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Used for curve editor to remember curve-editing setup." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_CurveEdSetup = { "CurveEdSetup", nullptr, (EPropertyFlags)0x0010000000000008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, CurveEdSetup), Z_Construct_UClass_UInterpCurveEdSetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_CurveEdSetup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_CurveEdSetup_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailWarmup_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The time to warm-up the system for the thumbnail image" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailWarmup = { "ThumbnailWarmup", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, ThumbnailWarmup), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailWarmup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailWarmup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The distance to place the system when rendering the thumbnail image" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailDistance = { "ThumbnailDistance", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, ThumbnailDistance), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The angle to use when rendering the thumbnail image" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailAngle = { "ThumbnailAngle", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, ThumbnailAngle), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailAngle_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_PreviewComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "The component used to preview the particle system in Cascade" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_PreviewComponent = { "PreviewComponent", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, PreviewComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_PreviewComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_PreviewComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_Emitters_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Emitters       - internal - the array of emitters in the system" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_Emitters = { "Emitters", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, Emitters), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_Emitters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_Emitters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_Emitters_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "Emitters       - internal - the array of emitters in the system" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_Emitters_Inner = { "Emitters", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UParticleEmitter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_Emitters_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_Emitters_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_WarmupTickRate_MetaData[] = {
		{ "Category", "ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "WarmupTickRate - the time step for each tick during warm up.\n       Increasing this improves performance. Decreasing, improves accuracy.\n       Set to 0 to use the default tick time." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_WarmupTickRate = { "WarmupTickRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, WarmupTickRate), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_WarmupTickRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_WarmupTickRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_WarmupTime_MetaData[] = {
		{ "Category", "ParticleSystem" },
		{ "DisplayName", "Warmup Time - beware hitches!" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "WarmupTime - the time to warm-up the particle system when first rendered\nWarning: WarmupTime is implemented by simulating the particle system for the time requested upon activation.\nThis is extremely prone to cause hitches, especially with large particle counts - use with caution." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_WarmupTime = { "WarmupTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, WarmupTime), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_WarmupTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_WarmupTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_UpdateTime_Delta_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "UpdateTime_Delta       - internal" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_UpdateTime_Delta = { "UpdateTime_Delta", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, UpdateTime_Delta), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_UpdateTime_Delta_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_UpdateTime_Delta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_UpdateTime_FPS_MetaData[] = {
		{ "Category", "ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
		{ "ToolTip", "UpdateTime_FPS - the frame per second to update at in FixedTime mode" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_UpdateTime_FPS = { "UpdateTime_FPS", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, UpdateTime_FPS), METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_UpdateTime_FPS_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_UpdateTime_FPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystem_Statics::NewProp_SystemUpdateMode_MetaData[] = {
		{ "Category", "ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystem_Statics::NewProp_SystemUpdateMode = { "SystemUpdateMode", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleSystem, SystemUpdateMode), Z_Construct_UEnum_Engine_EParticleSystemUpdateMode, METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::NewProp_SystemUpdateMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::NewProp_SystemUpdateMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_NamedMaterialSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_NamedMaterialSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_SoloTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_SoloTracking_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_CustomOcclusionBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_OcclusionBoundsMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_MacroUVRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_MacroUVPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_MaxPoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_MaxSignificanceLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_MaxSignificanceLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificanceDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificantReaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_InsignificantReaction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_MinTimeBetweenTicks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAutoDeactivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_bAllowManagedTicking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseDelayRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_DelayLow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_Delay,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImage,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailImageOutOfDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseRealtimeThumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_bHasPhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_bShouldResetPeakCounts,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_BackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorScale3D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_FloorMesh,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_SecondsBeforeInactive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_FixedRelativeBoundingBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_bUseFixedRelativeBoundingBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_bRegenerateLODDuplicate,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_EditorLODSetting,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_LODDistanceCheckTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_bOrientZAxisTowardCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_CurveEdSetup,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailWarmup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_ThumbnailAngle,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_PreviewComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_Emitters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_Emitters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_WarmupTickRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_WarmupTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_UpdateTime_Delta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_UpdateTime_FPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystem_Statics::NewProp_SystemUpdateMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleSystem_Statics::ClassParams = {
		&UParticleSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UParticleSystem_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleSystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleSystem, 2332766481);
	template<> ENGINE_API UClass* StaticClass<UParticleSystem>()
	{
		return UParticleSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleSystem(Z_Construct_UClass_UParticleSystem, &UParticleSystem::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleSystem);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleSystem)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
