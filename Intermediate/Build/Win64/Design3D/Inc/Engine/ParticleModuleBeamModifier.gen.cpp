// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Beam/ParticleModuleBeamModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleBeamModifier() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_BeamModifierType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBeamModifierOptions();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamModifier_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamModifier();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	static UEnum* BeamModifierType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_BeamModifierType, Z_Construct_UPackage__Script_Engine(), TEXT("BeamModifierType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<BeamModifierType>()
	{
		return BeamModifierType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_BeamModifierType(BeamModifierType_StaticEnum, TEXT("/Script/Engine"), TEXT("BeamModifierType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_BeamModifierType_Hash() { return 2004311993U; }
	UEnum* Z_Construct_UEnum_Engine_BeamModifierType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("BeamModifierType"), 0, Get_Z_Construct_UEnum_Engine_BeamModifierType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PEB2MT_Source", (int64)PEB2MT_Source },
				{ "PEB2MT_Target", (int64)PEB2MT_Target },
				{ "PEB2MT_MAX", (int64)PEB2MT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
				{ "PEB2MT_Source.DisplayName", "Source" },
				{ "PEB2MT_Source.ToolTip", "Modify the source of the beam." },
				{ "PEB2MT_Target.DisplayName", "Target" },
				{ "PEB2MT_Target.ToolTip", "Modify the target of the beam." },
				{ "ToolTip", "What to modify." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"BeamModifierType",
				"BeamModifierType",
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
class UScriptStruct* FBeamModifierOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBeamModifierOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBeamModifierOptions, Z_Construct_UPackage__Script_Engine(), TEXT("BeamModifierOptions"), sizeof(FBeamModifierOptions), Get_Z_Construct_UScriptStruct_FBeamModifierOptions_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBeamModifierOptions>()
{
	return FBeamModifierOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBeamModifierOptions(FBeamModifierOptions::StaticStruct, TEXT("/Script/Engine"), TEXT("BeamModifierOptions"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBeamModifierOptions
{
	FScriptStruct_Engine_StaticRegisterNativesFBeamModifierOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BeamModifierOptions")),new UScriptStruct::TCppStructOps<FBeamModifierOptions>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBeamModifierOptions;
	struct Z_Construct_UScriptStruct_FBeamModifierOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLock_MetaData[];
#endif
		static void NewProp_bLock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScale_MetaData[];
#endif
		static void NewProp_bScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bModify_MetaData[];
#endif
		static void NewProp_bModify_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bModify;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBeamModifierOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bLock_MetaData[] = {
		{ "Category", "BeamModifierOptions" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "If true, lock the modifier to the life of the particle." },
	};
#endif
	void Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bLock_SetBit(void* Obj)
	{
		((FBeamModifierOptions*)Obj)->bLock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bLock = { "bLock", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBeamModifierOptions), &Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bLock_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bLock_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bScale_MetaData[] = {
		{ "Category", "BeamModifierOptions" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "If true, scale the associated value by the given value." },
	};
#endif
	void Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bScale_SetBit(void* Obj)
	{
		((FBeamModifierOptions*)Obj)->bScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bScale = { "bScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBeamModifierOptions), &Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bModify_MetaData[] = {
		{ "Category", "BeamModifierOptions" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "If true, modify the value associated with this grouping." },
	};
#endif
	void Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bModify_SetBit(void* Obj)
	{
		((FBeamModifierOptions*)Obj)->bModify = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bModify = { "bModify", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBeamModifierOptions), &Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bModify_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bModify_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bModify_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bModify,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BeamModifierOptions",
		sizeof(FBeamModifierOptions),
		alignof(FBeamModifierOptions),
		Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBeamModifierOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBeamModifierOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BeamModifierOptions"), sizeof(FBeamModifierOptions), Get_Z_Construct_UScriptStruct_FBeamModifierOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBeamModifierOptions_Hash() { return 3256216420U; }
	void UParticleModuleBeamModifier::StaticRegisterNativesUParticleModuleBeamModifier()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleBeamModifier_NoRegister()
	{
		return UParticleModuleBeamModifier::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleBeamModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrengthOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StrengthOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteTangent_MetaData[];
#endif
		static void NewProp_bAbsoluteTangent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TangentOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositionOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModifierType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleBeamModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleBeamBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamModifier_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Beam Modifier" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Strength" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "The value to use when modifying the Strength." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleBeamModifier, Strength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Strength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_StrengthOptions_MetaData[] = {
		{ "Category", "Strength" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "The options associated with the Strength." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_StrengthOptions = { "StrengthOptions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleBeamModifier, StrengthOptions), Z_Construct_UScriptStruct_FBeamModifierOptions, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_StrengthOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_StrengthOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_bAbsoluteTangent_MetaData[] = {
		{ "Category", "Tangent" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "If true, don't transform the tangent modifier into the tangent basis." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_bAbsoluteTangent_SetBit(void* Obj)
	{
		((UParticleModuleBeamModifier*)Obj)->bAbsoluteTangent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_bAbsoluteTangent = { "bAbsoluteTangent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleBeamModifier), &Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_bAbsoluteTangent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_bAbsoluteTangent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_bAbsoluteTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Tangent_MetaData[] = {
		{ "Category", "Tangent" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "The value to use when modifying the Tangent." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleBeamModifier, Tangent), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Tangent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Tangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_TangentOptions_MetaData[] = {
		{ "Category", "Tangent" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "The options associated with the Tangent." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_TangentOptions = { "TangentOptions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleBeamModifier, TangentOptions), Z_Construct_UScriptStruct_FBeamModifierOptions, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_TangentOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_TangentOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "The value to use when modifying the position." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleBeamModifier, Position), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_PositionOptions_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "The options associated with the position." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_PositionOptions = { "PositionOptions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleBeamModifier, PositionOptions), Z_Construct_UScriptStruct_FBeamModifierOptions, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_PositionOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_PositionOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_ModifierType_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "Whether this module modifies the Source or the Target." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_ModifierType = { "ModifierType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleBeamModifier, ModifierType), Z_Construct_UEnum_Engine_BeamModifierType, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_ModifierType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_ModifierType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleBeamModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_StrengthOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_bAbsoluteTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Tangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_TangentOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_PositionOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_ModifierType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleBeamModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleBeamModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::ClassParams = {
		&UParticleModuleBeamModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleBeamModifier_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleBeamModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleBeamModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleBeamModifier, 2131988867);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleBeamModifier>()
	{
		return UParticleModuleBeamModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleBeamModifier(Z_Construct_UClass_UParticleModuleBeamModifier, &UParticleModuleBeamModifier::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleBeamModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleBeamModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
