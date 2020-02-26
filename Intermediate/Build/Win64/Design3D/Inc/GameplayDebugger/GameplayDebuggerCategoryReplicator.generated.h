// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef GAMEPLAYDEBUGGER_GameplayDebuggerCategoryReplicator_generated_h
#error "GameplayDebuggerCategoryReplicator.generated.h already included, missing '#pragma once' in GameplayDebuggerCategoryReplicator.h"
#endif
#define GAMEPLAYDEBUGGER_GameplayDebuggerCategoryReplicator_generated_h

#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayDebuggerDebugActor_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<struct FGameplayDebuggerDebugActor>();

#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayDebuggerNetPack_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<struct FGameplayDebuggerNetPack>();

#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_RPC_WRAPPERS \
	virtual bool ServerSendExtensionInputEvent_Validate(int32 , int32 ); \
	virtual void ServerSendExtensionInputEvent_Implementation(int32 ExtensionId, int32 HandlerId); \
	virtual bool ServerSendCategoryInputEvent_Validate(int32 , int32 ); \
	virtual void ServerSendCategoryInputEvent_Implementation(int32 CategoryId, int32 HandlerId); \
	virtual bool ServerSetCategoryEnabled_Validate(int32 , bool ); \
	virtual void ServerSetCategoryEnabled_Implementation(int32 CategoryId, bool bEnable); \
	virtual bool ServerSetDebugActor_Validate(AActor* ); \
	virtual void ServerSetDebugActor_Implementation(AActor* Actor); \
	virtual bool ServerSetEnabled_Validate(bool ); \
	virtual void ServerSetEnabled_Implementation(bool bEnable); \
 \
	DECLARE_FUNCTION(execServerSendExtensionInputEvent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ExtensionId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_HandlerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSendExtensionInputEvent_Validate(Z_Param_ExtensionId,Z_Param_HandlerId)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSendExtensionInputEvent_Validate")); \
			return; \
		} \
		P_THIS->ServerSendExtensionInputEvent_Implementation(Z_Param_ExtensionId,Z_Param_HandlerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSendCategoryInputEvent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CategoryId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_HandlerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSendCategoryInputEvent_Validate(Z_Param_CategoryId,Z_Param_HandlerId)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSendCategoryInputEvent_Validate")); \
			return; \
		} \
		P_THIS->ServerSendCategoryInputEvent_Implementation(Z_Param_CategoryId,Z_Param_HandlerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetCategoryEnabled) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CategoryId); \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetCategoryEnabled_Validate(Z_Param_CategoryId,Z_Param_bEnable)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetCategoryEnabled_Validate")); \
			return; \
		} \
		P_THIS->ServerSetCategoryEnabled_Implementation(Z_Param_CategoryId,Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetDebugActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetDebugActor_Validate(Z_Param_Actor)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetDebugActor_Validate")); \
			return; \
		} \
		P_THIS->ServerSetDebugActor_Implementation(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetEnabled_Validate(Z_Param_bEnable)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetEnabled_Validate")); \
			return; \
		} \
		P_THIS->ServerSetEnabled_Implementation(Z_Param_bEnable); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerSendExtensionInputEvent_Validate(int32 , int32 ); \
	virtual void ServerSendExtensionInputEvent_Implementation(int32 ExtensionId, int32 HandlerId); \
	virtual bool ServerSendCategoryInputEvent_Validate(int32 , int32 ); \
	virtual void ServerSendCategoryInputEvent_Implementation(int32 CategoryId, int32 HandlerId); \
	virtual bool ServerSetCategoryEnabled_Validate(int32 , bool ); \
	virtual void ServerSetCategoryEnabled_Implementation(int32 CategoryId, bool bEnable); \
	virtual bool ServerSetDebugActor_Validate(AActor* ); \
	virtual void ServerSetDebugActor_Implementation(AActor* Actor); \
	virtual bool ServerSetEnabled_Validate(bool ); \
	virtual void ServerSetEnabled_Implementation(bool bEnable); \
 \
	DECLARE_FUNCTION(execServerSendExtensionInputEvent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ExtensionId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_HandlerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSendExtensionInputEvent_Validate(Z_Param_ExtensionId,Z_Param_HandlerId)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSendExtensionInputEvent_Validate")); \
			return; \
		} \
		P_THIS->ServerSendExtensionInputEvent_Implementation(Z_Param_ExtensionId,Z_Param_HandlerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSendCategoryInputEvent) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CategoryId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_HandlerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSendCategoryInputEvent_Validate(Z_Param_CategoryId,Z_Param_HandlerId)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSendCategoryInputEvent_Validate")); \
			return; \
		} \
		P_THIS->ServerSendCategoryInputEvent_Implementation(Z_Param_CategoryId,Z_Param_HandlerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetCategoryEnabled) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CategoryId); \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetCategoryEnabled_Validate(Z_Param_CategoryId,Z_Param_bEnable)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetCategoryEnabled_Validate")); \
			return; \
		} \
		P_THIS->ServerSetCategoryEnabled_Implementation(Z_Param_CategoryId,Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetDebugActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetDebugActor_Validate(Z_Param_Actor)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetDebugActor_Validate")); \
			return; \
		} \
		P_THIS->ServerSetDebugActor_Implementation(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetEnabled_Validate(Z_Param_bEnable)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetEnabled_Validate")); \
			return; \
		} \
		P_THIS->ServerSetEnabled_Implementation(Z_Param_bEnable); \
		P_NATIVE_END; \
	}


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_EVENT_PARMS \
	struct GameplayDebuggerCategoryReplicator_eventServerSendCategoryInputEvent_Parms \
	{ \
		int32 CategoryId; \
		int32 HandlerId; \
	}; \
	struct GameplayDebuggerCategoryReplicator_eventServerSendExtensionInputEvent_Parms \
	{ \
		int32 ExtensionId; \
		int32 HandlerId; \
	}; \
	struct GameplayDebuggerCategoryReplicator_eventServerSetCategoryEnabled_Parms \
	{ \
		int32 CategoryId; \
		bool bEnable; \
	}; \
	struct GameplayDebuggerCategoryReplicator_eventServerSetDebugActor_Parms \
	{ \
		AActor* Actor; \
	}; \
	struct GameplayDebuggerCategoryReplicator_eventServerSetEnabled_Parms \
	{ \
		bool bEnable; \
	};


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_CALLBACK_WRAPPERS
#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameplayDebuggerCategoryReplicator(); \
	friend struct Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics; \
public: \
	DECLARE_CLASS(AGameplayDebuggerCategoryReplicator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), NO_API) \
	DECLARE_SERIALIZER(AGameplayDebuggerCategoryReplicator) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_INCLASS \
private: \
	static void StaticRegisterNativesAGameplayDebuggerCategoryReplicator(); \
	friend struct Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_Statics; \
public: \
	DECLARE_CLASS(AGameplayDebuggerCategoryReplicator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), NO_API) \
	DECLARE_SERIALIZER(AGameplayDebuggerCategoryReplicator) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameplayDebuggerCategoryReplicator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayDebuggerCategoryReplicator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayDebuggerCategoryReplicator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayDebuggerCategoryReplicator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameplayDebuggerCategoryReplicator(AGameplayDebuggerCategoryReplicator&&); \
	NO_API AGameplayDebuggerCategoryReplicator(const AGameplayDebuggerCategoryReplicator&); \
public:


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameplayDebuggerCategoryReplicator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameplayDebuggerCategoryReplicator(AGameplayDebuggerCategoryReplicator&&); \
	NO_API AGameplayDebuggerCategoryReplicator(const AGameplayDebuggerCategoryReplicator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayDebuggerCategoryReplicator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayDebuggerCategoryReplicator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayDebuggerCategoryReplicator)


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OwnerPC() { return STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, OwnerPC); } \
	FORCEINLINE static uint32 __PPO__bIsEnabled() { return STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, bIsEnabled); } \
	FORCEINLINE static uint32 __PPO__ReplicatedData() { return STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, ReplicatedData); } \
	FORCEINLINE static uint32 __PPO__DebugActor() { return STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, DebugActor); } \
	FORCEINLINE static uint32 __PPO__RenderingComp() { return STRUCT_OFFSET(AGameplayDebuggerCategoryReplicator, RenderingComp); }


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_66_PROLOG \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_EVENT_PARMS


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_RPC_WRAPPERS \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_CALLBACK_WRAPPERS \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_INCLASS \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_CALLBACK_WRAPPERS \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h_69_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayDebuggerCategoryReplicator."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<class AGameplayDebuggerCategoryReplicator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerCategoryReplicator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
