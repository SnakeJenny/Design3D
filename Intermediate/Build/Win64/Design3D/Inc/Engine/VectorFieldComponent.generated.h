// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_VectorFieldComponent_generated_h
#error "VectorFieldComponent.generated.h already included, missing '#pragma once' in VectorFieldComponent.h"
#endif
#define ENGINE_VectorFieldComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIntensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewIntensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIntensity(Z_Param_NewIntensity); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIntensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewIntensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIntensity(Z_Param_NewIntensity); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVectorFieldComponent(); \
	friend struct Z_Construct_UClass_UVectorFieldComponent_Statics; \
public: \
	DECLARE_CLASS(UVectorFieldComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVectorFieldComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUVectorFieldComponent(); \
	friend struct Z_Construct_UClass_UVectorFieldComponent_Statics; \
public: \
	DECLARE_CLASS(UVectorFieldComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVectorFieldComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVectorFieldComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVectorFieldComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVectorFieldComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVectorFieldComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVectorFieldComponent(UVectorFieldComponent&&); \
	ENGINE_API UVectorFieldComponent(const UVectorFieldComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVectorFieldComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVectorFieldComponent(UVectorFieldComponent&&); \
	ENGINE_API UVectorFieldComponent(const UVectorFieldComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVectorFieldComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVectorFieldComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVectorFieldComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_17_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VectorFieldComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVectorFieldComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_VectorFieldComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
