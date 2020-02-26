// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionEngine/Public/GeometryCollection/StaticMeshSimulationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshSimulationComponent() {}
// Cross Module References
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UStaticMeshSimulationComponent_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UStaticMeshSimulationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_EInitialVelocityTypeEnum();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_ECollisionTypeEnum();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_EObjectTypeEnum();
// End Cross Module References
	void UStaticMeshSimulationComponent::StaticRegisterNativesUStaticMeshSimulationComponent()
	{
	}
	UClass* Z_Construct_UClass_UStaticMeshSimulationComponent_NoRegister()
	{
		return UStaticMeshSimulationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshSimulationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaosSolverActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChaosSolverActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bouncyness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bouncyness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Friction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialAngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialAngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialLinearVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialLinearVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialVelocityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InitialVelocityType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InitialVelocityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObjectType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Simulating_MetaData[];
#endif
		static void NewProp_Simulating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Simulating;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "UStaticMeshSimulationComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ChaosSolverActor_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "DisplayName", "Chaos Solver" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "Chaos RBD Solver" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ChaosSolverActor = { "ChaosSolverActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, ChaosSolverActor), Z_Construct_UClass_AChaosSolverActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ChaosSolverActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ChaosSolverActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Bouncyness_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "Coefficient of Restitution (aka Bouncyness)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Bouncyness = { "Bouncyness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, Bouncyness), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Bouncyness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Bouncyness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Friction_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "Uniform Friction" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, Friction), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Friction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Friction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_DamageThreshold_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "Damage threshold for clusters." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_DamageThreshold = { "DamageThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, DamageThreshold), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_DamageThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_DamageThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialAngularVelocity_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialAngularVelocity = { "InitialAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, InitialAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialAngularVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialLinearVelocity_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialLinearVelocity = { "InitialLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, InitialLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialLinearVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialLinearVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialVelocityType_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialVelocityType = { "InitialVelocityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, InitialVelocityType), Z_Construct_UEnum_GeometryCollectionSimulationCore_EInitialVelocityTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialVelocityType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialVelocityType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialVelocityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "CollisionType defines how to initialize the rigid collision structures." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, CollisionType), Z_Construct_UEnum_GeometryCollectionSimulationCore_ECollisionTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_CollisionType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_CollisionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "Damage threshold for clusters." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, Mass), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Mass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ObjectType_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "ObjectType defines how to initialize the rigid collision structures." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSimulationComponent, ObjectType), Z_Construct_UEnum_GeometryCollectionSimulationCore_EObjectTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ObjectType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ObjectType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ObjectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Simulating_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "ModuleRelativePath", "Public/GeometryCollection/StaticMeshSimulationComponent.h" },
		{ "ToolTip", "When Simulating is enabled the Component will initialize its rigid bodies within the solver." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Simulating_SetBit(void* Obj)
	{
		((UStaticMeshSimulationComponent*)Obj)->Simulating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Simulating = { "Simulating", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStaticMeshSimulationComponent), &Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Simulating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Simulating_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Simulating_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ChaosSolverActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Bouncyness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Friction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_DamageThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialLinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialVelocityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_InitialVelocityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_CollisionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_CollisionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ObjectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_ObjectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::NewProp_Simulating,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshSimulationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::ClassParams = {
		&UStaticMeshSimulationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshSimulationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStaticMeshSimulationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStaticMeshSimulationComponent, 2704077001);
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UStaticMeshSimulationComponent>()
	{
		return UStaticMeshSimulationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStaticMeshSimulationComponent(Z_Construct_UClass_UStaticMeshSimulationComponent, &UStaticMeshSimulationComponent::StaticClass, TEXT("/Script/GeometryCollectionEngine"), TEXT("UStaticMeshSimulationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshSimulationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
