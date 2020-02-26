// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAIController;
class UEnvQuery;
class UAITask_RunEQS;
#ifdef AIMODULE_AITask_RunEQS_generated_h
#error "AITask_RunEQS.generated.h already included, missing '#pragma once' in AITask_RunEQS.h"
#endif
#define AIMODULE_AITask_RunEQS_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRunEQS) \
	{ \
		P_GET_OBJECT(AAIController,Z_Param_Controller); \
		P_GET_OBJECT(UEnvQuery,Z_Param_QueryTemplate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAITask_RunEQS**)Z_Param__Result=UAITask_RunEQS::RunEQS(Z_Param_Controller,Z_Param_QueryTemplate); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRunEQS) \
	{ \
		P_GET_OBJECT(AAIController,Z_Param_Controller); \
		P_GET_OBJECT(UEnvQuery,Z_Param_QueryTemplate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAITask_RunEQS**)Z_Param__Result=UAITask_RunEQS::RunEQS(Z_Param_Controller,Z_Param_QueryTemplate); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAITask_RunEQS(); \
	friend struct Z_Construct_UClass_UAITask_RunEQS_Statics; \
public: \
	DECLARE_CLASS(UAITask_RunEQS, UAITask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAITask_RunEQS)


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAITask_RunEQS(); \
	friend struct Z_Construct_UClass_UAITask_RunEQS_Statics; \
public: \
	DECLARE_CLASS(UAITask_RunEQS, UAITask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAITask_RunEQS)


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAITask_RunEQS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITask_RunEQS) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAITask_RunEQS); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITask_RunEQS); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAITask_RunEQS(UAITask_RunEQS&&); \
	NO_API UAITask_RunEQS(const UAITask_RunEQS&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAITask_RunEQS(UAITask_RunEQS&&); \
	NO_API UAITask_RunEQS(const UAITask_RunEQS&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAITask_RunEQS); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITask_RunEQS); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITask_RunEQS)


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_14_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAITask_RunEQS>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_RunEQS_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
