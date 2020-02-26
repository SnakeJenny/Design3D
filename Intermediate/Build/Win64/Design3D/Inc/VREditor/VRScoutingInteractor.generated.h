// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef VREDITOR_VRScoutingInteractor_generated_h
#error "VRScoutingInteractor.generated.h already included, missing '#pragma once' in VRScoutingInteractor.h"
#endif
#define VREDITOR_VRScoutingInteractor_generated_h

#define Engine_Source_Editor_VREditor_VRScoutingInteractor_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSelectedActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=UVRScoutingInteractor::GetSelectedActors(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_VREditor_VRScoutingInteractor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSelectedActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=UVRScoutingInteractor::GetSelectedActors(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_VREditor_VRScoutingInteractor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRScoutingInteractor(); \
	friend struct Z_Construct_UClass_UVRScoutingInteractor_Statics; \
public: \
	DECLARE_CLASS(UVRScoutingInteractor, UVREditorInteractor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVRScoutingInteractor)


#define Engine_Source_Editor_VREditor_VRScoutingInteractor_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUVRScoutingInteractor(); \
	friend struct Z_Construct_UClass_UVRScoutingInteractor_Statics; \
public: \
	DECLARE_CLASS(UVRScoutingInteractor, UVREditorInteractor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVRScoutingInteractor)


#define Engine_Source_Editor_VREditor_VRScoutingInteractor_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRScoutingInteractor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRScoutingInteractor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRScoutingInteractor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRScoutingInteractor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRScoutingInteractor(UVRScoutingInteractor&&); \
	NO_API UVRScoutingInteractor(const UVRScoutingInteractor&); \
public:


#define Engine_Source_Editor_VREditor_VRScoutingInteractor_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRScoutingInteractor(UVRScoutingInteractor&&); \
	NO_API UVRScoutingInteractor(const UVRScoutingInteractor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRScoutingInteractor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRScoutingInteractor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVRScoutingInteractor)


#define Engine_Source_Editor_VREditor_VRScoutingInteractor_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_VREditor_VRScoutingInteractor_h_19_PROLOG
#define Engine_Source_Editor_VREditor_VRScoutingInteractor_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_VRScoutingInteractor_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_VRScoutingInteractor_h_22_RPC_WRAPPERS \
	Engine_Source_Editor_VREditor_VRScoutingInteractor_h_22_INCLASS \
	Engine_Source_Editor_VREditor_VRScoutingInteractor_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_VREditor_VRScoutingInteractor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_VREditor_VRScoutingInteractor_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_VREditor_VRScoutingInteractor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_VRScoutingInteractor_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_VREditor_VRScoutingInteractor_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class UVRScoutingInteractor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_VREditor_VRScoutingInteractor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
