// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOLIAGE_FoliageType_generated_h
#error "FoliageType.generated.h already included, missing '#pragma once' in FoliageType.h"
#endif
#define FOLIAGE_FoliageType_generated_h

#define Engine_Source_Runtime_Foliage_Public_FoliageType_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics; \
	FOLIAGE_API static class UScriptStruct* StaticStruct();


template<> FOLIAGE_API UScriptStruct* StaticStruct<struct FFoliageVertexColorChannelMask>();

#define Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_RPC_WRAPPERS
#define Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFoliageType, FOLIAGE_API)


#define Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFoliageType(); \
	friend struct Z_Construct_UClass_UFoliageType_Statics; \
public: \
	DECLARE_CLASS(UFoliageType, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foliage"), FOLIAGE_API) \
	DECLARE_SERIALIZER(UFoliageType) \
	Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUFoliageType(); \
	friend struct Z_Construct_UClass_UFoliageType_Statics; \
public: \
	DECLARE_CLASS(UFoliageType, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foliage"), FOLIAGE_API) \
	DECLARE_SERIALIZER(UFoliageType) \
	Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOLIAGE_API UFoliageType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoliageType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOLIAGE_API, UFoliageType); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoliageType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FOLIAGE_API UFoliageType(UFoliageType&&); \
	FOLIAGE_API UFoliageType(const UFoliageType&); \
public:


#define Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOLIAGE_API UFoliageType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FOLIAGE_API UFoliageType(UFoliageType&&); \
	FOLIAGE_API UFoliageType(const UFoliageType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOLIAGE_API, UFoliageType); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoliageType); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoliageType)


#define Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Foliage_Public_FoliageType_h_82_PROLOG
#define Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_RPC_WRAPPERS \
	Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_INCLASS \
	Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Foliage_Public_FoliageType_h_85_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FoliageType."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGE_API UClass* StaticClass<class UFoliageType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Foliage_Public_FoliageType_h


#define FOREACH_ENUM_EFOLIAGESCALING(op) \
	op(EFoliageScaling::Uniform) \
	op(EFoliageScaling::Free) \
	op(EFoliageScaling::LockXY) \
	op(EFoliageScaling::LockXZ) \
	op(EFoliageScaling::LockYZ) 

enum class EFoliageScaling : uint8;
template<> FOLIAGE_API UEnum* StaticEnum<EFoliageScaling>();

#define FOREACH_ENUM_EVERTEXCOLORMASKCHANNEL(op) \
	op(EVertexColorMaskChannel::Red) \
	op(EVertexColorMaskChannel::Green) \
	op(EVertexColorMaskChannel::Blue) \
	op(EVertexColorMaskChannel::Alpha) \
	op(EVertexColorMaskChannel::MAX_None) 

enum class EVertexColorMaskChannel : uint8;
template<> FOLIAGE_API UEnum* StaticEnum<EVertexColorMaskChannel>();

#define FOREACH_ENUM_FOLIAGEVERTEXCOLORMASK(op) \
	op(FOLIAGEVERTEXCOLORMASK_Disabled) \
	op(FOLIAGEVERTEXCOLORMASK_Red) \
	op(FOLIAGEVERTEXCOLORMASK_Green) \
	op(FOLIAGEVERTEXCOLORMASK_Blue) \
	op(FOLIAGEVERTEXCOLORMASK_Alpha) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
