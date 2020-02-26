// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_StringTable_generated_h
#error "StringTable.generated.h already included, missing '#pragma once' in StringTable.h"
#endif
#define ENGINE_StringTable_generated_h

#define Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UStringTable, NO_API)


#define Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStringTable(); \
	friend struct Z_Construct_UClass_UStringTable_Statics; \
public: \
	DECLARE_CLASS(UStringTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStringTable) \
	Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUStringTable(); \
	friend struct Z_Construct_UClass_UStringTable_Statics; \
public: \
	DECLARE_CLASS(UStringTable, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStringTable) \
	Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStringTable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStringTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStringTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStringTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStringTable(UStringTable&&); \
	NO_API UStringTable(const UStringTable&); \
public:


#define Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStringTable(UStringTable&&); \
	NO_API UStringTable(const UStringTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStringTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStringTable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStringTable)


#define Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_INCLASS \
	Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStringTable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_Internationalization_StringTable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
