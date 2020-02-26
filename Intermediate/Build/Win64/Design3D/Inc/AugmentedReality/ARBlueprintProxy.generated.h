// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARCandidateObject;
class UObject;
class UARSaveWorldAsyncTaskBlueprintProxy;
struct FVector;
class UARGetCandidateObjectAsyncTaskBlueprintProxy;
#ifdef AUGMENTEDREALITY_ARBlueprintProxy_generated_h
#error "ARBlueprintProxy.generated.h already included, missing '#pragma once' in ARBlueprintProxy.h"
#endif
#define AUGMENTEDREALITY_ARBlueprintProxy_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_83_DELEGATE \
struct _Script_AugmentedReality_eventARGetCandidateObjectPin_Parms \
{ \
	UARCandidateObject* SavedObject; \
}; \
static inline void FARGetCandidateObjectPin_DelegateWrapper(const FMulticastScriptDelegate& ARGetCandidateObjectPin, UARCandidateObject* SavedObject) \
{ \
	_Script_AugmentedReality_eventARGetCandidateObjectPin_Parms Parms; \
	Parms.SavedObject=SavedObject; \
	ARGetCandidateObjectPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_48_DELEGATE \
struct _Script_AugmentedReality_eventARSaveWorldPin_Parms \
{ \
	TArray<uint8> SavedWorld; \
}; \
static inline void FARSaveWorldPin_DelegateWrapper(const FMulticastScriptDelegate& ARSaveWorldPin, TArray<uint8> const& SavedWorld) \
{ \
	_Script_AugmentedReality_eventARSaveWorldPin_Parms Parms; \
	Parms.SavedWorld=SavedWorld; \
	ARSaveWorldPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_22_RPC_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARBaseAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UARBaseAsyncTaskBlueprintProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARBaseAsyncTaskBlueprintProxy)


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUARBaseAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UARBaseAsyncTaskBlueprintProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARBaseAsyncTaskBlueprintProxy)


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARBaseAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARBaseAsyncTaskBlueprintProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARBaseAsyncTaskBlueprintProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARBaseAsyncTaskBlueprintProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARBaseAsyncTaskBlueprintProxy(UARBaseAsyncTaskBlueprintProxy&&); \
	NO_API UARBaseAsyncTaskBlueprintProxy(const UARBaseAsyncTaskBlueprintProxy&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARBaseAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARBaseAsyncTaskBlueprintProxy(UARBaseAsyncTaskBlueprintProxy&&); \
	NO_API UARBaseAsyncTaskBlueprintProxy(const UARBaseAsyncTaskBlueprintProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARBaseAsyncTaskBlueprintProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARBaseAsyncTaskBlueprintProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARBaseAsyncTaskBlueprintProxy)


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_17_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_22_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ARBaseAsyncTaskBlueprintProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARBaseAsyncTaskBlueprintProxy>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_54_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execARSaveWorld) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARSaveWorldAsyncTaskBlueprintProxy**)Z_Param__Result=UARSaveWorldAsyncTaskBlueprintProxy::ARSaveWorld(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execARSaveWorld) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARSaveWorldAsyncTaskBlueprintProxy**)Z_Param__Result=UARSaveWorldAsyncTaskBlueprintProxy::ARSaveWorld(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARSaveWorldAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UARSaveWorldAsyncTaskBlueprintProxy, UARBaseAsyncTaskBlueprintProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARSaveWorldAsyncTaskBlueprintProxy)


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUARSaveWorldAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UARSaveWorldAsyncTaskBlueprintProxy, UARBaseAsyncTaskBlueprintProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARSaveWorldAsyncTaskBlueprintProxy)


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARSaveWorldAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARSaveWorldAsyncTaskBlueprintProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARSaveWorldAsyncTaskBlueprintProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARSaveWorldAsyncTaskBlueprintProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARSaveWorldAsyncTaskBlueprintProxy(UARSaveWorldAsyncTaskBlueprintProxy&&); \
	NO_API UARSaveWorldAsyncTaskBlueprintProxy(const UARSaveWorldAsyncTaskBlueprintProxy&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARSaveWorldAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARSaveWorldAsyncTaskBlueprintProxy(UARSaveWorldAsyncTaskBlueprintProxy&&); \
	NO_API UARSaveWorldAsyncTaskBlueprintProxy(const UARSaveWorldAsyncTaskBlueprintProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARSaveWorldAsyncTaskBlueprintProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARSaveWorldAsyncTaskBlueprintProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARSaveWorldAsyncTaskBlueprintProxy)


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_54_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_50_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_54_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_54_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_54_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_54_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_54_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARSaveWorldAsyncTaskBlueprintProxy>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_89_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execARGetCandidateObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FVector,Z_Param_Extent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARGetCandidateObjectAsyncTaskBlueprintProxy**)Z_Param__Result=UARGetCandidateObjectAsyncTaskBlueprintProxy::ARGetCandidateObject(Z_Param_WorldContextObject,Z_Param_Location,Z_Param_Extent); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execARGetCandidateObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FVector,Z_Param_Extent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARGetCandidateObjectAsyncTaskBlueprintProxy**)Z_Param__Result=UARGetCandidateObjectAsyncTaskBlueprintProxy::ARGetCandidateObject(Z_Param_WorldContextObject,Z_Param_Location,Z_Param_Extent); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARGetCandidateObjectAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UARGetCandidateObjectAsyncTaskBlueprintProxy, UARBaseAsyncTaskBlueprintProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARGetCandidateObjectAsyncTaskBlueprintProxy)


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUARGetCandidateObjectAsyncTaskBlueprintProxy(); \
	friend struct Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics; \
public: \
	DECLARE_CLASS(UARGetCandidateObjectAsyncTaskBlueprintProxy, UARBaseAsyncTaskBlueprintProxy, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARGetCandidateObjectAsyncTaskBlueprintProxy)


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARGetCandidateObjectAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARGetCandidateObjectAsyncTaskBlueprintProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARGetCandidateObjectAsyncTaskBlueprintProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGetCandidateObjectAsyncTaskBlueprintProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARGetCandidateObjectAsyncTaskBlueprintProxy(UARGetCandidateObjectAsyncTaskBlueprintProxy&&); \
	NO_API UARGetCandidateObjectAsyncTaskBlueprintProxy(const UARGetCandidateObjectAsyncTaskBlueprintProxy&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARGetCandidateObjectAsyncTaskBlueprintProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARGetCandidateObjectAsyncTaskBlueprintProxy(UARGetCandidateObjectAsyncTaskBlueprintProxy&&); \
	NO_API UARGetCandidateObjectAsyncTaskBlueprintProxy(const UARGetCandidateObjectAsyncTaskBlueprintProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARGetCandidateObjectAsyncTaskBlueprintProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARGetCandidateObjectAsyncTaskBlueprintProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARGetCandidateObjectAsyncTaskBlueprintProxy)


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_89_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_85_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_89_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_89_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_89_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_89_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_89_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARGetCandidateObjectAsyncTaskBlueprintProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
