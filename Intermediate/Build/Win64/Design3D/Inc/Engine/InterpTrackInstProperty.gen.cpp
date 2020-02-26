// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstProperty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstProperty() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstProperty_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstProperty();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UProperty();
// End Cross Module References
	void UInterpTrackInstProperty::StaticRegisterNativesUInterpTrackInstProperty()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstProperty_NoRegister()
	{
		return UInterpTrackInstProperty::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyOuterObjectInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PropertyOuterObjectInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterpProperty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstProperty_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstProperty.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstProperty.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstProperty_Statics::NewProp_PropertyOuterObjectInst_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstProperty.h" },
		{ "ToolTip", "Pointer to the UObject instance that is the outer of the color property we are interpolating on, this is used to process the property update callback." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpTrackInstProperty_Statics::NewProp_PropertyOuterObjectInst = { "PropertyOuterObjectInst", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstProperty, PropertyOuterObjectInst), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstProperty_Statics::NewProp_PropertyOuterObjectInst_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstProperty_Statics::NewProp_PropertyOuterObjectInst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstProperty_Statics::NewProp_InterpProperty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstProperty.h" },
		{ "ToolTip", "Function to call after updating the value of the color property." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpTrackInstProperty_Statics::NewProp_InterpProperty = { "InterpProperty", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstProperty, InterpProperty), Z_Construct_UClass_UProperty, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstProperty_Statics::NewProp_InterpProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstProperty_Statics::NewProp_InterpProperty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstProperty_Statics::NewProp_PropertyOuterObjectInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstProperty_Statics::NewProp_InterpProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstProperty>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstProperty_Statics::ClassParams = {
		&UInterpTrackInstProperty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstProperty_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstProperty_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstProperty_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstProperty()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInstProperty_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstProperty, 4239666290);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstProperty>()
	{
		return UInterpTrackInstProperty::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstProperty(Z_Construct_UClass_UInterpTrackInstProperty, &UInterpTrackInstProperty::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstProperty"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstProperty);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
