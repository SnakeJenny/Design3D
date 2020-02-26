// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavAgentInterface_generated_h
#error "NavAgentInterface.generated.h already included, missing '#pragma once' in NavAgentInterface.h"
#endif
#define ENGINE_NavAgentInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavAgentInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavAgentInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavAgentInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNavAgentInterface(UNavAgentInterface&&); \
	ENGINE_API UNavAgentInterface(const UNavAgentInterface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNavAgentInterface(UNavAgentInterface&&); \
	ENGINE_API UNavAgentInterface(const UNavAgentInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavAgentInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavAgentInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavAgentInterface)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavAgentInterface(); \
	friend struct Z_Construct_UClass_UNavAgentInterface_Statics; \
public: \
	DECLARE_CLASS(UNavAgentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNavAgentInterface)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_17_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_17_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INavAgentInterface() {} \
public: \
	typedef UNavAgentInterface UClassType; \
	typedef INavAgentInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~INavAgentInterface() {} \
public: \
	typedef UNavAgentInterface UClassType; \
	typedef INavAgentInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_14_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavAgentInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
