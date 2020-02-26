// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FRotator;
struct FVector;
class UWorld;
#ifdef UMG_Viewport_generated_h
#error "Viewport.generated.h already included, missing '#pragma once' in Viewport.h"
#endif
#define UMG_Viewport_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_Viewport_h_230_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawn) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->Spawn(Z_Param_ActorClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetViewRotation(Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetViewRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetViewLocation(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetViewLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewportWorld) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWorld**)Z_Param__Result=P_THIS->GetViewportWorld(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_Viewport_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawn) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ActorClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->Spawn(Z_Param_ActorClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewRotation) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetViewRotation(Z_Param_Rotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetViewRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetViewLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetViewLocation(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetViewLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewportWorld) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWorld**)Z_Param__Result=P_THIS->GetViewportWorld(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_Viewport_h_230_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewport(); \
	friend struct Z_Construct_UClass_UViewport_Statics; \
public: \
	DECLARE_CLASS(UViewport, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UViewport)


#define Engine_Source_Runtime_UMG_Public_Components_Viewport_h_230_INCLASS \
private: \
	static void StaticRegisterNativesUViewport(); \
	friend struct Z_Construct_UClass_UViewport_Statics; \
public: \
	DECLARE_CLASS(UViewport, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UViewport)


#define Engine_Source_Runtime_UMG_Public_Components_Viewport_h_230_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewport(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewport) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewport); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewport); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UViewport(UViewport&&); \
	NO_API UViewport(const UViewport&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_Viewport_h_230_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewport(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UViewport(UViewport&&); \
	NO_API UViewport(const UViewport&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewport); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewport); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewport)


#define Engine_Source_Runtime_UMG_Public_Components_Viewport_h_230_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_Viewport_h_227_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_Viewport_h_230_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Viewport_h_230_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Viewport_h_230_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_Viewport_h_230_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_Viewport_h_230_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_Viewport_h_230_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_Viewport_h_230_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_Viewport_h_230_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Viewport_h_230_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_Viewport_h_230_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Viewport."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UViewport>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_Viewport_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
