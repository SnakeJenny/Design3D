// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_PhysicsAssetUtils_generated_h
#error "PhysicsAssetUtils.generated.h already included, missing '#pragma once' in PhysicsAssetUtils.h"
#endif
#define UNREALED_PhysicsAssetUtils_generated_h

#define Engine_Source_Editor_UnrealEd_Public_PhysicsAssetUtils_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysAssetCreateParams_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FPhysAssetCreateParams>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Public_PhysicsAssetUtils_h


#define FOREACH_ENUM_EPHYSASSETFITVERTWEIGHT(op) \
	op(EVW_AnyWeight) \
	op(EVW_DominantWeight) 
#define FOREACH_ENUM_EPHYSASSETFITGEOMTYPE(op) \
	op(EFG_Box) \
	op(EFG_Sphyl) \
	op(EFG_Sphere) \
	op(EFG_TaperedCapsule) \
	op(EFG_SingleConvexHull) \
	op(EFG_MultiConvexHull) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
