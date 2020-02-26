// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionFunctionInput_generated_h
#error "MaterialExpressionFunctionInput.generated.h already included, missing '#pragma once' in MaterialExpressionFunctionInput.h"
#endif
#define ENGINE_MaterialExpressionFunctionInput_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_36_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_36_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFunctionInput(); \
	friend struct Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionFunctionInput, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionFunctionInput)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionFunctionInput(); \
	friend struct Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionFunctionInput, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionFunctionInput)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFunctionInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFunctionInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFunctionInput); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFunctionInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionFunctionInput(UMaterialExpressionFunctionInput&&); \
	ENGINE_API UMaterialExpressionFunctionInput(const UMaterialExpressionFunctionInput&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionFunctionInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionFunctionInput(UMaterialExpressionFunctionInput&&); \
	ENGINE_API UMaterialExpressionFunctionInput(const UMaterialExpressionFunctionInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionFunctionInput); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionFunctionInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionFunctionInput)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_36_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_33_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_36_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_36_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_36_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_36_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_36_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_36_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionFunctionInput."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionFunctionInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h


#define FOREACH_ENUM_EFUNCTIONINPUTTYPE(op) \
	op(FunctionInput_Scalar) \
	op(FunctionInput_Vector2) \
	op(FunctionInput_Vector3) \
	op(FunctionInput_Vector4) \
	op(FunctionInput_Texture2D) \
	op(FunctionInput_TextureCube) \
	op(FunctionInput_VolumeTexture) \
	op(FunctionInput_StaticBool) \
	op(FunctionInput_MaterialAttributes) \
	op(FunctionInput_TextureExternal) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
