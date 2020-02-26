// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DistributionVector_generated_h
#error "DistributionVector.generated.h already included, missing '#pragma once' in DistributionVector.h"
#endif
#define ENGINE_DistributionVector_generated_h

#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRawDistributionVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__MinValue() { return STRUCT_OFFSET(FRawDistributionVector, MinValue); } \
	FORCEINLINE static uint32 __PPO__MaxValue() { return STRUCT_OFFSET(FRawDistributionVector, MaxValue); } \
	FORCEINLINE static uint32 __PPO__MinValueVec() { return STRUCT_OFFSET(FRawDistributionVector, MinValueVec); } \
	FORCEINLINE static uint32 __PPO__MaxValueVec() { return STRUCT_OFFSET(FRawDistributionVector, MaxValueVec); } \
	typedef FRawDistribution Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRawDistributionVector>();

#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UDistributionVector, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDistributionVector(); \
	friend struct Z_Construct_UClass_UDistributionVector_Statics; \
public: \
	DECLARE_CLASS(UDistributionVector, UDistribution, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDistributionVector) \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_INCLASS \
private: \
	static void StaticRegisterNativesUDistributionVector(); \
	friend struct Z_Construct_UClass_UDistributionVector_Statics; \
public: \
	DECLARE_CLASS(UDistributionVector, UDistribution, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDistributionVector) \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionVector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDistributionVector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionVector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDistributionVector(UDistributionVector&&); \
	NO_API UDistributionVector(const UDistributionVector&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDistributionVector(UDistributionVector&&); \
	NO_API UDistributionVector(const UDistributionVector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDistributionVector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionVector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionVector)


#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_146_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h_149_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DistributionVector."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDistributionVector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVector_h


#define FOREACH_ENUM_EDISTRIBUTIONVECTORMIRRORFLAGS(op) \
	op(EDVMF_Same) \
	op(EDVMF_Different) \
	op(EDVMF_Mirror) 
#define FOREACH_ENUM_EDISTRIBUTIONVECTORLOCKFLAGS(op) \
	op(EDVLF_None) \
	op(EDVLF_XY) \
	op(EDVLF_XZ) \
	op(EDVLF_YZ) \
	op(EDVLF_XYZ) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
