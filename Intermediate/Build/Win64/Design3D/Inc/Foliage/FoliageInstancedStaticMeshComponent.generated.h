// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
struct FVector;
class UDamageType;
class AActor;
#ifdef FOLIAGE_FoliageInstancedStaticMeshComponent_generated_h
#error "FoliageInstancedStaticMeshComponent.generated.h already included, missing '#pragma once' in FoliageInstancedStaticMeshComponent.h"
#endif
#define FOLIAGE_FoliageInstancedStaticMeshComponent_generated_h

#define Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_16_DELEGATE \
struct _Script_Foliage_eventInstanceRadialDamageSignature_Parms \
{ \
	TArray<int32> Instances; \
	TArray<float> Damages; \
	AController* InstigatedBy; \
	FVector Origin; \
	float MaxRadius; \
	const UDamageType* DamageType; \
	AActor* DamageCauser; \
}; \
static inline void FInstanceRadialDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& InstanceRadialDamageSignature, TArray<int32> const& Instances, TArray<float> const& Damages, AController* InstigatedBy, FVector Origin, float MaxRadius, const UDamageType* DamageType, AActor* DamageCauser) \
{ \
	_Script_Foliage_eventInstanceRadialDamageSignature_Parms Parms; \
	Parms.Instances=Instances; \
	Parms.Damages=Damages; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.Origin=Origin; \
	Parms.MaxRadius=MaxRadius; \
	Parms.DamageType=DamageType; \
	Parms.DamageCauser=DamageCauser; \
	InstanceRadialDamageSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_15_DELEGATE \
struct _Script_Foliage_eventInstancePointDamageSignature_Parms \
{ \
	int32 InstanceIndex; \
	float Damage; \
	AController* InstigatedBy; \
	FVector HitLocation; \
	FVector ShotFromDirection; \
	const UDamageType* DamageType; \
	AActor* DamageCauser; \
}; \
static inline void FInstancePointDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& InstancePointDamageSignature, int32 InstanceIndex, float Damage, AController* InstigatedBy, FVector HitLocation, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) \
{ \
	_Script_Foliage_eventInstancePointDamageSignature_Parms Parms; \
	Parms.InstanceIndex=InstanceIndex; \
	Parms.Damage=Damage; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.HitLocation=HitLocation; \
	Parms.ShotFromDirection=ShotFromDirection; \
	Parms.DamageType=DamageType; \
	Parms.DamageCauser=DamageCauser; \
	InstancePointDamageSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFoliageInstancedStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UFoliageInstancedStaticMeshComponent, UHierarchicalInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foliage"), NO_API) \
	DECLARE_SERIALIZER(UFoliageInstancedStaticMeshComponent)


#define Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUFoliageInstancedStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UFoliageInstancedStaticMeshComponent, UHierarchicalInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Foliage"), NO_API) \
	DECLARE_SERIALIZER(UFoliageInstancedStaticMeshComponent)


#define Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFoliageInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoliageInstancedStaticMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFoliageInstancedStaticMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoliageInstancedStaticMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFoliageInstancedStaticMeshComponent(UFoliageInstancedStaticMeshComponent&&); \
	NO_API UFoliageInstancedStaticMeshComponent(const UFoliageInstancedStaticMeshComponent&); \
public:


#define Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFoliageInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFoliageInstancedStaticMeshComponent(UFoliageInstancedStaticMeshComponent&&); \
	NO_API UFoliageInstancedStaticMeshComponent(const UFoliageInstancedStaticMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFoliageInstancedStaticMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoliageInstancedStaticMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoliageInstancedStaticMeshComponent)


#define Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_18_PROLOG
#define Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_21_INCLASS \
	Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FoliageInstancedStaticMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGE_API UClass* StaticClass<class UFoliageInstancedStaticMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
