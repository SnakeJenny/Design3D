// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshDescription/Public/MeshDescription.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshDescription() {}
// Cross Module References
	MESHDESCRIPTION_API UEnum* Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions();
	UPackage* Z_Construct_UPackage__Script_MeshDescription();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FMeshTriangle();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FVertexInstanceID();
	MESHDESCRIPTION_API UClass* Z_Construct_UClass_UDEPRECATED_MeshDescription_NoRegister();
	MESHDESCRIPTION_API UClass* Z_Construct_UClass_UDEPRECATED_MeshDescription();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EComputeNTBsOptions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions, Z_Construct_UPackage__Script_MeshDescription(), TEXT("EComputeNTBsOptions"));
		}
		return Singleton;
	}
	template<> MESHDESCRIPTION_API UEnum* StaticEnum<EComputeNTBsOptions>()
	{
		return EComputeNTBsOptions_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EComputeNTBsOptions(EComputeNTBsOptions_StaticEnum, TEXT("/Script/MeshDescription"), TEXT("EComputeNTBsOptions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions_Hash() { return 29307291U; }
	UEnum* Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MeshDescription();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EComputeNTBsOptions"), 0, Get_Z_Construct_UEnum_MeshDescription_EComputeNTBsOptions_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EComputeNTBsOptions::None", (int64)EComputeNTBsOptions::None },
				{ "EComputeNTBsOptions::Normals", (int64)EComputeNTBsOptions::Normals },
				{ "EComputeNTBsOptions::Tangents", (int64)EComputeNTBsOptions::Tangents },
				{ "EComputeNTBsOptions::WeightedNTBs", (int64)EComputeNTBsOptions::WeightedNTBs },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MeshDescription.h" },
				{ "Normals.ToolTip", "No flags" },
				{ "Tangents.ToolTip", "Compute the normals" },
				{ "WeightedNTBs.ToolTip", "Compute the tangents" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MeshDescription,
				nullptr,
				"EComputeNTBsOptions",
				"EComputeNTBsOptions",
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
class UScriptStruct* FMeshTriangle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MESHDESCRIPTION_API uint32 Get_Z_Construct_UScriptStruct_FMeshTriangle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshTriangle, Z_Construct_UPackage__Script_MeshDescription(), TEXT("MeshTriangle"), sizeof(FMeshTriangle), Get_Z_Construct_UScriptStruct_FMeshTriangle_Hash());
	}
	return Singleton;
}
template<> MESHDESCRIPTION_API UScriptStruct* StaticStruct<FMeshTriangle>()
{
	return FMeshTriangle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshTriangle(FMeshTriangle::StaticStruct, TEXT("/Script/MeshDescription"), TEXT("MeshTriangle"), false, nullptr, nullptr);
static struct FScriptStruct_MeshDescription_StaticRegisterNativesFMeshTriangle
{
	FScriptStruct_MeshDescription_StaticRegisterNativesFMeshTriangle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshTriangle")),new UScriptStruct::TCppStructOps<FMeshTriangle>);
	}
} ScriptStruct_MeshDescription_StaticRegisterNativesFMeshTriangle;
	struct Z_Construct_UScriptStruct_FMeshTriangle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceID2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceID1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceID0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshTriangle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshDescription.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshTriangle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshTriangle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshTriangle_Statics::NewProp_VertexInstanceID2_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/MeshDescription.h" },
		{ "ToolTip", "Third vertex instance that makes up this triangle.  Indices must be ordered counter-clockwise." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshTriangle_Statics::NewProp_VertexInstanceID2 = { "VertexInstanceID2", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshTriangle, VertexInstanceID2), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshTriangle_Statics::NewProp_VertexInstanceID2_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTriangle_Statics::NewProp_VertexInstanceID2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshTriangle_Statics::NewProp_VertexInstanceID1_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/MeshDescription.h" },
		{ "ToolTip", "Second vertex instance that makes up this triangle.  Indices must be ordered counter-clockwise." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshTriangle_Statics::NewProp_VertexInstanceID1 = { "VertexInstanceID1", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshTriangle, VertexInstanceID1), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshTriangle_Statics::NewProp_VertexInstanceID1_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTriangle_Statics::NewProp_VertexInstanceID1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshTriangle_Statics::NewProp_VertexInstanceID0_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/MeshDescription.h" },
		{ "ToolTip", "First vertex instance that makes up this triangle.  Indices must be ordered counter-clockwise." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshTriangle_Statics::NewProp_VertexInstanceID0 = { "VertexInstanceID0", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshTriangle, VertexInstanceID0), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshTriangle_Statics::NewProp_VertexInstanceID0_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTriangle_Statics::NewProp_VertexInstanceID0_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshTriangle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshTriangle_Statics::NewProp_VertexInstanceID2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshTriangle_Statics::NewProp_VertexInstanceID1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshTriangle_Statics::NewProp_VertexInstanceID0,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshTriangle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshDescription,
		nullptr,
		&NewStructOps,
		"MeshTriangle",
		sizeof(FMeshTriangle),
		alignof(FMeshTriangle),
		Z_Construct_UScriptStruct_FMeshTriangle_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTriangle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshTriangle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTriangle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshTriangle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshTriangle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MeshDescription();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshTriangle"), sizeof(FMeshTriangle), Get_Z_Construct_UScriptStruct_FMeshTriangle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeshTriangle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshTriangle_Hash() { return 1030095238U; }
	void UDEPRECATED_MeshDescription::StaticRegisterNativesUDEPRECATED_MeshDescription()
	{
	}
	UClass* Z_Construct_UClass_UDEPRECATED_MeshDescription_NoRegister()
	{
		return UDEPRECATED_MeshDescription::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_MeshDescription_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_MeshDescription_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshDescription,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_MeshDescription_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshDescription.h" },
		{ "ModuleRelativePath", "Public/MeshDescription.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_MeshDescription_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_MeshDescription>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_MeshDescription_Statics::ClassParams = {
		&UDEPRECATED_MeshDescription::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x021002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_MeshDescription_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_MeshDescription_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_MeshDescription()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEPRECATED_MeshDescription_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEPRECATED_MeshDescription, 1277099849);
	template<> MESHDESCRIPTION_API UClass* StaticClass<UDEPRECATED_MeshDescription>()
	{
		return UDEPRECATED_MeshDescription::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEPRECATED_MeshDescription(Z_Construct_UClass_UDEPRECATED_MeshDescription, &UDEPRECATED_MeshDescription::StaticClass, TEXT("/Script/MeshDescription"), TEXT("UDEPRECATED_MeshDescription"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_MeshDescription);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDEPRECATED_MeshDescription)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
