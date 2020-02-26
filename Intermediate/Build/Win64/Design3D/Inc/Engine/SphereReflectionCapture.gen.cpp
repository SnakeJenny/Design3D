// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/SphereReflectionCapture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereReflectionCapture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ASphereReflectionCapture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASphereReflectionCapture();
	ENGINE_API UClass* Z_Construct_UClass_AReflectionCapture();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UDrawSphereComponent_NoRegister();
// End Cross Module References
	void ASphereReflectionCapture::StaticRegisterNativesASphereReflectionCapture()
	{
	}
	UClass* Z_Construct_UClass_ASphereReflectionCapture_NoRegister()
	{
		return ASphereReflectionCapture::StaticClass();
	}
	struct Z_Construct_UClass_ASphereReflectionCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawCaptureRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrawCaptureRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASphereReflectionCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AReflectionCapture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASphereReflectionCapture_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "Engine/SphereReflectionCapture.h" },
		{ "ModuleRelativePath", "Classes/Engine/SphereReflectionCapture.h" },
		{ "ToolTip", "Actor used to capture the scene for reflection in a sphere shape.\n@see https://docs.unrealengine.com/latest/INT/Resources/ContentExamples/Reflections/1_4" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASphereReflectionCapture_Statics::NewProp_DrawCaptureRadius_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SphereReflectionCapture.h" },
		{ "ToolTip", "Sphere component used to visualize the capture radius" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASphereReflectionCapture_Statics::NewProp_DrawCaptureRadius = { "DrawCaptureRadius", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASphereReflectionCapture, DrawCaptureRadius), Z_Construct_UClass_UDrawSphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASphereReflectionCapture_Statics::NewProp_DrawCaptureRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASphereReflectionCapture_Statics::NewProp_DrawCaptureRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASphereReflectionCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASphereReflectionCapture_Statics::NewProp_DrawCaptureRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASphereReflectionCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASphereReflectionCapture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASphereReflectionCapture_Statics::ClassParams = {
		&ASphereReflectionCapture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASphereReflectionCapture_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASphereReflectionCapture_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASphereReflectionCapture_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASphereReflectionCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASphereReflectionCapture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASphereReflectionCapture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASphereReflectionCapture, 2356415429);
	template<> ENGINE_API UClass* StaticClass<ASphereReflectionCapture>()
	{
		return ASphereReflectionCapture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASphereReflectionCapture(Z_Construct_UClass_ASphereReflectionCapture, &ASphereReflectionCapture::StaticClass, TEXT("/Script/Engine"), TEXT("ASphereReflectionCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASphereReflectionCapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
