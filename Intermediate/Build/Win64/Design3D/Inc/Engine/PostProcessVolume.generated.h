// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IBlendableInterface;
#ifdef ENGINE_PostProcessVolume_generated_h
#error "PostProcessVolume.generated.h already included, missing '#pragma once' in PostProcessVolume.h"
#endif
#define ENGINE_PostProcessVolume_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_RPC_WRAPPERS \
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


#define Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(APostProcessVolume, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPostProcessVolume(); \
	friend struct Z_Construct_UClass_APostProcessVolume_Statics; \
public: \
	DECLARE_CLASS(APostProcessVolume, AVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(APostProcessVolume) \
	Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<APostProcessVolume*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAPostProcessVolume(); \
	friend struct Z_Construct_UClass_APostProcessVolume_Statics; \
public: \
	DECLARE_CLASS(APostProcessVolume, AVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(APostProcessVolume) \
	Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<APostProcessVolume*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APostProcessVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APostProcessVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APostProcessVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APostProcessVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API APostProcessVolume(APostProcessVolume&&); \
	ENGINE_API APostProcessVolume(const APostProcessVolume&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APostProcessVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API APostProcessVolume(APostProcessVolume&&); \
	ENGINE_API APostProcessVolume(const APostProcessVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APostProcessVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APostProcessVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APostProcessVolume)


#define Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_21_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PostProcessVolume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APostProcessVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_PostProcessVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
