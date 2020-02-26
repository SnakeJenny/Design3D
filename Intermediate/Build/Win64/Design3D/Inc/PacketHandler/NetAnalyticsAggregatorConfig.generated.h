// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACKETHANDLER_NetAnalyticsAggregatorConfig_generated_h
#error "NetAnalyticsAggregatorConfig.generated.h already included, missing '#pragma once' in NetAnalyticsAggregatorConfig.h"
#endif
#define PACKETHANDLER_NetAnalyticsAggregatorConfig_generated_h

#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_NetAnalyticsAggregatorConfig_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics; \
	PACKETHANDLER_API static class UScriptStruct* StaticStruct();


template<> PACKETHANDLER_API UScriptStruct* StaticStruct<struct FNetAnalyticsDataConfig>();

#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_NetAnalyticsAggregatorConfig_h_35_RPC_WRAPPERS
#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_NetAnalyticsAggregatorConfig_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_NetAnalyticsAggregatorConfig_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetAnalyticsAggregatorConfig(); \
	friend struct Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics; \
public: \
	DECLARE_CLASS(UNetAnalyticsAggregatorConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacketHandler"), NO_API) \
	DECLARE_SERIALIZER(UNetAnalyticsAggregatorConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_NetAnalyticsAggregatorConfig_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUNetAnalyticsAggregatorConfig(); \
	friend struct Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics; \
public: \
	DECLARE_CLASS(UNetAnalyticsAggregatorConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PacketHandler"), NO_API) \
	DECLARE_SERIALIZER(UNetAnalyticsAggregatorConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_NetAnalyticsAggregatorConfig_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetAnalyticsAggregatorConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetAnalyticsAggregatorConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetAnalyticsAggregatorConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetAnalyticsAggregatorConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetAnalyticsAggregatorConfig(UNetAnalyticsAggregatorConfig&&); \
	NO_API UNetAnalyticsAggregatorConfig(const UNetAnalyticsAggregatorConfig&); \
public:


#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_NetAnalyticsAggregatorConfig_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetAnalyticsAggregatorConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetAnalyticsAggregatorConfig(UNetAnalyticsAggregatorConfig&&); \
	NO_API UNetAnalyticsAggregatorConfig(const UNetAnalyticsAggregatorConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetAnalyticsAggregatorConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetAnalyticsAggregatorConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetAnalyticsAggregatorConfig)


#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_NetAnalyticsAggregatorConfig_h_35_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_NetAnalyticsAggregatorConfig_h_32_PROLOG
#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_NetAnalyticsAggregatorConfig_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_NetAnalyticsAggregatorConfig_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_NetAnalyticsAggregatorConfig_h_35_RPC_WRAPPERS \
	Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_NetAnalyticsAggregatorConfig_h_35_INCLASS \
	Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_NetAnalyticsAggregatorConfig_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_NetAnalyticsAggregatorConfig_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_NetAnalyticsAggregatorConfig_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_NetAnalyticsAggregatorConfig_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_NetAnalyticsAggregatorConfig_h_35_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_NetAnalyticsAggregatorConfig_h_35_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NetAnalyticsAggregatorConfig."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACKETHANDLER_API UClass* StaticClass<class UNetAnalyticsAggregatorConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_NetAnalyticsAggregatorConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
