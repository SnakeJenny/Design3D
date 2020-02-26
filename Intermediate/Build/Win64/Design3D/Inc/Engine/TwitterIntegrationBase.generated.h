// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TwitterIntegrationBase_generated_h
#error "TwitterIntegrationBase.generated.h already included, missing '#pragma once' in TwitterIntegrationBase.h"
#endif
#define ENGINE_TwitterIntegrationBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTwitterRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_ParamKeysAndValues); \
		P_GET_PROPERTY(UByteProperty,Z_Param_RequestMethod); \
		P_GET_PROPERTY(UIntProperty,Z_Param_AccountIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TwitterRequest(Z_Param_URL,Z_Param_Out_ParamKeysAndValues,ETwitterRequestMethod(Z_Param_RequestMethod),Z_Param_AccountIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAccountName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AccountIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetAccountName(Z_Param_AccountIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumAccounts) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumAccounts(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAuthorizeAccounts) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AuthorizeAccounts(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowTweetUI) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InitialMessage); \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Picture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShowTweetUI(Z_Param_InitialMessage,Z_Param_URL,Z_Param_Picture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanShowTweetUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanShowTweetUI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Init(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTwitterRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_ParamKeysAndValues); \
		P_GET_PROPERTY(UByteProperty,Z_Param_RequestMethod); \
		P_GET_PROPERTY(UIntProperty,Z_Param_AccountIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TwitterRequest(Z_Param_URL,Z_Param_Out_ParamKeysAndValues,ETwitterRequestMethod(Z_Param_RequestMethod),Z_Param_AccountIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAccountName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AccountIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetAccountName(Z_Param_AccountIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumAccounts) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumAccounts(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAuthorizeAccounts) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AuthorizeAccounts(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowTweetUI) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InitialMessage); \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Picture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShowTweetUI(Z_Param_InitialMessage,Z_Param_URL,Z_Param_Picture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanShowTweetUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanShowTweetUI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Init(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTwitterIntegrationBase(); \
	friend struct Z_Construct_UClass_UTwitterIntegrationBase_Statics; \
public: \
	DECLARE_CLASS(UTwitterIntegrationBase, UPlatformInterfaceBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTwitterIntegrationBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUTwitterIntegrationBase(); \
	friend struct Z_Construct_UClass_UTwitterIntegrationBase_Statics; \
public: \
	DECLARE_CLASS(UTwitterIntegrationBase, UPlatformInterfaceBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTwitterIntegrationBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwitterIntegrationBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwitterIntegrationBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwitterIntegrationBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwitterIntegrationBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTwitterIntegrationBase(UTwitterIntegrationBase&&); \
	NO_API UTwitterIntegrationBase(const UTwitterIntegrationBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwitterIntegrationBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTwitterIntegrationBase(UTwitterIntegrationBase&&); \
	NO_API UTwitterIntegrationBase(const UTwitterIntegrationBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwitterIntegrationBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwitterIntegrationBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwitterIntegrationBase)


#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_36_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TwitterIntegrationBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTwitterIntegrationBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h


#define FOREACH_ENUM_ETWITTERINTEGRATIONDELEGATE(op) \
	op(TID_AuthorizeComplete) \
	op(TID_TweetUIComplete) \
	op(TID_RequestComplete) 
#define FOREACH_ENUM_ETWITTERREQUESTMETHOD(op) \
	op(TRM_Get) \
	op(TRM_Post) \
	op(TRM_Delete) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
