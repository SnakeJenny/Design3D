// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RVOAvoidanceInterface_generated_h
#error "RVOAvoidanceInterface.generated.h already included, missing '#pragma once' in RVOAvoidanceInterface.h"
#endif
#define ENGINE_RVOAvoidanceInterface_generated_h

#define Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URVOAvoidanceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URVOAvoidanceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URVOAvoidanceInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URVOAvoidanceInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API URVOAvoidanceInterface(URVOAvoidanceInterface&&); \
	ENGINE_API URVOAvoidanceInterface(const URVOAvoidanceInterface&); \
public:


#define Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URVOAvoidanceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API URVOAvoidanceInterface(URVOAvoidanceInterface&&); \
	ENGINE_API URVOAvoidanceInterface(const URVOAvoidanceInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URVOAvoidanceInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URVOAvoidanceInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URVOAvoidanceInterface)


#define Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURVOAvoidanceInterface(); \
	friend struct Z_Construct_UClass_URVOAvoidanceInterface_Statics; \
public: \
	DECLARE_CLASS(URVOAvoidanceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(URVOAvoidanceInterface)


#define Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRVOAvoidanceInterface() {} \
public: \
	typedef URVOAvoidanceInterface UClassType; \
	typedef IRVOAvoidanceInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~IRVOAvoidanceInterface() {} \
public: \
	typedef URVOAvoidanceInterface UClassType; \
	typedef IRVOAvoidanceInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_16_PROLOG
#define Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URVOAvoidanceInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
