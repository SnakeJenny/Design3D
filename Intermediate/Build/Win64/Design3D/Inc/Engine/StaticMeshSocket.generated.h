// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_StaticMeshSocket_generated_h
#error "StaticMeshSocket.generated.h already included, missing '#pragma once' in StaticMeshSocket.h"
#endif
#define ENGINE_StaticMeshSocket_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UStaticMeshSocket, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaticMeshSocket(); \
	friend struct Z_Construct_UClass_UStaticMeshSocket_Statics; \
public: \
	DECLARE_CLASS(UStaticMeshSocket, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UStaticMeshSocket) \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUStaticMeshSocket(); \
	friend struct Z_Construct_UClass_UStaticMeshSocket_Statics; \
public: \
	DECLARE_CLASS(UStaticMeshSocket, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UStaticMeshSocket) \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UStaticMeshSocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshSocket) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStaticMeshSocket); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshSocket); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UStaticMeshSocket(UStaticMeshSocket&&); \
	ENGINE_API UStaticMeshSocket(const UStaticMeshSocket&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UStaticMeshSocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UStaticMeshSocket(UStaticMeshSocket&&); \
	ENGINE_API UStaticMeshSocket(const UStaticMeshSocket&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStaticMeshSocket); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshSocket); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshSocket)


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_14_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StaticMeshSocket."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStaticMeshSocket>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshSocket_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
