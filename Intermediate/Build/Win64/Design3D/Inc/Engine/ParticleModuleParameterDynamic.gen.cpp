// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Parameter/ParticleModuleParameterDynamic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleParameterDynamic() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEmitterDynamicParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleParameterDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleParameterDynamic();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleParameterBase();
// End Cross Module References
	static UEnum* EEmitterDynamicParameterValue_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue, Z_Construct_UPackage__Script_Engine(), TEXT("EEmitterDynamicParameterValue"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EEmitterDynamicParameterValue>()
	{
		return EEmitterDynamicParameterValue_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEmitterDynamicParameterValue(EEmitterDynamicParameterValue_StaticEnum, TEXT("/Script/Engine"), TEXT("EEmitterDynamicParameterValue"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue_Hash() { return 256456768U; }
	UEnum* Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEmitterDynamicParameterValue"), 0, Get_Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDPV_UserSet", (int64)EDPV_UserSet },
				{ "EDPV_AutoSet", (int64)EDPV_AutoSet },
				{ "EDPV_VelocityX", (int64)EDPV_VelocityX },
				{ "EDPV_VelocityY", (int64)EDPV_VelocityY },
				{ "EDPV_VelocityZ", (int64)EDPV_VelocityZ },
				{ "EDPV_VelocityMag", (int64)EDPV_VelocityMag },
				{ "EDPV_MAX", (int64)EDPV_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EDPV_AutoSet.ToolTip", "AutoSet - ignore values set in the distribution, another module will handle this data" },
				{ "EDPV_UserSet.ToolTip", "UserSet - use the user set values in the distribution (the default)" },
				{ "EDPV_VelocityMag.ToolTip", "VelocityMag - pass the particle velocity magnitude thru" },
				{ "EDPV_VelocityX.ToolTip", "VelocityX - pass the particle velocity along the X-axis thru" },
				{ "EDPV_VelocityY.ToolTip", "VelocityY - pass the particle velocity along the Y-axis thru" },
				{ "EDPV_VelocityZ.ToolTip", "VelocityZ - pass the particle velocity along the Z-axis thru" },
				{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
				{ "ToolTip", "EmitterDynamicParameterValue\nEnumeration indicating the way a dynamic parameter should be set." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EEmitterDynamicParameterValue",
				"EEmitterDynamicParameterValue",
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
class UScriptStruct* FEmitterDynamicParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEmitterDynamicParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEmitterDynamicParameter, Z_Construct_UPackage__Script_Engine(), TEXT("EmitterDynamicParameter"), sizeof(FEmitterDynamicParameter), Get_Z_Construct_UScriptStruct_FEmitterDynamicParameter_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEmitterDynamicParameter>()
{
	return FEmitterDynamicParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEmitterDynamicParameter(FEmitterDynamicParameter::StaticStruct, TEXT("/Script/Engine"), TEXT("EmitterDynamicParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEmitterDynamicParameter
{
	FScriptStruct_Engine_StaticRegisterNativesFEmitterDynamicParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EmitterDynamicParameter")),new UScriptStruct::TCppStructOps<FEmitterDynamicParameter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEmitterDynamicParameter;
	struct Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParamValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleVelocityByParamValue_MetaData[];
#endif
		static void NewProp_bScaleVelocityByParamValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleVelocityByParamValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ValueMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnTimeOnly_MetaData[];
#endif
		static void NewProp_bSpawnTimeOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnTimeOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseEmitterTime_MetaData[];
#endif
		static void NewProp_bUseEmitterTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseEmitterTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "Helper structure for displaying the parameter." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEmitterDynamicParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamValue_MetaData[] = {
		{ "Category", "EmitterDynamicParameter" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "The distriubtion for the parameter value." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamValue = { "ParamValue", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmitterDynamicParameter, ParamValue), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bScaleVelocityByParamValue_MetaData[] = {
		{ "Category", "EmitterDynamicParameter" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "If true, scale the velocity value selected in ValueMethod by the evaluated ParamValue." },
	};
#endif
	void Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bScaleVelocityByParamValue_SetBit(void* Obj)
	{
		((FEmitterDynamicParameter*)Obj)->bScaleVelocityByParamValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bScaleVelocityByParamValue = { "bScaleVelocityByParamValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FEmitterDynamicParameter), &Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bScaleVelocityByParamValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bScaleVelocityByParamValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bScaleVelocityByParamValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ValueMethod_MetaData[] = {
		{ "Category", "EmitterDynamicParameter" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "Where to get the parameter value from." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ValueMethod = { "ValueMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmitterDynamicParameter, ValueMethod), Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ValueMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ValueMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bSpawnTimeOnly_MetaData[] = {
		{ "Category", "EmitterDynamicParameter" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "If true, only set the value at spawn time of the particle, otherwise update each frame." },
	};
#endif
	void Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bSpawnTimeOnly_SetBit(void* Obj)
	{
		((FEmitterDynamicParameter*)Obj)->bSpawnTimeOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bSpawnTimeOnly = { "bSpawnTimeOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FEmitterDynamicParameter), &Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bSpawnTimeOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bSpawnTimeOnly_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bSpawnTimeOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bUseEmitterTime_MetaData[] = {
		{ "Category", "EmitterDynamicParameter" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "If true, use the EmitterTime to retrieve the value, otherwise use Particle RelativeTime." },
	};
#endif
	void Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bUseEmitterTime_SetBit(void* Obj)
	{
		((FEmitterDynamicParameter*)Obj)->bUseEmitterTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bUseEmitterTime = { "bUseEmitterTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FEmitterDynamicParameter), &Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bUseEmitterTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bUseEmitterTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bUseEmitterTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamName_MetaData[] = {
		{ "Category", "EmitterDynamicParameter" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "The parameter name - from the material DynamicParameter expression. READ-ONLY" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmitterDynamicParameter, ParamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bScaleVelocityByParamValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ValueMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bSpawnTimeOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bUseEmitterTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EmitterDynamicParameter",
		sizeof(FEmitterDynamicParameter),
		alignof(FEmitterDynamicParameter),
		Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEmitterDynamicParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEmitterDynamicParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EmitterDynamicParameter"), sizeof(FEmitterDynamicParameter), Get_Z_Construct_UScriptStruct_FEmitterDynamicParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEmitterDynamicParameter_Hash() { return 326330077U; }
	void UParticleModuleParameterDynamic::StaticRegisterNativesUParticleModuleParameterDynamic()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleParameterDynamic_NoRegister()
	{
		return UParticleModuleParameterDynamic::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleParameterDynamic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsesVelocity_MetaData[];
#endif
		static void NewProp_bUsesVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UpdateFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DynamicParams;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicParams_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleParameterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Dynamic" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_bUsesVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_bUsesVelocity_SetBit(void* Obj)
	{
		((UParticleModuleParameterDynamic*)Obj)->bUsesVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_bUsesVelocity = { "bUsesVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleParameterDynamic), &Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_bUsesVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_bUsesVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_bUsesVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_UpdateFlags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "Flags for optimizing update" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_UpdateFlags = { "UpdateFlags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleParameterDynamic, UpdateFlags), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_UpdateFlags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_UpdateFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_DynamicParams_MetaData[] = {
		{ "Category", "ParticleModuleParameterDynamic" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "The dynamic parameters this module uses." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_DynamicParams = { "DynamicParams", nullptr, (EPropertyFlags)0x0010008000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleParameterDynamic, DynamicParams), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_DynamicParams_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_DynamicParams_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_DynamicParams_Inner = { "DynamicParams", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEmitterDynamicParameter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_bUsesVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_UpdateFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_DynamicParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_DynamicParams_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleParameterDynamic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::ClassParams = {
		&UParticleModuleParameterDynamic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleParameterDynamic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleParameterDynamic, 1989998973);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleParameterDynamic>()
	{
		return UParticleModuleParameterDynamic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleParameterDynamic(Z_Construct_UClass_UParticleModuleParameterDynamic, &UParticleModuleParameterDynamic::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleParameterDynamic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleParameterDynamic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
