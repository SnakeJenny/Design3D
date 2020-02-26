// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionSimulationCore/Public/GeometryCollection/GeometryCollectionSimulationTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionSimulationTypes() {}
// Cross Module References
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_EEmissionPatternTypeEnum();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionSimulationCore();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_EInitialVelocityTypeEnum();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_EObjectTypeEnum();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_EImplicitTypeEnum();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_ECollisionTypeEnum();
// End Cross Module References
	static UEnum* EEmissionPatternTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionSimulationCore_EEmissionPatternTypeEnum, Z_Construct_UPackage__Script_GeometryCollectionSimulationCore(), TEXT("EEmissionPatternTypeEnum"));
		}
		return Singleton;
	}
	template<> GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* StaticEnum<EEmissionPatternTypeEnum>()
	{
		return EEmissionPatternTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEmissionPatternTypeEnum(EEmissionPatternTypeEnum_StaticEnum, TEXT("/Script/GeometryCollectionSimulationCore"), TEXT("EEmissionPatternTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GeometryCollectionSimulationCore_EEmissionPatternTypeEnum_Hash() { return 13743569U; }
	UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_EEmissionPatternTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionSimulationCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEmissionPatternTypeEnum"), 0, Get_Z_Construct_UEnum_GeometryCollectionSimulationCore_EEmissionPatternTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEmissionPatternTypeEnum::Chaos_Emission_Pattern_First_Frame", (int64)EEmissionPatternTypeEnum::Chaos_Emission_Pattern_First_Frame },
				{ "EEmissionPatternTypeEnum::Chaos_Emission_Pattern_On_Demand", (int64)EEmissionPatternTypeEnum::Chaos_Emission_Pattern_On_Demand },
				{ "EEmissionPatternTypeEnum::Chaos_Max", (int64)EEmissionPatternTypeEnum::Chaos_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Chaos_Emission_Pattern_First_Frame.DisplayName", "First Frame" },
				{ "Chaos_Emission_Pattern_On_Demand.DisplayName", "On Demand" },
				{ "Chaos_Max.Hidden", "" },
				{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionSimulationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionSimulationCore,
				nullptr,
				"EEmissionPatternTypeEnum",
				"EEmissionPatternTypeEnum",
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
	static UEnum* EInitialVelocityTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionSimulationCore_EInitialVelocityTypeEnum, Z_Construct_UPackage__Script_GeometryCollectionSimulationCore(), TEXT("EInitialVelocityTypeEnum"));
		}
		return Singleton;
	}
	template<> GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* StaticEnum<EInitialVelocityTypeEnum>()
	{
		return EInitialVelocityTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInitialVelocityTypeEnum(EInitialVelocityTypeEnum_StaticEnum, TEXT("/Script/GeometryCollectionSimulationCore"), TEXT("EInitialVelocityTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GeometryCollectionSimulationCore_EInitialVelocityTypeEnum_Hash() { return 2756303258U; }
	UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_EInitialVelocityTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionSimulationCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInitialVelocityTypeEnum"), 0, Get_Z_Construct_UEnum_GeometryCollectionSimulationCore_EInitialVelocityTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInitialVelocityTypeEnum::Chaos_Initial_Velocity_User_Defined", (int64)EInitialVelocityTypeEnum::Chaos_Initial_Velocity_User_Defined },
				{ "EInitialVelocityTypeEnum::Chaos_Initial_Velocity_None", (int64)EInitialVelocityTypeEnum::Chaos_Initial_Velocity_None },
				{ "EInitialVelocityTypeEnum::Chaos_Max", (int64)EInitialVelocityTypeEnum::Chaos_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Chaos_Initial_Velocity_None.DisplayName", "None" },
				{ "Chaos_Initial_Velocity_None.ToolTip", "Chaos_Initial_Velocity_Field UMETA(DisplayName = \"Field\")," },
				{ "Chaos_Initial_Velocity_User_Defined.DisplayName", "User Defined" },
				{ "Chaos_Initial_Velocity_User_Defined.ToolTip", "Chaos_Initial_Velocity_Animation UMETA(DisplayName = \"Animation\")," },
				{ "Chaos_Max.Hidden", "" },
				{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionSimulationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionSimulationCore,
				nullptr,
				"EInitialVelocityTypeEnum",
				"EInitialVelocityTypeEnum",
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
	static UEnum* EObjectTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionSimulationCore_EObjectTypeEnum, Z_Construct_UPackage__Script_GeometryCollectionSimulationCore(), TEXT("EObjectTypeEnum"));
		}
		return Singleton;
	}
	template<> GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* StaticEnum<EObjectTypeEnum>()
	{
		return EObjectTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EObjectTypeEnum(EObjectTypeEnum_StaticEnum, TEXT("/Script/GeometryCollectionSimulationCore"), TEXT("EObjectTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GeometryCollectionSimulationCore_EObjectTypeEnum_Hash() { return 1251795358U; }
	UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_EObjectTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionSimulationCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EObjectTypeEnum"), 0, Get_Z_Construct_UEnum_GeometryCollectionSimulationCore_EObjectTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EObjectTypeEnum::Chaos_Object_Dynamic", (int64)EObjectTypeEnum::Chaos_Object_Dynamic },
				{ "EObjectTypeEnum::Chaos_Object_Kinematic", (int64)EObjectTypeEnum::Chaos_Object_Kinematic },
				{ "EObjectTypeEnum::Chaos_Object_Sleeping", (int64)EObjectTypeEnum::Chaos_Object_Sleeping },
				{ "EObjectTypeEnum::Chaos_Max", (int64)EObjectTypeEnum::Chaos_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Chaos_Max.Hidden", "" },
				{ "Chaos_Object_Dynamic.DisplayName", "Dynamic" },
				{ "Chaos_Object_Kinematic.DisplayName", "Kinematic" },
				{ "Chaos_Object_Sleeping.DisplayName", "Sleeping" },
				{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionSimulationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionSimulationCore,
				nullptr,
				"EObjectTypeEnum",
				"EObjectTypeEnum",
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
	static UEnum* EImplicitTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionSimulationCore_EImplicitTypeEnum, Z_Construct_UPackage__Script_GeometryCollectionSimulationCore(), TEXT("EImplicitTypeEnum"));
		}
		return Singleton;
	}
	template<> GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* StaticEnum<EImplicitTypeEnum>()
	{
		return EImplicitTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EImplicitTypeEnum(EImplicitTypeEnum_StaticEnum, TEXT("/Script/GeometryCollectionSimulationCore"), TEXT("EImplicitTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GeometryCollectionSimulationCore_EImplicitTypeEnum_Hash() { return 1693006364U; }
	UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_EImplicitTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionSimulationCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EImplicitTypeEnum"), 0, Get_Z_Construct_UEnum_GeometryCollectionSimulationCore_EImplicitTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EImplicitTypeEnum::Chaos_Implicit_Cube", (int64)EImplicitTypeEnum::Chaos_Implicit_Cube },
				{ "EImplicitTypeEnum::Chaos_Implicit_Sphere", (int64)EImplicitTypeEnum::Chaos_Implicit_Sphere },
				{ "EImplicitTypeEnum::Chaos_Implicit_LevelSet", (int64)EImplicitTypeEnum::Chaos_Implicit_LevelSet },
				{ "EImplicitTypeEnum::Chaos_Max", (int64)EImplicitTypeEnum::Chaos_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Chaos_Implicit_Cube.DisplayName", "Cube" },
				{ "Chaos_Implicit_LevelSet.DisplayName", "Level Set" },
				{ "Chaos_Implicit_Sphere.DisplayName", "Sphere" },
				{ "Chaos_Max.Hidden", "" },
				{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionSimulationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionSimulationCore,
				nullptr,
				"EImplicitTypeEnum",
				"EImplicitTypeEnum",
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
	static UEnum* ECollisionTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionSimulationCore_ECollisionTypeEnum, Z_Construct_UPackage__Script_GeometryCollectionSimulationCore(), TEXT("ECollisionTypeEnum"));
		}
		return Singleton;
	}
	template<> GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* StaticEnum<ECollisionTypeEnum>()
	{
		return ECollisionTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECollisionTypeEnum(ECollisionTypeEnum_StaticEnum, TEXT("/Script/GeometryCollectionSimulationCore"), TEXT("ECollisionTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GeometryCollectionSimulationCore_ECollisionTypeEnum_Hash() { return 2848590212U; }
	UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_ECollisionTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionSimulationCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECollisionTypeEnum"), 0, Get_Z_Construct_UEnum_GeometryCollectionSimulationCore_ECollisionTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECollisionTypeEnum::Chaos_Volumetric", (int64)ECollisionTypeEnum::Chaos_Volumetric },
				{ "ECollisionTypeEnum::Chaos_Surface_Volumetric", (int64)ECollisionTypeEnum::Chaos_Surface_Volumetric },
				{ "ECollisionTypeEnum::Chaos_Max", (int64)ECollisionTypeEnum::Chaos_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Chaos_Max.Hidden", "" },
				{ "Chaos_Surface_Volumetric.DisplayName", "Particle-Implicit" },
				{ "Chaos_Volumetric.DisplayName", "Implicit-Implicit" },
				{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionSimulationTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionSimulationCore,
				nullptr,
				"ECollisionTypeEnum",
				"ECollisionTypeEnum",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
