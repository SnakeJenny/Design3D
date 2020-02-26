// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ComponentInstanceDataCache_generated_h
#error "ComponentInstanceDataCache.generated.h already included, missing '#pragma once' in ComponentInstanceDataCache.h"
#endif
#define ENGINE_ComponentInstanceDataCache_generated_h

#define Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__SourceComponentTemplate() { return STRUCT_OFFSET(FActorComponentInstanceData, SourceComponentTemplate); } \
	FORCEINLINE static uint32 __PPO__SourceComponentCreationMethod() { return STRUCT_OFFSET(FActorComponentInstanceData, SourceComponentCreationMethod); } \
	FORCEINLINE static uint32 __PPO__SourceComponentTypeSerializedIndex() { return STRUCT_OFFSET(FActorComponentInstanceData, SourceComponentTypeSerializedIndex); } \
	FORCEINLINE static uint32 __PPO__SavedProperties() { return STRUCT_OFFSET(FActorComponentInstanceData, SavedProperties); } \
	FORCEINLINE static uint32 __PPO__DuplicatedObjects() { return STRUCT_OFFSET(FActorComponentInstanceData, DuplicatedObjects); } \
	FORCEINLINE static uint32 __PPO__ReferencedObjects() { return STRUCT_OFFSET(FActorComponentInstanceData, ReferencedObjects); } \
	FORCEINLINE static uint32 __PPO__ReferencedNames() { return STRUCT_OFFSET(FActorComponentInstanceData, ReferencedNames); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FActorComponentInstanceData>();

#define Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FActorComponentDuplicatedObjectData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h


#define FOREACH_ENUM_ECOMPONENTCREATIONMETHOD(op) \
	op(EComponentCreationMethod::Native) \
	op(EComponentCreationMethod::SimpleConstructionScript) \
	op(EComponentCreationMethod::UserConstructionScript) \
	op(EComponentCreationMethod::Instance) 

enum class EComponentCreationMethod : uint8;
template<> ENGINE_API UEnum* StaticEnum<EComponentCreationMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
