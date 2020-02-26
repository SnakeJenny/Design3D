// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TextureRenderTarget_generated_h
#error "TextureRenderTarget.generated.h already included, missing '#pragma once' in TextureRenderTarget.h"
#endif
#define ENGINE_TextureRenderTarget_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_20_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextureRenderTarget(); \
	friend struct Z_Construct_UClass_UTextureRenderTarget_Statics; \
public: \
	DECLARE_CLASS(UTextureRenderTarget, UTexture, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTextureRenderTarget)


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUTextureRenderTarget(); \
	friend struct Z_Construct_UClass_UTextureRenderTarget_Statics; \
public: \
	DECLARE_CLASS(UTextureRenderTarget, UTexture, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTextureRenderTarget)


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureRenderTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureRenderTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureRenderTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureRenderTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTextureRenderTarget(UTextureRenderTarget&&); \
	ENGINE_API UTextureRenderTarget(const UTextureRenderTarget&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureRenderTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTextureRenderTarget(UTextureRenderTarget&&); \
	ENGINE_API UTextureRenderTarget(const UTextureRenderTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureRenderTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureRenderTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureRenderTarget)


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_17_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_20_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TextureRenderTarget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTextureRenderTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
