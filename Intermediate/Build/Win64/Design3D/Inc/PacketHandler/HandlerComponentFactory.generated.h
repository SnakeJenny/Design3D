// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACKETHANDLER_HandlerComponentFactory_generated_h
#error "HandlerComponentFactory.generated.h already included, missing '#pragma once' in HandlerComponentFactory.h"
#endif
#define PACKETHANDLER_HandlerComponentFactory_generated_h

#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_RPC_WRAPPERS
#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHandlerComponentFactory(); \
	friend struct Z_Construct_UClass_UHandlerComponentFactory_Statics; \
public: \
	DECLARE_CLASS(UHandlerComponentFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PacketHandler"), NO_API) \
	DECLARE_SERIALIZER(UHandlerComponentFactory)


#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUHandlerComponentFactory(); \
	friend struct Z_Construct_UClass_UHandlerComponentFactory_Statics; \
public: \
	DECLARE_CLASS(UHandlerComponentFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PacketHandler"), NO_API) \
	DECLARE_SERIALIZER(UHandlerComponentFactory)


#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHandlerComponentFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandlerComponentFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandlerComponentFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandlerComponentFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHandlerComponentFactory(UHandlerComponentFactory&&); \
	NO_API UHandlerComponentFactory(const UHandlerComponentFactory&); \
public:


#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHandlerComponentFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHandlerComponentFactory(UHandlerComponentFactory&&); \
	NO_API UHandlerComponentFactory(const UHandlerComponentFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandlerComponentFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandlerComponentFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHandlerComponentFactory)


#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_16_PROLOG
#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_INCLASS \
	Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HandlerComponentFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACKETHANDLER_API UClass* StaticClass<class UHandlerComponentFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_PacketHandlers_PacketHandler_Classes_HandlerComponentFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
