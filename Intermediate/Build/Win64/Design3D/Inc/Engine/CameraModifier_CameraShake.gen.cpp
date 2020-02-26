// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Camera/CameraModifier_CameraShake.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraModifier_CameraShake() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPooledCameraShakes();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_CameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_CameraShake();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
class UScriptStruct* FPooledCameraShakes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPooledCameraShakes_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPooledCameraShakes, Z_Construct_UPackage__Script_Engine(), TEXT("PooledCameraShakes"), sizeof(FPooledCameraShakes), Get_Z_Construct_UScriptStruct_FPooledCameraShakes_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPooledCameraShakes>()
{
	return FPooledCameraShakes::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPooledCameraShakes(FPooledCameraShakes::StaticStruct, TEXT("/Script/Engine"), TEXT("PooledCameraShakes"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPooledCameraShakes
{
	FScriptStruct_Engine_StaticRegisterNativesFPooledCameraShakes()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PooledCameraShakes")),new UScriptStruct::TCppStructOps<FPooledCameraShakes>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPooledCameraShakes;
	struct Z_Construct_UScriptStruct_FPooledCameraShakes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PooledShakes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PooledShakes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PooledShakes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPooledCameraShakes>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes = { "PooledShakes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPooledCameraShakes, PooledShakes), METADATA_PARAMS(Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes_Inner = { "PooledShakes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCameraShake_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::NewProp_PooledShakes_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PooledCameraShakes",
		sizeof(FPooledCameraShakes),
		alignof(FPooledCameraShakes),
		Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPooledCameraShakes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPooledCameraShakes_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PooledCameraShakes"), sizeof(FPooledCameraShakes), Get_Z_Construct_UScriptStruct_FPooledCameraShakes_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPooledCameraShakes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPooledCameraShakes_Hash() { return 2338630933U; }
	void UCameraModifier_CameraShake::StaticRegisterNativesUCameraModifier_CameraShake()
	{
	}
	UClass* Z_Construct_UClass_UCameraModifier_CameraShake_NoRegister()
	{
		return UCameraModifier_CameraShake::StaticClass();
	}
	struct Z_Construct_UClass_UCameraModifier_CameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplitScreenShakeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplitScreenShakeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpiredPooledShakesMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ExpiredPooledShakesMap;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ExpiredPooledShakesMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpiredPooledShakesMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveShakes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveShakes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveShakes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraModifier_CameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_CameraShake_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Camera/CameraModifier_CameraShake.h" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
		{ "ToolTip", "A UCameraModifier_CameraShake is a camera modifier that can apply a UCameraShake to\nthe owning camera." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_SplitScreenShakeScale_MetaData[] = {
		{ "Category", "CameraModifier_CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
		{ "ToolTip", "Scaling factor applied to all camera shakes in when in splitscreen mode. Normally used to reduce shaking, since shakes feel more intense in a smaller viewport." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_SplitScreenShakeScale = { "SplitScreenShakeScale", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraModifier_CameraShake, SplitScreenShakeScale), METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_SplitScreenShakeScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_SplitScreenShakeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap = { "ExpiredPooledShakesMap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraModifier_CameraShake, ExpiredPooledShakesMap), METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_Key_KeyProp = { "ExpiredPooledShakesMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_ValueProp = { "ExpiredPooledShakesMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FPooledCameraShakes, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier_CameraShake.h" },
		{ "ToolTip", "List of active CameraShake instances" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes = { "ActiveShakes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraModifier_CameraShake, ActiveShakes), METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes_Inner = { "ActiveShakes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCameraShake_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraModifier_CameraShake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_SplitScreenShakeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ExpiredPooledShakesMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_CameraShake_Statics::NewProp_ActiveShakes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraModifier_CameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraModifier_CameraShake>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCameraModifier_CameraShake_Statics::ClassParams = {
		&UCameraModifier_CameraShake::StaticClass,
		"Camera",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCameraModifier_CameraShake_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_CameraShake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraModifier_CameraShake()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCameraModifier_CameraShake_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraModifier_CameraShake, 1241542093);
	template<> ENGINE_API UClass* StaticClass<UCameraModifier_CameraShake>()
	{
		return UCameraModifier_CameraShake::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraModifier_CameraShake(Z_Construct_UClass_UCameraModifier_CameraShake, &UCameraModifier_CameraShake::StaticClass, TEXT("/Script/Engine"), TEXT("UCameraModifier_CameraShake"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraModifier_CameraShake);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
