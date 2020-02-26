// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IBlendableInterface;
#ifdef ENGINE_PostProcessComponent_generated_h
#error "PostProcessComponent.generated.h already included, missing '#pragma once' in PostProcessComponent.h"
#endif
#define ENGINE_PostProcessComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddOrUpdateBlendable) \
	{ \
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOrUpdateBlendable(Z_Param_InBlendableObject,Z_Param_InWeight); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddOrUpdateBlendable) \
	{ \
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOrUpdateBlendable(Z_Param_InBlendableObject,Z_Param_InWeight); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPostProcessComponent, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPostProcessComponent(); \
	friend struct Z_Construct_UClass_UPostProcessComponent_Statics; \
public: \
	DECLARE_CLASS(UPostProcessComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPostProcessComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_23_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UPostProcessComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPostProcessComponent(); \
	friend struct Z_Construct_UClass_UPostProcessComponent_Statics; \
public: \
	DECLARE_CLASS(UPostProcessComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPostProcessComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_23_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UPostProcessComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPostProcessComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostProcessComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPostProcessComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostProcessComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPostProcessComponent(UPostProcessComponent&&); \
	ENGINE_API UPostProcessComponent(const UPostProcessComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPostProcessComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPostProcessComponent(UPostProcessComponent&&); \
	ENGINE_API UPostProcessComponent(const UPostProcessComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPostProcessComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostProcessComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostProcessComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PostProcessComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPostProcessComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_PostProcessComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
