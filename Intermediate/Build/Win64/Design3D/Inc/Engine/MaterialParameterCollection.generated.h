// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialParameterCollection_generated_h
#error "MaterialParameterCollection.generated.h already included, missing '#pragma once' in MaterialParameterCollection.h"
#endif
#define ENGINE_MaterialParameterCollection_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FCollectionParameterBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCollectionVectorParameter>();

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FCollectionParameterBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCollectionScalarParameter>();

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCollectionParameterBase_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCollectionParameterBase>();

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_79_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_79_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialParameterCollection(); \
	friend struct Z_Construct_UClass_UMaterialParameterCollection_Statics; \
public: \
	DECLARE_CLASS(UMaterialParameterCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialParameterCollection)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_79_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialParameterCollection(); \
	friend struct Z_Construct_UClass_UMaterialParameterCollection_Statics; \
public: \
	DECLARE_CLASS(UMaterialParameterCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialParameterCollection)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_79_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialParameterCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialParameterCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialParameterCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialParameterCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialParameterCollection(UMaterialParameterCollection&&); \
	ENGINE_API UMaterialParameterCollection(const UMaterialParameterCollection&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_79_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialParameterCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialParameterCollection(UMaterialParameterCollection&&); \
	ENGINE_API UMaterialParameterCollection(const UMaterialParameterCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialParameterCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialParameterCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialParameterCollection)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_79_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_76_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_79_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_79_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_79_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_79_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_79_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_79_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h_79_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialParameterCollection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialParameterCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
