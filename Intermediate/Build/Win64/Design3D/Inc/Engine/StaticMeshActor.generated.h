// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_StaticMeshActor_generated_h
#error "StaticMeshActor.generated.h already included, missing '#pragma once' in StaticMeshActor.h"
#endif
#define ENGINE_StaticMeshActor_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMobility) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InMobility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMobility(EComponentMobility::Type(Z_Param_InMobility)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMobility) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InMobility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMobility(EComponentMobility::Type(Z_Param_InMobility)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AStaticMeshActor, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStaticMeshActor(); \
	friend struct Z_Construct_UClass_AStaticMeshActor_Statics; \
public: \
	DECLARE_CLASS(AStaticMeshActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AStaticMeshActor) \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAStaticMeshActor(); \
	friend struct Z_Construct_UClass_AStaticMeshActor_Statics; \
public: \
	DECLARE_CLASS(AStaticMeshActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AStaticMeshActor) \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStaticMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStaticMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStaticMeshActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStaticMeshActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStaticMeshActor(AStaticMeshActor&&); \
	NO_API AStaticMeshActor(const AStaticMeshActor&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStaticMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStaticMeshActor(AStaticMeshActor&&); \
	NO_API AStaticMeshActor(const AStaticMeshActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStaticMeshActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStaticMeshActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStaticMeshActor)


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMeshComponent() { return STRUCT_OFFSET(AStaticMeshActor, StaticMeshComponent); }


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_19_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StaticMeshActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AStaticMeshActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
