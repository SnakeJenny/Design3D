// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AIPerceptionListenerInterface_generated_h
#error "AIPerceptionListenerInterface.generated.h already included, missing '#pragma once' in AIPerceptionListenerInterface.h"
#endif
#define AIMODULE_AIPerceptionListenerInterface_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIPerceptionListenerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPerceptionListenerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPerceptionListenerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPerceptionListenerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIPerceptionListenerInterface(UAIPerceptionListenerInterface&&); \
	NO_API UAIPerceptionListenerInterface(const UAIPerceptionListenerInterface&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIPerceptionListenerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIPerceptionListenerInterface(UAIPerceptionListenerInterface&&); \
	NO_API UAIPerceptionListenerInterface(const UAIPerceptionListenerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPerceptionListenerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPerceptionListenerInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPerceptionListenerInterface)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAIPerceptionListenerInterface(); \
	friend struct Z_Construct_UClass_UAIPerceptionListenerInterface_Statics; \
public: \
	DECLARE_CLASS(UAIPerceptionListenerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIPerceptionListenerInterface)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAIPerceptionListenerInterface() {} \
public: \
	typedef UAIPerceptionListenerInterface UClassType; \
	typedef IAIPerceptionListenerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IAIPerceptionListenerInterface() {} \
public: \
	typedef UAIPerceptionListenerInterface UClassType; \
	typedef IAIPerceptionListenerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_12_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAIPerceptionListenerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
