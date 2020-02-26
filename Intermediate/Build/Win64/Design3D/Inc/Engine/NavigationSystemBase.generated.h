// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
struct FVector;
class AActor;
#ifdef ENGINE_NavigationSystemBase_generated_h
#error "NavigationSystemBase.generated.h already included, missing '#pragma once' in NavigationSystemBase.h"
#endif
#define ENGINE_NavigationSystemBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_208_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_208_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_208_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationSystemBase(); \
	friend struct Z_Construct_UClass_UNavigationSystemBase_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystemBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_208_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationSystemBase(); \
	friend struct Z_Construct_UClass_UNavigationSystemBase_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystemBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_208_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationSystemBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystemBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystemBase(UNavigationSystemBase&&); \
	NO_API UNavigationSystemBase(const UNavigationSystemBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_208_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationSystemBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystemBase(UNavigationSystemBase&&); \
	NO_API UNavigationSystemBase(const UNavigationSystemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystemBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemBase)


#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_208_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_205_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_208_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_208_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_208_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_208_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_208_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_208_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_208_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_208_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_208_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_208_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavigationSystemBase>();

#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_293_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSimpleMoveToLocation) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Goal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNavigationSystem::SimpleMoveToLocation(Z_Param_Controller,Z_Param_Out_Goal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimpleMoveToActor) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_GET_OBJECT(AActor,Z_Param_Goal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNavigationSystem::SimpleMoveToActor(Z_Param_Controller,Z_Param_Goal); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_293_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSimpleMoveToLocation) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Goal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNavigationSystem::SimpleMoveToLocation(Z_Param_Controller,Z_Param_Out_Goal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimpleMoveToActor) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_GET_OBJECT(AActor,Z_Param_Goal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UNavigationSystem::SimpleMoveToActor(Z_Param_Controller,Z_Param_Goal); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_293_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationSystem(); \
	friend struct Z_Construct_UClass_UNavigationSystem_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystem, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_293_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationSystem(); \
	friend struct Z_Construct_UClass_UNavigationSystem_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystem, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_293_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystem(UNavigationSystem&&); \
	NO_API UNavigationSystem(const UNavigationSystem&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_293_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystem(UNavigationSystem&&); \
	NO_API UNavigationSystem(const UNavigationSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystem)


#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_293_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_290_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_293_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_293_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_293_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_293_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_293_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_293_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_293_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_293_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_293_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_293_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavigationSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h


#define FOREACH_ENUM_FNAVIGATIONSYSTEMRUNMODE(op) \
	op(FNavigationSystemRunMode::InvalidMode) \
	op(FNavigationSystemRunMode::GameMode) \
	op(FNavigationSystemRunMode::EditorMode) \
	op(FNavigationSystemRunMode::SimulationMode) \
	op(FNavigationSystemRunMode::PIEMode) 

enum class FNavigationSystemRunMode : uint8;
template<> ENGINE_API UEnum* StaticEnum<FNavigationSystemRunMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
