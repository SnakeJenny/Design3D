// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESIGN3D_MytestPawn_generated_h
#error "MytestPawn.generated.h already included, missing '#pragma once' in MytestPawn.h"
#endif
#define DESIGN3D_MytestPawn_generated_h

#define Design3D_Source_Design3D_MytestPawn_h_14_RPC_WRAPPERS
#define Design3D_Source_Design3D_MytestPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Design3D_Source_Design3D_MytestPawn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMytestPawn(); \
	friend struct Z_Construct_UClass_AMytestPawn_Statics; \
public: \
	DECLARE_CLASS(AMytestPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Design3D"), NO_API) \
	DECLARE_SERIALIZER(AMytestPawn)


#define Design3D_Source_Design3D_MytestPawn_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMytestPawn(); \
	friend struct Z_Construct_UClass_AMytestPawn_Statics; \
public: \
	DECLARE_CLASS(AMytestPawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Design3D"), NO_API) \
	DECLARE_SERIALIZER(AMytestPawn)


#define Design3D_Source_Design3D_MytestPawn_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMytestPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMytestPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMytestPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMytestPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMytestPawn(AMytestPawn&&); \
	NO_API AMytestPawn(const AMytestPawn&); \
public:


#define Design3D_Source_Design3D_MytestPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMytestPawn(AMytestPawn&&); \
	NO_API AMytestPawn(const AMytestPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMytestPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMytestPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMytestPawn)


#define Design3D_Source_Design3D_MytestPawn_h_14_PRIVATE_PROPERTY_OFFSET
#define Design3D_Source_Design3D_MytestPawn_h_11_PROLOG
#define Design3D_Source_Design3D_MytestPawn_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Design3D_Source_Design3D_MytestPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	Design3D_Source_Design3D_MytestPawn_h_14_RPC_WRAPPERS \
	Design3D_Source_Design3D_MytestPawn_h_14_INCLASS \
	Design3D_Source_Design3D_MytestPawn_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Design3D_Source_Design3D_MytestPawn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Design3D_Source_Design3D_MytestPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	Design3D_Source_Design3D_MytestPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Design3D_Source_Design3D_MytestPawn_h_14_INCLASS_NO_PURE_DECLS \
	Design3D_Source_Design3D_MytestPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESIGN3D_API UClass* StaticClass<class AMytestPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Design3D_Source_Design3D_MytestPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
