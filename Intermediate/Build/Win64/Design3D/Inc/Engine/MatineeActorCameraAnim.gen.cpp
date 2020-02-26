// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/MatineeActorCameraAnim.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeActorCameraAnim() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AMatineeActorCameraAnim_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AMatineeActorCameraAnim();
	ENGINE_API UClass* Z_Construct_UClass_AMatineeActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim_NoRegister();
// End Cross Module References
	void AMatineeActorCameraAnim::StaticRegisterNativesAMatineeActorCameraAnim()
	{
	}
	UClass* Z_Construct_UClass_AMatineeActorCameraAnim_NoRegister()
	{
		return AMatineeActorCameraAnim::StaticClass();
	}
	struct Z_Construct_UClass_AMatineeActorCameraAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraAnim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMatineeActorCameraAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMatineeActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActorCameraAnim_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Game Input" },
		{ "IncludePath", "Matinee/MatineeActorCameraAnim.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActorCameraAnim.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput Game|Damage" },
		{ "ToolTip", "Actor used to control temporary matinees for camera anims that only exist in the editor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActorCameraAnim_Statics::NewProp_CameraAnim_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActorCameraAnim.h" },
		{ "ToolTip", "The camera anim we are editing" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMatineeActorCameraAnim_Statics::NewProp_CameraAnim = { "CameraAnim", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMatineeActorCameraAnim, CameraAnim), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMatineeActorCameraAnim_Statics::NewProp_CameraAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMatineeActorCameraAnim_Statics::NewProp_CameraAnim_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMatineeActorCameraAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActorCameraAnim_Statics::NewProp_CameraAnim,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMatineeActorCameraAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMatineeActorCameraAnim>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMatineeActorCameraAnim_Statics::ClassParams = {
		&AMatineeActorCameraAnim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMatineeActorCameraAnim_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AMatineeActorCameraAnim_Statics::PropPointers),
		0,
		0x008802A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMatineeActorCameraAnim_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMatineeActorCameraAnim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMatineeActorCameraAnim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMatineeActorCameraAnim_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMatineeActorCameraAnim, 303718072);
	template<> ENGINE_API UClass* StaticClass<AMatineeActorCameraAnim>()
	{
		return AMatineeActorCameraAnim::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMatineeActorCameraAnim(Z_Construct_UClass_AMatineeActorCameraAnim, &AMatineeActorCameraAnim::StaticClass, TEXT("/Script/Engine"), TEXT("AMatineeActorCameraAnim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMatineeActorCameraAnim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
