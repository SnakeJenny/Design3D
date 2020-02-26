// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavCollision_generated_h
#error "NavCollision.generated.h already included, missing '#pragma once' in NavCollision.h"
#endif
#define NAVIGATIONSYSTEM_NavCollision_generated_h

#define Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavCollisionBox_Statics; \
	NAVIGATIONSYSTEM_API static class UScriptStruct* StaticStruct();


template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<struct FNavCollisionBox>();

#define Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics; \
	NAVIGATIONSYSTEM_API static class UScriptStruct* StaticStruct();


template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<struct FNavCollisionCylinder>();

#define Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_49_RPC_WRAPPERS
#define Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_49_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_49_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNavCollision, NO_API)


#define Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavCollision(); \
	friend struct Z_Construct_UClass_UNavCollision_Statics; \
public: \
	DECLARE_CLASS(UNavCollision, UNavCollisionBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavCollision) \
	Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_49_ARCHIVESERIALIZER


#define Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUNavCollision(); \
	friend struct Z_Construct_UClass_UNavCollision_Statics; \
public: \
	DECLARE_CLASS(UNavCollision, UNavCollisionBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavCollision) \
	Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_49_ARCHIVESERIALIZER


#define Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavCollision(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavCollision) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavCollision); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavCollision); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavCollision(UNavCollision&&); \
	NO_API UNavCollision(const UNavCollision&); \
public:


#define Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavCollision(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavCollision(UNavCollision&&); \
	NO_API UNavCollision(const UNavCollision&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavCollision); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavCollision); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavCollision)


#define Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_49_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_46_PROLOG
#define Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_49_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_49_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_49_INCLASS \
	Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_49_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_49_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_49_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavCollision."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavCollision>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
