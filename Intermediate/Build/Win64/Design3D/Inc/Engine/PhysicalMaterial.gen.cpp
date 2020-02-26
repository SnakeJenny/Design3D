// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMaterial() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTireFrictionScalePair();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UTireType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	ENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFrictionCombineMode();
// End Cross Module References
class UScriptStruct* FTireFrictionScalePair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTireFrictionScalePair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTireFrictionScalePair, Z_Construct_UPackage__Script_Engine(), TEXT("TireFrictionScalePair"), sizeof(FTireFrictionScalePair), Get_Z_Construct_UScriptStruct_FTireFrictionScalePair_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTireFrictionScalePair>()
{
	return FTireFrictionScalePair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTireFrictionScalePair(FTireFrictionScalePair::StaticStruct, TEXT("/Script/Engine"), TEXT("TireFrictionScalePair"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTireFrictionScalePair
{
	FScriptStruct_Engine_StaticRegisterNativesFTireFrictionScalePair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TireFrictionScalePair")),new UScriptStruct::TCppStructOps<FTireFrictionScalePair>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTireFrictionScalePair;
	struct Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrictionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TireType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TireType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "DEPRECATED Pairs desired tire friction scale with tire type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTireFrictionScalePair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics::NewProp_FrictionScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Friction scale for this type of tire" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics::NewProp_FrictionScale = { "FrictionScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTireFrictionScalePair, FrictionScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics::NewProp_FrictionScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics::NewProp_FrictionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics::NewProp_TireType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Tire type" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics::NewProp_TireType = { "TireType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTireFrictionScalePair, TireType), Z_Construct_UClass_UTireType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics::NewProp_TireType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics::NewProp_TireType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics::NewProp_FrictionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics::NewProp_TireType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TireFrictionScalePair",
		sizeof(FTireFrictionScalePair),
		alignof(FTireFrictionScalePair),
		Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTireFrictionScalePair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTireFrictionScalePair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TireFrictionScalePair"), sizeof(FTireFrictionScalePair), Get_Z_Construct_UScriptStruct_FTireFrictionScalePair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTireFrictionScalePair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTireFrictionScalePair_Hash() { return 620583990U; }
	void UPhysicalMaterial::StaticRegisterNativesUPhysicalMaterial()
	{
	}
	UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister()
	{
		return UPhysicalMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicalMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TireFrictionScales_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TireFrictionScales;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TireFrictionScales_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TireFrictionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TireFrictionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterialProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestructibleDamageThresholdScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DestructibleDamageThresholdScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RaiseMassToPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RaiseMassToPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Density;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideRestitutionCombineMode_MetaData[];
#endif
		static void NewProp_bOverrideRestitutionCombineMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideRestitutionCombineMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestitutionCombineMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RestitutionCombineMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Restitution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Restitution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideFrictionCombineMode_MetaData[];
#endif
		static void NewProp_bOverrideFrictionCombineMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideFrictionCombineMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionCombineMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrictionCombineMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Friction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicalMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicalMaterials/PhysicalMaterial.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Physical materials are used to define the response of a physical object when interacting dynamically with the world." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_TireFrictionScales_MetaData[] = {
		{ "Category", "Deprecated" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "DEPRECATED - Tire friction scales for specific types of tires. These values are multiplied against our parents' values." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_TireFrictionScales = { "TireFrictionScales", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalMaterial, TireFrictionScales), METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_TireFrictionScales_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_TireFrictionScales_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_TireFrictionScales_Inner = { "TireFrictionScales", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTireFrictionScalePair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_TireFrictionScale_MetaData[] = {
		{ "Category", "Deprecated" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "DEPRECATED - Overall tire friction scalar for every type of tire. This value is multiplied against our parents' values." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_TireFrictionScale = { "TireFrictionScale", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalMaterial, TireFrictionScale), METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_TireFrictionScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_TireFrictionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SurfaceType_MetaData[] = {
		{ "Category", "PhysicalProperties" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "To edit surface type for your project, use ProjectSettings/Physics/PhysicalSurface section" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalMaterial, SurfaceType), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SurfaceType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SurfaceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_PhysicalMaterialProperty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "deprecated" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_PhysicalMaterialProperty = { "PhysicalMaterialProperty", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalMaterial, PhysicalMaterialProperty), Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_PhysicalMaterialProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_PhysicalMaterialProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_DestructibleDamageThresholdScale_MetaData[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "How much to scale the damage threshold by on any destructible we are applied to" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_DestructibleDamageThresholdScale = { "DestructibleDamageThresholdScale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalMaterial, DestructibleDamageThresholdScale), METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_DestructibleDamageThresholdScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_DestructibleDamageThresholdScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RaiseMassToPower_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Used to adjust the way that mass increases as objects get larger. This is applied to the mass as calculated based on a 'solid' object.\nIn actuality, larger objects do not tend to be solid, and become more like 'shells' (e.g. a car is not a solid piece of metal).\nValues are clamped to 1 or less." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RaiseMassToPower = { "RaiseMassToPower", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalMaterial, RaiseMassToPower), METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RaiseMassToPower_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RaiseMassToPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Density_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Used with the shape of the object to calculate its mass properties. The higher the number, the heavier the object. g per cubic cm." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalMaterial, Density), METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Density_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Density_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideRestitutionCombineMode_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "If set we will use the RestitutionCombineMode of this material, instead of the RestitutionCombineMode found in the project settings." },
	};
#endif
	void Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideRestitutionCombineMode_SetBit(void* Obj)
	{
		((UPhysicalMaterial*)Obj)->bOverrideRestitutionCombineMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideRestitutionCombineMode = { "bOverrideRestitutionCombineMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicalMaterial), &Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideRestitutionCombineMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideRestitutionCombineMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideRestitutionCombineMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RestitutionCombineMode_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "editcondition", "bOverrideRestitutionCombineMode" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Restitution combine mode, controls how restitution is computed for multiple materials." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RestitutionCombineMode = { "RestitutionCombineMode", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalMaterial, RestitutionCombineMode), Z_Construct_UEnum_Engine_EFrictionCombineMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RestitutionCombineMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RestitutionCombineMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Restitution_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Restitution or 'bounciness' of this surface, between 0 (no bounce) and 1 (outgoing velocity is same as incoming)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Restitution = { "Restitution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalMaterial, Restitution), METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Restitution_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Restitution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideFrictionCombineMode_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "If set we will use the FrictionCombineMode of this material, instead of the FrictionCombineMode found in the project settings." },
	};
#endif
	void Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideFrictionCombineMode_SetBit(void* Obj)
	{
		((UPhysicalMaterial*)Obj)->bOverrideFrictionCombineMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideFrictionCombineMode = { "bOverrideFrictionCombineMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicalMaterial), &Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideFrictionCombineMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideFrictionCombineMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideFrictionCombineMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_FrictionCombineMode_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "editcondition", "bOverrideFrictionCombineMode" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Friction combine mode, controls how friction is computed for multiple materials." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_FrictionCombineMode = { "FrictionCombineMode", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalMaterial, FrictionCombineMode), Z_Construct_UEnum_Engine_EFrictionCombineMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_FrictionCombineMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_FrictionCombineMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Friction_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Friction value of surface, controls how easily things can slide on this surface (0 is frictionless, higher values increase the amount of friction)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicalMaterial, Friction), METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Friction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Friction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicalMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_TireFrictionScales,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_TireFrictionScales_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_TireFrictionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SurfaceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_PhysicalMaterialProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_DestructibleDamageThresholdScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RaiseMassToPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Density,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideRestitutionCombineMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RestitutionCombineMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Restitution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideFrictionCombineMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_FrictionCombineMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Friction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicalMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicalMaterial>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicalMaterial_Statics::ClassParams = {
		&UPhysicalMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicalMaterial_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicalMaterial()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicalMaterial_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicalMaterial, 2315491842);
	template<> ENGINE_API UClass* StaticClass<UPhysicalMaterial>()
	{
		return UPhysicalMaterial::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicalMaterial(Z_Construct_UClass_UPhysicalMaterial, &UPhysicalMaterial::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicalMaterial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicalMaterial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
