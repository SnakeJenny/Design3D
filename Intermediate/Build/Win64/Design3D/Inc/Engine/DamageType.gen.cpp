// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/DamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageType() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDamageType::StaticRegisterNativesUDamageType()
	{
	}
	UClass* Z_Construct_UClass_UDamageType_NoRegister()
	{
		return UDamageType::StaticClass();
	}
	struct Z_Construct_UClass_UDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageFalloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestructibleDamageSpreadScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DestructibleDamageSpreadScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestructibleImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DestructibleImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRadialDamageVelChange_MetaData[];
#endif
		static void NewProp_bRadialDamageVelChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRadialDamageVelChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleMomentumByMass_MetaData[];
#endif
		static void NewProp_bScaleMomentumByMass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleMomentumByMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCausedByWorld_MetaData[];
#endif
		static void NewProp_bCausedByWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCausedByWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameFramework/DamageType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
		{ "ToolTip", "A DamageType is intended to define and describe a particular form of damage and to provide an avenue\nfor customizing responses to damage from various sources.\n\nFor example, a game could make a DamageType_Fire set it up to ignite the damaged actor.\n\nDamageTypes are never instanced and should be treated as immutable data holders with static code\nfunctionality.  They should never be stateful." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageType_Statics::NewProp_DamageFalloff_MetaData[] = {
		{ "Category", "DamageType" },
		{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
		{ "ToolTip", "Damage fall-off for radius damage (exponent).  Default 1.0=linear, 2.0=square of distance, etc." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageType_Statics::NewProp_DamageFalloff = { "DamageFalloff", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageType, DamageFalloff), METADATA_PARAMS(Z_Construct_UClass_UDamageType_Statics::NewProp_DamageFalloff_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDamageType_Statics::NewProp_DamageFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageType_Statics::NewProp_DestructibleDamageSpreadScale_MetaData[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
		{ "ToolTip", "How much the damage spreads on a destructible mesh" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageType_Statics::NewProp_DestructibleDamageSpreadScale = { "DestructibleDamageSpreadScale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageType, DestructibleDamageSpreadScale), METADATA_PARAMS(Z_Construct_UClass_UDamageType_Statics::NewProp_DestructibleDamageSpreadScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDamageType_Statics::NewProp_DestructibleDamageSpreadScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageType_Statics::NewProp_DestructibleImpulse_MetaData[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
		{ "ToolTip", "How large the impulse should be applied to destructible meshes" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageType_Statics::NewProp_DestructibleImpulse = { "DestructibleImpulse", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageType, DestructibleImpulse), METADATA_PARAMS(Z_Construct_UClass_UDamageType_Statics::NewProp_DestructibleImpulse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDamageType_Statics::NewProp_DestructibleImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageType_Statics::NewProp_DamageImpulse_MetaData[] = {
		{ "Category", "RigidBody" },
		{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
		{ "ToolTip", "The magnitude of impulse to apply to the Actors damaged by this type." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageType_Statics::NewProp_DamageImpulse = { "DamageImpulse", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDamageType, DamageImpulse), METADATA_PARAMS(Z_Construct_UClass_UDamageType_Statics::NewProp_DamageImpulse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDamageType_Statics::NewProp_DamageImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageType_Statics::NewProp_bRadialDamageVelChange_MetaData[] = {
		{ "Category", "RigidBody" },
		{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
		{ "ToolTip", "When applying radial impulses, whether to treat as impulse or velocity change." },
	};
#endif
	void Z_Construct_UClass_UDamageType_Statics::NewProp_bRadialDamageVelChange_SetBit(void* Obj)
	{
		((UDamageType*)Obj)->bRadialDamageVelChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDamageType_Statics::NewProp_bRadialDamageVelChange = { "bRadialDamageVelChange", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDamageType), &Z_Construct_UClass_UDamageType_Statics::NewProp_bRadialDamageVelChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDamageType_Statics::NewProp_bRadialDamageVelChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDamageType_Statics::NewProp_bRadialDamageVelChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageType_Statics::NewProp_bScaleMomentumByMass_MetaData[] = {
		{ "Category", "DamageType" },
		{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
		{ "ToolTip", "True to scale imparted momentum by the receiving pawn's mass for pawns using character movement" },
	};
#endif
	void Z_Construct_UClass_UDamageType_Statics::NewProp_bScaleMomentumByMass_SetBit(void* Obj)
	{
		((UDamageType*)Obj)->bScaleMomentumByMass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDamageType_Statics::NewProp_bScaleMomentumByMass = { "bScaleMomentumByMass", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDamageType), &Z_Construct_UClass_UDamageType_Statics::NewProp_bScaleMomentumByMass_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDamageType_Statics::NewProp_bScaleMomentumByMass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDamageType_Statics::NewProp_bScaleMomentumByMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageType_Statics::NewProp_bCausedByWorld_MetaData[] = {
		{ "Category", "DamageType" },
		{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
		{ "ToolTip", "True if this damagetype is caused by the world (falling off level, into lava, etc)." },
	};
#endif
	void Z_Construct_UClass_UDamageType_Statics::NewProp_bCausedByWorld_SetBit(void* Obj)
	{
		((UDamageType*)Obj)->bCausedByWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDamageType_Statics::NewProp_bCausedByWorld = { "bCausedByWorld", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDamageType), &Z_Construct_UClass_UDamageType_Statics::NewProp_bCausedByWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDamageType_Statics::NewProp_bCausedByWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDamageType_Statics::NewProp_bCausedByWorld_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDamageType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageType_Statics::NewProp_DamageFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageType_Statics::NewProp_DestructibleDamageSpreadScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageType_Statics::NewProp_DestructibleImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageType_Statics::NewProp_DamageImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageType_Statics::NewProp_bRadialDamageVelChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageType_Statics::NewProp_bScaleMomentumByMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageType_Statics::NewProp_bCausedByWorld,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDamageType_Statics::ClassParams = {
		&UDamageType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDamageType_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDamageType_Statics::PropPointers),
		0,
		0x000900A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDamageType_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDamageType, 1256177819);
	template<> ENGINE_API UClass* StaticClass<UDamageType>()
	{
		return UDamageType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDamageType(Z_Construct_UClass_UDamageType, &UDamageType::StaticClass, TEXT("/Script/Engine"), TEXT("UDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
