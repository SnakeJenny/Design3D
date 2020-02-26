// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMGEDITOR_WidgetBlueprint_generated_h
#error "WidgetBlueprint.generated.h already included, missing '#pragma once' in WidgetBlueprint.h"
#endif
#define UMGEDITOR_WidgetBlueprint_generated_h

#define Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_175_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics; \
	UMGEDITOR_API static class UScriptStruct* StaticStruct();


template<> UMGEDITOR_API UScriptStruct* StaticStruct<struct FWidgetAnimation_DEPRECATED>();

#define Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_125_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UMGEDITOR_API UScriptStruct* StaticStruct<struct FDelegateEditorBinding>();

#define Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorPropertyPath_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UMGEDITOR_API UScriptStruct* StaticStruct<struct FEditorPropertyPath>();

#define Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Struct() { return STRUCT_OFFSET(FEditorPropertyPathSegment, Struct); } \
	FORCEINLINE static uint32 __PPO__MemberName() { return STRUCT_OFFSET(FEditorPropertyPathSegment, MemberName); } \
	FORCEINLINE static uint32 __PPO__MemberGuid() { return STRUCT_OFFSET(FEditorPropertyPathSegment, MemberGuid); } \
	FORCEINLINE static uint32 __PPO__IsProperty() { return STRUCT_OFFSET(FEditorPropertyPathSegment, IsProperty); }


template<> UMGEDITOR_API UScriptStruct* StaticStruct<struct FEditorPropertyPathSegment>();

#define Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_228_RPC_WRAPPERS
#define Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_228_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_228_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWidgetBlueprint, NO_API)


#define Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_228_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetBlueprint(); \
	friend struct Z_Construct_UClass_UWidgetBlueprint_Statics; \
public: \
	DECLARE_CLASS(UWidgetBlueprint, UBaseWidgetBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMGEditor"), NO_API) \
	DECLARE_SERIALIZER(UWidgetBlueprint) \
	Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_228_ARCHIVESERIALIZER


#define Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_228_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetBlueprint(); \
	friend struct Z_Construct_UClass_UWidgetBlueprint_Statics; \
public: \
	DECLARE_CLASS(UWidgetBlueprint, UBaseWidgetBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMGEditor"), NO_API) \
	DECLARE_SERIALIZER(UWidgetBlueprint) \
	Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_228_ARCHIVESERIALIZER


#define Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_228_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetBlueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetBlueprint(UWidgetBlueprint&&); \
	NO_API UWidgetBlueprint(const UWidgetBlueprint&); \
public:


#define Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_228_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetBlueprint(UWidgetBlueprint&&); \
	NO_API UWidgetBlueprint(const UWidgetBlueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetBlueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetBlueprint)


#define Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_228_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TickFrequency() { return STRUCT_OFFSET(UWidgetBlueprint, TickFrequency); } \
	FORCEINLINE static uint32 __PPO__TickPrediction() { return STRUCT_OFFSET(UWidgetBlueprint, TickPrediction); } \
	FORCEINLINE static uint32 __PPO__TickPredictionReason() { return STRUCT_OFFSET(UWidgetBlueprint, TickPredictionReason); }


#define Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_225_PROLOG
#define Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_228_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_228_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_228_RPC_WRAPPERS \
	Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_228_INCLASS \
	Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_228_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_228_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_228_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_228_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_228_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_228_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WidgetBlueprint."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMGEDITOR_API UClass* StaticClass<class UWidgetBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h


#define FOREACH_ENUM_EWIDGETCOMPILETIMETICKPREDICTION(op) \
	op(EWidgetCompileTimeTickPrediction::WontTick) \
	op(EWidgetCompileTimeTickPrediction::OnDemand) \
	op(EWidgetCompileTimeTickPrediction::WillTick) 

enum class EWidgetCompileTimeTickPrediction : uint8;
template<> UMGEDITOR_API UEnum* StaticEnum<EWidgetCompileTimeTickPrediction>();

#define FOREACH_ENUM_EWIDGETSUPPORTSDYNAMICCREATION(op) \
	op(EWidgetSupportsDynamicCreation::Default) \
	op(EWidgetSupportsDynamicCreation::Yes) \
	op(EWidgetSupportsDynamicCreation::No) 

enum class EWidgetSupportsDynamicCreation : uint8;
template<> UMGEDITOR_API UEnum* StaticEnum<EWidgetSupportsDynamicCreation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
