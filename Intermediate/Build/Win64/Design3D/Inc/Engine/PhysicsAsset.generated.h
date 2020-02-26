// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PhysicsAsset_generated_h
#error "PhysicsAsset.generated.h already included, missing '#pragma once' in PhysicsAsset.h"
#endif
#define ENGINE_PhysicsAsset_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_211_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPhysicalAnimationProfile>();

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPhysicsAsset, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsAsset(); \
	friend struct Z_Construct_UClass_UPhysicsAsset_Statics; \
public: \
	DECLARE_CLASS(UPhysicsAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPhysicsAsset) \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UPhysicsAsset*>(this); }


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsAsset(); \
	friend struct Z_Construct_UClass_UPhysicsAsset_Statics; \
public: \
	DECLARE_CLASS(UPhysicsAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPhysicsAsset) \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UPhysicsAsset*>(this); }


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPhysicsAsset(UPhysicsAsset&&); \
	ENGINE_API UPhysicsAsset(const UPhysicsAsset&); \
public:


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPhysicsAsset(UPhysicsAsset&&); \
	ENGINE_API UPhysicsAsset(const UPhysicsAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAsset)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BodySetup_DEPRECATED() { return STRUCT_OFFSET(UPhysicsAsset, BodySetup_DEPRECATED); }


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_28_PROLOG
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_INCLASS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsAsset."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicsAsset>();

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_225_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_225_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_225_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalBodySetup(); \
	friend struct Z_Construct_UClass_USkeletalBodySetup_Statics; \
public: \
	DECLARE_CLASS(USkeletalBodySetup, UBodySetup, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeletalBodySetup)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_225_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalBodySetup(); \
	friend struct Z_Construct_UClass_USkeletalBodySetup_Statics; \
public: \
	DECLARE_CLASS(USkeletalBodySetup, UBodySetup, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeletalBodySetup)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_225_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalBodySetup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalBodySetup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalBodySetup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalBodySetup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkeletalBodySetup(USkeletalBodySetup&&); \
	ENGINE_API USkeletalBodySetup(const USkeletalBodySetup&); \
public:


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_225_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalBodySetup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkeletalBodySetup(USkeletalBodySetup&&); \
	ENGINE_API USkeletalBodySetup(const USkeletalBodySetup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalBodySetup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalBodySetup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalBodySetup)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_225_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PhysicalAnimationData() { return STRUCT_OFFSET(USkeletalBodySetup, PhysicalAnimationData); }


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_222_PROLOG
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_225_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_225_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_225_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_225_INCLASS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_225_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_225_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_225_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_225_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_225_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_225_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkeletalBodySetup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
