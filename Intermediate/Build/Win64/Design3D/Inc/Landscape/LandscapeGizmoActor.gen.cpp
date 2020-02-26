// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeGizmoActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeGizmoActor() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeGizmoActor_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeGizmoActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeInfo_NoRegister();
// End Cross Module References
	void ALandscapeGizmoActor::StaticRegisterNativesALandscapeGizmoActor()
	{
	}
	UClass* Z_Construct_UClass_ALandscapeGizmoActor_NoRegister()
	{
		return ALandscapeGizmoActor::StaticClass();
	}
	struct Z_Construct_UClass_ALandscapeGizmoActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLandscapeInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetLandscapeInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeScaleZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RelativeScaleZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRelativeZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRelativeZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarginZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MarginZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LengthZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LengthZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscapeGizmoActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeGizmoActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_SpriteComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_SpriteComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_TargetLandscapeInfo_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_TargetLandscapeInfo = { "TargetLandscapeInfo", nullptr, (EPropertyFlags)0x0010000800002001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActor, TargetLandscapeInfo), Z_Construct_UClass_ULandscapeInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_TargetLandscapeInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_TargetLandscapeInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_RelativeScaleZ_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_RelativeScaleZ = { "RelativeScaleZ", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActor, RelativeScaleZ), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_RelativeScaleZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_RelativeScaleZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_MinRelativeZ_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_MinRelativeZ = { "MinRelativeZ", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActor, MinRelativeZ), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_MinRelativeZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_MinRelativeZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_MarginZ_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_MarginZ = { "MarginZ", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActor, MarginZ), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_MarginZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_MarginZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_LengthZ_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_LengthZ = { "LengthZ", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActor, LengthZ), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_LengthZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_LengthZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActor, Height), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeGizmoActor, Width), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_Width_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_Width_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeGizmoActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_SpriteComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_TargetLandscapeInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_RelativeScaleZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_MinRelativeZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_MarginZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_LengthZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActor_Statics::NewProp_Width,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscapeGizmoActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeGizmoActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeGizmoActor_Statics::ClassParams = {
		&ALandscapeGizmoActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ALandscapeGizmoActor_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActor_Statics::PropPointers), 0),
		0,
		0x008802A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscapeGizmoActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALandscapeGizmoActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALandscapeGizmoActor, 2656180456);
	template<> LANDSCAPE_API UClass* StaticClass<ALandscapeGizmoActor>()
	{
		return ALandscapeGizmoActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALandscapeGizmoActor(Z_Construct_UClass_ALandscapeGizmoActor, &ALandscapeGizmoActor::StaticClass, TEXT("/Script/Landscape"), TEXT("ALandscapeGizmoActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeGizmoActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
