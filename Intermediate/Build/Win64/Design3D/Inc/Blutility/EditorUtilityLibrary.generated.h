// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
struct FVector;
#ifdef BLUTILITY_EditorUtilityLibrary_generated_h
#error "EditorUtilityLibrary.generated.h already included, missing '#pragma once' in EditorUtilityLibrary.h"
#endif
#define BLUTILITY_EditorUtilityLibrary_generated_h

#define Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_19_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execRenameAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Asset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorUtilityLibrary::RenameAsset(Z_Param_Asset,Z_Param_NewName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedAssets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=UEditorUtilityLibrary::GetSelectedAssets(); \
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
		UEditorUtilityLibrary::GetSelectionBounds(Z_Param_Out_Origin,Z_Param_Out_BoxExtent,Z_Param_Out_SphereRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectionSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=UEditorUtilityLibrary::GetSelectionSet(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execRenameAsset) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Asset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEditorUtilityLibrary::RenameAsset(Z_Param_Asset,Z_Param_NewName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedAssets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=UEditorUtilityLibrary::GetSelectedAssets(); \
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
		UEditorUtilityLibrary::GetSelectionBounds(Z_Param_Out_Origin,Z_Param_Out_BoxExtent,Z_Param_Out_SphereRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectionSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=UEditorUtilityLibrary::GetSelectionSet(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorUtilityLibrary(); \
	friend struct Z_Construct_UClass_UEditorUtilityLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilityLibrary)


#define Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUEditorUtilityLibrary(); \
	friend struct Z_Construct_UClass_UEditorUtilityLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilityLibrary)


#define Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilityLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorUtilityLibrary(UEditorUtilityLibrary&&); \
	NO_API UEditorUtilityLibrary(const UEditorUtilityLibrary&); \
public:


#define Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorUtilityLibrary(UEditorUtilityLibrary&&); \
	NO_API UEditorUtilityLibrary(const UEditorUtilityLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilityLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityLibrary)


#define Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_16_PROLOG
#define Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_19_RPC_WRAPPERS \
	Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_19_INCLASS \
	Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditorUtilityLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UEditorUtilityLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
