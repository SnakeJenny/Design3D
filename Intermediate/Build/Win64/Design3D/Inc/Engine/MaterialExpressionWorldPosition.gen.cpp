// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionWorldPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionWorldPosition() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionWorldPosition_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionWorldPosition();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
// End Cross Module References
	static UEnum* EWorldPositionIncludedOffsets_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets, Z_Construct_UPackage__Script_Engine(), TEXT("EWorldPositionIncludedOffsets"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EWorldPositionIncludedOffsets>()
	{
		return EWorldPositionIncludedOffsets_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWorldPositionIncludedOffsets(EWorldPositionIncludedOffsets_StaticEnum, TEXT("/Script/Engine"), TEXT("EWorldPositionIncludedOffsets"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets_Hash() { return 1024735807U; }
	UEnum* Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWorldPositionIncludedOffsets"), 0, Get_Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "WPT_Default", (int64)WPT_Default },
				{ "WPT_ExcludeAllShaderOffsets", (int64)WPT_ExcludeAllShaderOffsets },
				{ "WPT_CameraRelative", (int64)WPT_CameraRelative },
				{ "WPT_CameraRelativeNoOffsets", (int64)WPT_CameraRelativeNoOffsets },
				{ "WPT_MAX", (int64)WPT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionWorldPosition.h" },
				{ "ToolTip", "Specifies which shader generated offsets should included in the world position (displacement/WPO etc.)" },
				{ "WPT_CameraRelative.DisplayName", "Camera Relative World Position (Including Material Shader Offsets)" },
				{ "WPT_CameraRelative.ToolTip", "Camera relative world position with all material shader offsets applied" },
				{ "WPT_CameraRelativeNoOffsets.DisplayName", "Camera Relative World Position (Excluding Material Shader Offsets)" },
				{ "WPT_CameraRelativeNoOffsets.ToolTip", "Camera relative world position with no material shader offsets applied" },
				{ "WPT_Default.DisplayName", "Absolute World Position (Including Material Shader Offsets)" },
				{ "WPT_Default.ToolTip", "Absolute world position with all material shader offsets applied" },
				{ "WPT_ExcludeAllShaderOffsets.DisplayName", "Absolute World Position (Excluding Material Shader Offsets)" },
				{ "WPT_ExcludeAllShaderOffsets.ToolTip", "Absolute world position with no material shader offsets applied" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EWorldPositionIncludedOffsets",
				"EWorldPositionIncludedOffsets",
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
	void UMaterialExpressionWorldPosition::StaticRegisterNativesUMaterialExpressionWorldPosition()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionWorldPosition_NoRegister()
	{
		return UMaterialExpressionWorldPosition::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPositionShaderOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WorldPositionShaderOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionWorldPosition.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionWorldPosition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::NewProp_WorldPositionShaderOffset_MetaData[] = {
		{ "Category", "UMaterialExpressionWorldPosition" },
		{ "DisplayName", "Shader Offsets" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionWorldPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::NewProp_WorldPositionShaderOffset = { "WorldPositionShaderOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionWorldPosition, WorldPositionShaderOffset), Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::NewProp_WorldPositionShaderOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::NewProp_WorldPositionShaderOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::NewProp_WorldPositionShaderOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionWorldPosition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::ClassParams = {
		&UMaterialExpressionWorldPosition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionWorldPosition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionWorldPosition, 3672246662);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionWorldPosition>()
	{
		return UMaterialExpressionWorldPosition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionWorldPosition(Z_Construct_UClass_UMaterialExpressionWorldPosition, &UMaterialExpressionWorldPosition::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionWorldPosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionWorldPosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
