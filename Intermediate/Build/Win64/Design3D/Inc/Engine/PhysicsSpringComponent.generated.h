// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef ENGINE_PhysicsSpringComponent_generated_h
#error "PhysicsSpringComponent.generated.h already included, missing '#pragma once' in PhysicsSpringComponent.h"
#endif
#define ENGINE_PhysicsSpringComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSpringDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetSpringDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpringCurrentEndPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetSpringCurrentEndPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpringRestingPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetSpringRestingPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormalizedCompressionScalar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetNormalizedCompressionScalar(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSpringDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetSpringDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpringCurrentEndPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetSpringCurrentEndPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpringRestingPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetSpringRestingPoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormalizedCompressionScalar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetNormalizedCompressionScalar(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsSpringComponent(); \
	friend struct Z_Construct_UClass_UPhysicsSpringComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsSpringComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsSpringComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsSpringComponent(); \
	friend struct Z_Construct_UClass_UPhysicsSpringComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsSpringComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsSpringComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsSpringComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsSpringComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsSpringComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsSpringComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsSpringComponent(UPhysicsSpringComponent&&); \
	NO_API UPhysicsSpringComponent(const UPhysicsSpringComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsSpringComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsSpringComponent(UPhysicsSpringComponent&&); \
	NO_API UPhysicsSpringComponent(const UPhysicsSpringComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsSpringComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsSpringComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsSpringComponent)


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_INCLASS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsSpringComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicsSpringComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSpringComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
