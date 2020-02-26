// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PendingNetGame_generated_h
#error "PendingNetGame.generated.h already included, missing '#pragma once' in PendingNetGame.h"
#endif
#define ENGINE_PendingNetGame_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_23_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPendingNetGame, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPendingNetGame(); \
	friend struct Z_Construct_UClass_UPendingNetGame_Statics; \
public: \
	DECLARE_CLASS(UPendingNetGame, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPendingNetGame) \
	Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_23_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPendingNetGame(); \
	friend struct Z_Construct_UClass_UPendingNetGame_Statics; \
public: \
	DECLARE_CLASS(UPendingNetGame, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPendingNetGame) \
	Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_23_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_23_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPendingNetGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPendingNetGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPendingNetGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPendingNetGame(UPendingNetGame&&); \
	NO_API UPendingNetGame(const UPendingNetGame&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPendingNetGame(UPendingNetGame&&); \
	NO_API UPendingNetGame(const UPendingNetGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPendingNetGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPendingNetGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPendingNetGame)


#define Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PendingNetGame."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPendingNetGame>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
