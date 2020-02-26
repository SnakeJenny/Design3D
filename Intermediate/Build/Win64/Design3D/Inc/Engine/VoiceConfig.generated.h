// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioComponent;
class APlayerState;
class UVOIPTalker;
#ifdef ENGINE_VoiceConfig_generated_h
#error "VoiceConfig.generated.h already included, missing '#pragma once' in VoiceConfig.h"
#endif
#define ENGINE_VoiceConfig_generated_h

#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoiceSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVoiceSettings>();

#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_RPC_WRAPPERS \
	virtual void BPOnTalkingEnd_Implementation(); \
	virtual void BPOnTalkingBegin_Implementation(UAudioComponent* AudioComponent); \
 \
	DECLARE_FUNCTION(execBPOnTalkingEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPOnTalkingEnd_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPOnTalkingBegin) \
	{ \
		P_GET_OBJECT(UAudioComponent,Z_Param_AudioComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPOnTalkingBegin_Implementation(Z_Param_AudioComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVoiceLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetVoiceLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterWithPlayerState) \
	{ \
		P_GET_OBJECT(APlayerState,Z_Param_OwningState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterWithPlayerState(Z_Param_OwningState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTalkerForPlayer) \
	{ \
		P_GET_OBJECT(APlayerState,Z_Param_OwningState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVOIPTalker**)Z_Param__Result=UVOIPTalker::CreateTalkerForPlayer(Z_Param_OwningState); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BPOnTalkingEnd_Implementation(); \
	virtual void BPOnTalkingBegin_Implementation(UAudioComponent* AudioComponent); \
 \
	DECLARE_FUNCTION(execBPOnTalkingEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPOnTalkingEnd_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBPOnTalkingBegin) \
	{ \
		P_GET_OBJECT(UAudioComponent,Z_Param_AudioComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BPOnTalkingBegin_Implementation(Z_Param_AudioComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVoiceLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetVoiceLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterWithPlayerState) \
	{ \
		P_GET_OBJECT(APlayerState,Z_Param_OwningState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterWithPlayerState(Z_Param_OwningState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTalkerForPlayer) \
	{ \
		P_GET_OBJECT(APlayerState,Z_Param_OwningState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVOIPTalker**)Z_Param__Result=UVOIPTalker::CreateTalkerForPlayer(Z_Param_OwningState); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_EVENT_PARMS \
	struct VOIPTalker_eventBPOnTalkingBegin_Parms \
	{ \
		UAudioComponent* AudioComponent; \
	};


#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVOIPTalker(); \
	friend struct Z_Construct_UClass_UVOIPTalker_Statics; \
public: \
	DECLARE_CLASS(UVOIPTalker, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UVOIPTalker)


#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUVOIPTalker(); \
	friend struct Z_Construct_UClass_UVOIPTalker_Statics; \
public: \
	DECLARE_CLASS(UVOIPTalker, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UVOIPTalker)


#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVOIPTalker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVOIPTalker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVOIPTalker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVOIPTalker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVOIPTalker(UVOIPTalker&&); \
	NO_API UVOIPTalker(const UVOIPTalker&); \
public:


#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVOIPTalker(UVOIPTalker&&); \
	NO_API UVOIPTalker(const UVOIPTalker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVOIPTalker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVOIPTalker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVOIPTalker)


#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_74_PROLOG \
	Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_INCLASS \
	Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVOIPTalker>();

#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMicThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVOIPStatics::SetMicThreshold(Z_Param_InThreshold); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMicThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InThreshold); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVOIPStatics::SetMicThreshold(Z_Param_InThreshold); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVOIPStatics(); \
	friend struct Z_Construct_UClass_UVOIPStatics_Statics; \
public: \
	DECLARE_CLASS(UVOIPStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UVOIPStatics)


#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_INCLASS \
private: \
	static void StaticRegisterNativesUVOIPStatics(); \
	friend struct Z_Construct_UClass_UVOIPStatics_Statics; \
public: \
	DECLARE_CLASS(UVOIPStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UVOIPStatics)


#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVOIPStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVOIPStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVOIPStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVOIPStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVOIPStatics(UVOIPStatics&&); \
	NO_API UVOIPStatics(const UVOIPStatics&); \
public:


#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVOIPStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVOIPStatics(UVOIPStatics&&); \
	NO_API UVOIPStatics(const UVOIPStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVOIPStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVOIPStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVOIPStatics)


#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_143_PROLOG
#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_INCLASS \
	Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVOIPStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
