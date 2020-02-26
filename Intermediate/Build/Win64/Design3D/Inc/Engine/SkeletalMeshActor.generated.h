// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SkeletalMeshActor_generated_h
#error "SkeletalMeshActor.generated.h already included, missing '#pragma once' in SkeletalMeshActor.h"
#endif
#define ENGINE_SkeletalMeshActor_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedMaterial1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedMaterial1(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedMaterial0) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedMaterial0(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedPhysAsset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedPhysAsset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedMesh(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedMaterial1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedMaterial1(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedMaterial0) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedMaterial0(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedPhysAsset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedPhysAsset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedMesh(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASkeletalMeshActor(); \
	friend struct Z_Construct_UClass_ASkeletalMeshActor_Statics; \
public: \
	DECLARE_CLASS(ASkeletalMeshActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ASkeletalMeshActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASkeletalMeshActor*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_25_INCLASS \
private: \
	static void StaticRegisterNativesASkeletalMeshActor(); \
	friend struct Z_Construct_UClass_ASkeletalMeshActor_Statics; \
public: \
	DECLARE_CLASS(ASkeletalMeshActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ASkeletalMeshActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASkeletalMeshActor*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASkeletalMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASkeletalMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASkeletalMeshActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkeletalMeshActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASkeletalMeshActor(ASkeletalMeshActor&&); \
	NO_API ASkeletalMeshActor(const ASkeletalMeshActor&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASkeletalMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASkeletalMeshActor(ASkeletalMeshActor&&); \
	NO_API ASkeletalMeshActor(const ASkeletalMeshActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASkeletalMeshActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkeletalMeshActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASkeletalMeshActor)


#define Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SkeletalMeshComponent() { return STRUCT_OFFSET(ASkeletalMeshActor, SkeletalMeshComponent); }


#define Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_22_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_25_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_25_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkeletalMeshActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ASkeletalMeshActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
