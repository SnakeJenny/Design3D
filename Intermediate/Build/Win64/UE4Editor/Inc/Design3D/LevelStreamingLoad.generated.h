// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DESIGN3D_LevelStreamingLoad_generated_h
#error "LevelStreamingLoad.generated.h already included, missing '#pragma once' in LevelStreamingLoad.h"
#endif
#define DESIGN3D_LevelStreamingLoad_generated_h

#define Design3D_Source_Design3D_LevelStreamingLoad_h_58_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndUnLoadWaitLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndUnLoadWaitLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginUnLoadWaitLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginUnLoadWaitLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndLoadWaitLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndLoadWaitLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginLoadWaitLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginLoadWaitLevel(); \
		P_NATIVE_END; \
	}


#define Design3D_Source_Design3D_LevelStreamingLoad_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndUnLoadWaitLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndUnLoadWaitLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginUnLoadWaitLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginUnLoadWaitLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndLoadWaitLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndLoadWaitLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginLoadWaitLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginLoadWaitLevel(); \
		P_NATIVE_END; \
	}


#define Design3D_Source_Design3D_LevelStreamingLoad_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelStreamingLoad(); \
	friend struct Z_Construct_UClass_ULevelStreamingLoad_Statics; \
public: \
	DECLARE_CLASS(ULevelStreamingLoad, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Design3D"), NO_API) \
	DECLARE_SERIALIZER(ULevelStreamingLoad)


#define Design3D_Source_Design3D_LevelStreamingLoad_h_58_INCLASS \
private: \
	static void StaticRegisterNativesULevelStreamingLoad(); \
	friend struct Z_Construct_UClass_ULevelStreamingLoad_Statics; \
public: \
	DECLARE_CLASS(ULevelStreamingLoad, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Design3D"), NO_API) \
	DECLARE_SERIALIZER(ULevelStreamingLoad)


#define Design3D_Source_Design3D_LevelStreamingLoad_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelStreamingLoad(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreamingLoad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelStreamingLoad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreamingLoad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelStreamingLoad(ULevelStreamingLoad&&); \
	NO_API ULevelStreamingLoad(const ULevelStreamingLoad&); \
public:


#define Design3D_Source_Design3D_LevelStreamingLoad_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelStreamingLoad(ULevelStreamingLoad&&); \
	NO_API ULevelStreamingLoad(const ULevelStreamingLoad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelStreamingLoad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreamingLoad); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelStreamingLoad)


#define Design3D_Source_Design3D_LevelStreamingLoad_h_58_PRIVATE_PROPERTY_OFFSET
#define Design3D_Source_Design3D_LevelStreamingLoad_h_54_PROLOG
#define Design3D_Source_Design3D_LevelStreamingLoad_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Design3D_Source_Design3D_LevelStreamingLoad_h_58_PRIVATE_PROPERTY_OFFSET \
	Design3D_Source_Design3D_LevelStreamingLoad_h_58_RPC_WRAPPERS \
	Design3D_Source_Design3D_LevelStreamingLoad_h_58_INCLASS \
	Design3D_Source_Design3D_LevelStreamingLoad_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Design3D_Source_Design3D_LevelStreamingLoad_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Design3D_Source_Design3D_LevelStreamingLoad_h_58_PRIVATE_PROPERTY_OFFSET \
	Design3D_Source_Design3D_LevelStreamingLoad_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	Design3D_Source_Design3D_LevelStreamingLoad_h_58_INCLASS_NO_PURE_DECLS \
	Design3D_Source_Design3D_LevelStreamingLoad_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESIGN3D_API UClass* StaticClass<class ULevelStreamingLoad>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Design3D_Source_Design3D_LevelStreamingLoad_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
