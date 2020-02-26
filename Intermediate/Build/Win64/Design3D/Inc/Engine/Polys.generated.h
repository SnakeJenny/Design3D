// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Polys_generated_h
#error "Polys.generated.h already included, missing '#pragma once' in Polys.h"
#endif
#define ENGINE_Polys_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_593_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_593_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_593_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPolys, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_593_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPolys(); \
	friend struct Z_Construct_UClass_UPolys_Statics; \
public: \
	DECLARE_CLASS(UPolys, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPolys) \
	Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_593_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_593_INCLASS \
private: \
	static void StaticRegisterNativesUPolys(); \
	friend struct Z_Construct_UClass_UPolys_Statics; \
public: \
	DECLARE_CLASS(UPolys, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPolys) \
	Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_593_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_593_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPolys) \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPolys); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPolys(UPolys&&); \
	ENGINE_API UPolys(const UPolys&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_593_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPolys(UPolys&&); \
	ENGINE_API UPolys(const UPolys&); \
public: \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPolys); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPolys)


#define Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_593_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_590_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_593_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_593_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_593_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_593_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_593_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_593_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_593_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_593_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_593_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Polys_h_593_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Polys."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPolys>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_Polys_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
