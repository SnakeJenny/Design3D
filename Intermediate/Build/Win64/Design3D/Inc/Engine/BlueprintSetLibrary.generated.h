// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef ENGINE_BlueprintSetLibrary_generated_h
#error "BlueprintSetLibrary.generated.h already included, missing '#pragma once' in BlueprintSetLibrary.h"
#endif
#define ENGINE_BlueprintSetLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h_16_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintSetLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintSetLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintSetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintSetLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintSetLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintSetLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintSetLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintSetLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintSetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintSetLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintSetLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintSetLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintSetLibrary(UBlueprintSetLibrary&&); \
	NO_API UBlueprintSetLibrary(const UBlueprintSetLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintSetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintSetLibrary(UBlueprintSetLibrary&&); \
	NO_API UBlueprintSetLibrary(const UBlueprintSetLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintSetLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintSetLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintSetLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h_13_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h_16_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlueprintSetLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintSetLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
