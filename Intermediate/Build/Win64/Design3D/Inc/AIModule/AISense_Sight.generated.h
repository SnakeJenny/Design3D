// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISense_Sight_generated_h
#error "AISense_Sight.generated.h already included, missing '#pragma once' in AISense_Sight.h"
#endif
#define AIMODULE_AISense_Sight_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAISightEvent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAISightEvent>();

#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_115_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_115_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISense_Sight(); \
	friend struct Z_Construct_UClass_UAISense_Sight_Statics; \
public: \
	DECLARE_CLASS(UAISense_Sight, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISense_Sight) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUAISense_Sight(); \
	friend struct Z_Construct_UClass_UAISense_Sight_Statics; \
public: \
	DECLARE_CLASS(UAISense_Sight, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISense_Sight) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISense_Sight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Sight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Sight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Sight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISense_Sight(UAISense_Sight&&); \
	NO_API UAISense_Sight(const UAISense_Sight&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISense_Sight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISense_Sight(UAISense_Sight&&); \
	NO_API UAISense_Sight(const UAISense_Sight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Sight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Sight); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Sight)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_115_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxTracesPerTick() { return STRUCT_OFFSET(UAISense_Sight, MaxTracesPerTick); } \
	FORCEINLINE static uint32 __PPO__MinQueriesPerTimeSliceCheck() { return STRUCT_OFFSET(UAISense_Sight, MinQueriesPerTimeSliceCheck); } \
	FORCEINLINE static uint32 __PPO__MaxTimeSlicePerTick() { return STRUCT_OFFSET(UAISense_Sight, MaxTimeSlicePerTick); } \
	FORCEINLINE static uint32 __PPO__HighImportanceQueryDistanceThreshold() { return STRUCT_OFFSET(UAISense_Sight, HighImportanceQueryDistanceThreshold); } \
	FORCEINLINE static uint32 __PPO__MaxQueryImportance() { return STRUCT_OFFSET(UAISense_Sight, MaxQueryImportance); } \
	FORCEINLINE static uint32 __PPO__SightLimitQueryImportance() { return STRUCT_OFFSET(UAISense_Sight, SightLimitQueryImportance); }


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_112_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_115_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_115_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_115_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_115_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_115_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_115_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AISense_Sight."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISense_Sight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
