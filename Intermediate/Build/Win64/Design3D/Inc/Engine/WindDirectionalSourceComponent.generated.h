// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWindSourceType : uint8;
#ifdef ENGINE_WindDirectionalSourceComponent_generated_h
#error "WindDirectionalSourceComponent.generated.h already included, missing '#pragma once' in WindDirectionalSourceComponent.h"
#endif
#define ENGINE_WindDirectionalSourceComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetWindType) \
	{ \
		P_GET_ENUM(EWindSourceType,Z_Param_InNewType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWindType(EWindSourceType(Z_Param_InNewType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRadius) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InNewRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRadius(Z_Param_InNewRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaximumGustAmount) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InNewMaxGust); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaximumGustAmount(Z_Param_InNewMaxGust); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinimumGustAmount) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InNewMinGust); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMinimumGustAmount(Z_Param_InNewMinGust); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InNewSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpeed(Z_Param_InNewSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStrength) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InNewStrength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStrength(Z_Param_InNewStrength); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWindType) \
	{ \
		P_GET_ENUM(EWindSourceType,Z_Param_InNewType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWindType(EWindSourceType(Z_Param_InNewType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRadius) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InNewRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRadius(Z_Param_InNewRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaximumGustAmount) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InNewMaxGust); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaximumGustAmount(Z_Param_InNewMaxGust); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinimumGustAmount) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InNewMinGust); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMinimumGustAmount(Z_Param_InNewMinGust); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InNewSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpeed(Z_Param_InNewSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStrength) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InNewStrength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStrength(Z_Param_InNewStrength); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWindDirectionalSourceComponent(); \
	friend struct Z_Construct_UClass_UWindDirectionalSourceComponent_Statics; \
public: \
	DECLARE_CLASS(UWindDirectionalSourceComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UWindDirectionalSourceComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUWindDirectionalSourceComponent(); \
	friend struct Z_Construct_UClass_UWindDirectionalSourceComponent_Statics; \
public: \
	DECLARE_CLASS(UWindDirectionalSourceComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UWindDirectionalSourceComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWindDirectionalSourceComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindDirectionalSourceComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindDirectionalSourceComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindDirectionalSourceComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWindDirectionalSourceComponent(UWindDirectionalSourceComponent&&); \
	NO_API UWindDirectionalSourceComponent(const UWindDirectionalSourceComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWindDirectionalSourceComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWindDirectionalSourceComponent(UWindDirectionalSourceComponent&&); \
	NO_API UWindDirectionalSourceComponent(const UWindDirectionalSourceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindDirectionalSourceComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindDirectionalSourceComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindDirectionalSourceComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_22_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WindDirectionalSourceComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWindDirectionalSourceComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_WindDirectionalSourceComponent_h


#define FOREACH_ENUM_EWINDSOURCETYPE(op) \
	op(EWindSourceType::Directional) \
	op(EWindSourceType::Point) 

enum class EWindSourceType : uint8;
template<> ENGINE_API UEnum* StaticEnum<EWindSourceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
