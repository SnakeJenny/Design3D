// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ThumbnailManager_generated_h
#error "ThumbnailManager.generated.h already included, missing '#pragma once' in ThumbnailManager.h"
#endif
#define UNREALED_ThumbnailManager_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FThumbnailRenderingInfo_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FThumbnailRenderingInfo>();

#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_84_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_84_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_84_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UThumbnailManager, NO_API)


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUThumbnailManager(); \
	friend struct Z_Construct_UClass_UThumbnailManager_Statics; \
public: \
	DECLARE_CLASS(UThumbnailManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UThumbnailManager) \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_84_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_84_INCLASS \
private: \
	static void StaticRegisterNativesUThumbnailManager(); \
	friend struct Z_Construct_UClass_UThumbnailManager_Statics; \
public: \
	DECLARE_CLASS(UThumbnailManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UThumbnailManager) \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_84_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UThumbnailManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThumbnailManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThumbnailManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThumbnailManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UThumbnailManager(UThumbnailManager&&); \
	NO_API UThumbnailManager(const UThumbnailManager&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UThumbnailManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UThumbnailManager(UThumbnailManager&&); \
	NO_API UThumbnailManager(const UThumbnailManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThumbnailManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThumbnailManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThumbnailManager)


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_84_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RenderableThumbnailTypes() { return STRUCT_OFFSET(UThumbnailManager, RenderableThumbnailTypes); } \
	FORCEINLINE static uint32 __PPO__ThumbnailManagerClassName() { return STRUCT_OFFSET(UThumbnailManager, ThumbnailManagerClassName); }


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_81_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_84_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_84_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_84_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_84_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_84_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h_84_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ThumbnailManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UThumbnailManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_ThumbnailManager_h


#define FOREACH_ENUM_ETHUMBNAILPRIMTYPE(op) \
	op(TPT_None) \
	op(TPT_Sphere) \
	op(TPT_Cube) \
	op(TPT_Plane) \
	op(TPT_Cylinder) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
