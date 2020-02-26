// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LODActor_generated_h
#error "LODActor.generated.h already included, missing '#pragma once' in LODActor.h"
#endif
#define ENGINE_LODActor_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_29_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_29_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ALODActor, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALODActor(); \
	friend struct Z_Construct_UClass_ALODActor_Statics; \
public: \
	DECLARE_CLASS(ALODActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ALODActor) \
	Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_29_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_29_INCLASS \
private: \
	static void StaticRegisterNativesALODActor(); \
	friend struct Z_Construct_UClass_ALODActor_Statics; \
public: \
	DECLARE_CLASS(ALODActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ALODActor) \
	Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_29_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALODActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALODActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALODActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALODActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALODActor(ALODActor&&); \
	NO_API ALODActor(const ALODActor&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALODActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALODActor(ALODActor&&); \
	NO_API ALODActor(const ALODActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALODActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALODActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALODActor)


#define Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMeshComponent() { return STRUCT_OFFSET(ALODActor, StaticMeshComponent); } \
	FORCEINLINE static uint32 __PPO__Proxy() { return STRUCT_OFFSET(ALODActor, Proxy); } \
	FORCEINLINE static uint32 __PPO__Key() { return STRUCT_OFFSET(ALODActor, Key); } \
	FORCEINLINE static uint32 __PPO__LODDrawDistance() { return STRUCT_OFFSET(ALODActor, LODDrawDistance); }


#define Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_26_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_29_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_29_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LODActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ALODActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
