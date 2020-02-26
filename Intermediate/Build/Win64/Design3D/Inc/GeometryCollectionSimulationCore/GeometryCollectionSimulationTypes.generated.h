// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCOLLECTIONSIMULATIONCORE_GeometryCollectionSimulationTypes_generated_h
#error "GeometryCollectionSimulationTypes.generated.h already included, missing '#pragma once' in GeometryCollectionSimulationTypes.h"
#endif
#define GEOMETRYCOLLECTIONSIMULATIONCORE_GeometryCollectionSimulationTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_GeometryCollectionSimulationCore_Public_GeometryCollection_GeometryCollectionSimulationTypes_h


#define FOREACH_ENUM_EEMISSIONPATTERNTYPEENUM(op) \
	op(EEmissionPatternTypeEnum::Chaos_Emission_Pattern_First_Frame) \
	op(EEmissionPatternTypeEnum::Chaos_Emission_Pattern_On_Demand) \
	op(EEmissionPatternTypeEnum::Chaos_Max) 

enum class EEmissionPatternTypeEnum : uint8;
template<> GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* StaticEnum<EEmissionPatternTypeEnum>();

#define FOREACH_ENUM_EINITIALVELOCITYTYPEENUM(op) \
	op(EInitialVelocityTypeEnum::Chaos_Initial_Velocity_User_Defined) \
	op(EInitialVelocityTypeEnum::Chaos_Initial_Velocity_None) \
	op(EInitialVelocityTypeEnum::Chaos_Max) 

enum class EInitialVelocityTypeEnum : uint8;
template<> GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* StaticEnum<EInitialVelocityTypeEnum>();

#define FOREACH_ENUM_EOBJECTTYPEENUM(op) \
	op(EObjectTypeEnum::Chaos_Object_Dynamic) \
	op(EObjectTypeEnum::Chaos_Object_Kinematic) \
	op(EObjectTypeEnum::Chaos_Object_Sleeping) \
	op(EObjectTypeEnum::Chaos_Max) 

enum class EObjectTypeEnum : uint8;
template<> GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* StaticEnum<EObjectTypeEnum>();

#define FOREACH_ENUM_EIMPLICITTYPEENUM(op) \
	op(EImplicitTypeEnum::Chaos_Implicit_Cube) \
	op(EImplicitTypeEnum::Chaos_Implicit_Sphere) \
	op(EImplicitTypeEnum::Chaos_Implicit_LevelSet) \
	op(EImplicitTypeEnum::Chaos_Max) 

enum class EImplicitTypeEnum : uint8;
template<> GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* StaticEnum<EImplicitTypeEnum>();

#define FOREACH_ENUM_ECOLLISIONTYPEENUM(op) \
	op(ECollisionTypeEnum::Chaos_Volumetric) \
	op(ECollisionTypeEnum::Chaos_Surface_Volumetric) \
	op(ECollisionTypeEnum::Chaos_Max) 

enum class ECollisionTypeEnum : uint8;
template<> GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* StaticEnum<ECollisionTypeEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
