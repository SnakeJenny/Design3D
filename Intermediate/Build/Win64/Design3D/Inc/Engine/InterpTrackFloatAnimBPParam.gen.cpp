// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackFloatAnimBPParam.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackFloatAnimBPParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatAnimBPParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatAnimBPParam();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UInterpTrackFloatAnimBPParam::StaticRegisterNativesUInterpTrackFloatAnimBPParam()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackFloatAnimBPParam_NoRegister()
	{
		return UInterpTrackFloatAnimBPParam::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AnimClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimBlueprintClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AnimBlueprintClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackFloatBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Float Anim BP Parameter Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackFloatAnimBPParam.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatAnimBPParam.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_ParamName_MetaData[] = {
		{ "Category", "InterpTrackFloatAnimBPParam" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatAnimBPParam.h" },
		{ "ToolTip", "Name of parameter in the MaterialInstance which this track will modify over time." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackFloatAnimBPParam, ParamName), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_ParamName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_ParamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_AnimClass_MetaData[] = {
		{ "Category", "InterpTrackFloatAnimBPParam" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatAnimBPParam.h" },
		{ "ToolTip", "Materials whose parameters we want to change and the references to those materials." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_AnimClass = { "AnimClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackFloatAnimBPParam, AnimClass), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_AnimClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_AnimClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_AnimBlueprintClass_MetaData[] = {
		{ "Category", "InterpTrackFloatAnimBPParam" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatAnimBPParam.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_AnimBlueprintClass = { "AnimBlueprintClass", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackFloatAnimBPParam, AnimBlueprintClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_AnimBlueprintClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_AnimBlueprintClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_ParamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_AnimClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_AnimBlueprintClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackFloatAnimBPParam>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::ClassParams = {
		&UInterpTrackFloatAnimBPParam::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackFloatAnimBPParam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackFloatAnimBPParam, 1527074773);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackFloatAnimBPParam>()
	{
		return UInterpTrackFloatAnimBPParam::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackFloatAnimBPParam(Z_Construct_UClass_UInterpTrackFloatAnimBPParam, &UInterpTrackFloatAnimBPParam::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackFloatAnimBPParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackFloatAnimBPParam);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInterpTrackFloatAnimBPParam)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
