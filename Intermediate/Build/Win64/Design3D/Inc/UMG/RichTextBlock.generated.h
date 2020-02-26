// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URichTextBlockDecorator;
#ifdef UMG_RichTextBlock_generated_h
#error "RichTextBlock.generated.h already included, missing '#pragma once' in RichTextBlock.h"
#endif
#define UMG_RichTextBlock_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRichTextStyleRow_Statics; \
	UMG_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> UMG_API UScriptStruct* StaticStruct<struct FRichTextStyleRow>();

#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDecoratorByClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_DecoratorClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URichTextBlockDecorator**)Z_Param__Result=P_THIS->GetDecoratorByClass(Z_Param_DecoratorClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetText(Z_Param_Out_InText); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDecoratorByClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_DecoratorClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URichTextBlockDecorator**)Z_Param__Result=P_THIS->GetDecoratorByClass(Z_Param_DecoratorClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetText(Z_Param_Out_InText); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURichTextBlock(); \
	friend struct Z_Construct_UClass_URichTextBlock_Statics; \
public: \
	DECLARE_CLASS(URichTextBlock, UTextLayoutWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(URichTextBlock)


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_INCLASS \
private: \
	static void StaticRegisterNativesURichTextBlock(); \
	friend struct Z_Construct_UClass_URichTextBlock_Statics; \
public: \
	DECLARE_CLASS(URichTextBlock, UTextLayoutWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(URichTextBlock)


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URichTextBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URichTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URichTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URichTextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URichTextBlock(URichTextBlock&&); \
	NO_API URichTextBlock(const URichTextBlock&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URichTextBlock(URichTextBlock&&); \
	NO_API URichTextBlock(const URichTextBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URichTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URichTextBlock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URichTextBlock)


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(URichTextBlock, Text); } \
	FORCEINLINE static uint32 __PPO__TextStyleSet() { return STRUCT_OFFSET(URichTextBlock, TextStyleSet); } \
	FORCEINLINE static uint32 __PPO__DecoratorClasses() { return STRUCT_OFFSET(URichTextBlock, DecoratorClasses); } \
	FORCEINLINE static uint32 __PPO__InstanceDecorators() { return STRUCT_OFFSET(URichTextBlock, InstanceDecorators); }


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_35_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class URichTextBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
