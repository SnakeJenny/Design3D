// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ReplicationDriver_generated_h
#error "ReplicationDriver.generated.h already included, missing '#pragma once' in ReplicationDriver.h"
#endif
#define ENGINE_ReplicationDriver_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationDriver(); \
	friend struct Z_Construct_UClass_UReplicationDriver_Statics; \
public: \
	DECLARE_CLASS(UReplicationDriver, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UReplicationDriver) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUReplicationDriver(); \
	friend struct Z_Construct_UClass_UReplicationDriver_Statics; \
public: \
	DECLARE_CLASS(UReplicationDriver, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UReplicationDriver) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplicationDriver(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicationDriver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicationDriver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationDriver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplicationDriver(UReplicationDriver&&); \
	NO_API UReplicationDriver(const UReplicationDriver&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplicationDriver(UReplicationDriver&&); \
	NO_API UReplicationDriver(const UReplicationDriver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicationDriver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationDriver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReplicationDriver)


#define Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_47_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UReplicationDriver>();

#define Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_109_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_109_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationConnectionDriver(); \
	friend struct Z_Construct_UClass_UReplicationConnectionDriver_Statics; \
public: \
	DECLARE_CLASS(UReplicationConnectionDriver, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UReplicationConnectionDriver)


#define Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_109_INCLASS \
private: \
	static void StaticRegisterNativesUReplicationConnectionDriver(); \
	friend struct Z_Construct_UClass_UReplicationConnectionDriver_Statics; \
public: \
	DECLARE_CLASS(UReplicationConnectionDriver, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UReplicationConnectionDriver)


#define Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_109_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplicationConnectionDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicationConnectionDriver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicationConnectionDriver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationConnectionDriver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplicationConnectionDriver(UReplicationConnectionDriver&&); \
	NO_API UReplicationConnectionDriver(const UReplicationConnectionDriver&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_109_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplicationConnectionDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplicationConnectionDriver(UReplicationConnectionDriver&&); \
	NO_API UReplicationConnectionDriver(const UReplicationConnectionDriver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicationConnectionDriver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationConnectionDriver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicationConnectionDriver)


#define Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_109_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_106_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_109_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_109_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_109_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_109_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_109_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_109_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_109_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UReplicationConnectionDriver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
