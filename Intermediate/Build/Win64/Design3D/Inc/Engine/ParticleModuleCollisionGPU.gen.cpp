// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Collision/ParticleModuleCollisionGPU.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleCollisionGPU() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleCollisionResponse();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCollisionGPU_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCollisionGPU();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCollisionBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleCollisionMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	static UEnum* EParticleCollisionResponse_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleCollisionResponse, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleCollisionResponse"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleCollisionResponse::Type>()
	{
		return EParticleCollisionResponse_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleCollisionResponse(EParticleCollisionResponse_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleCollisionResponse"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleCollisionResponse_Hash() { return 3114818111U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleCollisionResponse()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleCollisionResponse"), 0, Get_Z_Construct_UEnum_Engine_EParticleCollisionResponse_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EParticleCollisionResponse::Bounce", (int64)EParticleCollisionResponse::Bounce },
				{ "EParticleCollisionResponse::Stop", (int64)EParticleCollisionResponse::Stop },
				{ "EParticleCollisionResponse::Kill", (int64)EParticleCollisionResponse::Kill },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bounce.ToolTip", "The particle will bounce off of the surface." },
				{ "Kill.ToolTip", "The particle will be killed." },
				{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
				{ "Stop.ToolTip", "The particle will stop on the surface." },
				{ "ToolTip", "How particles respond to collision events." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EParticleCollisionResponse",
				"EParticleCollisionResponse::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UParticleModuleCollisionGPU::StaticRegisterNativesUParticleModuleCollisionGPU()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleCollisionGPU_NoRegister()
	{
		return UParticleModuleCollisionGPU::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleCollisionGPU_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Response;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomDistribution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomDistribution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSpread_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomSpread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Friction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResilienceScaleOverLife_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResilienceScaleOverLife;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resilience_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Resilience;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleCollisionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Collision" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Collision/ParticleModuleCollisionGPU.h" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_CollisionMode_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_CollisionMode = { "CollisionMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCollisionGPU, CollisionMode), Z_Construct_UEnum_Engine_EParticleCollisionMode, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_CollisionMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_CollisionMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Response_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
		{ "ToolTip", "How particles respond to a collision event." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCollisionGPU, Response), Z_Construct_UEnum_Engine_EParticleCollisionResponse, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Response_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Response_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RadiusBias_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
		{ "ToolTip", "Bias applied to the collision radius." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RadiusBias = { "RadiusBias", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCollisionGPU, RadiusBias), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RadiusBias_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RadiusBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RadiusScale_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
		{ "ToolTip", "Scale applied to the size of the particle to obtain the collision radius." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RadiusScale = { "RadiusScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCollisionGPU, RadiusScale), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RadiusScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RadiusScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RandomDistribution_MetaData[] = {
		{ "Category", "Collision" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
		{ "ToolTip", "Controls bouncing particles distribution (1 = uniform distribution; 2 = squared distribution)." },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RandomDistribution = { "RandomDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCollisionGPU, RandomDistribution), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RandomDistribution_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RandomDistribution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RandomSpread_MetaData[] = {
		{ "Category", "Collision" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
		{ "ToolTip", "Controls how wide the bouncing particles are distributed (0 = disabled)." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RandomSpread = { "RandomSpread", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCollisionGPU, RandomSpread), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RandomSpread_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RandomSpread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Friction_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
		{ "ToolTip", "Friction applied to all particles during a collision or while moving\nalong a surface." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCollisionGPU, Friction), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Friction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Friction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_ResilienceScaleOverLife_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
		{ "ToolTip", "Scales the bounciness of the particle over its life." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_ResilienceScaleOverLife = { "ResilienceScaleOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCollisionGPU, ResilienceScaleOverLife), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_ResilienceScaleOverLife_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_ResilienceScaleOverLife_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Resilience_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
		{ "ToolTip", "The bounciness of the particle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Resilience = { "Resilience", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleCollisionGPU, Resilience), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Resilience_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Resilience_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_CollisionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RadiusBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RadiusScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RandomDistribution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RandomSpread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Friction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_ResilienceScaleOverLife,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Resilience,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleCollisionGPU>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::ClassParams = {
		&UParticleModuleCollisionGPU::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleCollisionGPU()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleCollisionGPU, 3986623818);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleCollisionGPU>()
	{
		return UParticleModuleCollisionGPU::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleCollisionGPU(Z_Construct_UClass_UParticleModuleCollisionGPU, &UParticleModuleCollisionGPU::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleCollisionGPU"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleCollisionGPU);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
