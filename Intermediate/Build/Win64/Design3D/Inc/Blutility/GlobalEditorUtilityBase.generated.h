// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AActor;
struct FVector;
class UEditorPerProjectUserSettings;
#ifdef BLUTILITY_GlobalEditorUtilityBase_generated_h
#error "GlobalEditorUtilityBase.generated.h already included, missing '#pragma once' in GlobalEditorUtilityBase.h"
#endif
#define BLUTILITY_GlobalEditorUtilityBase_generated_h

#define Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_19_DELEGATE \
struct _Script_Blutility_eventForEachAssetIteratorSignature_Parms \
{ \
	UObject* Asset; \
	int32 Index; \
}; \
static inline void FForEachAssetIteratorSignature_DelegateWrapper(const FMulticastScriptDelegate& ForEachAssetIteratorSignature, UObject* Asset, int32 Index) \
{ \
	_Script_Blutility_eventForEachAssetIteratorSignature_Parms Parms; \
	Parms.Asset=Asset; \
	Parms.Index=Index; \
	ForEachAssetIteratorSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_18_DELEGATE \
struct _Script_Blutility_eventForEachActorIteratorSignature_Parms \
{ \
	AActor* Actor; \
	int32 Index; \
}; \
static inline void FForEachActorIteratorSignature_DelegateWrapper(const FMulticastScriptDelegate& ForEachActorIteratorSignature, AActor* Actor, int32 Index) \
{ \
	_Script_Blutility_eventForEachActorIteratorSignature_Parms Parms; \
	Parms.Actor=Actor; \
	Parms.Index=Index; \
	ForEachActorIteratorSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRenameAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Asset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RenameAsset(Z_Param_Asset,Z_Param_NewName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectionBounds) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtent); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_SphereRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSelectionBounds(Z_Param_Out_Origin,Z_Param_Out_BoxExtent,Z_Param_Out_SphereRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorSelectionState) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_UBOOL(Z_Param_bShouldBeSelected); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorSelectionState(Z_Param_Actor,Z_Param_bShouldBeSelected); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectNothing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectNothing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearActorSelectionSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearActorSelectionSet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEditorUserSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEditorPerProjectUserSettings**)Z_Param__Result=P_THIS->GetEditorUserSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedAssets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetSelectedAssets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForEachSelectedAsset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForEachSelectedAsset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForEachSelectedActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForEachSelectedActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorReference) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PathToActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetActorReference(Z_Param_PathToActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectionSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetSelectionSet(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRenameAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Asset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RenameAsset(Z_Param_Asset,Z_Param_NewName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectionBounds) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtent); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_SphereRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSelectionBounds(Z_Param_Out_Origin,Z_Param_Out_BoxExtent,Z_Param_Out_SphereRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorSelectionState) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_UBOOL(Z_Param_bShouldBeSelected); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorSelectionState(Z_Param_Actor,Z_Param_bShouldBeSelected); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectNothing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectNothing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearActorSelectionSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearActorSelectionSet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEditorUserSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEditorPerProjectUserSettings**)Z_Param__Result=P_THIS->GetEditorUserSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedAssets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetSelectedAssets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForEachSelectedAsset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForEachSelectedAsset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForEachSelectedActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForEachSelectedActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorReference) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PathToActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetActorReference(Z_Param_PathToActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectionSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetSelectionSet(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_EVENT_PARMS
#define Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_CALLBACK_WRAPPERS
#define Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGlobalEditorUtilityBase(); \
	friend struct Z_Construct_UClass_UGlobalEditorUtilityBase_Statics; \
public: \
	DECLARE_CLASS(UGlobalEditorUtilityBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UGlobalEditorUtilityBase)


#define Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUGlobalEditorUtilityBase(); \
	friend struct Z_Construct_UClass_UGlobalEditorUtilityBase_Statics; \
public: \
	DECLARE_CLASS(UGlobalEditorUtilityBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UGlobalEditorUtilityBase)


#define Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGlobalEditorUtilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGlobalEditorUtilityBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGlobalEditorUtilityBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGlobalEditorUtilityBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGlobalEditorUtilityBase(UGlobalEditorUtilityBase&&); \
	NO_API UGlobalEditorUtilityBase(const UGlobalEditorUtilityBase&); \
public:


#define Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGlobalEditorUtilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGlobalEditorUtilityBase(UGlobalEditorUtilityBase&&); \
	NO_API UGlobalEditorUtilityBase(const UGlobalEditorUtilityBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGlobalEditorUtilityBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGlobalEditorUtilityBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGlobalEditorUtilityBase)


#define Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_22_PROLOG \
	Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_EVENT_PARMS


#define Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_RPC_WRAPPERS \
	Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_CALLBACK_WRAPPERS \
	Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_INCLASS \
	Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_CALLBACK_WRAPPERS \
	Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GlobalEditorUtilityBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UGlobalEditorUtilityBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
