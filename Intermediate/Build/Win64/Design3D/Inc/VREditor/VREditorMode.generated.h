// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREDITOR_VREditorMode_generated_h
#error "VREditorMode.generated.h already included, missing '#pragma once' in VREditorMode.h"
#endif
#define VREDITOR_VREditorMode_generated_h

#define Engine_Source_Editor_VREditor_Public_VREditorMode_h_55_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWorldScaleFactor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetWorldScaleFactor(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_VREditor_Public_VREditorMode_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWorldScaleFactor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetWorldScaleFactor(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_VREditor_Public_VREditorMode_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVREditorMode(); \
	friend struct Z_Construct_UClass_UVREditorMode_Statics; \
public: \
	DECLARE_CLASS(UVREditorMode, UEditorWorldExtension, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVREditorMode)


#define Engine_Source_Editor_VREditor_Public_VREditorMode_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUVREditorMode(); \
	friend struct Z_Construct_UClass_UVREditorMode_Statics; \
public: \
	DECLARE_CLASS(UVREditorMode, UEditorWorldExtension, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVREditorMode)


#define Engine_Source_Editor_VREditor_Public_VREditorMode_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVREditorMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVREditorMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREditorMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVREditorMode(UVREditorMode&&); \
	NO_API UVREditorMode(const UVREditorMode&); \
public:


#define Engine_Source_Editor_VREditor_Public_VREditorMode_h_55_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVREditorMode(UVREditorMode&&); \
	NO_API UVREditorMode(const UVREditorMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREditorMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVREditorMode)


#define Engine_Source_Editor_VREditor_Public_VREditorMode_h_55_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AvatarActor() { return STRUCT_OFFSET(UVREditorMode, AvatarActor); } \
	FORCEINLINE static uint32 __PPO__UISystem() { return STRUCT_OFFSET(UVREditorMode, UISystem); } \
	FORCEINLINE static uint32 __PPO__TeleportActor() { return STRUCT_OFFSET(UVREditorMode, TeleportActor); } \
	FORCEINLINE static uint32 __PPO__AutoScalerSystem() { return STRUCT_OFFSET(UVREditorMode, AutoScalerSystem); } \
	FORCEINLINE static uint32 __PPO__WorldInteraction() { return STRUCT_OFFSET(UVREditorMode, WorldInteraction); } \
	FORCEINLINE static uint32 __PPO__PlacementSystem() { return STRUCT_OFFSET(UVREditorMode, PlacementSystem); } \
	FORCEINLINE static uint32 __PPO__Interactors() { return STRUCT_OFFSET(UVREditorMode, Interactors); } \
	FORCEINLINE static uint32 __PPO__AssetContainer() { return STRUCT_OFFSET(UVREditorMode, AssetContainer); }


#define Engine_Source_Editor_VREditor_Public_VREditorMode_h_52_PROLOG
#define Engine_Source_Editor_VREditor_Public_VREditorMode_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_Public_VREditorMode_h_55_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_Public_VREditorMode_h_55_RPC_WRAPPERS \
	Engine_Source_Editor_VREditor_Public_VREditorMode_h_55_INCLASS \
	Engine_Source_Editor_VREditor_Public_VREditorMode_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_VREditor_Public_VREditorMode_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_Public_VREditorMode_h_55_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_Public_VREditorMode_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_Public_VREditorMode_h_55_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_Public_VREditorMode_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class UVREditorMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_VREditor_Public_VREditorMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
