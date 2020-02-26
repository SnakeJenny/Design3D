// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DocumentationActor_generated_h
#error "DocumentationActor.generated.h already included, missing '#pragma once' in DocumentationActor.h"
#endif
#define ENGINE_DocumentationActor_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADocumentationActor(); \
	friend struct Z_Construct_UClass_ADocumentationActor_Statics; \
public: \
	DECLARE_CLASS(ADocumentationActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ADocumentationActor)


#define Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_INCLASS \
private: \
	static void StaticRegisterNativesADocumentationActor(); \
	friend struct Z_Construct_UClass_ADocumentationActor_Statics; \
public: \
	DECLARE_CLASS(ADocumentationActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ADocumentationActor)


#define Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADocumentationActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADocumentationActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADocumentationActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADocumentationActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADocumentationActor(ADocumentationActor&&); \
	NO_API ADocumentationActor(const ADocumentationActor&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADocumentationActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADocumentationActor(ADocumentationActor&&); \
	NO_API ADocumentationActor(const ADocumentationActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADocumentationActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADocumentationActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADocumentationActor)


#define Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_26_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DocumentationActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ADocumentationActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
