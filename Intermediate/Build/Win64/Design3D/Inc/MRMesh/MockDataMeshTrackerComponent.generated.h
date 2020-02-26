// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UMRMeshComponent;
#ifdef MRMESH_MockDataMeshTrackerComponent_generated_h
#error "MockDataMeshTrackerComponent.generated.h already included, missing '#pragma once' in MockDataMeshTrackerComponent.h"
#endif
#define MRMESH_MockDataMeshTrackerComponent_generated_h

#define Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_63_DELEGATE \
struct MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms \
{ \
	int32 Index; \
	TArray<FVector> Vertices; \
	TArray<int32> Triangles; \
	TArray<FVector> Normals; \
	TArray<float> Confidence; \
}; \
static inline void FOnMockDataMeshTrackerUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnMockDataMeshTrackerUpdated, int32 Index, TArray<FVector> const& Vertices, TArray<int32> const& Triangles, TArray<FVector> const& Normals, TArray<float> const& Confidence) \
{ \
	MockDataMeshTrackerComponent_eventOnMockDataMeshTrackerUpdated_Parms Parms; \
	Parms.Index=Index; \
	Parms.Vertices=Vertices; \
	Parms.Triangles=Triangles; \
	Parms.Normals=Normals; \
	Parms.Confidence=Confidence; \
	OnMockDataMeshTrackerUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisconnectMRMesh) \
	{ \
		P_GET_OBJECT(UMRMeshComponent,Z_Param_InMRMeshPtr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisconnectMRMesh(Z_Param_InMRMeshPtr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectMRMesh) \
	{ \
		P_GET_OBJECT(UMRMeshComponent,Z_Param_InMRMeshPtr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConnectMRMesh(Z_Param_InMRMeshPtr); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisconnectMRMesh) \
	{ \
		P_GET_OBJECT(UMRMeshComponent,Z_Param_InMRMeshPtr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisconnectMRMesh(Z_Param_InMRMeshPtr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectMRMesh) \
	{ \
		P_GET_OBJECT(UMRMeshComponent,Z_Param_InMRMeshPtr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConnectMRMesh(Z_Param_InMRMeshPtr); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMockDataMeshTrackerComponent(); \
	friend struct Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics; \
public: \
	DECLARE_CLASS(UMockDataMeshTrackerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRMesh"), NO_API) \
	DECLARE_SERIALIZER(UMockDataMeshTrackerComponent)


#define Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUMockDataMeshTrackerComponent(); \
	friend struct Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics; \
public: \
	DECLARE_CLASS(UMockDataMeshTrackerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRMesh"), NO_API) \
	DECLARE_SERIALIZER(UMockDataMeshTrackerComponent)


#define Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMockDataMeshTrackerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMockDataMeshTrackerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMockDataMeshTrackerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockDataMeshTrackerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMockDataMeshTrackerComponent(UMockDataMeshTrackerComponent&&); \
	NO_API UMockDataMeshTrackerComponent(const UMockDataMeshTrackerComponent&); \
public:


#define Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMockDataMeshTrackerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMockDataMeshTrackerComponent(UMockDataMeshTrackerComponent&&); \
	NO_API UMockDataMeshTrackerComponent(const UMockDataMeshTrackerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMockDataMeshTrackerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockDataMeshTrackerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMockDataMeshTrackerComponent)


#define Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_31_PROLOG
#define Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_RPC_WRAPPERS \
	Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_INCLASS \
	Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h_35_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MockDataMeshTrackerComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MRMESH_API UClass* StaticClass<class UMockDataMeshTrackerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MRMesh_Public_MockDataMeshTrackerComponent_h


#define FOREACH_ENUM_EMESHTRACKERVERTEXCOLORMODE(op) \
	op(EMeshTrackerVertexColorMode::None) \
	op(EMeshTrackerVertexColorMode::Confidence) \
	op(EMeshTrackerVertexColorMode::Block) 

enum class EMeshTrackerVertexColorMode : uint8;
template<> MRMESH_API UEnum* StaticEnum<EMeshTrackerVertexColorMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
