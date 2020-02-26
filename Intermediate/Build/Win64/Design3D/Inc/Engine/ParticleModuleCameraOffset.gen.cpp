// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Camera/ParticleModuleCameraOffset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleCameraOffset() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCameraOffset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCameraOffset();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCameraBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	static UEnum* EParticleCameraOffsetUpdateMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleCameraOffsetUpdateMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleCameraOffsetUpdateMethod>()
	{
		return EParticleCameraOffsetUpdateMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleCameraOffsetUpdateMethod(EParticleCameraOffsetUpdateMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleCameraOffsetUpdateMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod_Hash() { return 4079117032U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleCameraOffsetUpdateMethod"), 0, Get_Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPCOUM_DirectSet", (int64)EPCOUM_DirectSet },
				{ "EPCOUM_Additive", (int64)EPCOUM_Additive },
				{ "EPCOUM_Scalar", (int64)EPCOUM_Scalar },
				{ "EPCOUM_MAX", (int64)EPCOUM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EPCOUM_Additive.DisplayName", "Additive" },
				{ "EPCOUM_DirectSet.DisplayName", "Direct Set" },
				{ "EPCOUM_Scalar.DisplayName", "Scalar" },
				{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraOffset.h" },
				{ "ToolTip", "The update method for the offset" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EParticleCameraOffsetUpdateMethod",
				"EParticleCameraOffsetUpdateMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UParticleModuleCameraOffset::StaticRegisterNativesUParticleModuleCameraOffset()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleCameraOffset_NoRegister()
	{
		return UParticleModuleCameraOffset::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleCameraOffset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpdateMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnTimeOnly_MetaData[];
#endif
		static void NewProp_bSpawnTimeOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnTimeOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleCameraOffset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleCameraBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCameraOffset_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Camera Offset" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Camera/ParticleModuleCameraOffset.h" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraOffset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_UpdateMethod_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraOffset.h" },
		{ "ToolTip", "How to update the offset for this module.\nDirectSet - Set the value directly (overwrite any previous setting)\nAdditive  - Add the offset of this module to the existing offset\nScalar    - Scale the existing offset by the value of this module" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_UpdateMethod = { "UpdateMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCameraOffset, UpdateMethod), Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_UpdateMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_UpdateMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraOffset.h" },
		{ "ToolTip", "If true, the offset will only be processed at spawn time" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly_SetBit(void* Obj)
	{
		((UParticleModuleCameraOffset*)Obj)->bSpawnTimeOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly = { "bSpawnTimeOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleCameraOffset), &Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_CameraOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraOffset.h" },
		{ "ToolTip", "The camera-relative offset to apply to sprite location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_CameraOffset = { "CameraOffset", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCameraOffset, CameraOffset), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_CameraOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_CameraOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleCameraOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_UpdateMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_CameraOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleCameraOffset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleCameraOffset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleCameraOffset_Statics::ClassParams = {
		&UParticleModuleCameraOffset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleCameraOffset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleCameraOffset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleCameraOffset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleCameraOffset, 939120109);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleCameraOffset>()
	{
		return UParticleModuleCameraOffset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleCameraOffset(Z_Construct_UClass_UParticleModuleCameraOffset, &UParticleModuleCameraOffset::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleCameraOffset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleCameraOffset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
