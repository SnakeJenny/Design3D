// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MeshMergeCullingVolume_generated_h
#error "MeshMergeCullingVolume.generated.h already included, missing '#pragma once' in MeshMergeCullingVolume.h"
#endif
#define ENGINE_MeshMergeCullingVolume_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMeshMergeCullingVolume(); \
	friend struct Z_Construct_UClass_AMeshMergeCullingVolume_Statics; \
public: \
	DECLARE_CLASS(AMeshMergeCullingVolume, AVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AMeshMergeCullingVolume)


#define Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMeshMergeCullingVolume(); \
	friend struct Z_Construct_UClass_AMeshMergeCullingVolume_Statics; \
public: \
	DECLARE_CLASS(AMeshMergeCullingVolume, AVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AMeshMergeCullingVolume)


#define Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AMeshMergeCullingVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMeshMergeCullingVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AMeshMergeCullingVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeshMergeCullingVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API AMeshMergeCullingVolume(AMeshMergeCullingVolume&&); \
	ENGINE_API AMeshMergeCullingVolume(const AMeshMergeCullingVolume&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AMeshMergeCullingVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API AMeshMergeCullingVolume(AMeshMergeCullingVolume&&); \
	ENGINE_API AMeshMergeCullingVolume(const AMeshMergeCullingVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AMeshMergeCullingVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeshMergeCullingVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMeshMergeCullingVolume)


#define Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MeshMergeCullingVolume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AMeshMergeCullingVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_MeshMergeCullingVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
