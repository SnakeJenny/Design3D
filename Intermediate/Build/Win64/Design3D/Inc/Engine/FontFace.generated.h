// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_FontFace_generated_h
#error "FontFace.generated.h already included, missing '#pragma once' in FontFace.h"
#endif
#define ENGINE_FontFace_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFontFace, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFontFace(); \
	friend struct Z_Construct_UClass_UFontFace_Statics; \
public: \
	DECLARE_CLASS(UFontFace, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UFontFace) \
	Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UFontFace*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUFontFace(); \
	friend struct Z_Construct_UClass_UFontFace_Statics; \
public: \
	DECLARE_CLASS(UFontFace, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UFontFace) \
	Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UFontFace*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UFontFace(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontFace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UFontFace); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontFace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UFontFace(UFontFace&&); \
	ENGINE_API UFontFace(const UFontFace&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UFontFace(UFontFace&&); \
	ENGINE_API UFontFace(const UFontFace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UFontFace); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontFace); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFontFace)


#define Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UFontFace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
