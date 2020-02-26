// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_GroupActor_generated_h
#error "GroupActor.generated.h already included, missing '#pragma once' in GroupActor.h"
#endif
#define UNREALED_GroupActor_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_20_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGroupActor(); \
	friend struct Z_Construct_UClass_AGroupActor_Statics; \
public: \
	DECLARE_CLASS(AGroupActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(AGroupActor)


#define Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAGroupActor(); \
	friend struct Z_Construct_UClass_AGroupActor_Statics; \
public: \
	DECLARE_CLASS(AGroupActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(AGroupActor)


#define Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API AGroupActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGroupActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, AGroupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGroupActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API AGroupActor(AGroupActor&&); \
	UNREALED_API AGroupActor(const AGroupActor&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API AGroupActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API AGroupActor(AGroupActor&&); \
	UNREALED_API AGroupActor(const AGroupActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, AGroupActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGroupActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGroupActor)


#define Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_17_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_20_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_20_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GroupActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class AGroupActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
