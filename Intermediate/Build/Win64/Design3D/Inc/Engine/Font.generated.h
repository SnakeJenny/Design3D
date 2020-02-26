// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Font_generated_h
#error "Font.generated.h already included, missing '#pragma once' in Font.h"
#endif
#define ENGINE_Font_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_Font_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFontCharacter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFontCharacter>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Font_h_102_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_Font_h_102_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_Font_h_102_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFont, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_Font_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFont(); \
	friend struct Z_Construct_UClass_UFont_Statics; \
public: \
	DECLARE_CLASS(UFont, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UFont) \
	Engine_Source_Runtime_Engine_Classes_Engine_Font_h_102_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UFont*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_Font_h_102_INCLASS \
private: \
	static void StaticRegisterNativesUFont(); \
	friend struct Z_Construct_UClass_UFont_Statics; \
public: \
	DECLARE_CLASS(UFont, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UFont) \
	Engine_Source_Runtime_Engine_Classes_Engine_Font_h_102_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UFont*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_Font_h_102_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UFont(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFont) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UFont); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFont); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UFont(UFont&&); \
	ENGINE_API UFont(const UFont&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_Font_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UFont(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UFont(UFont&&); \
	ENGINE_API UFont(const UFont&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UFont); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFont); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFont)


#define Engine_Source_Runtime_Engine_Classes_Engine_Font_h_102_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_Font_h_99_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_Font_h_102_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Font_h_102_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Font_h_102_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_Font_h_102_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_Font_h_102_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Font_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Font_h_102_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Font_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Font_h_102_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Font_h_102_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Font."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UFont>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_Font_h


#define FOREACH_ENUM_EFONTCACHETYPE(op) \
	op(EFontCacheType::Offline) \
	op(EFontCacheType::Runtime) 

enum class EFontCacheType : uint8;
template<> ENGINE_API UEnum* StaticEnum<EFontCacheType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
