// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_RecastNavMesh_generated_h
#error "RecastNavMesh.generated.h already included, missing '#pragma once' in RecastNavMesh.h"
#endif
#define NAVIGATIONSYSTEM_RecastNavMesh_generated_h

#define Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_278_RPC_WRAPPERS
#define Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_278_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_278_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ARecastNavMesh, NO_API)


#define Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_278_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARecastNavMesh(); \
	friend struct Z_Construct_UClass_ARecastNavMesh_Statics; \
public: \
	DECLARE_CLASS(ARecastNavMesh, ANavigationData, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(ARecastNavMesh) \
	Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_278_ARCHIVESERIALIZER


#define Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_278_INCLASS \
private: \
	static void StaticRegisterNativesARecastNavMesh(); \
	friend struct Z_Construct_UClass_ARecastNavMesh_Statics; \
public: \
	DECLARE_CLASS(ARecastNavMesh, ANavigationData, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(ARecastNavMesh) \
	Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_278_ARCHIVESERIALIZER


#define Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_278_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARecastNavMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARecastNavMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARecastNavMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARecastNavMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARecastNavMesh(ARecastNavMesh&&); \
	NO_API ARecastNavMesh(const ARecastNavMesh&); \
public:


#define Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_278_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARecastNavMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARecastNavMesh(ARecastNavMesh&&); \
	NO_API ARecastNavMesh(const ARecastNavMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARecastNavMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARecastNavMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARecastNavMesh)


#define Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_278_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TileSetUpdateInterval() { return STRUCT_OFFSET(ARecastNavMesh, TileSetUpdateInterval); }


#define Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_275_PROLOG
#define Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_278_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_278_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_278_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_278_INCLASS \
	Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_278_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_278_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_278_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_278_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_278_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h_278_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RecastNavMesh."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class ARecastNavMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_NavigationSystem_Public_NavMesh_RecastNavMesh_h


#define FOREACH_ENUM_ERECASTPARTITIONING(op) \
	op(ERecastPartitioning::Monotone) \
	op(ERecastPartitioning::Watershed) \
	op(ERecastPartitioning::ChunkyMonotone) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
