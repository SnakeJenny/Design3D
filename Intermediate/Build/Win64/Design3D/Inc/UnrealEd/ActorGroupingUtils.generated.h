// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorGroupingUtils;
#ifdef UNREALED_ActorGroupingUtils_generated_h
#error "ActorGroupingUtils.generated.h already included, missing '#pragma once' in ActorGroupingUtils.h"
#endif
#define UNREALED_ActorGroupingUtils_generated_h

#define Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveSelectedFromGroup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveSelectedFromGroup(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSelectedToGroup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddSelectedToGroup(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockSelectedGroups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnlockSelectedGroups(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLockSelectedGroups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LockSelectedGroups(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUngroupActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToUngroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UngroupActors(Z_Param_Out_ActorsToUngroup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUngroupSelected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UngroupSelected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGroupActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GroupActors(Z_Param_Out_ActorsToGroup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGroupSelected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GroupSelected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UActorGroupingUtils**)Z_Param__Result=UActorGroupingUtils::Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupingActive) \
	{ \
		P_GET_UBOOL(Z_Param_bInGroupingActive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UActorGroupingUtils::SetGroupingActive(Z_Param_bInGroupingActive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsGroupingActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UActorGroupingUtils::IsGroupingActive(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveSelectedFromGroup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveSelectedFromGroup(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSelectedToGroup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddSelectedToGroup(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockSelectedGroups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnlockSelectedGroups(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLockSelectedGroups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LockSelectedGroups(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUngroupActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToUngroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UngroupActors(Z_Param_Out_ActorsToUngroup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUngroupSelected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UngroupSelected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGroupActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GroupActors(Z_Param_Out_ActorsToGroup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGroupSelected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GroupSelected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UActorGroupingUtils**)Z_Param__Result=UActorGroupingUtils::Get(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupingActive) \
	{ \
		P_GET_UBOOL(Z_Param_bInGroupingActive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UActorGroupingUtils::SetGroupingActive(Z_Param_bInGroupingActive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsGroupingActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UActorGroupingUtils::IsGroupingActive(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorGroupingUtils(); \
	friend struct Z_Construct_UClass_UActorGroupingUtils_Statics; \
public: \
	DECLARE_CLASS(UActorGroupingUtils, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UActorGroupingUtils)


#define Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUActorGroupingUtils(); \
	friend struct Z_Construct_UClass_UActorGroupingUtils_Statics; \
public: \
	DECLARE_CLASS(UActorGroupingUtils, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UActorGroupingUtils)


#define Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorGroupingUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorGroupingUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorGroupingUtils); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorGroupingUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorGroupingUtils(UActorGroupingUtils&&); \
	NO_API UActorGroupingUtils(const UActorGroupingUtils&); \
public:


#define Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorGroupingUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorGroupingUtils(UActorGroupingUtils&&); \
	NO_API UActorGroupingUtils(const UActorGroupingUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorGroupingUtils); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorGroupingUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorGroupingUtils)


#define Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_12_PROLOG
#define Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_INCLASS \
	Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UActorGroupingUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
