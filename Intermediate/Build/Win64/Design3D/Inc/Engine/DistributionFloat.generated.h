// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DistributionFloat_generated_h
#error "DistributionFloat.generated.h already included, missing '#pragma once' in DistributionFloat.h"
#endif
#define ENGINE_DistributionFloat_generated_h

#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRawDistributionFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__MinValue() { return STRUCT_OFFSET(FRawDistributionFloat, MinValue); } \
	FORCEINLINE static uint32 __PPO__MaxValue() { return STRUCT_OFFSET(FRawDistributionFloat, MaxValue); } \
	typedef FRawDistribution Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRawDistributionFloat>();

#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_104_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_104_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_104_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UDistributionFloat, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDistributionFloat(); \
	friend struct Z_Construct_UClass_UDistributionFloat_Statics; \
public: \
	DECLARE_CLASS(UDistributionFloat, UDistribution, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDistributionFloat) \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_104_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_104_INCLASS \
private: \
	static void StaticRegisterNativesUDistributionFloat(); \
	friend struct Z_Construct_UClass_UDistributionFloat_Statics; \
public: \
	DECLARE_CLASS(UDistributionFloat, UDistribution, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDistributionFloat) \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_104_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_104_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionFloat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDistributionFloat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionFloat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDistributionFloat(UDistributionFloat&&); \
	NO_API UDistributionFloat(const UDistributionFloat&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_104_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDistributionFloat(UDistributionFloat&&); \
	NO_API UDistributionFloat(const UDistributionFloat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDistributionFloat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionFloat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionFloat)


#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_104_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_101_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_104_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_104_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_104_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_104_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_104_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_104_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_104_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h_104_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DistributionFloat."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDistributionFloat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
