// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Rig_generated_h
#error "Rig.generated.h already included, missing '#pragma once' in Rig.h"
#endif
#define ENGINE_Rig_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformBase_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTransformBase>();

#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformBaseConstraint_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTransformBaseConstraint>();

#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigTransformConstraint_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRigTransformConstraint>();

#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNode_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNode>();

#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_148_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_148_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_148_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URig, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURig(); \
	friend struct Z_Construct_UClass_URig_Statics; \
public: \
	DECLARE_CLASS(URig, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(URig) \
	Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_148_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<URig*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_148_INCLASS \
private: \
	static void StaticRegisterNativesURig(); \
	friend struct Z_Construct_UClass_URig_Statics; \
public: \
	DECLARE_CLASS(URig, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(URig) \
	Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_148_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<URig*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_148_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API URig(URig&&); \
	ENGINE_API URig(const URig&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_148_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API URig(URig&&); \
	ENGINE_API URig(const URig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URig)


#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_148_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TransformBases() { return STRUCT_OFFSET(URig, TransformBases); } \
	FORCEINLINE static uint32 __PPO__Nodes() { return STRUCT_OFFSET(URig, Nodes); }


#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_145_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_148_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_148_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_148_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_148_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_148_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_148_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_148_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_Rig_h_148_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Rig."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_Rig_h


#define FOREACH_ENUM_ECONSTRAINTTRANSFORM(op) \
	op(EConstraintTransform::Absolute) \
	op(EConstraintTransform::Relative) 
#define FOREACH_ENUM_ECONTROLCONSTRAINT(op) \
	op(EControlConstraint::Orientation) \
	op(EControlConstraint::Translation) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
