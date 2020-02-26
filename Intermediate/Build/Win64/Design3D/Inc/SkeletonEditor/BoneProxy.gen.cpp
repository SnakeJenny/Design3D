// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkeletonEditor/Public/BoneProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneProxy() {}
// Cross Module References
	SKELETONEDITOR_API UClass* Z_Construct_UClass_UBoneProxy_NoRegister();
	SKELETONEDITOR_API UClass* Z_Construct_UClass_UBoneProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SkeletonEditor();
	UNREALED_API UClass* Z_Construct_UClass_UDebugSkelMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UBoneProxy::StaticRegisterNativesUBoneProxy()
	{
	}
	UClass* Z_Construct_UClass_UBoneProxy_NoRegister()
	{
		return UBoneProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBoneProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_SkelMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferenceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferenceRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferenceLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoneProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletonEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BoneProxy.h" },
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "Proxy object used to display/edit bone transforms" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::NewProp_SkelMeshComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "The skeletal mesh component we glean our transform data from" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UBoneProxy_Statics::NewProp_SkelMeshComponent = { "SkelMeshComponent", nullptr, (EPropertyFlags)0x0014000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoneProxy, SkelMeshComponent), Z_Construct_UClass_UDebugSkelMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::NewProp_SkelMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::NewProp_SkelMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceScale_MetaData[] = {
		{ "Category", "Reference Transform" },
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "Bone reference scale (local)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceScale = { "ReferenceScale", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoneProxy, ReferenceScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceRotation_MetaData[] = {
		{ "Category", "Reference Transform" },
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "Bone reference rotation (local)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceRotation = { "ReferenceRotation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoneProxy, ReferenceRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceLocation_MetaData[] = {
		{ "Category", "Reference Transform" },
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "Bone reference location (local)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceLocation = { "ReferenceLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoneProxy, ReferenceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "Bone scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoneProxy_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoneProxy, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "Bone rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoneProxy_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoneProxy, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "Bone location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoneProxy_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoneProxy, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneProxy_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Bone" },
		{ "ModuleRelativePath", "Public/BoneProxy.h" },
		{ "ToolTip", "The name of the bone we have selected" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBoneProxy_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoneProxy, BoneName), METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::NewProp_BoneName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::NewProp_BoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoneProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneProxy_Statics::NewProp_SkelMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneProxy_Statics::NewProp_ReferenceLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneProxy_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneProxy_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneProxy_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoneProxy_Statics::NewProp_BoneName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoneProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoneProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBoneProxy_Statics::ClassParams = {
		&UBoneProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBoneProxy_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBoneProxy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBoneProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoneProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBoneProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBoneProxy, 315997642);
	template<> SKELETONEDITOR_API UClass* StaticClass<UBoneProxy>()
	{
		return UBoneProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBoneProxy(Z_Construct_UClass_UBoneProxy, &UBoneProxy::StaticClass, TEXT("/Script/SkeletonEditor"), TEXT("UBoneProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoneProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
