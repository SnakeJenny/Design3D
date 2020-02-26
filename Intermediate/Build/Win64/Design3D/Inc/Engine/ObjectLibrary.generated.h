// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ObjectLibrary_generated_h
#error "ObjectLibrary.generated.h already included, missing '#pragma once' in ObjectLibrary.h"
#endif
#define ENGINE_ObjectLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectLibrary(); \
	friend struct Z_Construct_UClass_UObjectLibrary_Statics; \
public: \
	DECLARE_CLASS(UObjectLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UObjectLibrary)


#define Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUObjectLibrary(); \
	friend struct Z_Construct_UClass_UObjectLibrary_Statics; \
public: \
	DECLARE_CLASS(UObjectLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UObjectLibrary)


#define Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UObjectLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UObjectLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UObjectLibrary(UObjectLibrary&&); \
	ENGINE_API UObjectLibrary(const UObjectLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UObjectLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UObjectLibrary(UObjectLibrary&&); \
	ENGINE_API UObjectLibrary(const UObjectLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UObjectLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectLibrary)


#define Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Objects() { return STRUCT_OFFSET(UObjectLibrary, Objects); } \
	FORCEINLINE static uint32 __PPO__WeakObjects() { return STRUCT_OFFSET(UObjectLibrary, WeakObjects); } \
	FORCEINLINE static uint32 __PPO__bUseWeakReferences() { return STRUCT_OFFSET(UObjectLibrary, bUseWeakReferences); } \
	FORCEINLINE static uint32 __PPO__bIsFullyLoaded() { return STRUCT_OFFSET(UObjectLibrary, bIsFullyLoaded); }


#define Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_14_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ObjectLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UObjectLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_ObjectLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
