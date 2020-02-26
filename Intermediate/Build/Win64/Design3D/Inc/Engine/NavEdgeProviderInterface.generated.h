// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavEdgeProviderInterface_generated_h
#error "NavEdgeProviderInterface.generated.h already included, missing '#pragma once' in NavEdgeProviderInterface.h"
#endif
#define ENGINE_NavEdgeProviderInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavEdgeProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavEdgeProviderInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavEdgeProviderInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavEdgeProviderInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNavEdgeProviderInterface(UNavEdgeProviderInterface&&); \
	ENGINE_API UNavEdgeProviderInterface(const UNavEdgeProviderInterface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavEdgeProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNavEdgeProviderInterface(UNavEdgeProviderInterface&&); \
	ENGINE_API UNavEdgeProviderInterface(const UNavEdgeProviderInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavEdgeProviderInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavEdgeProviderInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavEdgeProviderInterface)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavEdgeProviderInterface(); \
	friend struct Z_Construct_UClass_UNavEdgeProviderInterface_Statics; \
public: \
	DECLARE_CLASS(UNavEdgeProviderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNavEdgeProviderInterface)


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_18_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_18_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INavEdgeProviderInterface() {} \
public: \
	typedef UNavEdgeProviderInterface UClassType; \
	typedef INavEdgeProviderInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~INavEdgeProviderInterface() {} \
public: \
	typedef UNavEdgeProviderInterface UClassType; \
	typedef INavEdgeProviderInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_15_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavEdgeProviderInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavEdgeProviderInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
