// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PlayAnimation() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PlayAnimation_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PlayAnimation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
// End Cross Module References
	void UBTTask_PlayAnimation::StaticRegisterNativesUBTTask_PlayAnimation()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_PlayAnimation_NoRegister()
	{
		return UBTTask_PlayAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_PlayAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedSkelMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedSkelMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyOwnerComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyOwnerComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNonBlocking_MetaData[];
#endif
		static void NewProp_bNonBlocking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNonBlocking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationToPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationToPlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_PlayAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PlayAnimation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
		{ "ToolTip", "Play indicated AnimationAsset on Pawn controlled by BT\nNote that this node is generic and is handing multiple special cases,\nIf you want a more efficient solution you'll need to implement it yourself (or wait for our BTTask_PlayCharacterAnimation)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_CachedSkelMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_CachedSkelMesh = { "CachedSkelMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_PlayAnimation, CachedSkelMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_CachedSkelMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_CachedSkelMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_MyOwnerComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_MyOwnerComp = { "MyOwnerComp", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_PlayAnimation, MyOwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_MyOwnerComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_MyOwnerComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bNonBlocking_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
		{ "ToolTip", "if true the task will just trigger the animation and instantly finish. Fire and Forget." },
	};
#endif
	void Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bNonBlocking_SetBit(void* Obj)
	{
		((UBTTask_PlayAnimation*)Obj)->bNonBlocking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bNonBlocking = { "bNonBlocking", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBTTask_PlayAnimation), &Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bNonBlocking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bNonBlocking_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bNonBlocking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
	};
#endif
	void Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((UBTTask_PlayAnimation*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UBTTask_PlayAnimation), &Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bLooping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_AnimationToPlay_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlayAnimation.h" },
		{ "ToolTip", "Animation asset to play. Note that it needs to match the skeleton of pawn this BT is controlling" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_AnimationToPlay = { "AnimationToPlay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_PlayAnimation, AnimationToPlay), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_AnimationToPlay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_AnimationToPlay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_PlayAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_CachedSkelMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_MyOwnerComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bNonBlocking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlayAnimation_Statics::NewProp_AnimationToPlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_PlayAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PlayAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PlayAnimation_Statics::ClassParams = {
		&UBTTask_PlayAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_PlayAnimation_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlayAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_PlayAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_PlayAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_PlayAnimation, 2288363500);
	template<> AIMODULE_API UClass* StaticClass<UBTTask_PlayAnimation>()
	{
		return UBTTask_PlayAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_PlayAnimation(Z_Construct_UClass_UBTTask_PlayAnimation, &UBTTask_PlayAnimation::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_PlayAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PlayAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
