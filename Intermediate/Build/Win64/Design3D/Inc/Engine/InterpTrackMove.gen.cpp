// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackMove() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpLookupTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpLookupPoint();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackMove_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackMove();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector();
// End Cross Module References
	static UEnum* EInterpTrackMoveRotMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode, Z_Construct_UPackage__Script_Engine(), TEXT("EInterpTrackMoveRotMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EInterpTrackMoveRotMode>()
	{
		return EInterpTrackMoveRotMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInterpTrackMoveRotMode(EInterpTrackMoveRotMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EInterpTrackMoveRotMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode_Hash() { return 1410565700U; }
	UEnum* Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInterpTrackMoveRotMode"), 0, Get_Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "IMR_Keyframed", (int64)IMR_Keyframed },
				{ "IMR_LookAtGroup", (int64)IMR_LookAtGroup },
				{ "IMR_Ignore", (int64)IMR_Ignore },
				{ "IMR_MAX", (int64)IMR_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "IMR_Ignore.ToolTip", "Do not change rotation. Ignore it." },
				{ "IMR_Keyframed.ToolTip", "Should take orientation from the keyframe." },
				{ "IMR_LookAtGroup.ToolTip", "Point the X-Axis of the controlled Actor at the group specified by LookAtGroupName." },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EInterpTrackMoveRotMode",
				"EInterpTrackMoveRotMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FInterpLookupTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInterpLookupTrack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterpLookupTrack, Z_Construct_UPackage__Script_Engine(), TEXT("InterpLookupTrack"), sizeof(FInterpLookupTrack), Get_Z_Construct_UScriptStruct_FInterpLookupTrack_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInterpLookupTrack>()
{
	return FInterpLookupTrack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInterpLookupTrack(FInterpLookupTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("InterpLookupTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInterpLookupTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFInterpLookupTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InterpLookupTrack")),new UScriptStruct::TCppStructOps<FInterpLookupTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInterpLookupTrack;
	struct Z_Construct_UScriptStruct_FInterpLookupTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterpLookupTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::NewProp_Points_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInterpLookupTrack, Points), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::NewProp_Points_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::NewProp_Points_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInterpLookupPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::NewProp_Points_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InterpLookupTrack",
		sizeof(FInterpLookupTrack),
		alignof(FInterpLookupTrack),
		Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterpLookupTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInterpLookupTrack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InterpLookupTrack"), sizeof(FInterpLookupTrack), Get_Z_Construct_UScriptStruct_FInterpLookupTrack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInterpLookupTrack_Hash() { return 4186195257U; }
class UScriptStruct* FInterpLookupPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInterpLookupPoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterpLookupPoint, Z_Construct_UPackage__Script_Engine(), TEXT("InterpLookupPoint"), sizeof(FInterpLookupPoint), Get_Z_Construct_UScriptStruct_FInterpLookupPoint_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInterpLookupPoint>()
{
	return FInterpLookupPoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInterpLookupPoint(FInterpLookupPoint::StaticStruct, TEXT("/Script/Engine"), TEXT("InterpLookupPoint"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInterpLookupPoint
{
	FScriptStruct_Engine_StaticRegisterNativesFInterpLookupPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InterpLookupPoint")),new UScriptStruct::TCppStructOps<FInterpLookupPoint>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInterpLookupPoint;
	struct Z_Construct_UScriptStruct_FInterpLookupPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "Array of group names to retrieve position and rotation data from instead of using the data stored in the keyframe.\nA value of NAME_None means to use the PosTrack and EulerTrack data for the keyframe.\nThere needs to be the same amount of elements in this array as there are keyframes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterpLookupPoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInterpLookupPoint, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInterpLookupPoint, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewProp_GroupName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewProp_GroupName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewProp_GroupName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InterpLookupPoint",
		sizeof(FInterpLookupPoint),
		alignof(FInterpLookupPoint),
		Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterpLookupPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInterpLookupPoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InterpLookupPoint"), sizeof(FInterpLookupPoint), Get_Z_Construct_UScriptStruct_FInterpLookupPoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInterpLookupPoint_Hash() { return 3101504822U; }
	void UInterpTrackMove::StaticRegisterNativesUInterpTrackMove()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackMove_NoRegister()
	{
		return UInterpTrackMove::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHide3DTrack_MetaData[];
#endif
		static void NewProp_bHide3DTrack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHide3DTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowRotationOnCurveEd_MetaData[];
#endif
		static void NewProp_bShowRotationOnCurveEd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowRotationOnCurveEd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowTranslationOnCurveEd_MetaData[];
#endif
		static void NewProp_bShowTranslationOnCurveEd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowTranslationOnCurveEd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableMovement_MetaData[];
#endif
		static void NewProp_bDisableMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowArrowAtKeys_MetaData[];
#endif
		static void NewProp_bShowArrowAtKeys_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowArrowAtKeys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseQuatInterpolation_MetaData[];
#endif
		static void NewProp_bUseQuatInterpolation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseQuatInterpolation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngCurveTension_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngCurveTension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinCurveTension_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinCurveTension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtGroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LookAtGroupName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookupTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookupTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EulerTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EulerTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PosTrack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Movement Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackMove.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "Track containing data for moving an actor around over time." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_RotMode_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_RotMode = { "RotMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackMove, RotMode), Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_RotMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_RotMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bHide3DTrack_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "If true, 3D representation of this track in the 3D viewport is disabled." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bHide3DTrack_SetBit(void* Obj)
	{
		((UInterpTrackMove*)Obj)->bHide3DTrack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bHide3DTrack = { "bHide3DTrack", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackMove), &Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bHide3DTrack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bHide3DTrack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bHide3DTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowRotationOnCurveEd_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "If false, when this track is displayed on the Curve Editor in Matinee, do not show the Rotation tracks." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowRotationOnCurveEd_SetBit(void* Obj)
	{
		((UInterpTrackMove*)Obj)->bShowRotationOnCurveEd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowRotationOnCurveEd = { "bShowRotationOnCurveEd", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackMove), &Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowRotationOnCurveEd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowRotationOnCurveEd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowRotationOnCurveEd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowTranslationOnCurveEd_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "If false, when this track is displayed on the Curve Editor in Matinee, do not show the Translation tracks." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowTranslationOnCurveEd_SetBit(void* Obj)
	{
		((UInterpTrackMove*)Obj)->bShowTranslationOnCurveEd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowTranslationOnCurveEd = { "bShowTranslationOnCurveEd", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackMove), &Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowTranslationOnCurveEd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowTranslationOnCurveEd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowTranslationOnCurveEd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bDisableMovement_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "Disable previewing of this track - will always position  AActor  at Time=0.0. Useful when keyframing an object relative to this group." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bDisableMovement_SetBit(void* Obj)
	{
		((UInterpTrackMove*)Obj)->bDisableMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bDisableMovement = { "bDisableMovement", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackMove), &Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bDisableMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bDisableMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bDisableMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowArrowAtKeys_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "In the editor, show a small arrow at each keyframe indicating the rotation at that key." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowArrowAtKeys_SetBit(void* Obj)
	{
		((UInterpTrackMove*)Obj)->bShowArrowAtKeys = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowArrowAtKeys = { "bShowArrowAtKeys", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackMove), &Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowArrowAtKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowArrowAtKeys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowArrowAtKeys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bUseQuatInterpolation_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "Use a Quaternion linear interpolation between keys.\nThis is robust and will find the 'shortest' distance between keys, but does not support ease in/out." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bUseQuatInterpolation_SetBit(void* Obj)
	{
		((UInterpTrackMove*)Obj)->bUseQuatInterpolation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bUseQuatInterpolation = { "bUseQuatInterpolation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackMove), &Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bUseQuatInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bUseQuatInterpolation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bUseQuatInterpolation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_AngCurveTension_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "Controls the tightness of the curve for the rotation path." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_AngCurveTension = { "AngCurveTension", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackMove, AngCurveTension), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_AngCurveTension_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_AngCurveTension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LinCurveTension_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "Controls the tightness of the curve for the translation path." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LinCurveTension = { "LinCurveTension", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackMove, LinCurveTension), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LinCurveTension_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LinCurveTension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LookAtGroupName_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "When using IMR_LookAtGroup, specifies the Group which this track should always point its actor at." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LookAtGroupName = { "LookAtGroupName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackMove, LookAtGroupName), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LookAtGroupName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LookAtGroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LookupTrack_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LookupTrack = { "LookupTrack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackMove, LookupTrack), Z_Construct_UScriptStruct_FInterpLookupTrack, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LookupTrack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LookupTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_EulerTrack_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "Actual rotation keyframe data, stored as Euler angles in degrees, for easy editing on curve." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_EulerTrack = { "EulerTrack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackMove, EulerTrack), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_EulerTrack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_EulerTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_PosTrack_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "Actual position keyframe data." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_PosTrack = { "PosTrack", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackMove, PosTrack), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_PosTrack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_PosTrack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_RotMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bHide3DTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowRotationOnCurveEd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowTranslationOnCurveEd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bDisableMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowArrowAtKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bUseQuatInterpolation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_AngCurveTension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LinCurveTension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LookAtGroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LookupTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_EulerTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_PosTrack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackMove>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackMove_Statics::ClassParams = {
		&UInterpTrackMove::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackMove_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackMove()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackMove_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackMove, 719799054);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackMove>()
	{
		return UInterpTrackMove::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackMove(Z_Construct_UClass_UInterpTrackMove, &UInterpTrackMove::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackMove"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackMove);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
