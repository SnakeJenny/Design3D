// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CinematicCamera/Public/CameraRig_Crane.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraRig_Crane() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACameraRig_Crane_NoRegister();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACameraRig_Crane();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CinematicCamera();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ACameraRig_Crane::StaticRegisterNativesACameraRig_Crane()
	{
	}
	UClass* Z_Construct_UClass_ACameraRig_Crane_NoRegister()
	{
		return ACameraRig_Crane::StaticClass();
	}
	struct Z_Construct_UClass_ACameraRig_Crane_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_CraneCounterWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh_CraneCounterWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_CraneMount_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh_CraneMount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_CraneBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh_CraneBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_CraneArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh_CraneArm;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CraneCameraMount_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CraneCameraMount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CranePitchControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CranePitchControl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CraneYawControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CraneYawControl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransformComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockMountYaw_MetaData[];
#endif
		static void NewProp_bLockMountYaw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockMountYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockMountPitch_MetaData[];
#endif
		static void NewProp_bLockMountPitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockMountPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CraneArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CraneArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CraneYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CraneYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CranePitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CranePitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraRig_Crane_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Crane_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CameraRig_Crane.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A simple rig for simulating crane-like camera movements." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneCounterWeight_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneCounterWeight = { "PreviewMesh_CraneCounterWeight", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraRig_Crane, PreviewMesh_CraneCounterWeight), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneCounterWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneCounterWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneMount_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneMount = { "PreviewMesh_CraneMount", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraRig_Crane, PreviewMesh_CraneMount), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneMount_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneMount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneBase = { "PreviewMesh_CraneBase", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraRig_Crane, PreviewMesh_CraneBase), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneBase_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneArm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ToolTip", "Preview meshes for visualization" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneArm = { "PreviewMesh_CraneArm", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraRig_Crane, PreviewMesh_CraneArm), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneArm_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneCameraMount_MetaData[] = {
		{ "Category", "Crane Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ToolTip", "Component to define the attach point for cameras." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneCameraMount = { "CraneCameraMount", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraRig_Crane, CraneCameraMount), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneCameraMount_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneCameraMount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CranePitchControl_MetaData[] = {
		{ "Category", "Crane Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ToolTip", "Component to control Pitch." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CranePitchControl = { "CranePitchControl", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraRig_Crane, CranePitchControl), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CranePitchControl_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CranePitchControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneYawControl_MetaData[] = {
		{ "Category", "Crane Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ToolTip", "Component to control Yaw." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneYawControl = { "CraneYawControl", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraRig_Crane, CraneYawControl), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneYawControl_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneYawControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_TransformComponent_MetaData[] = {
		{ "Category", "Crane Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ToolTip", "Root component to give the whole actor a transform." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_TransformComponent = { "TransformComponent", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraRig_Crane, TransformComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_TransformComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_TransformComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountYaw_MetaData[] = {
		{ "Category", "Crane Controls" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ToolTip", "Lock the mount yaw so that an attached camera is locked and oriented in the direction of the crane arm" },
	};
#endif
	void Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountYaw_SetBit(void* Obj)
	{
		((ACameraRig_Crane*)Obj)->bLockMountYaw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountYaw = { "bLockMountYaw", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACameraRig_Crane), &Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountYaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountPitch_MetaData[] = {
		{ "Category", "Crane Controls" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ToolTip", "Lock the mount pitch so that an attached camera is locked and pitched in the direction of the crane arm" },
	};
#endif
	void Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountPitch_SetBit(void* Obj)
	{
		((ACameraRig_Crane*)Obj)->bLockMountPitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountPitch = { "bLockMountPitch", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACameraRig_Crane), &Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountPitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneArmLength_MetaData[] = {
		{ "Category", "Crane Controls" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ToolTip", "Controls the length of the crane arm." },
		{ "Units", "cm" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneArmLength = { "CraneArmLength", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraRig_Crane, CraneArmLength), METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneArmLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneYaw_MetaData[] = {
		{ "Category", "Crane Controls" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ToolTip", "Controls the yaw of the crane arm." },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
		{ "Units", "deg" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneYaw = { "CraneYaw", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraRig_Crane, CraneYaw), METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneYaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CranePitch_MetaData[] = {
		{ "Category", "Crane Controls" },
		{ "ModuleRelativePath", "Public/CameraRig_Crane.h" },
		{ "ToolTip", "Controls the pitch of the crane arm." },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
		{ "Units", "deg" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CranePitch = { "CranePitch", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraRig_Crane, CranePitch), METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CranePitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CranePitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraRig_Crane_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneCounterWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneMount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_PreviewMesh_CraneArm,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneCameraMount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CranePitchControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneYawControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_TransformComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_bLockMountPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CraneYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Crane_Statics::NewProp_CranePitch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraRig_Crane_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraRig_Crane>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACameraRig_Crane_Statics::ClassParams = {
		&ACameraRig_Crane::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACameraRig_Crane_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Crane_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Crane_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Crane_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraRig_Crane()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACameraRig_Crane_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraRig_Crane, 2136651291);
	template<> CINEMATICCAMERA_API UClass* StaticClass<ACameraRig_Crane>()
	{
		return ACameraRig_Crane::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraRig_Crane(Z_Construct_UClass_ACameraRig_Crane, &ACameraRig_Crane::StaticClass, TEXT("/Script/CinematicCamera"), TEXT("ACameraRig_Crane"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraRig_Crane);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
