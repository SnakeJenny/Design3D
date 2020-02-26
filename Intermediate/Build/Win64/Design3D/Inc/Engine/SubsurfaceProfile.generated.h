// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SubsurfaceProfile_generated_h
#error "SubsurfaceProfile.generated.h already included, missing '#pragma once' in SubsurfaceProfile.h"
#endif
#define ENGINE_SubsurfaceProfile_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubsurfaceProfileStruct_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSubsurfaceProfileStruct>();

#define Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_101_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_101_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubsurfaceProfile(); \
	friend struct Z_Construct_UClass_USubsurfaceProfile_Statics; \
public: \
	DECLARE_CLASS(USubsurfaceProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USubsurfaceProfile)


#define Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_101_INCLASS \
private: \
	static void StaticRegisterNativesUSubsurfaceProfile(); \
	friend struct Z_Construct_UClass_USubsurfaceProfile_Statics; \
public: \
	DECLARE_CLASS(USubsurfaceProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USubsurfaceProfile)


#define Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_101_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USubsurfaceProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubsurfaceProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USubsurfaceProfile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubsurfaceProfile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USubsurfaceProfile(USubsurfaceProfile&&); \
	ENGINE_API USubsurfaceProfile(const USubsurfaceProfile&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USubsurfaceProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USubsurfaceProfile(USubsurfaceProfile&&); \
	ENGINE_API USubsurfaceProfile(const USubsurfaceProfile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USubsurfaceProfile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubsurfaceProfile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubsurfaceProfile)


#define Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_101_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_98_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_101_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_101_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_101_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_101_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_101_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_101_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_101_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h_101_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SubsurfaceProfile."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USubsurfaceProfile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_SubsurfaceProfile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
