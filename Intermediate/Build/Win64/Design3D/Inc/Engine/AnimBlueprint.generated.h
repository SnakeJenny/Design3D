// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimBlueprint_generated_h
#error "AnimBlueprint.generated.h already included, missing '#pragma once' in AnimBlueprint.h"
#endif
#define ENGINE_AnimBlueprint_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimParentNodeAssetOverride>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimGroupInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimGroupInfo>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_66_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_66_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_66_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimBlueprint, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimBlueprint(); \
	friend struct Z_Construct_UClass_UAnimBlueprint_Statics; \
public: \
	DECLARE_CLASS(UAnimBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimBlueprint) \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_66_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAnimBlueprint*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUAnimBlueprint(); \
	friend struct Z_Construct_UClass_UAnimBlueprint_Statics; \
public: \
	DECLARE_CLASS(UAnimBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimBlueprint) \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_66_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAnimBlueprint*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimBlueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimBlueprint(UAnimBlueprint&&); \
	NO_API UAnimBlueprint(const UAnimBlueprint&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimBlueprint(UAnimBlueprint&&); \
	NO_API UAnimBlueprint(const UAnimBlueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimBlueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimBlueprint)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_66_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_63_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_66_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_66_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_66_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_66_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_66_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h_66_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimBlueprint."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
