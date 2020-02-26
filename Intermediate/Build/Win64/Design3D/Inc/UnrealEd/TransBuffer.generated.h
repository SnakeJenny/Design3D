// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_TransBuffer_generated_h
#error "TransBuffer.generated.h already included, missing '#pragma once' in TransBuffer.h"
#endif
#define UNREALED_TransBuffer_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTransBuffer, NO_API)


#define Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransBuffer(); \
	friend struct Z_Construct_UClass_UTransBuffer_Statics; \
public: \
	DECLARE_CLASS(UTransBuffer, UTransactor, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UTransBuffer) \
	Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_ARCHIVESERIALIZER


#define Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUTransBuffer(); \
	friend struct Z_Construct_UClass_UTransBuffer_Statics; \
public: \
	DECLARE_CLASS(UTransBuffer, UTransactor, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UTransBuffer) \
	Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_ARCHIVESERIALIZER


#define Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTransBuffer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransBuffer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTransBuffer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransBuffer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTransBuffer(UTransBuffer&&); \
	NO_API UTransBuffer(const UTransBuffer&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTransBuffer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTransBuffer(UTransBuffer&&); \
	NO_API UTransBuffer(const UTransBuffer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTransBuffer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransBuffer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransBuffer)


#define Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_14_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UTransBuffer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
