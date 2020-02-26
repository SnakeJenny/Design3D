// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FileServerCommandlet_generated_h
#error "FileServerCommandlet.generated.h already included, missing '#pragma once' in FileServerCommandlet.h"
#endif
#define UNREALED_FileServerCommandlet_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileServerCommandlet(); \
	friend struct Z_Construct_UClass_UFileServerCommandlet_Statics; \
public: \
	DECLARE_CLASS(UFileServerCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UFileServerCommandlet)


#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUFileServerCommandlet(); \
	friend struct Z_Construct_UClass_UFileServerCommandlet_Statics; \
public: \
	DECLARE_CLASS(UFileServerCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UFileServerCommandlet)


#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileServerCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileServerCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileServerCommandlet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileServerCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileServerCommandlet(UFileServerCommandlet&&); \
	NO_API UFileServerCommandlet(const UFileServerCommandlet&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileServerCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileServerCommandlet(UFileServerCommandlet&&); \
	NO_API UFileServerCommandlet(const UFileServerCommandlet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileServerCommandlet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileServerCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileServerCommandlet)


#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_18_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FileServerCommandlet."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UFileServerCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Commandlets_FileServerCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
