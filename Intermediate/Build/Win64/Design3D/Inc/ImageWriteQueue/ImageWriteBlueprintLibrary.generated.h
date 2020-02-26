// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
struct FImageWriteOptions;
#ifdef IMAGEWRITEQUEUE_ImageWriteBlueprintLibrary_generated_h
#error "ImageWriteBlueprintLibrary.generated.h already included, missing '#pragma once' in ImageWriteBlueprintLibrary.h"
#endif
#define IMAGEWRITEQUEUE_ImageWriteBlueprintLibrary_generated_h

#define Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FImageWriteOptions_Statics; \
	IMAGEWRITEQUEUE_API static class UScriptStruct* StaticStruct();


template<> IMAGEWRITEQUEUE_API UScriptStruct* StaticStruct<struct FImageWriteOptions>();

#define Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_14_DELEGATE \
struct _Script_ImageWriteQueue_eventOnImageWriteComplete_Parms \
{ \
	bool bSuccess; \
}; \
static inline void FOnImageWriteComplete_DelegateWrapper(const FScriptDelegate& OnImageWriteComplete, bool bSuccess) \
{ \
	_Script_ImageWriteQueue_eventOnImageWriteComplete_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	OnImageWriteComplete.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExportToDisk) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_Texture); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_GET_STRUCT_REF(FImageWriteOptions,Z_Param_Out_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UImageWriteBlueprintLibrary::ExportToDisk(Z_Param_Texture,Z_Param_Filename,Z_Param_Out_Options); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExportToDisk) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_Texture); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_GET_STRUCT_REF(FImageWriteOptions,Z_Param_Out_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UImageWriteBlueprintLibrary::ExportToDisk(Z_Param_Texture,Z_Param_Filename,Z_Param_Out_Options); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImageWriteBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UImageWriteBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ImageWriteQueue"), NO_API) \
	DECLARE_SERIALIZER(UImageWriteBlueprintLibrary)


#define Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUImageWriteBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UImageWriteBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ImageWriteQueue"), NO_API) \
	DECLARE_SERIALIZER(UImageWriteBlueprintLibrary)


#define Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImageWriteBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageWriteBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageWriteBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageWriteBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageWriteBlueprintLibrary(UImageWriteBlueprintLibrary&&); \
	NO_API UImageWriteBlueprintLibrary(const UImageWriteBlueprintLibrary&); \
public:


#define Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImageWriteBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageWriteBlueprintLibrary(UImageWriteBlueprintLibrary&&); \
	NO_API UImageWriteBlueprintLibrary(const UImageWriteBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageWriteBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageWriteBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageWriteBlueprintLibrary)


#define Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_59_PROLOG
#define Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_RPC_WRAPPERS \
	Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_INCLASS \
	Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_64_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IMAGEWRITEQUEUE_API UClass* StaticClass<class UImageWriteBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
