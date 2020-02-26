// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeModulatorContinuous_generated_h
#error "SoundNodeModulatorContinuous.generated.h already included, missing '#pragma once' in SoundNodeModulatorContinuous.h"
#endif
#define ENGINE_SoundNodeModulatorContinuous_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModulatorContinuousParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FModulatorContinuousParams>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundNodeModulatorContinuous(); \
	friend struct Z_Construct_UClass_USoundNodeModulatorContinuous_Statics; \
public: \
	DECLARE_CLASS(USoundNodeModulatorContinuous, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundNodeModulatorContinuous)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeModulatorContinuous(); \
	friend struct Z_Construct_UClass_USoundNodeModulatorContinuous_Statics; \
public: \
	DECLARE_CLASS(USoundNodeModulatorContinuous, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundNodeModulatorContinuous)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundNodeModulatorContinuous(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeModulatorContinuous) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundNodeModulatorContinuous); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeModulatorContinuous); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundNodeModulatorContinuous(USoundNodeModulatorContinuous&&); \
	NO_API USoundNodeModulatorContinuous(const USoundNodeModulatorContinuous&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundNodeModulatorContinuous(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundNodeModulatorContinuous(USoundNodeModulatorContinuous&&); \
	NO_API USoundNodeModulatorContinuous(const USoundNodeModulatorContinuous&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundNodeModulatorContinuous); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeModulatorContinuous); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeModulatorContinuous)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_74_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h_77_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundNodeModulatorContinuous."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeModulatorContinuous>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulatorContinuous_h


#define FOREACH_ENUM_MODULATIONPARAMMODE(op) \
	op(MPM_Normal) \
	op(MPM_Abs) \
	op(MPM_Direct) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
