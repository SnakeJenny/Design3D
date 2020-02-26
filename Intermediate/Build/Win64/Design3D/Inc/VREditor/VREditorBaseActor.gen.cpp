// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditor/VREditorBaseActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorBaseActor() {}
// Cross Module References
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorBaseActor_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorBaseActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorMode_NoRegister();
// End Cross Module References
	void AVREditorBaseActor::StaticRegisterNativesAVREditorBaseActor()
	{
	}
	UClass* Z_Construct_UClass_AVREditorBaseActor_NoRegister()
	{
		return AVREditorBaseActor::StaticClass();
	}
	struct Z_Construct_UClass_AVREditorBaseActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVREditorBaseActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorBaseActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VREditorBaseActor.h" },
		{ "ModuleRelativePath", "VREditorBaseActor.h" },
		{ "ToolTip", "Represents an actor specifically for VR Editor that has roomspace transformation" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorBaseActor_Statics::NewProp_VRMode_MetaData[] = {
		{ "ModuleRelativePath", "VREditorBaseActor.h" },
		{ "ToolTip", "The VR mode that owns this actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVREditorBaseActor_Statics::NewProp_VRMode = { "VRMode", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVREditorBaseActor, VRMode), Z_Construct_UClass_UVREditorMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorBaseActor_Statics::NewProp_VRMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVREditorBaseActor_Statics::NewProp_VRMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVREditorBaseActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorBaseActor_Statics::NewProp_VRMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVREditorBaseActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVREditorBaseActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVREditorBaseActor_Statics::ClassParams = {
		&AVREditorBaseActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVREditorBaseActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AVREditorBaseActor_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AVREditorBaseActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVREditorBaseActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVREditorBaseActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVREditorBaseActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVREditorBaseActor, 4276943132);
	template<> VREDITOR_API UClass* StaticClass<AVREditorBaseActor>()
	{
		return AVREditorBaseActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVREditorBaseActor(Z_Construct_UClass_AVREditorBaseActor, &AVREditorBaseActor::StaticClass, TEXT("/Script/VREditor"), TEXT("AVREditorBaseActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVREditorBaseActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
