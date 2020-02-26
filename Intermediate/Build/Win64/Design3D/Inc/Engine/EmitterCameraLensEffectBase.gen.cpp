// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmitterCameraLensEffectBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AEmitterCameraLensEffectBase();
	ENGINE_API UClass* Z_Construct_UClass_AEmitter();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void AEmitterCameraLensEffectBase::StaticRegisterNativesAEmitterCameraLensEffectBase()
	{
	}
	UClass* Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister()
	{
		return AEmitterCameraLensEffectBase::StaticClass();
	}
	struct Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistFromCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistFromCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmittersToTreatAsSame_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EmittersToTreatAsSame;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EmittersToTreatAsSame_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetWhenRetriggered_MetaData[];
#endif
		static void NewProp_bResetWhenRetriggered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetWhenRetriggered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowMultipleInstances_MetaData[];
#endif
		static void NewProp_bAllowMultipleInstances_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS_CameraEffectNonExtremeContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PS_CameraEffectNonExtremeContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PS_CameraEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PS_CameraEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEmitter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Activation Components|Activation Input Collision Game|Damage" },
		{ "IncludePath", "Particles/EmitterCameraLensEffectBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_DistFromCamera_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "UE_DEPRECATED(4.11)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_DistFromCamera = { "DistFromCamera", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEmitterCameraLensEffectBase, DistFromCamera_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_DistFromCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_DistFromCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame_MetaData[] = {
		{ "Category", "EmitterCameraLensEffectBase" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "If an emitter class in this array is currently playing, do not play this effect.\nUseful for preventing multiple similar or expensive camera effects from playing simultaneously." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame = { "EmittersToTreatAsSame", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEmitterCameraLensEffectBase, EmittersToTreatAsSame), METADATA_PARAMS(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame_Inner = { "EmittersToTreatAsSame", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_MetaData[] = {
		{ "Category", "EmitterCameraLensEffectBase" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "If bAllowMultipleInstances is true and this effect is retriggered, the particle system will be reset if this is true" },
	};
#endif
	void Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_SetBit(void* Obj)
	{
		((AEmitterCameraLensEffectBase*)Obj)->bResetWhenRetriggered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bResetWhenRetriggered = { "bResetWhenRetriggered", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AEmitterCameraLensEffectBase), &Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_MetaData[] = {
		{ "Category", "EmitterCameraLensEffectBase" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "true if multiple instances of this emitter can exist simultaneously, false otherwise." },
	};
#endif
	void Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_SetBit(void* Obj)
	{
		((AEmitterCameraLensEffectBase*)Obj)->bAllowMultipleInstances = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bAllowMultipleInstances = { "bAllowMultipleInstances", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AEmitterCameraLensEffectBase), &Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseFOV_MetaData[] = {
		{ "Category", "EmitterCameraLensEffectBase" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "This is the assumed FOV for which the effect was authored. The code will make automatic adjustments to make it look the same at different FOVs" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseFOV = { "BaseFOV", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEmitterCameraLensEffectBase, BaseFOV), METADATA_PARAMS(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseFOV_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "Category", "EmitterCameraLensEffectBase" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "Effect-to-camera transform to allow arbitrary placement of the particle system .\nNote the X component of the location will be scaled with camera fov to keep the lens effect the same apparent size." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEmitterCameraLensEffectBase, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_RelativeTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_RelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseCamera_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "Camera this emitter is attached to, will be notified when emitter is destroyed" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseCamera = { "BaseCamera", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEmitterCameraLensEffectBase, BaseCamera), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_PS_CameraEffectNonExtremeContent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "The effect to use for non extreme content" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_PS_CameraEffectNonExtremeContent = { "PS_CameraEffectNonExtremeContent", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEmitterCameraLensEffectBase, PS_CameraEffectNonExtremeContent_DEPRECATED), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_PS_CameraEffectNonExtremeContent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_PS_CameraEffectNonExtremeContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_PS_CameraEffect_MetaData[] = {
		{ "Category", "EmitterCameraLensEffectBase" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "Particle System to use" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_PS_CameraEffect = { "PS_CameraEffect", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEmitterCameraLensEffectBase, PS_CameraEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_PS_CameraEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_PS_CameraEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_DistFromCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bResetWhenRetriggered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bAllowMultipleInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_PS_CameraEffectNonExtremeContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_PS_CameraEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEmitterCameraLensEffectBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::ClassParams = {
		&AEmitterCameraLensEffectBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEmitterCameraLensEffectBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEmitterCameraLensEffectBase, 3544277712);
	template<> ENGINE_API UClass* StaticClass<AEmitterCameraLensEffectBase>()
	{
		return AEmitterCameraLensEffectBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEmitterCameraLensEffectBase(Z_Construct_UClass_AEmitterCameraLensEffectBase, &AEmitterCameraLensEffectBase::StaticClass, TEXT("/Script/Engine"), TEXT("AEmitterCameraLensEffectBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEmitterCameraLensEffectBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
