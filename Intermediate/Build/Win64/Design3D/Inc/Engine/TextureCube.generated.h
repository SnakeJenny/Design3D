// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TextureCube_generated_h
#error "TextureCube.generated.h already included, missing '#pragma once' in TextureCube.h"
#endif
#define ENGINE_TextureCube_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_16_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTextureCube, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextureCube(); \
	friend struct Z_Construct_UClass_UTextureCube_Statics; \
public: \
	DECLARE_CLASS(UTextureCube, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTextureCube) \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_16_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTextureCube(); \
	friend struct Z_Construct_UClass_UTextureCube_Statics; \
public: \
	DECLARE_CLASS(UTextureCube, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTextureCube) \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_16_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureCube(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureCube) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureCube); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureCube); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTextureCube(UTextureCube&&); \
	ENGINE_API UTextureCube(const UTextureCube&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureCube(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTextureCube(UTextureCube&&); \
	ENGINE_API UTextureCube(const UTextureCube&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureCube); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureCube); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureCube)


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_13_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_16_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TextureCube."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTextureCube>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
