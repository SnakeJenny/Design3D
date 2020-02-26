// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialParameterCollectionInstance_generated_h
#error "MaterialParameterCollectionInstance.generated.h already included, missing '#pragma once' in MaterialParameterCollectionInstance.h"
#endif
#define ENGINE_MaterialParameterCollectionInstance_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_24_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialParameterCollectionInstance(); \
	friend struct Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics; \
public: \
	DECLARE_CLASS(UMaterialParameterCollectionInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialParameterCollectionInstance)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialParameterCollectionInstance(); \
	friend struct Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics; \
public: \
	DECLARE_CLASS(UMaterialParameterCollectionInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialParameterCollectionInstance)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialParameterCollectionInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialParameterCollectionInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialParameterCollectionInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialParameterCollectionInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialParameterCollectionInstance(UMaterialParameterCollectionInstance&&); \
	NO_API UMaterialParameterCollectionInstance(const UMaterialParameterCollectionInstance&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialParameterCollectionInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialParameterCollectionInstance(UMaterialParameterCollectionInstance&&); \
	NO_API UMaterialParameterCollectionInstance(const UMaterialParameterCollectionInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialParameterCollectionInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialParameterCollectionInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialParameterCollectionInstance)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Collection() { return STRUCT_OFFSET(UMaterialParameterCollectionInstance, Collection); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_21_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_24_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_24_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialParameterCollectionInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialParameterCollectionInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
