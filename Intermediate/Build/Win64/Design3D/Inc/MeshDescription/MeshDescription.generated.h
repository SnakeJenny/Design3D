// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHDESCRIPTION_MeshDescription_generated_h
#error "MeshDescription.generated.h already included, missing '#pragma once' in MeshDescription.h"
#endif
#define MESHDESCRIPTION_MeshDescription_generated_h

#define Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshTriangle_Statics; \
	MESHDESCRIPTION_API static class UScriptStruct* StaticStruct();


template<> MESHDESCRIPTION_API UScriptStruct* StaticStruct<struct FMeshTriangle>();

#define Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_940_RPC_WRAPPERS
#define Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_940_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_940_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDEPRECATED_MeshDescription, NO_API)


#define Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_940_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_MeshDescription(); \
	friend struct Z_Construct_UClass_UDEPRECATED_MeshDescription_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_MeshDescription, UObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/MeshDescription"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_MeshDescription) \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_940_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_940_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_MeshDescription(); \
	friend struct Z_Construct_UClass_UDEPRECATED_MeshDescription_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_MeshDescription, UObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/MeshDescription"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_MeshDescription) \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_940_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_940_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_MeshDescription(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_MeshDescription) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_MeshDescription); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_MeshDescription); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_MeshDescription(UDEPRECATED_MeshDescription&&); \
	NO_API UDEPRECATED_MeshDescription(const UDEPRECATED_MeshDescription&); \
public:


#define Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_940_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_MeshDescription(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_MeshDescription(UDEPRECATED_MeshDescription&&); \
	NO_API UDEPRECATED_MeshDescription(const UDEPRECATED_MeshDescription&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_MeshDescription); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_MeshDescription); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_MeshDescription)


#define Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_940_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_936_PROLOG
#define Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_940_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_940_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_940_RPC_WRAPPERS \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_940_INCLASS \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_940_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_940_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_940_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_940_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_940_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h_940_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHDESCRIPTION_API UClass* StaticClass<class UDEPRECATED_MeshDescription>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MeshDescription_Public_MeshDescription_h


#define FOREACH_ENUM_ECOMPUTENTBSOPTIONS(op) \
	op(EComputeNTBsOptions::None) \
	op(EComputeNTBsOptions::Normals) \
	op(EComputeNTBsOptions::Tangents) \
	op(EComputeNTBsOptions::WeightedNTBs) 

enum class EComputeNTBsOptions : uint32;
template<> MESHDESCRIPTION_API UEnum* StaticEnum<EComputeNTBsOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
