// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class ULocalPlayerSubsystem;
class UObject;
class UGameInstanceSubsystem;
class UEngineSubsystem;
#ifdef ENGINE_SubsystemBlueprintLibrary_generated_h
#error "SubsystemBlueprintLibrary.generated.h already included, missing '#pragma once' in SubsystemBlueprintLibrary.h"
#endif
#define ENGINE_SubsystemBlueprintLibrary_generated_h

#define Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLocalPlayerSubSystemFromPlayerController) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULocalPlayerSubsystem**)Z_Param__Result=USubsystemBlueprintLibrary::GetLocalPlayerSubSystemFromPlayerController(Z_Param_PlayerController,Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalPlayerSubsystem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULocalPlayerSubsystem**)Z_Param__Result=USubsystemBlueprintLibrary::GetLocalPlayerSubsystem(Z_Param_ContextObject,Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameInstanceSubsystem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameInstanceSubsystem**)Z_Param__Result=USubsystemBlueprintLibrary::GetGameInstanceSubsystem(Z_Param_ContextObject,Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEngineSubsystem) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEngineSubsystem**)Z_Param__Result=USubsystemBlueprintLibrary::GetEngineSubsystem(Z_Param_Class); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLocalPlayerSubSystemFromPlayerController) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULocalPlayerSubsystem**)Z_Param__Result=USubsystemBlueprintLibrary::GetLocalPlayerSubSystemFromPlayerController(Z_Param_PlayerController,Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalPlayerSubsystem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULocalPlayerSubsystem**)Z_Param__Result=USubsystemBlueprintLibrary::GetLocalPlayerSubsystem(Z_Param_ContextObject,Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameInstanceSubsystem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameInstanceSubsystem**)Z_Param__Result=USubsystemBlueprintLibrary::GetGameInstanceSubsystem(Z_Param_ContextObject,Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEngineSubsystem) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEngineSubsystem**)Z_Param__Result=USubsystemBlueprintLibrary::GetEngineSubsystem(Z_Param_Class); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubsystemBlueprintLibrary(); \
	friend struct Z_Construct_UClass_USubsystemBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(USubsystemBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USubsystemBlueprintLibrary)


#define Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSubsystemBlueprintLibrary(); \
	friend struct Z_Construct_UClass_USubsystemBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(USubsystemBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USubsystemBlueprintLibrary)


#define Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubsystemBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubsystemBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubsystemBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubsystemBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubsystemBlueprintLibrary(USubsystemBlueprintLibrary&&); \
	NO_API USubsystemBlueprintLibrary(const USubsystemBlueprintLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubsystemBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubsystemBlueprintLibrary(USubsystemBlueprintLibrary&&); \
	NO_API USubsystemBlueprintLibrary(const USubsystemBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubsystemBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubsystemBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubsystemBlueprintLibrary)


#define Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_13_PROLOG
#define Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_16_INCLASS \
	Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USubsystemBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_Subsystems_SubsystemBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
