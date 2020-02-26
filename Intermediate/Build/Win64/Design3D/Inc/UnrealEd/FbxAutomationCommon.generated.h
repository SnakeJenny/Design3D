// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FbxAutomationCommon_generated_h
#error "FbxAutomationCommon.generated.h already included, missing '#pragma once' in FbxAutomationCommon.h"
#endif
#define UNREALED_FbxAutomationCommon_generated_h

#define Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FFbxTestPlanExpectedResult>();

#define Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_129_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_129_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFbxTestPlan(); \
	friend struct Z_Construct_UClass_UFbxTestPlan_Statics; \
public: \
	DECLARE_CLASS(UFbxTestPlan, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UFbxTestPlan)


#define Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_129_INCLASS \
private: \
	static void StaticRegisterNativesUFbxTestPlan(); \
	friend struct Z_Construct_UClass_UFbxTestPlan_Statics; \
public: \
	DECLARE_CLASS(UFbxTestPlan, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UFbxTestPlan)


#define Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_129_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxTestPlan(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxTestPlan) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxTestPlan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxTestPlan); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UFbxTestPlan(UFbxTestPlan&&); \
	UNREALED_API UFbxTestPlan(const UFbxTestPlan&); \
public:


#define Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_129_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxTestPlan(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UFbxTestPlan(UFbxTestPlan&&); \
	UNREALED_API UFbxTestPlan(const UFbxTestPlan&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxTestPlan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxTestPlan); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxTestPlan)


#define Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_129_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_126_PROLOG
#define Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_129_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_129_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_129_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_129_INCLASS \
	Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_129_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_129_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_129_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_129_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FbxTestPlan."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UFbxTestPlan>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h


#define FOREACH_ENUM_EFBXTESTPLANACTIONTYPE(op) \
	op(Import) \
	op(Reimport) \
	op(AddLOD) \
	op(ReimportLOD) \
	op(ImportReload) 
#define FOREACH_ENUM_EFBXEXPECTEDRESULTPRESET(op) \
	op(Error_Number) \
	op(Warning_Number) \
	op(Created_Staticmesh_Number) \
	op(Created_Skeletalmesh_Number) \
	op(Materials_Created_Number) \
	op(Material_Slot_Imported_Name) \
	op(Vertex_Number) \
	op(Lod_Number) \
	op(Vertex_Number_Lod) \
	op(Mesh_Materials_Number) \
	op(Mesh_LOD_Section_Number) \
	op(Mesh_LOD_Section_Vertex_Number) \
	op(Mesh_LOD_Section_Triangle_Number) \
	op(Mesh_LOD_Section_Material_Name) \
	op(Mesh_LOD_Section_Material_Index) \
	op(Mesh_LOD_Section_Material_Imported_Name) \
	op(Mesh_LOD_Vertex_Position) \
	op(Mesh_LOD_Vertex_Normal) \
	op(LOD_UV_Channel_Number) \
	op(Bone_Number) \
	op(Bone_Position) \
	op(Animation_Frame_Number) \
	op(Animation_Length) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
