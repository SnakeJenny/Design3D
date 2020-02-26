// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavCollisionBase_generated_h
#error "NavCollisionBase.generated.h already included, missing '#pragma once' in NavCollisionBase.h"
#endif
#define ENGINE_NavCollisionBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavCollisionBase(); \
	friend struct Z_Construct_UClass_UNavCollisionBase_Statics; \
public: \
	DECLARE_CLASS(UNavCollisionBase, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavCollisionBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUNavCollisionBase(); \
	friend struct Z_Construct_UClass_UNavCollisionBase_Statics; \
public: \
	DECLARE_CLASS(UNavCollisionBase, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavCollisionBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavCollisionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavCollisionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavCollisionBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavCollisionBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavCollisionBase(UNavCollisionBase&&); \
	NO_API UNavCollisionBase(const UNavCollisionBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavCollisionBase(UNavCollisionBase&&); \
	NO_API UNavCollisionBase(const UNavCollisionBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavCollisionBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavCollisionBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavCollisionBase)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_19_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavCollisionBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
