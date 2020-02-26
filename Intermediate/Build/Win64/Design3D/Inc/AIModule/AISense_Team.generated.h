// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISense_Team_generated_h
#error "AISense_Team.generated.h already included, missing '#pragma once' in AISense_Team.h"
#endif
#define AIMODULE_AISense_Team_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Broadcaster() { return STRUCT_OFFSET(FAITeamStimulusEvent, Broadcaster); }


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAITeamStimulusEvent>();

#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISense_Team(); \
	friend struct Z_Construct_UClass_UAISense_Team_Statics; \
public: \
	DECLARE_CLASS(UAISense_Team, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISense_Team)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUAISense_Team(); \
	friend struct Z_Construct_UClass_UAISense_Team_Statics; \
public: \
	DECLARE_CLASS(UAISense_Team, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISense_Team)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISense_Team(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Team) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Team); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Team); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISense_Team(UAISense_Team&&); \
	NO_API UAISense_Team(const UAISense_Team&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISense_Team(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISense_Team(UAISense_Team&&); \
	NO_API UAISense_Team(const UAISense_Team&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Team); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Team); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Team)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_49_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_52_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AISense_Team."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISense_Team>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
