// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Editor/GroupActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroupActor() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_AGroupActor_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_AGroupActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AGroupActor::StaticRegisterNativesAGroupActor()
	{
	}
	UClass* Z_Construct_UClass_AGroupActor_NoRegister()
	{
		return AGroupActor::StaticClass();
	}
	struct Z_Construct_UClass_AGroupActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubGroups;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GroupActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GroupActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGroupActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroupActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/GroupActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/Editor/GroupActor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroupActor_Statics::NewProp_SubGroups_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/GroupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGroupActor_Statics::NewProp_SubGroups = { "SubGroups", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGroupActor, SubGroups), METADATA_PARAMS(Z_Construct_UClass_AGroupActor_Statics::NewProp_SubGroups_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGroupActor_Statics::NewProp_SubGroups_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroupActor_Statics::NewProp_SubGroups_Inner = { "SubGroups", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGroupActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroupActor_Statics::NewProp_GroupActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/GroupActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGroupActor_Statics::NewProp_GroupActors = { "GroupActors", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGroupActor, GroupActors), METADATA_PARAMS(Z_Construct_UClass_AGroupActor_Statics::NewProp_GroupActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGroupActor_Statics::NewProp_GroupActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroupActor_Statics::NewProp_GroupActors_Inner = { "GroupActors", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroupActor_Statics::NewProp_bLocked_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/GroupActor.h" },
	};
#endif
	void Z_Construct_UClass_AGroupActor_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((AGroupActor*)Obj)->bLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGroupActor_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AGroupActor), &Z_Construct_UClass_AGroupActor_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGroupActor_Statics::NewProp_bLocked_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGroupActor_Statics::NewProp_bLocked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGroupActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupActor_Statics::NewProp_SubGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupActor_Statics::NewProp_SubGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupActor_Statics::NewProp_GroupActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupActor_Statics::NewProp_GroupActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupActor_Statics::NewProp_bLocked,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGroupActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGroupActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGroupActor_Statics::ClassParams = {
		&AGroupActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_AGroupActor_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_AGroupActor_Statics::PropPointers), 0),
		0,
		0x048802A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGroupActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGroupActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGroupActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGroupActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGroupActor, 933852347);
	template<> UNREALED_API UClass* StaticClass<AGroupActor>()
	{
		return AGroupActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGroupActor(Z_Construct_UClass_AGroupActor, &AGroupActor::StaticClass, TEXT("/Script/UnrealEd"), TEXT("AGroupActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGroupActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
