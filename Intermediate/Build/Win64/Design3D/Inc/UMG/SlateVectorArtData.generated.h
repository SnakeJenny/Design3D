// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_SlateVectorArtData_generated_h
#error "SlateVectorArtData.generated.h already included, missing '#pragma once' in SlateVectorArtData.h"
#endif
#define UMG_SlateVectorArtData_generated_h

#define Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlateMeshVertex_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FSlateMeshVertex>();

#define Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_RPC_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlateVectorArtData(); \
	friend struct Z_Construct_UClass_USlateVectorArtData_Statics; \
public: \
	DECLARE_CLASS(USlateVectorArtData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USlateVectorArtData)


#define Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_INCLASS \
private: \
	static void StaticRegisterNativesUSlateVectorArtData(); \
	friend struct Z_Construct_UClass_USlateVectorArtData_Statics; \
public: \
	DECLARE_CLASS(USlateVectorArtData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(USlateVectorArtData)


#define Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlateVectorArtData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateVectorArtData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlateVectorArtData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateVectorArtData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlateVectorArtData(USlateVectorArtData&&); \
	NO_API USlateVectorArtData(const USlateVectorArtData&); \
public:


#define Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlateVectorArtData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlateVectorArtData(USlateVectorArtData&&); \
	NO_API USlateVectorArtData(const USlateVectorArtData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlateVectorArtData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateVectorArtData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateVectorArtData)


#define Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VertexData() { return STRUCT_OFFSET(USlateVectorArtData, VertexData); } \
	FORCEINLINE static uint32 __PPO__IndexData() { return STRUCT_OFFSET(USlateVectorArtData, IndexData); } \
	FORCEINLINE static uint32 __PPO__Material() { return STRUCT_OFFSET(USlateVectorArtData, Material); } \
	FORCEINLINE static uint32 __PPO__ExtentMin() { return STRUCT_OFFSET(USlateVectorArtData, ExtentMin); } \
	FORCEINLINE static uint32 __PPO__ExtentMax() { return STRUCT_OFFSET(USlateVectorArtData, ExtentMax); }


#define Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_83_PROLOG
#define Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_INCLASS \
	Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_86_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SlateVectorArtData."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class USlateVectorArtData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
