// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/ReflectionCaptureComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReflectionCaptureComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReflectionSourceType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	static UEnum* EReflectionSourceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EReflectionSourceType, Z_Construct_UPackage__Script_Engine(), TEXT("EReflectionSourceType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EReflectionSourceType>()
	{
		return EReflectionSourceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EReflectionSourceType(EReflectionSourceType_StaticEnum, TEXT("/Script/Engine"), TEXT("EReflectionSourceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EReflectionSourceType_Hash() { return 2887527293U; }
	UEnum* Z_Construct_UEnum_Engine_EReflectionSourceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EReflectionSourceType"), 0, Get_Z_Construct_UEnum_Engine_EReflectionSourceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EReflectionSourceType::CapturedScene", (int64)EReflectionSourceType::CapturedScene },
				{ "EReflectionSourceType::SpecifiedCubemap", (int64)EReflectionSourceType::SpecifiedCubemap },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CapturedScene.ToolTip", "Construct the reflection source from the captured scene" },
				{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
				{ "SpecifiedCubemap.ToolTip", "Construct the reflection source from the specified cubemap." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EReflectionSourceType",
				"EReflectionSourceType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UReflectionCaptureComponent::StaticRegisterNativesUReflectionCaptureComponent()
	{
	}
	UClass* Z_Construct_UClass_UReflectionCaptureComponent_NoRegister()
	{
		return UReflectionCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UReflectionCaptureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapBuildDataId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapBuildDataId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CaptureOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceCubemapAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceCubemapAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cubemap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cubemap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionSourceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReflectionSourceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReflectionSourceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureOffsetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureOffsetComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReflectionCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/ReflectionCaptureComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "-> will be exported to EngineDecalClasses.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MapBuildDataId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Guid for map build data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MapBuildDataId = { "MapBuildDataId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, MapBuildDataId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MapBuildDataId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MapBuildDataId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffset_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "World space offset to apply before capturing." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffset = { "CaptureOffset", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, CaptureOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Brightness_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "A brightness control to scale the captured scene's reflection intensity." },
		{ "UIMax", "4" },
		{ "UIMin", ".5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, Brightness), METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Brightness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Brightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_SourceCubemapAngle_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Angle to rotate the source cubemap when SourceType is set to SLS_SpecifiedCubemap." },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_SourceCubemapAngle = { "SourceCubemapAngle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, SourceCubemapAngle), METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_SourceCubemapAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_SourceCubemapAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Cubemap_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Cubemap to use for reflection if ReflectionSourceType is set to RS_SpecifiedCubemap." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Cubemap = { "Cubemap", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, Cubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Cubemap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Cubemap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Indicates where to get the reflection source from." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType = { "ReflectionSourceType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, ReflectionSourceType), Z_Construct_UEnum_Engine_EReflectionSourceType, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffsetComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffsetComponent = { "CaptureOffsetComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, CaptureOffsetComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffsetComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffsetComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReflectionCaptureComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MapBuildDataId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Brightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_SourceCubemapAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Cubemap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffsetComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReflectionCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReflectionCaptureComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::ClassParams = {
		&UReflectionCaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReflectionCaptureComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::PropPointers),
		0,
		0x00A800A5u,
		METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReflectionCaptureComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReflectionCaptureComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReflectionCaptureComponent, 3971643372);
	template<> ENGINE_API UClass* StaticClass<UReflectionCaptureComponent>()
	{
		return UReflectionCaptureComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReflectionCaptureComponent(Z_Construct_UClass_UReflectionCaptureComponent, &UReflectionCaptureComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UReflectionCaptureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReflectionCaptureComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UReflectionCaptureComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
