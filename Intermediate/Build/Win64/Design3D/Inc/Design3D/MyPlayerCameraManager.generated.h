// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESIGN3D_MyPlayerCameraManager_generated_h
#error "MyPlayerCameraManager.generated.h already included, missing '#pragma once' in MyPlayerCameraManager.h"
#endif
#define DESIGN3D_MyPlayerCameraManager_generated_h

#define Design3D_Source_Design3D_MyPlayerCameraManager_h_15_RPC_WRAPPERS
#define Design3D_Source_Design3D_MyPlayerCameraManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Design3D_Source_Design3D_MyPlayerCameraManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerCameraManager(); \
	friend struct Z_Construct_UClass_AMyPlayerCameraManager_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Design3D"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerCameraManager)


#define Design3D_Source_Design3D_MyPlayerCameraManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayerCameraManager(); \
	friend struct Z_Construct_UClass_AMyPlayerCameraManager_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Design3D"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerCameraManager)


#define Design3D_Source_Design3D_MyPlayerCameraManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerCameraManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerCameraManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerCameraManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerCameraManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerCameraManager(AMyPlayerCameraManager&&); \
	NO_API AMyPlayerCameraManager(const AMyPlayerCameraManager&); \
public:


#define Design3D_Source_Design3D_MyPlayerCameraManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerCameraManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerCameraManager(AMyPlayerCameraManager&&); \
	NO_API AMyPlayerCameraManager(const AMyPlayerCameraManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerCameraManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerCameraManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerCameraManager)


#define Design3D_Source_Design3D_MyPlayerCameraManager_h_15_PRIVATE_PROPERTY_OFFSET
#define Design3D_Source_Design3D_MyPlayerCameraManager_h_12_PROLOG
#define Design3D_Source_Design3D_MyPlayerCameraManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Design3D_Source_Design3D_MyPlayerCameraManager_h_15_PRIVATE_PROPERTY_OFFSET \
	Design3D_Source_Design3D_MyPlayerCameraManager_h_15_RPC_WRAPPERS \
	Design3D_Source_Design3D_MyPlayerCameraManager_h_15_INCLASS \
	Design3D_Source_Design3D_MyPlayerCameraManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Design3D_Source_Design3D_MyPlayerCameraManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Design3D_Source_Design3D_MyPlayerCameraManager_h_15_PRIVATE_PROPERTY_OFFSET \
	Design3D_Source_Design3D_MyPlayerCameraManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Design3D_Source_Design3D_MyPlayerCameraManager_h_15_INCLASS_NO_PURE_DECLS \
	Design3D_Source_Design3D_MyPlayerCameraManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESIGN3D_API UClass* StaticClass<class AMyPlayerCameraManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Design3D_Source_Design3D_MyPlayerCameraManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
