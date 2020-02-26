// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMRMeshComponent;
#ifdef MRMESH_MeshReconstructorBase_generated_h
#error "MeshReconstructorBase.generated.h already included, missing '#pragma once' in MeshReconstructorBase.h"
#endif
#define MRMESH_MeshReconstructorBase_generated_h

#define Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics; \
	MRMESH_API static class UScriptStruct* StaticStruct();


template<> MRMESH_API UScriptStruct* StaticStruct<struct FMRMeshConfiguration>();

#define Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisconnectMRMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisconnectMRMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectMRMesh) \
	{ \
		P_GET_OBJECT(UMRMeshComponent,Z_Param_Mesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConnectMRMesh(Z_Param_Mesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReconstructionPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsReconstructionPaused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReconstructionStarted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsReconstructionStarted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseReconstruction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PauseReconstruction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopReconstruction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopReconstruction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartReconstruction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartReconstruction(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisconnectMRMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisconnectMRMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectMRMesh) \
	{ \
		P_GET_OBJECT(UMRMeshComponent,Z_Param_Mesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConnectMRMesh(Z_Param_Mesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReconstructionPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsReconstructionPaused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReconstructionStarted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsReconstructionStarted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseReconstruction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PauseReconstruction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopReconstruction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopReconstruction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartReconstruction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartReconstruction(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshReconstructorBase(); \
	friend struct Z_Construct_UClass_UMeshReconstructorBase_Statics; \
public: \
	DECLARE_CLASS(UMeshReconstructorBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MRMesh"), NO_API) \
	DECLARE_SERIALIZER(UMeshReconstructorBase)


#define Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUMeshReconstructorBase(); \
	friend struct Z_Construct_UClass_UMeshReconstructorBase_Statics; \
public: \
	DECLARE_CLASS(UMeshReconstructorBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MRMesh"), NO_API) \
	DECLARE_SERIALIZER(UMeshReconstructorBase)


#define Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshReconstructorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshReconstructorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshReconstructorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshReconstructorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshReconstructorBase(UMeshReconstructorBase&&); \
	NO_API UMeshReconstructorBase(const UMeshReconstructorBase&); \
public:


#define Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshReconstructorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshReconstructorBase(UMeshReconstructorBase&&); \
	NO_API UMeshReconstructorBase(const UMeshReconstructorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshReconstructorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshReconstructorBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshReconstructorBase)


#define Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_24_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_21_PROLOG
#define Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_24_RPC_WRAPPERS \
	Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_24_INCLASS \
	Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MRMESH_API UClass* StaticClass<class UMeshReconstructorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MRMesh_Public_MeshReconstructorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
