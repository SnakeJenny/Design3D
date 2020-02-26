// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_FontImportOptions_generated_h
#error "FontImportOptions.generated.h already included, missing '#pragma once' in FontImportOptions.h"
#endif
#define ENGINE_FontImportOptions_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFontImportOptionsData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFontImportOptionsData>();

#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFontImportOptions(); \
	friend struct Z_Construct_UClass_UFontImportOptions_Statics; \
public: \
	DECLARE_CLASS(UFontImportOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UFontImportOptions)


#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_INCLASS \
private: \
	static void StaticRegisterNativesUFontImportOptions(); \
	friend struct Z_Construct_UClass_UFontImportOptions_Statics; \
public: \
	DECLARE_CLASS(UFontImportOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UFontImportOptions)


#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UFontImportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontImportOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UFontImportOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontImportOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UFontImportOptions(UFontImportOptions&&); \
	ENGINE_API UFontImportOptions(const UFontImportOptions&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UFontImportOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UFontImportOptions(UFontImportOptions&&); \
	ENGINE_API UFontImportOptions(const UFontImportOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UFontImportOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontImportOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontImportOptions)


#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_181_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h_185_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FontImportOptions."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UFontImportOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_FontImportOptions_h


#define FOREACH_ENUM_EFONTIMPORTCHARACTERSET(op) \
	op(FontICS_Default) \
	op(FontICS_Ansi) \
	op(FontICS_Symbol) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
