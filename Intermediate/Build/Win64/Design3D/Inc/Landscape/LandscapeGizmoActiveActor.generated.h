// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeGizmoActiveActor_generated_h
#error "LandscapeGizmoActiveActor.generated.h already included, missing '#pragma once' in LandscapeGizmoActiveActor.h"
#endif
#define LANDSCAPE_LandscapeGizmoActiveActor_generated_h

#define Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGizmoSelectData_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FGizmoSelectData>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_56_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_56_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscapeGizmoActiveActor(); \
	friend struct Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics; \
public: \
	DECLARE_CLASS(ALandscapeGizmoActiveActor, ALandscapeGizmoActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscapeGizmoActiveActor)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_56_INCLASS \
private: \
	static void StaticRegisterNativesALandscapeGizmoActiveActor(); \
	friend struct Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics; \
public: \
	DECLARE_CLASS(ALandscapeGizmoActiveActor, ALandscapeGizmoActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscapeGizmoActiveActor)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ALandscapeGizmoActiveActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeGizmoActiveActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeGizmoActiveActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeGizmoActiveActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ALandscapeGizmoActiveActor(ALandscapeGizmoActiveActor&&); \
	LANDSCAPE_API ALandscapeGizmoActiveActor(const ALandscapeGizmoActiveActor&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ALandscapeGizmoActiveActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ALandscapeGizmoActiveActor(ALandscapeGizmoActiveActor&&); \
	LANDSCAPE_API ALandscapeGizmoActiveActor(const ALandscapeGizmoActiveActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeGizmoActiveActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeGizmoActiveActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeGizmoActiveActor)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_56_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_53_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_56_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_56_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_56_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_56_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeGizmoActiveActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ALandscapeGizmoActiveActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h


#define FOREACH_ENUM_ELANDSCAPEGIZMOTYPE(op) \
	op(LGT_None) \
	op(LGT_Height) \
	op(LGT_Weight) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
