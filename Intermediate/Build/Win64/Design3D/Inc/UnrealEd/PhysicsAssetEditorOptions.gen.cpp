// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Preferences/PhysicsAssetEditorOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAssetEditorOptions() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorRenderMode();
	UNREALED_API UClass* Z_Construct_UClass_UPhysicsAssetEditorOptions_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UPhysicsAssetEditorOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicsTransformUpdateMode();
// End Cross Module References
	static UEnum* EPhysicsAssetEditorConstraintViewMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPhysicsAssetEditorConstraintViewMode"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPhysicsAssetEditorConstraintViewMode>()
	{
		return EPhysicsAssetEditorConstraintViewMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhysicsAssetEditorConstraintViewMode(EPhysicsAssetEditorConstraintViewMode_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EPhysicsAssetEditorConstraintViewMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode_Hash() { return 931831878U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhysicsAssetEditorConstraintViewMode"), 0, Get_Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPhysicsAssetEditorConstraintViewMode::None", (int64)EPhysicsAssetEditorConstraintViewMode::None },
				{ "EPhysicsAssetEditorConstraintViewMode::AllPositions", (int64)EPhysicsAssetEditorConstraintViewMode::AllPositions },
				{ "EPhysicsAssetEditorConstraintViewMode::AllLimits", (int64)EPhysicsAssetEditorConstraintViewMode::AllLimits },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EPhysicsAssetEditorConstraintViewMode",
				"EPhysicsAssetEditorConstraintViewMode",
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
	static UEnum* EPhysicsAssetEditorRenderMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorRenderMode, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPhysicsAssetEditorRenderMode"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPhysicsAssetEditorRenderMode>()
	{
		return EPhysicsAssetEditorRenderMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhysicsAssetEditorRenderMode(EPhysicsAssetEditorRenderMode_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EPhysicsAssetEditorRenderMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorRenderMode_Hash() { return 1098039377U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorRenderMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhysicsAssetEditorRenderMode"), 0, Get_Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorRenderMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPhysicsAssetEditorRenderMode::Solid", (int64)EPhysicsAssetEditorRenderMode::Solid },
				{ "EPhysicsAssetEditorRenderMode::Wireframe", (int64)EPhysicsAssetEditorRenderMode::Wireframe },
				{ "EPhysicsAssetEditorRenderMode::None", (int64)EPhysicsAssetEditorRenderMode::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EPhysicsAssetEditorRenderMode",
				"EPhysicsAssetEditorRenderMode",
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
	void UPhysicsAssetEditorOptions::StaticRegisterNativesUPhysicsAssetEditorOptions()
	{
	}
	UClass* Z_Construct_UClass_UPhysicsAssetEditorOptions_NoRegister()
	{
		return UPhysicsAssetEditorOptions::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetClothWhenSimulating_MetaData[];
#endif
		static void NewProp_bResetClothWhenSimulating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetClothWhenSimulating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSolidRenderingForSelectedOnly_MetaData[];
#endif
		static void NewProp_bSolidRenderingForSelectedOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSolidRenderingForSelectedOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationConstraintViewMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SimulationConstraintViewMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SimulationConstraintViewMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationCollisionViewMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SimulationCollisionViewMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SimulationCollisionViewMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationMeshViewMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SimulationMeshViewMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SimulationMeshViewMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintViewMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConstraintViewMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConstraintViewMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionViewMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollisionViewMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionViewMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshViewMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MeshViewMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshViewMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintDrawSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstraintDrawSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderOnlySelectedConstraints_MetaData[];
#endif
		static void NewProp_bRenderOnlySelectedConstraints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderOnlySelectedConstraints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowConstraintsAsPoints_MetaData[];
#endif
		static void NewProp_bShowConstraintsAsPoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowConstraintsAsPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PokeStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PokeStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandleAngularStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HandleAngularStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandleAngularDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HandleAngularDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandleLinearStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HandleLinearStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandleLinearDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HandleLinearDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxFPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGravityOverride_MetaData[];
#endif
		static void NewProp_bUseGravityOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGravityOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityOverrideZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityOverrideZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PokeBlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PokeBlendTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PokePauseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PokePauseTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsUpdateMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhysicsUpdateMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateJointsFromAnimation_MetaData[];
#endif
		static void NewProp_bUpdateJointsFromAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateJointsFromAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PhysicsBlend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Preferences/PhysicsAssetEditorOptions.h" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bResetClothWhenSimulating_MetaData[] = {
		{ "Category", "Clothing" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "When set, cloth will reset each time simulation is toggled" },
	};
#endif
	void Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bResetClothWhenSimulating_SetBit(void* Obj)
	{
		((UPhysicsAssetEditorOptions*)Obj)->bResetClothWhenSimulating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bResetClothWhenSimulating = { "bResetClothWhenSimulating", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsAssetEditorOptions), &Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bResetClothWhenSimulating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bResetClothWhenSimulating_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bResetClothWhenSimulating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSolidRenderingForSelectedOnly_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "When set, turns opacity of solid rendering for unselected bodies to zero" },
	};
#endif
	void Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSolidRenderingForSelectedOnly_SetBit(void* Obj)
	{
		((UPhysicsAssetEditorOptions*)Obj)->bSolidRenderingForSelectedOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSolidRenderingForSelectedOnly = { "bSolidRenderingForSelectedOnly", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsAssetEditorOptions), &Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSolidRenderingForSelectedOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSolidRenderingForSelectedOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSolidRenderingForSelectedOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionOpacity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Opacity of 'solid' rendering" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionOpacity = { "CollisionOpacity", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, CollisionOpacity), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationConstraintViewMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "View mode for constraints in simulation mode" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationConstraintViewMode = { "SimulationConstraintViewMode", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, SimulationConstraintViewMode), Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationConstraintViewMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationConstraintViewMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationConstraintViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationCollisionViewMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "View mode for collision in simulation mode" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationCollisionViewMode = { "SimulationCollisionViewMode", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, SimulationCollisionViewMode), Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorRenderMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationCollisionViewMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationCollisionViewMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationCollisionViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationMeshViewMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "View mode for meshes in simulation mode" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationMeshViewMode = { "SimulationMeshViewMode", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, SimulationMeshViewMode), Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorRenderMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationMeshViewMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationMeshViewMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationMeshViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintViewMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "View mode for constraints in edit mode" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintViewMode = { "ConstraintViewMode", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, ConstraintViewMode), Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintViewMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintViewMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionViewMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "View mode for collision in edit mode" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionViewMode = { "CollisionViewMode", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, CollisionViewMode), Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorRenderMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionViewMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionViewMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MeshViewMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "View mode for meshes in edit mode" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MeshViewMode = { "MeshViewMode", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, MeshViewMode), Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorRenderMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MeshViewMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MeshViewMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MeshViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintDrawSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Controls how large constraints are drawn in Physics Asset Editor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintDrawSize = { "ConstraintDrawSize", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, ConstraintDrawSize), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintDrawSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintDrawSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bRenderOnlySelectedConstraints_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Whether to only render selected constraints" },
	};
#endif
	void Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bRenderOnlySelectedConstraints_SetBit(void* Obj)
	{
		((UPhysicsAssetEditorOptions*)Obj)->bRenderOnlySelectedConstraints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bRenderOnlySelectedConstraints = { "bRenderOnlySelectedConstraints", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPhysicsAssetEditorOptions), &Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bRenderOnlySelectedConstraints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bRenderOnlySelectedConstraints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bRenderOnlySelectedConstraints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bShowConstraintsAsPoints_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Whether to draw constraints as points" },
	};
#endif
	void Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bShowConstraintsAsPoints_SetBit(void* Obj)
	{
		((UPhysicsAssetEditorOptions*)Obj)->bShowConstraintsAsPoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bShowConstraintsAsPoints = { "bShowConstraintsAsPoints", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPhysicsAssetEditorOptions), &Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bShowConstraintsAsPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bShowConstraintsAsPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bShowConstraintsAsPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokeStrength_MetaData[] = {
		{ "Category", "Poking" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Strength of the impulse used when poking with left mouse button" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokeStrength = { "PokeStrength", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, PokeStrength), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokeStrength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokeStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_InterpolationSpeed_MetaData[] = {
		{ "Category", "MouseSpring" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "How quickly we interpolate the physics target transform for mouse spring forces" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_InterpolationSpeed = { "InterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, InterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_InterpolationSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_InterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleAngularStiffness_MetaData[] = {
		{ "Category", "MouseSpring" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Angular stiffness of mouse spring forces" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleAngularStiffness = { "HandleAngularStiffness", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, HandleAngularStiffness), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleAngularStiffness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleAngularStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleAngularDamping_MetaData[] = {
		{ "Category", "MouseSpring" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Angular damping of mouse spring forces" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleAngularDamping = { "HandleAngularDamping", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, HandleAngularDamping), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleAngularDamping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleAngularDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleLinearStiffness_MetaData[] = {
		{ "Category", "MouseSpring" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Linear stiffness of mouse spring forces" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleLinearStiffness = { "HandleLinearStiffness", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, HandleLinearStiffness), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleLinearStiffness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleLinearStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleLinearDamping_MetaData[] = {
		{ "Category", "MouseSpring" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Linear damping of mouse spring forces" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleLinearDamping = { "HandleLinearDamping", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, HandleLinearDamping), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleLinearDamping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleLinearDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MaxFPS_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Max FPS for simulation in PhysicsAssetEditor. This is helpful for targeting the same FPS as your game. -1 means disabled" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MaxFPS = { "MaxFPS", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, MaxFPS), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MaxFPS_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MaxFPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUseGravityOverride_MetaData[] = {
		{ "Category", "Simulation" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Toggle gravity override vs gravity scale" },
	};
#endif
	void Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUseGravityOverride_SetBit(void* Obj)
	{
		((UPhysicsAssetEditorOptions*)Obj)->bUseGravityOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUseGravityOverride = { "bUseGravityOverride", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsAssetEditorOptions), &Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUseGravityOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUseGravityOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUseGravityOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_GravityOverrideZ_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "-100000" },
		{ "EditCondition", "bUseGravityOverride" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Gravity override used in the simulation" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_GravityOverrideZ = { "GravityOverrideZ", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, GravityOverrideZ), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_GravityOverrideZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_GravityOverrideZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_GravScale_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "-10000" },
		{ "EditCondition", "!bUseGravityOverride" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Scale factor for the gravity used in the simulation" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_GravScale = { "GravScale", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, GravScale), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_GravScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_GravScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokeBlendTime_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Time taken to blend from physics to animation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokeBlendTime = { "PokeBlendTime", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, PokeBlendTime), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokeBlendTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokeBlendTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokePauseTime_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Time between poking ragdoll and starting to blend back." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokePauseTime = { "PokePauseTime", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, PokePauseTime), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokePauseTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokePauseTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PhysicsUpdateMode_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Determines whether simulation of root body updates component transform" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PhysicsUpdateMode = { "PhysicsUpdateMode", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, PhysicsUpdateMode), Z_Construct_UEnum_Engine_EPhysicsTransformUpdateMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PhysicsUpdateMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PhysicsUpdateMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUpdateJointsFromAnimation_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Lets you manually control the physics/animation" },
	};
#endif
	void Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUpdateJointsFromAnimation_SetBit(void* Obj)
	{
		((UPhysicsAssetEditorOptions*)Obj)->bUpdateJointsFromAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUpdateJointsFromAnimation = { "bUpdateJointsFromAnimation", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhysicsAssetEditorOptions), &Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUpdateJointsFromAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUpdateJointsFromAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUpdateJointsFromAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PhysicsBlend_MetaData[] = {
		{ "Category", "Anim" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Lets you manually control the physics/animation" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PhysicsBlend = { "PhysicsBlend", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetEditorOptions, PhysicsBlend), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PhysicsBlend_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PhysicsBlend_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bResetClothWhenSimulating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSolidRenderingForSelectedOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationConstraintViewMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationConstraintViewMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationCollisionViewMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationCollisionViewMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationMeshViewMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationMeshViewMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintViewMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintViewMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionViewMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionViewMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MeshViewMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MeshViewMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintDrawSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bRenderOnlySelectedConstraints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bShowConstraintsAsPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokeStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_InterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleAngularStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleAngularDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleLinearStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleLinearDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MaxFPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUseGravityOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_GravityOverrideZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_GravScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokeBlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokePauseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PhysicsUpdateMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUpdateJointsFromAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PhysicsBlend,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsAssetEditorOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::ClassParams = {
		&UPhysicsAssetEditorOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsAssetEditorOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicsAssetEditorOptions, 3837631766);
	template<> UNREALED_API UClass* StaticClass<UPhysicsAssetEditorOptions>()
	{
		return UPhysicsAssetEditorOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsAssetEditorOptions(Z_Construct_UClass_UPhysicsAssetEditorOptions, &UPhysicsAssetEditorOptions::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UPhysicsAssetEditorOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsAssetEditorOptions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
