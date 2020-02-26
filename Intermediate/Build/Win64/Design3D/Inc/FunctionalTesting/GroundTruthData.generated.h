// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef FUNCTIONALTESTING_GroundTruthData_generated_h
#error "GroundTruthData.generated.h already included, missing '#pragma once' in GroundTruthData.h"
#endif
#define FUNCTIONALTESTING_GroundTruthData_generated_h

#define Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanModify) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanModify(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->LoadObject(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_GroundTruth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveObject(Z_Param_GroundTruth); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanModify) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanModify(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->LoadObject(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_GroundTruth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveObject(Z_Param_GroundTruth); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGroundTruthData(); \
	friend struct Z_Construct_UClass_UGroundTruthData_Statics; \
public: \
	DECLARE_CLASS(UGroundTruthData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UGroundTruthData)


#define Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGroundTruthData(); \
	friend struct Z_Construct_UClass_UGroundTruthData_Statics; \
public: \
	DECLARE_CLASS(UGroundTruthData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UGroundTruthData)


#define Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGroundTruthData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroundTruthData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGroundTruthData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroundTruthData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGroundTruthData(UGroundTruthData&&); \
	NO_API UGroundTruthData(const UGroundTruthData&); \
public:


#define Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGroundTruthData(UGroundTruthData&&); \
	NO_API UGroundTruthData(const UGroundTruthData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGroundTruthData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroundTruthData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGroundTruthData)


#define Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ObjectData() { return STRUCT_OFFSET(UGroundTruthData, ObjectData); }


#define Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_14_PROLOG
#define Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_17_RPC_WRAPPERS \
	Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_17_INCLASS \
	Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class UGroundTruthData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
