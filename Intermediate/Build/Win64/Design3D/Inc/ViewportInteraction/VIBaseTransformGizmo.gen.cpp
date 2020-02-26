// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportInteraction/Public/VIBaseTransformGizmo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVIBaseTransformGizmo() {}
// Cross Module References
	VIEWPORTINTERACTION_API UEnum* Z_Construct_UEnum_ViewportInteraction_EGizmoHandleTypes();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTransformGizmoMeasurement();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_ABaseTransformGizmo_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_ABaseTransformGizmo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportWorldInteraction_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UGizmoHandleGroup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static UEnum* EGizmoHandleTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ViewportInteraction_EGizmoHandleTypes, Z_Construct_UPackage__Script_ViewportInteraction(), TEXT("EGizmoHandleTypes"));
		}
		return Singleton;
	}
	template<> VIEWPORTINTERACTION_API UEnum* StaticEnum<EGizmoHandleTypes>()
	{
		return EGizmoHandleTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGizmoHandleTypes(EGizmoHandleTypes_StaticEnum, TEXT("/Script/ViewportInteraction"), TEXT("EGizmoHandleTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ViewportInteraction_EGizmoHandleTypes_Hash() { return 1545218890U; }
	UEnum* Z_Construct_UEnum_ViewportInteraction_EGizmoHandleTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ViewportInteraction();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGizmoHandleTypes"), 0, Get_Z_Construct_UEnum_ViewportInteraction_EGizmoHandleTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGizmoHandleTypes::All", (int64)EGizmoHandleTypes::All },
				{ "EGizmoHandleTypes::Translate", (int64)EGizmoHandleTypes::Translate },
				{ "EGizmoHandleTypes::Rotate", (int64)EGizmoHandleTypes::Rotate },
				{ "EGizmoHandleTypes::Scale", (int64)EGizmoHandleTypes::Scale },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VIBaseTransformGizmo.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ViewportInteraction,
				nullptr,
				"EGizmoHandleTypes",
				"EGizmoHandleTypes",
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
class UScriptStruct* FTransformGizmoMeasurement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VIEWPORTINTERACTION_API uint32 Get_Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformGizmoMeasurement, Z_Construct_UPackage__Script_ViewportInteraction(), TEXT("TransformGizmoMeasurement"), sizeof(FTransformGizmoMeasurement), Get_Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Hash());
	}
	return Singleton;
}
template<> VIEWPORTINTERACTION_API UScriptStruct* StaticStruct<FTransformGizmoMeasurement>()
{
	return FTransformGizmoMeasurement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransformGizmoMeasurement(FTransformGizmoMeasurement::StaticStruct, TEXT("/Script/ViewportInteraction"), TEXT("TransformGizmoMeasurement"), false, nullptr, nullptr);
static struct FScriptStruct_ViewportInteraction_StaticRegisterNativesFTransformGizmoMeasurement
{
	FScriptStruct_ViewportInteraction_StaticRegisterNativesFTransformGizmoMeasurement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TransformGizmoMeasurement")),new UScriptStruct::TCppStructOps<FTransformGizmoMeasurement>);
	}
} ScriptStruct_ViewportInteraction_StaticRegisterNativesFTransformGizmoMeasurement;
	struct Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeasurementText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeasurementText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VIBaseTransformGizmo.h" },
		{ "ToolTip", "Displays measurements along the bounds of selected objects" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformGizmoMeasurement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::NewProp_MeasurementText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VIBaseTransformGizmo.h" },
		{ "ToolTip", "The text that displays the actual measurement and units" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::NewProp_MeasurementText = { "MeasurementText", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTransformGizmoMeasurement, MeasurementText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::NewProp_MeasurementText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::NewProp_MeasurementText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::NewProp_MeasurementText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
		nullptr,
		&NewStructOps,
		"TransformGizmoMeasurement",
		sizeof(FTransformGizmoMeasurement),
		alignof(FTransformGizmoMeasurement),
		Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformGizmoMeasurement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ViewportInteraction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransformGizmoMeasurement"), sizeof(FTransformGizmoMeasurement), Get_Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransformGizmoMeasurement_Hash() { return 2236142986U; }
	void ABaseTransformGizmo::StaticRegisterNativesABaseTransformGizmo()
	{
	}
	UClass* Z_Construct_UClass_ABaseTransformGizmo_NoRegister()
	{
		return ABaseTransformGizmo::StaticClass();
	}
	struct Z_Construct_UClass_ABaseTransformGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllHandleGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllHandleGroups;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllHandleGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseTransformGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTransformGizmo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VIBaseTransformGizmo.h" },
		{ "ModuleRelativePath", "Public/VIBaseTransformGizmo.h" },
		{ "ToolTip", "Base class for transform gizmo" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_WorldInteraction_MetaData[] = {
		{ "ModuleRelativePath", "Public/VIBaseTransformGizmo.h" },
		{ "ToolTip", "Owning object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_WorldInteraction = { "WorldInteraction", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseTransformGizmo, WorldInteraction), Z_Construct_UClass_UViewportWorldInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_WorldInteraction_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_WorldInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_AllHandleGroups_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VIBaseTransformGizmo.h" },
		{ "ToolTip", "All gizmo components" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_AllHandleGroups = { "AllHandleGroups", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseTransformGizmo, AllHandleGroups), METADATA_PARAMS(Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_AllHandleGroups_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_AllHandleGroups_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_AllHandleGroups_Inner = { "AllHandleGroups", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGizmoHandleGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VIBaseTransformGizmo.h" },
		{ "ToolTip", "Scene component root of this actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseTransformGizmo, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_SceneComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_SceneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseTransformGizmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_WorldInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_AllHandleGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_AllHandleGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTransformGizmo_Statics::NewProp_SceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseTransformGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseTransformGizmo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseTransformGizmo_Statics::ClassParams = {
		&ABaseTransformGizmo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseTransformGizmo_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABaseTransformGizmo_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseTransformGizmo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABaseTransformGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseTransformGizmo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseTransformGizmo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseTransformGizmo, 101619664);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<ABaseTransformGizmo>()
	{
		return ABaseTransformGizmo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseTransformGizmo(Z_Construct_UClass_ABaseTransformGizmo, &ABaseTransformGizmo::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("ABaseTransformGizmo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseTransformGizmo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
