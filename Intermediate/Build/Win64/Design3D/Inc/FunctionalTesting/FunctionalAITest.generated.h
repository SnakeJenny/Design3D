// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAIController;
class APawn;
class AActor;
#ifdef FUNCTIONALTESTING_FunctionalAITest_generated_h
#error "FunctionalAITest.generated.h already included, missing '#pragma once' in FunctionalAITest.h"
#endif
#define FUNCTIONALTESTING_FunctionalAITest_generated_h

#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAITestSpawnSet_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct();


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FAITestSpawnSet>();

#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPendingDelayedSpawn_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct(); \
	typedef FAITestSpawnInfo Super;


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FPendingDelayedSpawn>();

#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct();


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FAITestSpawnInfo>();

#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_17_DELEGATE \
struct _Script_FunctionalTesting_eventFunctionalTestAISpawned_Parms \
{ \
	AAIController* Controller; \
	APawn* Pawn; \
}; \
static inline void FFunctionalTestAISpawned_DelegateWrapper(const FMulticastScriptDelegate& FunctionalTestAISpawned, AAIController* Controller, APawn* Pawn) \
{ \
	_Script_FunctionalTesting_eventFunctionalTestAISpawned_Parms Parms; \
	Parms.Controller=Controller; \
	Parms.Pawn=Pawn; \
	FunctionalTestAISpawned.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_116_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsOneOfSpawnedPawns) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOneOfSpawnedPawns(Z_Param_Actor); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsOneOfSpawnedPawns) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOneOfSpawnedPawns(Z_Param_Actor); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFunctionalAITest(); \
	friend struct Z_Construct_UClass_AFunctionalAITest_Statics; \
public: \
	DECLARE_CLASS(AFunctionalAITest, AFunctionalTest, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), FUNCTIONALTESTING_API) \
	DECLARE_SERIALIZER(AFunctionalAITest)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_116_INCLASS \
private: \
	static void StaticRegisterNativesAFunctionalAITest(); \
	friend struct Z_Construct_UClass_AFunctionalAITest_Statics; \
public: \
	DECLARE_CLASS(AFunctionalAITest, AFunctionalTest, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), FUNCTIONALTESTING_API) \
	DECLARE_SERIALIZER(AFunctionalAITest)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_116_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FUNCTIONALTESTING_API AFunctionalAITest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalAITest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, AFunctionalAITest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalAITest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FUNCTIONALTESTING_API AFunctionalAITest(AFunctionalAITest&&); \
	FUNCTIONALTESTING_API AFunctionalAITest(const AFunctionalAITest&); \
public:


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_116_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FUNCTIONALTESTING_API AFunctionalAITest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FUNCTIONALTESTING_API AFunctionalAITest(AFunctionalAITest&&); \
	FUNCTIONALTESTING_API AFunctionalAITest(const AFunctionalAITest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, AFunctionalAITest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalAITest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalAITest)


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_116_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnSets() { return STRUCT_OFFSET(AFunctionalAITest, SpawnSets); } \
	FORCEINLINE static uint32 __PPO__SpawnLocationRandomizationRange() { return STRUCT_OFFSET(AFunctionalAITest, SpawnLocationRandomizationRange); } \
	FORCEINLINE static uint32 __PPO__SpawnedPawns() { return STRUCT_OFFSET(AFunctionalAITest, SpawnedPawns); } \
	FORCEINLINE static uint32 __PPO__PendingDelayedSpawns() { return STRUCT_OFFSET(AFunctionalAITest, PendingDelayedSpawns); } \
	FORCEINLINE static uint32 __PPO__CurrentSpawnSetIndex() { return STRUCT_OFFSET(AFunctionalAITest, CurrentSpawnSetIndex); } \
	FORCEINLINE static uint32 __PPO__CurrentSpawnSetName() { return STRUCT_OFFSET(AFunctionalAITest, CurrentSpawnSetName); } \
	FORCEINLINE static uint32 __PPO__OnAISpawned() { return STRUCT_OFFSET(AFunctionalAITest, OnAISpawned); } \
	FORCEINLINE static uint32 __PPO__OnAllAISPawned() { return STRUCT_OFFSET(AFunctionalAITest, OnAllAISPawned); } \
	FORCEINLINE static uint32 __PPO__NavMeshDebugOrigin() { return STRUCT_OFFSET(AFunctionalAITest, NavMeshDebugOrigin); } \
	FORCEINLINE static uint32 __PPO__NavMeshDebugExtent() { return STRUCT_OFFSET(AFunctionalAITest, NavMeshDebugExtent); }


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_113_PROLOG
#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_116_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_116_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_116_RPC_WRAPPERS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_116_INCLASS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_116_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_116_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_116_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_116_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FunctionalAITest."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class AFunctionalAITest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
