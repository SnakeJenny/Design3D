// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
struct FVector;
#ifdef ENGINE_SkeletalMeshSocket_generated_h
#error "SkeletalMeshSocket.generated.h already included, missing '#pragma once' in SkeletalMeshSocket.h"
#endif
#define ENGINE_SkeletalMeshSocket_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitializeSocketFromLocation) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkelComp); \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_STRUCT(FVector,Z_Param_WorldNormal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeSocketFromLocation(Z_Param_SkelComp,Z_Param_WorldLocation,Z_Param_WorldNormal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSocketLocation) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkelComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetSocketLocation(Z_Param_SkelComp); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializeSocketFromLocation) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkelComp); \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_STRUCT(FVector,Z_Param_WorldNormal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeSocketFromLocation(Z_Param_SkelComp,Z_Param_WorldLocation,Z_Param_WorldNormal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSocketLocation) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkelComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetSocketLocation(Z_Param_SkelComp); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshSocket, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshSocket(); \
	friend struct Z_Construct_UClass_USkeletalMeshSocket_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshSocket, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeletalMeshSocket) \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalMeshSocket(); \
	friend struct Z_Construct_UClass_USkeletalMeshSocket_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshSocket, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeletalMeshSocket) \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalMeshSocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshSocket) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalMeshSocket); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshSocket); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkeletalMeshSocket(USkeletalMeshSocket&&); \
	ENGINE_API USkeletalMeshSocket(const USkeletalMeshSocket&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalMeshSocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkeletalMeshSocket(USkeletalMeshSocket&&); \
	ENGINE_API USkeletalMeshSocket(const USkeletalMeshSocket&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalMeshSocket); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshSocket); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalMeshSocket)


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkeletalMeshSocket."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkeletalMeshSocket>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
