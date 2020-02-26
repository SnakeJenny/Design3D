// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2DDynamic;
class UAsyncTaskDownloadImage;
#ifdef UMG_AsyncTaskDownloadImage_generated_h
#error "AsyncTaskDownloadImage.generated.h already included, missing '#pragma once' in AsyncTaskDownloadImage.h"
#endif
#define UMG_AsyncTaskDownloadImage_generated_h

#define Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_14_DELEGATE \
struct _Script_UMG_eventDownloadImageDelegate_Parms \
{ \
	UTexture2DDynamic* Texture; \
}; \
static inline void FDownloadImageDelegate_DelegateWrapper(const FMulticastScriptDelegate& DownloadImageDelegate, UTexture2DDynamic* Texture) \
{ \
	_Script_UMG_eventDownloadImageDelegate_Parms Parms; \
	Parms.Texture=Texture; \
	DownloadImageDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDownloadImage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAsyncTaskDownloadImage**)Z_Param__Result=UAsyncTaskDownloadImage::DownloadImage(Z_Param_URL); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDownloadImage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAsyncTaskDownloadImage**)Z_Param__Result=UAsyncTaskDownloadImage::DownloadImage(Z_Param_URL); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncTaskDownloadImage(); \
	friend struct Z_Construct_UClass_UAsyncTaskDownloadImage_Statics; \
public: \
	DECLARE_CLASS(UAsyncTaskDownloadImage, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UAsyncTaskDownloadImage)


#define Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncTaskDownloadImage(); \
	friend struct Z_Construct_UClass_UAsyncTaskDownloadImage_Statics; \
public: \
	DECLARE_CLASS(UAsyncTaskDownloadImage, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UAsyncTaskDownloadImage)


#define Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncTaskDownloadImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncTaskDownloadImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTaskDownloadImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTaskDownloadImage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncTaskDownloadImage(UAsyncTaskDownloadImage&&); \
	NO_API UAsyncTaskDownloadImage(const UAsyncTaskDownloadImage&); \
public:


#define Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncTaskDownloadImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncTaskDownloadImage(UAsyncTaskDownloadImage&&); \
	NO_API UAsyncTaskDownloadImage(const UAsyncTaskDownloadImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTaskDownloadImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTaskDownloadImage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncTaskDownloadImage)


#define Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_16_PROLOG
#define Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_INCLASS \
	Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AsyncTaskDownloadImage."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UAsyncTaskDownloadImage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
