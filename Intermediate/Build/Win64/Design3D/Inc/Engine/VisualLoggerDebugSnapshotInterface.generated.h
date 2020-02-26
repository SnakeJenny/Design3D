// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_VisualLoggerDebugSnapshotInterface_generated_h
#error "VisualLoggerDebugSnapshotInterface.generated.h already included, missing '#pragma once' in VisualLoggerDebugSnapshotInterface.h"
#endif
#define ENGINE_VisualLoggerDebugSnapshotInterface_generated_h

#define Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVisualLoggerDebugSnapshotInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisualLoggerDebugSnapshotInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVisualLoggerDebugSnapshotInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisualLoggerDebugSnapshotInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVisualLoggerDebugSnapshotInterface(UVisualLoggerDebugSnapshotInterface&&); \
	ENGINE_API UVisualLoggerDebugSnapshotInterface(const UVisualLoggerDebugSnapshotInterface&); \
public:


#define Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVisualLoggerDebugSnapshotInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVisualLoggerDebugSnapshotInterface(UVisualLoggerDebugSnapshotInterface&&); \
	ENGINE_API UVisualLoggerDebugSnapshotInterface(const UVisualLoggerDebugSnapshotInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVisualLoggerDebugSnapshotInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisualLoggerDebugSnapshotInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisualLoggerDebugSnapshotInterface)


#define Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVisualLoggerDebugSnapshotInterface(); \
	friend struct Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics; \
public: \
	DECLARE_CLASS(UVisualLoggerDebugSnapshotInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVisualLoggerDebugSnapshotInterface)


#define Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVisualLoggerDebugSnapshotInterface() {} \
public: \
	typedef UVisualLoggerDebugSnapshotInterface UClassType; \
	typedef IVisualLoggerDebugSnapshotInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IVisualLoggerDebugSnapshotInterface() {} \
public: \
	typedef UVisualLoggerDebugSnapshotInterface UClassType; \
	typedef IVisualLoggerDebugSnapshotInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_10_PROLOG
#define Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVisualLoggerDebugSnapshotInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
