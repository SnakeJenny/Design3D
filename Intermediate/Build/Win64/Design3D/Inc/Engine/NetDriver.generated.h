// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NetDriver_generated_h
#error "NetDriver.generated.h already included, missing '#pragma once' in NetDriver.h"
#endif
#define ENGINE_NetDriver_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_245_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChannelDefinition_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FChannelDefinition>();

#define Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPacketSimulationSettings>();

#define Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_310_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_310_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_310_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNetDriver, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_310_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetDriver(); \
	friend struct Z_Construct_UClass_UNetDriver_Statics; \
public: \
	DECLARE_CLASS(UNetDriver, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNetDriver) \
	Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_310_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_310_INCLASS \
private: \
	static void StaticRegisterNativesUNetDriver(); \
	friend struct Z_Construct_UClass_UNetDriver_Statics; \
public: \
	DECLARE_CLASS(UNetDriver, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNetDriver) \
	Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_310_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_310_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetDriver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetDriver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetDriver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNetDriver(UNetDriver&&); \
	ENGINE_API UNetDriver(const UNetDriver&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_310_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNetDriver(UNetDriver&&); \
	ENGINE_API UNetDriver(const UNetDriver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetDriver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetDriver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetDriver)


#define Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_310_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActorChannelPool() { return STRUCT_OFFSET(UNetDriver, ActorChannelPool); } \
	FORCEINLINE static uint32 __PPO__ReplicationDriver() { return STRUCT_OFFSET(UNetDriver, ReplicationDriver); }


#define Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_307_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_310_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_310_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_310_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_310_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_310_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_310_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_310_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_310_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_310_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_310_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NetDriver."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNetDriver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
