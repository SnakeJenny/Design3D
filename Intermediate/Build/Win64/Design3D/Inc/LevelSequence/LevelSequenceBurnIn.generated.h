// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequenceBurnInInitSettings;
class UObject;
#ifdef LEVELSEQUENCE_LevelSequenceBurnIn_generated_h
#error "LevelSequenceBurnIn.generated.h already included, missing '#pragma once' in LevelSequenceBurnIn.h"
#endif
#define LEVELSEQUENCE_LevelSequenceBurnIn_generated_h

#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_RPC_WRAPPERS \
	virtual TSubclassOf<ULevelSequenceBurnInInitSettings>  GetSettingsClass_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetSettingsClass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<ULevelSequenceBurnInInitSettings> *)Z_Param__Result=P_THIS->GetSettingsClass_Implementation(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSettingsClass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<ULevelSequenceBurnInInitSettings> *)Z_Param__Result=P_THIS->GetSettingsClass_Implementation(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_EVENT_PARMS \
	struct LevelSequenceBurnIn_eventGetSettingsClass_Parms \
	{ \
		TSubclassOf<ULevelSequenceBurnInInitSettings>  ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		LevelSequenceBurnIn_eventGetSettingsClass_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct LevelSequenceBurnIn_eventSetSettings_Parms \
	{ \
		UObject* InSettings; \
	};


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequenceBurnIn(); \
	friend struct Z_Construct_UClass_ULevelSequenceBurnIn_Statics; \
public: \
	DECLARE_CLASS(ULevelSequenceBurnIn, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequenceBurnIn)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_INCLASS \
private: \
	static void StaticRegisterNativesULevelSequenceBurnIn(); \
	friend struct Z_Construct_UClass_ULevelSequenceBurnIn_Statics; \
public: \
	DECLARE_CLASS(ULevelSequenceBurnIn, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequenceBurnIn)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequenceBurnIn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceBurnIn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceBurnIn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceBurnIn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequenceBurnIn(ULevelSequenceBurnIn&&); \
	NO_API ULevelSequenceBurnIn(const ULevelSequenceBurnIn&); \
public:


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequenceBurnIn(ULevelSequenceBurnIn&&); \
	NO_API ULevelSequenceBurnIn(const ULevelSequenceBurnIn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceBurnIn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceBurnIn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceBurnIn)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FrameInformation() { return STRUCT_OFFSET(ULevelSequenceBurnIn, FrameInformation); } \
	FORCEINLINE static uint32 __PPO__LevelSequenceActor() { return STRUCT_OFFSET(ULevelSequenceBurnIn, LevelSequenceActor); }


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_16_PROLOG \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_EVENT_PARMS


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_INCLASS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCE_API UClass* StaticClass<class ULevelSequenceBurnIn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
