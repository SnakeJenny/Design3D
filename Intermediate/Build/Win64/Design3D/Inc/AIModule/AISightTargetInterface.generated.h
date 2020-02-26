// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISightTargetInterface_generated_h
#error "AISightTargetInterface.generated.h already included, missing '#pragma once' in AISightTargetInterface.h"
#endif
#define AIMODULE_AISightTargetInterface_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISightTargetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISightTargetInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISightTargetInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISightTargetInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISightTargetInterface(UAISightTargetInterface&&); \
	NO_API UAISightTargetInterface(const UAISightTargetInterface&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISightTargetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISightTargetInterface(UAISightTargetInterface&&); \
	NO_API UAISightTargetInterface(const UAISightTargetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISightTargetInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISightTargetInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISightTargetInterface)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAISightTargetInterface(); \
	friend struct Z_Construct_UClass_UAISightTargetInterface_Statics; \
public: \
	DECLARE_CLASS(UAISightTargetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISightTargetInterface)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_15_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_15_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAISightTargetInterface() {} \
public: \
	typedef UAISightTargetInterface UClassType; \
	typedef IAISightTargetInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IAISightTargetInterface() {} \
public: \
	typedef UAISightTargetInterface UClassType; \
	typedef IAISightTargetInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_12_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISightTargetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
