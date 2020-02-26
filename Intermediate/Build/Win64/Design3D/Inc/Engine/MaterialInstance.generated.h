// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialInstance_generated_h
#error "MaterialInstance.generated.h already included, missing '#pragma once' in MaterialInstance.h"
#endif
#define ENGINE_MaterialInstance_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFontParameterValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFontParameterValue>();

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_152_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureParameterValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTextureParameterValue>();

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVectorParameterValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVectorParameterValue>();

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScalarParameterValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FScalarParameterValue>();

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FScalarParameterAtlasInstanceData>();

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_257_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_257_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_257_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialInstance, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_257_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialInstance(); \
	friend struct Z_Construct_UClass_UMaterialInstance_Statics; \
public: \
	DECLARE_CLASS(UMaterialInstance, UMaterialInterface, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInstance) \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_257_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_257_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialInstance(); \
	friend struct Z_Construct_UClass_UMaterialInstance_Statics; \
public: \
	DECLARE_CLASS(UMaterialInstance, UMaterialInterface, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInstance) \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_257_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_257_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialInstance(UMaterialInstance&&); \
	ENGINE_API UMaterialInstance(const UMaterialInstance&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_257_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialInstance(UMaterialInstance&&); \
	ENGINE_API UMaterialInstance(const UMaterialInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInstance)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_257_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticParameters() { return STRUCT_OFFSET(UMaterialInstance, StaticParameters); }


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_254_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_257_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_257_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_257_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_257_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_257_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_257_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_257_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_257_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_257_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_257_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
