// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceFeedbackEffect() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActiveForceFeedbackEffect();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackParameters();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackChannelDetails();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FActiveForceFeedbackEffect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect, Z_Construct_UPackage__Script_Engine(), TEXT("ActiveForceFeedbackEffect"), sizeof(FActiveForceFeedbackEffect), Get_Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActiveForceFeedbackEffect>()
{
	return FActiveForceFeedbackEffect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActiveForceFeedbackEffect(FActiveForceFeedbackEffect::StaticStruct, TEXT("/Script/Engine"), TEXT("ActiveForceFeedbackEffect"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFActiveForceFeedbackEffect
{
	FScriptStruct_Engine_StaticRegisterNativesFActiveForceFeedbackEffect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActiveForceFeedbackEffect")),new UScriptStruct::TCppStructOps<FActiveForceFeedbackEffect>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFActiveForceFeedbackEffect;
	struct Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceFeedbackEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveForceFeedbackEffect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActiveForceFeedbackEffect, ForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ActiveForceFeedbackEffect",
		sizeof(FActiveForceFeedbackEffect),
		alignof(FActiveForceFeedbackEffect),
		Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActiveForceFeedbackEffect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActiveForceFeedbackEffect"), sizeof(FActiveForceFeedbackEffect), Get_Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Hash() { return 1749639301U; }
class UScriptStruct* FForceFeedbackParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FForceFeedbackParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FForceFeedbackParameters, Z_Construct_UPackage__Script_Engine(), TEXT("ForceFeedbackParameters"), sizeof(FForceFeedbackParameters), Get_Z_Construct_UScriptStruct_FForceFeedbackParameters_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FForceFeedbackParameters>()
{
	return FForceFeedbackParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FForceFeedbackParameters(FForceFeedbackParameters::StaticStruct, TEXT("/Script/Engine"), TEXT("ForceFeedbackParameters"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFForceFeedbackParameters
{
	FScriptStruct_Engine_StaticRegisterNativesFForceFeedbackParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ForceFeedbackParameters")),new UScriptStruct::TCppStructOps<FForceFeedbackParameters>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFForceFeedbackParameters;
	struct Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayWhilePaused_MetaData[];
#endif
		static void NewProp_bPlayWhilePaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayWhilePaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[];
#endif
		static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
		{ "ToolTip", "This structure is used to pass arguments to ClientPlayForceFeedback() client RPC function" },
	};
#endif
	void* Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForceFeedbackParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused_SetBit(void* Obj)
	{
		((FForceFeedbackParameters*)Obj)->bPlayWhilePaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused = { "bPlayWhilePaused", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FForceFeedbackParameters), &Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
	{
		((FForceFeedbackParameters*)Obj)->bIgnoreTimeDilation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FForceFeedbackParameters), &Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FForceFeedbackParameters*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FForceFeedbackParameters), &Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_Tag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForceFeedbackParameters, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_Tag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_Tag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ForceFeedbackParameters",
		sizeof(FForceFeedbackParameters),
		alignof(FForceFeedbackParameters),
		Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FForceFeedbackParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ForceFeedbackParameters"), sizeof(FForceFeedbackParameters), Get_Z_Construct_UScriptStruct_FForceFeedbackParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FForceFeedbackParameters_Hash() { return 1836970839U; }
class UScriptStruct* FForceFeedbackChannelDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails, Z_Construct_UPackage__Script_Engine(), TEXT("ForceFeedbackChannelDetails"), sizeof(FForceFeedbackChannelDetails), Get_Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FForceFeedbackChannelDetails>()
{
	return FForceFeedbackChannelDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FForceFeedbackChannelDetails(FForceFeedbackChannelDetails::StaticStruct, TEXT("/Script/Engine"), TEXT("ForceFeedbackChannelDetails"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFForceFeedbackChannelDetails
{
	FScriptStruct_Engine_StaticRegisterNativesFForceFeedbackChannelDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ForceFeedbackChannelDetails")),new UScriptStruct::TCppStructOps<FForceFeedbackChannelDetails>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFForceFeedbackChannelDetails;
	struct Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectsRightSmall_MetaData[];
#endif
		static void NewProp_bAffectsRightSmall_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsRightSmall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectsRightLarge_MetaData[];
#endif
		static void NewProp_bAffectsRightLarge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsRightLarge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectsLeftSmall_MetaData[];
#endif
		static void NewProp_bAffectsLeftSmall_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsLeftSmall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectsLeftLarge_MetaData[];
#endif
		static void NewProp_bAffectsLeftLarge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsLeftLarge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForceFeedbackChannelDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "ChannelDetails" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForceFeedbackChannelDetails, Curve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_Curve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_Curve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall_MetaData[] = {
		{ "Category", "ChannelDetails" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall_SetBit(void* Obj)
	{
		((FForceFeedbackChannelDetails*)Obj)->bAffectsRightSmall = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall = { "bAffectsRightSmall", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FForceFeedbackChannelDetails), &Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge_MetaData[] = {
		{ "Category", "ChannelDetails" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge_SetBit(void* Obj)
	{
		((FForceFeedbackChannelDetails*)Obj)->bAffectsRightLarge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge = { "bAffectsRightLarge", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FForceFeedbackChannelDetails), &Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall_MetaData[] = {
		{ "Category", "ChannelDetails" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall_SetBit(void* Obj)
	{
		((FForceFeedbackChannelDetails*)Obj)->bAffectsLeftSmall = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall = { "bAffectsLeftSmall", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FForceFeedbackChannelDetails), &Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge_MetaData[] = {
		{ "Category", "ChannelDetails" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge_SetBit(void* Obj)
	{
		((FForceFeedbackChannelDetails*)Obj)->bAffectsLeftLarge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge = { "bAffectsLeftLarge", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FForceFeedbackChannelDetails), &Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_Curve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ForceFeedbackChannelDetails",
		sizeof(FForceFeedbackChannelDetails),
		alignof(FForceFeedbackChannelDetails),
		Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackChannelDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ForceFeedbackChannelDetails"), sizeof(FForceFeedbackChannelDetails), Get_Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Hash() { return 2752848342U; }
	void UForceFeedbackEffect::StaticRegisterNativesUForceFeedbackEffect()
	{
	}
	UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister()
	{
		return UForceFeedbackEffect::StaticClass();
	}
	struct Z_Construct_UClass_UForceFeedbackEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChannelDetails;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChannelDetails_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UForceFeedbackEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameFramework/ForceFeedbackEffect.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
		{ "ToolTip", "A predefined force-feedback effect to be played on a controller" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
		{ "ToolTip", "Duration of force feedback pattern in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010010000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UForceFeedbackEffect, Duration), METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_Duration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails_MetaData[] = {
		{ "Category", "ForceFeedbackEffect" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails = { "ChannelDetails", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UForceFeedbackEffect, ChannelDetails), METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails_MetaData, ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails_Inner = { "ChannelDetails", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FForceFeedbackChannelDetails, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UForceFeedbackEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UForceFeedbackEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UForceFeedbackEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UForceFeedbackEffect_Statics::ClassParams = {
		&UForceFeedbackEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UForceFeedbackEffect_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackEffect_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackEffect_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UForceFeedbackEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UForceFeedbackEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UForceFeedbackEffect, 3096314245);
	template<> ENGINE_API UClass* StaticClass<UForceFeedbackEffect>()
	{
		return UForceFeedbackEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UForceFeedbackEffect(Z_Construct_UClass_UForceFeedbackEffect, &UForceFeedbackEffect::StaticClass, TEXT("/Script/Engine"), TEXT("UForceFeedbackEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceFeedbackEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
