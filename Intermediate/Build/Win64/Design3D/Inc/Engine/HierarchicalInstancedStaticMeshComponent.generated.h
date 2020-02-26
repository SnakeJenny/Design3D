// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_HierarchicalInstancedStaticMeshComponent_generated_h
#error "HierarchicalInstancedStaticMeshComponent.generated.h already included, missing '#pragma once' in HierarchicalInstancedStaticMeshComponent.h"
#endif
#define ENGINE_HierarchicalInstancedStaticMeshComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClusterNode_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FClusterNode>();

#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FClusterNode_DEPRECATED>();

#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_129_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveInstances) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_InstancesToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveInstances(Z_Param_Out_InstancesToRemove); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveInstances) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_InstancesToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveInstances(Z_Param_Out_InstancesToRemove); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_129_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UHierarchicalInstancedStaticMeshComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHierarchicalInstancedStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UHierarchicalInstancedStaticMeshComponent, UInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UHierarchicalInstancedStaticMeshComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_129_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_129_INCLASS \
private: \
	static void StaticRegisterNativesUHierarchicalInstancedStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UHierarchicalInstancedStaticMeshComponent, UInstancedStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UHierarchicalInstancedStaticMeshComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_129_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_129_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHierarchicalInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHierarchicalInstancedStaticMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHierarchicalInstancedStaticMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHierarchicalInstancedStaticMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHierarchicalInstancedStaticMeshComponent(UHierarchicalInstancedStaticMeshComponent&&); \
	NO_API UHierarchicalInstancedStaticMeshComponent(const UHierarchicalInstancedStaticMeshComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_129_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHierarchicalInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHierarchicalInstancedStaticMeshComponent(UHierarchicalInstancedStaticMeshComponent&&); \
	NO_API UHierarchicalInstancedStaticMeshComponent(const UHierarchicalInstancedStaticMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHierarchicalInstancedStaticMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHierarchicalInstancedStaticMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHierarchicalInstancedStaticMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_129_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_126_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_129_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_129_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_129_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_129_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_129_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_129_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_129_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h_129_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HierarchicalInstancedStaticMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UHierarchicalInstancedStaticMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_HierarchicalInstancedStaticMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
