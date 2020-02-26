// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PathFollowingAgentInterface_generated_h
#error "PathFollowingAgentInterface.generated.h already included, missing '#pragma once' in PathFollowingAgentInterface.h"
#endif
#define ENGINE_PathFollowingAgentInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPathFollowingAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPathFollowingAgentInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPathFollowingAgentInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathFollowingAgentInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPathFollowingAgentInterface(UPathFollowingAgentInterface&&); \
	ENGINE_API UPathFollowingAgentInterface(const UPathFollowingAgentInterface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPathFollowingAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPathFollowingAgentInterface(UPathFollowingAgentInterface&&); \
	ENGINE_API UPathFollowingAgentInterface(const UPathFollowingAgentInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPathFollowingAgentInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathFollowingAgentInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPathFollowingAgentInterface)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPathFollowingAgentInterface(); \
	friend struct Z_Construct_UClass_UPathFollowingAgentInterface_Statics; \
public: \
	DECLARE_CLASS(UPathFollowingAgentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPathFollowingAgentInterface)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_15_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_15_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPathFollowingAgentInterface() {} \
public: \
	typedef UPathFollowingAgentInterface UClassType; \
	typedef IPathFollowingAgentInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IPathFollowingAgentInterface() {} \
public: \
	typedef UPathFollowingAgentInterface UClassType; \
	typedef IPathFollowingAgentInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPathFollowingAgentInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_PathFollowingAgentInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
