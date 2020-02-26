// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FVector2D;
#ifdef ENGINE_SplineMeshComponent_generated_h
#error "SplineMeshComponent.generated.h already included, missing '#pragma once' in SplineMeshComponent.h"
#endif
#define ENGINE_SplineMeshComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_357_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSplineMeshInstanceData>();

#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSplineMeshParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSplineMeshParams>();

#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBoundaryMax) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBoundaryMax); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoundaryMax(Z_Param_InBoundaryMax,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundaryMax) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBoundaryMax(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoundaryMin) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBoundaryMin); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoundaryMin(Z_Param_InBoundaryMin,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundaryMin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBoundaryMin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSplineUpDir) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InSplineUpDir); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSplineUpDir(Z_Param_Out_InSplineUpDir,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSplineUpDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetSplineUpDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForwardAxis) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InForwardAxis); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetForwardAxis(ESplineMeshAxis::Type(Z_Param_InForwardAxis),Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForwardAxis) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ESplineMeshAxis::Type>*)Z_Param__Result=P_THIS->GetForwardAxis(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEndOffset) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_EndOffset); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEndOffset(Z_Param_EndOffset,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetEndOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEndRoll) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndRoll); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEndRoll(Z_Param_EndRoll,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndRoll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetEndRoll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEndScale) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_EndScale); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEndScale(Z_Param_EndScale,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetEndScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartOffset) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_StartOffset); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStartOffset(Z_Param_StartOffset,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetStartOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartRoll) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartRoll); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStartRoll(Z_Param_StartRoll,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartRoll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetStartRoll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartScale) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_StartScale); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStartScale(Z_Param_StartScale,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetStartScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartAndEnd) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_StartPos); \
		P_GET_STRUCT(FVector,Z_Param_StartTangent); \
		P_GET_STRUCT(FVector,Z_Param_EndPos); \
		P_GET_STRUCT(FVector,Z_Param_EndTangent); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStartAndEnd(Z_Param_StartPos,Z_Param_StartTangent,Z_Param_EndPos,Z_Param_EndTangent,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEndTangent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_EndTangent); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEndTangent(Z_Param_EndTangent,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndTangent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetEndTangent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEndPosition) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_EndPos); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEndPosition(Z_Param_EndPos,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetEndPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartTangent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_StartTangent); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStartTangent(Z_Param_StartTangent,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartTangent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetStartTangent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartPosition) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_StartPos); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStartPosition(Z_Param_StartPos,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetStartPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMesh(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBoundaryMax) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBoundaryMax); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoundaryMax(Z_Param_InBoundaryMax,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundaryMax) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBoundaryMax(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoundaryMin) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBoundaryMin); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoundaryMin(Z_Param_InBoundaryMin,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundaryMin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBoundaryMin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSplineUpDir) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InSplineUpDir); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSplineUpDir(Z_Param_Out_InSplineUpDir,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSplineUpDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetSplineUpDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForwardAxis) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InForwardAxis); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetForwardAxis(ESplineMeshAxis::Type(Z_Param_InForwardAxis),Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForwardAxis) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ESplineMeshAxis::Type>*)Z_Param__Result=P_THIS->GetForwardAxis(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEndOffset) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_EndOffset); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEndOffset(Z_Param_EndOffset,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetEndOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEndRoll) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndRoll); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEndRoll(Z_Param_EndRoll,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndRoll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetEndRoll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEndScale) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_EndScale); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEndScale(Z_Param_EndScale,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetEndScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartOffset) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_StartOffset); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStartOffset(Z_Param_StartOffset,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetStartOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartRoll) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartRoll); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStartRoll(Z_Param_StartRoll,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartRoll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetStartRoll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartScale) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_StartScale); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStartScale(Z_Param_StartScale,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetStartScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartAndEnd) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_StartPos); \
		P_GET_STRUCT(FVector,Z_Param_StartTangent); \
		P_GET_STRUCT(FVector,Z_Param_EndPos); \
		P_GET_STRUCT(FVector,Z_Param_EndTangent); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStartAndEnd(Z_Param_StartPos,Z_Param_StartTangent,Z_Param_EndPos,Z_Param_EndTangent,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEndTangent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_EndTangent); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEndTangent(Z_Param_EndTangent,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndTangent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetEndTangent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEndPosition) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_EndPos); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEndPosition(Z_Param_EndPos,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetEndPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartTangent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_StartTangent); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStartTangent(Z_Param_StartTangent,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartTangent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetStartTangent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartPosition) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_StartPos); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStartPosition(Z_Param_StartPos,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetStartPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMesh(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USplineMeshComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplineMeshComponent(); \
	friend struct Z_Construct_UClass_USplineMeshComponent_Statics; \
public: \
	DECLARE_CLASS(USplineMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USplineMeshComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USplineMeshComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_INCLASS \
private: \
	static void StaticRegisterNativesUSplineMeshComponent(); \
	friend struct Z_Construct_UClass_USplineMeshComponent_Statics; \
public: \
	DECLARE_CLASS(USplineMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USplineMeshComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USplineMeshComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplineMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplineMeshComponent(USplineMeshComponent&&); \
	NO_API USplineMeshComponent(const USplineMeshComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplineMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplineMeshComponent(USplineMeshComponent&&); \
	NO_API USplineMeshComponent(const USplineMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_98_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SplineMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USplineMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h


#define FOREACH_ENUM_ESPLINEMESHAXIS(op) \
	op(ESplineMeshAxis::X) \
	op(ESplineMeshAxis::Y) \
	op(ESplineMeshAxis::Z) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
