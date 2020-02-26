// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_HLODProxy_generated_h
#error "HLODProxy.generated.h already included, missing '#pragma once' in HLODProxy.h"
#endif
#define ENGINE_HLODProxy_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHLODProxyMesh_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__LODActor() { return STRUCT_OFFSET(FHLODProxyMesh, LODActor); } \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(FHLODProxyMesh, StaticMesh); } \
	FORCEINLINE static uint32 __PPO__Key() { return STRUCT_OFFSET(FHLODProxyMesh, Key); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FHLODProxyMesh>();

#define Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_66_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_66_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHLODProxy(); \
	friend struct Z_Construct_UClass_UHLODProxy_Statics; \
public: \
	DECLARE_CLASS(UHLODProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UHLODProxy)


#define Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUHLODProxy(); \
	friend struct Z_Construct_UClass_UHLODProxy_Statics; \
public: \
	DECLARE_CLASS(UHLODProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UHLODProxy)


#define Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHLODProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHLODProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHLODProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHLODProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHLODProxy(UHLODProxy&&); \
	NO_API UHLODProxy(const UHLODProxy&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHLODProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHLODProxy(UHLODProxy&&); \
	NO_API UHLODProxy(const UHLODProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHLODProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHLODProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHLODProxy)


#define Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_66_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProxyMeshes() { return STRUCT_OFFSET(UHLODProxy, ProxyMeshes); }


#define Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_63_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_66_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_66_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_66_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_66_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_66_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UHLODProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_HLODProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
