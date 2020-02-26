// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceConstant;
struct FLinearColor;
class UTexture;
class UMaterialInterface;
class UMaterialFunction;
class UMaterialFunctionInterface;
class UMaterial;
class UMaterialExpression;
#ifdef MATERIALEDITOR_MaterialEditingLibrary_generated_h
#error "MaterialEditingLibrary.generated.h already included, missing '#pragma once' in MaterialEditingLibrary.h"
#endif
#define MATERIALEDITOR_MaterialEditingLibrary_generated_h

#define Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateMaterialInstance) \
	{ \
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::UpdateMaterialInstance(Z_Param_Instance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialInstanceVectorParameterValue) \
	{ \
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_STRUCT(FLinearColor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::SetMaterialInstanceVectorParameterValue(Z_Param_Instance,Z_Param_ParameterName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialInstanceVectorParameterValue) \
	{ \
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UMaterialEditingLibrary::GetMaterialInstanceVectorParameterValue(Z_Param_Instance,Z_Param_ParameterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialInstanceTextureParameterValue) \
	{ \
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_OBJECT(UTexture,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::SetMaterialInstanceTextureParameterValue(Z_Param_Instance,Z_Param_ParameterName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialInstanceTextureParameterValue) \
	{ \
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture**)Z_Param__Result=UMaterialEditingLibrary::GetMaterialInstanceTextureParameterValue(Z_Param_Instance,Z_Param_ParameterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialInstanceScalarParameterValue) \
	{ \
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::SetMaterialInstanceScalarParameterValue(Z_Param_Instance,Z_Param_ParameterName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialInstanceScalarParameterValue) \
	{ \
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMaterialEditingLibrary::GetMaterialInstanceScalarParameterValue(Z_Param_Instance,Z_Param_ParameterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllMaterialInstanceParameters) \
	{ \
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::ClearAllMaterialInstanceParameters(Z_Param_Instance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialInstanceParent) \
	{ \
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewParent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::SetMaterialInstanceParent(Z_Param_Instance,Z_Param_NewParent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLayoutMaterialFunctionExpressions) \
	{ \
		P_GET_OBJECT(UMaterialFunction,Z_Param_MaterialFunction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::LayoutMaterialFunctionExpressions(Z_Param_MaterialFunction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMaterialFunction) \
	{ \
		P_GET_OBJECT(UMaterialFunctionInterface,Z_Param_MaterialFunction); \
		P_GET_OBJECT(UMaterial,Z_Param_PreviewMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::UpdateMaterialFunction(Z_Param_MaterialFunction,Z_Param_PreviewMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteMaterialExpressionInFunction) \
	{ \
		P_GET_OBJECT(UMaterialFunction,Z_Param_MaterialFunction); \
		P_GET_OBJECT(UMaterialExpression,Z_Param_Expression); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::DeleteMaterialExpressionInFunction(Z_Param_MaterialFunction,Z_Param_Expression); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteAllMaterialExpressionsInFunction) \
	{ \
		P_GET_OBJECT(UMaterialFunction,Z_Param_MaterialFunction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::DeleteAllMaterialExpressionsInFunction(Z_Param_MaterialFunction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMaterialExpressionInFunction) \
	{ \
		P_GET_OBJECT(UMaterialFunction,Z_Param_MaterialFunction); \
		P_GET_OBJECT(UClass,Z_Param_ExpressionClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodePosX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodePosY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialExpression**)Z_Param__Result=UMaterialEditingLibrary::CreateMaterialExpressionInFunction(Z_Param_MaterialFunction,Z_Param_ExpressionClass,Z_Param_NodePosX,Z_Param_NodePosY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumMaterialExpressionsInFunction) \
	{ \
		P_GET_OBJECT(UMaterialFunction,Z_Param_MaterialFunction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMaterialEditingLibrary::GetNumMaterialExpressionsInFunction(Z_Param_MaterialFunction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLayoutMaterialExpressions) \
	{ \
		P_GET_OBJECT(UMaterial,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::LayoutMaterialExpressions(Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRecompileMaterial) \
	{ \
		P_GET_OBJECT(UMaterial,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::RecompileMaterial(Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectMaterialExpressions) \
	{ \
		P_GET_OBJECT(UMaterialExpression,Z_Param_FromExpression); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FromOutputName); \
		P_GET_OBJECT(UMaterialExpression,Z_Param_ToExpression); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ToInputName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::ConnectMaterialExpressions(Z_Param_FromExpression,Z_Param_FromOutputName,Z_Param_ToExpression,Z_Param_ToInputName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectMaterialProperty) \
	{ \
		P_GET_OBJECT(UMaterialExpression,Z_Param_FromExpression); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FromOutputName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Property); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::ConnectMaterialProperty(Z_Param_FromExpression,Z_Param_FromOutputName,EMaterialProperty(Z_Param_Property)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialUsage) \
	{ \
		P_GET_OBJECT(UMaterial,Z_Param_Material); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Usage); \
		P_GET_UBOOL_REF(Z_Param_Out_bNeedsRecompile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::SetMaterialUsage(Z_Param_Material,EMaterialUsage(Z_Param_Usage),Z_Param_Out_bNeedsRecompile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMaterialExpression) \
	{ \
		P_GET_OBJECT(UMaterial,Z_Param_Material); \
		P_GET_OBJECT(UClass,Z_Param_ExpressionClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodePosX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodePosY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialExpression**)Z_Param__Result=UMaterialEditingLibrary::CreateMaterialExpression(Z_Param_Material,Z_Param_ExpressionClass,Z_Param_NodePosX,Z_Param_NodePosY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteMaterialExpression) \
	{ \
		P_GET_OBJECT(UMaterial,Z_Param_Material); \
		P_GET_OBJECT(UMaterialExpression,Z_Param_Expression); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::DeleteMaterialExpression(Z_Param_Material,Z_Param_Expression); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteAllMaterialExpressions) \
	{ \
		P_GET_OBJECT(UMaterial,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::DeleteAllMaterialExpressions(Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumMaterialExpressions) \
	{ \
		P_GET_OBJECT(UMaterial,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMaterialEditingLibrary::GetNumMaterialExpressions(Z_Param_Material); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateMaterialInstance) \
	{ \
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::UpdateMaterialInstance(Z_Param_Instance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialInstanceVectorParameterValue) \
	{ \
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_STRUCT(FLinearColor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::SetMaterialInstanceVectorParameterValue(Z_Param_Instance,Z_Param_ParameterName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialInstanceVectorParameterValue) \
	{ \
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UMaterialEditingLibrary::GetMaterialInstanceVectorParameterValue(Z_Param_Instance,Z_Param_ParameterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialInstanceTextureParameterValue) \
	{ \
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_OBJECT(UTexture,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::SetMaterialInstanceTextureParameterValue(Z_Param_Instance,Z_Param_ParameterName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialInstanceTextureParameterValue) \
	{ \
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture**)Z_Param__Result=UMaterialEditingLibrary::GetMaterialInstanceTextureParameterValue(Z_Param_Instance,Z_Param_ParameterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialInstanceScalarParameterValue) \
	{ \
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::SetMaterialInstanceScalarParameterValue(Z_Param_Instance,Z_Param_ParameterName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialInstanceScalarParameterValue) \
	{ \
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMaterialEditingLibrary::GetMaterialInstanceScalarParameterValue(Z_Param_Instance,Z_Param_ParameterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllMaterialInstanceParameters) \
	{ \
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::ClearAllMaterialInstanceParameters(Z_Param_Instance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialInstanceParent) \
	{ \
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewParent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::SetMaterialInstanceParent(Z_Param_Instance,Z_Param_NewParent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLayoutMaterialFunctionExpressions) \
	{ \
		P_GET_OBJECT(UMaterialFunction,Z_Param_MaterialFunction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::LayoutMaterialFunctionExpressions(Z_Param_MaterialFunction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMaterialFunction) \
	{ \
		P_GET_OBJECT(UMaterialFunctionInterface,Z_Param_MaterialFunction); \
		P_GET_OBJECT(UMaterial,Z_Param_PreviewMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::UpdateMaterialFunction(Z_Param_MaterialFunction,Z_Param_PreviewMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteMaterialExpressionInFunction) \
	{ \
		P_GET_OBJECT(UMaterialFunction,Z_Param_MaterialFunction); \
		P_GET_OBJECT(UMaterialExpression,Z_Param_Expression); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::DeleteMaterialExpressionInFunction(Z_Param_MaterialFunction,Z_Param_Expression); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteAllMaterialExpressionsInFunction) \
	{ \
		P_GET_OBJECT(UMaterialFunction,Z_Param_MaterialFunction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::DeleteAllMaterialExpressionsInFunction(Z_Param_MaterialFunction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMaterialExpressionInFunction) \
	{ \
		P_GET_OBJECT(UMaterialFunction,Z_Param_MaterialFunction); \
		P_GET_OBJECT(UClass,Z_Param_ExpressionClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodePosX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodePosY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialExpression**)Z_Param__Result=UMaterialEditingLibrary::CreateMaterialExpressionInFunction(Z_Param_MaterialFunction,Z_Param_ExpressionClass,Z_Param_NodePosX,Z_Param_NodePosY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumMaterialExpressionsInFunction) \
	{ \
		P_GET_OBJECT(UMaterialFunction,Z_Param_MaterialFunction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMaterialEditingLibrary::GetNumMaterialExpressionsInFunction(Z_Param_MaterialFunction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLayoutMaterialExpressions) \
	{ \
		P_GET_OBJECT(UMaterial,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::LayoutMaterialExpressions(Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRecompileMaterial) \
	{ \
		P_GET_OBJECT(UMaterial,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::RecompileMaterial(Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectMaterialExpressions) \
	{ \
		P_GET_OBJECT(UMaterialExpression,Z_Param_FromExpression); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FromOutputName); \
		P_GET_OBJECT(UMaterialExpression,Z_Param_ToExpression); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ToInputName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::ConnectMaterialExpressions(Z_Param_FromExpression,Z_Param_FromOutputName,Z_Param_ToExpression,Z_Param_ToInputName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectMaterialProperty) \
	{ \
		P_GET_OBJECT(UMaterialExpression,Z_Param_FromExpression); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FromOutputName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Property); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::ConnectMaterialProperty(Z_Param_FromExpression,Z_Param_FromOutputName,EMaterialProperty(Z_Param_Property)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialUsage) \
	{ \
		P_GET_OBJECT(UMaterial,Z_Param_Material); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Usage); \
		P_GET_UBOOL_REF(Z_Param_Out_bNeedsRecompile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::SetMaterialUsage(Z_Param_Material,EMaterialUsage(Z_Param_Usage),Z_Param_Out_bNeedsRecompile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMaterialExpression) \
	{ \
		P_GET_OBJECT(UMaterial,Z_Param_Material); \
		P_GET_OBJECT(UClass,Z_Param_ExpressionClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodePosX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NodePosY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialExpression**)Z_Param__Result=UMaterialEditingLibrary::CreateMaterialExpression(Z_Param_Material,Z_Param_ExpressionClass,Z_Param_NodePosX,Z_Param_NodePosY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteMaterialExpression) \
	{ \
		P_GET_OBJECT(UMaterial,Z_Param_Material); \
		P_GET_OBJECT(UMaterialExpression,Z_Param_Expression); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::DeleteMaterialExpression(Z_Param_Material,Z_Param_Expression); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteAllMaterialExpressions) \
	{ \
		P_GET_OBJECT(UMaterial,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMaterialEditingLibrary::DeleteAllMaterialExpressions(Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumMaterialExpressions) \
	{ \
		P_GET_OBJECT(UMaterial,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMaterialEditingLibrary::GetNumMaterialExpressions(Z_Param_Material); \
		P_NATIVE_END; \
	}


#define Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialEditingLibrary(); \
	friend struct Z_Construct_UClass_UMaterialEditingLibrary_Statics; \
public: \
	DECLARE_CLASS(UMaterialEditingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MaterialEditor"), NO_API) \
	DECLARE_SERIALIZER(UMaterialEditingLibrary)


#define Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialEditingLibrary(); \
	friend struct Z_Construct_UClass_UMaterialEditingLibrary_Statics; \
public: \
	DECLARE_CLASS(UMaterialEditingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MaterialEditor"), NO_API) \
	DECLARE_SERIALIZER(UMaterialEditingLibrary)


#define Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialEditingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialEditingLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialEditingLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditingLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialEditingLibrary(UMaterialEditingLibrary&&); \
	NO_API UMaterialEditingLibrary(const UMaterialEditingLibrary&); \
public:


#define Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialEditingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialEditingLibrary(UMaterialEditingLibrary&&); \
	NO_API UMaterialEditingLibrary(const UMaterialEditingLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialEditingLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialEditingLibrary)


#define Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_15_PROLOG
#define Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_18_RPC_WRAPPERS \
	Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_18_INCLASS \
	Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MATERIALEDITOR_API UClass* StaticClass<class UMaterialEditingLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
