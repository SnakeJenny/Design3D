// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DataAsset_generated_h
#error "DataAsset.generated.h already included, missing '#pragma once' in DataAsset.h"
#endif
#define ENGINE_DataAsset_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITORONLY_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UDataAsset, ENGINE_API)


#else
#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_ARCHIVESERIALIZER
#endif
#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataAsset(); \
	friend struct Z_Construct_UClass_UDataAsset_Statics; \
public: \
	DECLARE_CLASS(UDataAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDataAsset) \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUDataAsset(); \
	friend struct Z_Construct_UClass_UDataAsset_Statics; \
public: \
	DECLARE_CLASS(UDataAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDataAsset) \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UDataAsset(UDataAsset&&); \
	ENGINE_API UDataAsset(const UDataAsset&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UDataAsset(UDataAsset&&); \
	ENGINE_API UDataAsset(const UDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDataAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataAsset)


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NativeClass() { return STRUCT_OFFSET(UDataAsset, NativeClass); }


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_15_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DataAsset."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDataAsset>();

#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_41_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrimaryDataAsset(); \
	friend struct Z_Construct_UClass_UPrimaryDataAsset_Statics; \
public: \
	DECLARE_CLASS(UPrimaryDataAsset, UDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPrimaryDataAsset)


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUPrimaryDataAsset(); \
	friend struct Z_Construct_UClass_UPrimaryDataAsset_Statics; \
public: \
	DECLARE_CLASS(UPrimaryDataAsset, UDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPrimaryDataAsset)


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPrimaryDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimaryDataAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPrimaryDataAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimaryDataAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPrimaryDataAsset(UPrimaryDataAsset&&); \
	ENGINE_API UPrimaryDataAsset(const UPrimaryDataAsset&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPrimaryDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPrimaryDataAsset(UPrimaryDataAsset&&); \
	ENGINE_API UPrimaryDataAsset(const UPrimaryDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPrimaryDataAsset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimaryDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimaryDataAsset)


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_41_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_38_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_41_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_41_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_41_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPrimaryDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_DataAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
