// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CloudStorageBase_generated_h
#error "CloudStorageBase.generated.h already included, missing '#pragma once' in CloudStorageBase.h"
#endif
#define ENGINE_CloudStorageBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCloudStorageBase(); \
	friend struct Z_Construct_UClass_UCloudStorageBase_Statics; \
public: \
	DECLARE_CLASS(UCloudStorageBase, UPlatformInterfaceBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCloudStorageBase)


#define Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUCloudStorageBase(); \
	friend struct Z_Construct_UClass_UCloudStorageBase_Statics; \
public: \
	DECLARE_CLASS(UCloudStorageBase, UPlatformInterfaceBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCloudStorageBase)


#define Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCloudStorageBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCloudStorageBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCloudStorageBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCloudStorageBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCloudStorageBase(UCloudStorageBase&&); \
	NO_API UCloudStorageBase(const UCloudStorageBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCloudStorageBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCloudStorageBase(UCloudStorageBase&&); \
	NO_API UCloudStorageBase(const UCloudStorageBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCloudStorageBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCloudStorageBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCloudStorageBase)


#define Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_33_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CloudStorageBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCloudStorageBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_CloudStorageBase_h


#define FOREACH_ENUM_ECLOUDSTORAGEDELEGATE(op) \
	op(CSD_KeyValueReadComplete) \
	op(CSD_KeyValueWriteComplete) \
	op(CSD_ValueChanged) \
	op(CSD_DocumentQueryComplete) \
	op(CSD_DocumentReadComplete) \
	op(CSD_DocumentWriteComplete) \
	op(CSD_DocumentConflictDetected) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
