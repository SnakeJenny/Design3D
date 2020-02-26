// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FieldSystemEngine/Public/Field/FieldSystemActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldSystemActor() {}
// Cross Module References
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_AFieldSystemActor_NoRegister();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_AFieldSystemActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FieldSystemEngine();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemComponent_NoRegister();
// End Cross Module References
	void AFieldSystemActor::StaticRegisterNativesAFieldSystemActor()
	{
	}
	UClass* Z_Construct_UClass_AFieldSystemActor_NoRegister()
	{
		return AFieldSystemActor::StaticClass();
	}
	struct Z_Construct_UClass_AFieldSystemActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldSystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FieldSystemComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFieldSystemActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FieldSystemEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFieldSystemActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Field/FieldSystemActor.h" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFieldSystemActor_Statics::NewProp_FieldSystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Field" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Components|FieldSystem" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemActor.h" },
		{ "ToolTip", "FieldSystemComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFieldSystemActor_Statics::NewProp_FieldSystemComponent = { "FieldSystemComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFieldSystemActor, FieldSystemComponent), Z_Construct_UClass_UFieldSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFieldSystemActor_Statics::NewProp_FieldSystemComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFieldSystemActor_Statics::NewProp_FieldSystemComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFieldSystemActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFieldSystemActor_Statics::NewProp_FieldSystemComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFieldSystemActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFieldSystemActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFieldSystemActor_Statics::ClassParams = {
		&AFieldSystemActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFieldSystemActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFieldSystemActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFieldSystemActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFieldSystemActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFieldSystemActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFieldSystemActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFieldSystemActor, 1909667071);
	template<> FIELDSYSTEMENGINE_API UClass* StaticClass<AFieldSystemActor>()
	{
		return AFieldSystemActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFieldSystemActor(Z_Construct_UClass_AFieldSystemActor, &AFieldSystemActor::StaticClass, TEXT("/Script/FieldSystemEngine"), TEXT("AFieldSystemActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFieldSystemActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
