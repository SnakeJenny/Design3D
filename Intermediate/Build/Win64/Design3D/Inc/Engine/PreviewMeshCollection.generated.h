// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PreviewMeshCollection_generated_h
#error "PreviewMeshCollection.generated.h already included, missing '#pragma once' in PreviewMeshCollection.h"
#endif
#define ENGINE_PreviewMeshCollection_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPreviewMeshCollectionEntry>();

#define Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_42_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_42_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPreviewMeshCollection(); \
	friend struct Z_Construct_UClass_UPreviewMeshCollection_Statics; \
public: \
	DECLARE_CLASS(UPreviewMeshCollection, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPreviewMeshCollection) \
	virtual UObject* _getUObject() const override { return const_cast<UPreviewMeshCollection*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUPreviewMeshCollection(); \
	friend struct Z_Construct_UClass_UPreviewMeshCollection_Statics; \
public: \
	DECLARE_CLASS(UPreviewMeshCollection, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPreviewMeshCollection) \
	virtual UObject* _getUObject() const override { return const_cast<UPreviewMeshCollection*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPreviewMeshCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPreviewMeshCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPreviewMeshCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPreviewMeshCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPreviewMeshCollection(UPreviewMeshCollection&&); \
	ENGINE_API UPreviewMeshCollection(const UPreviewMeshCollection&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPreviewMeshCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPreviewMeshCollection(UPreviewMeshCollection&&); \
	ENGINE_API UPreviewMeshCollection(const UPreviewMeshCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPreviewMeshCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPreviewMeshCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPreviewMeshCollection)


#define Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_42_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_38_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_42_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_42_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_42_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h_42_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPreviewMeshCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
