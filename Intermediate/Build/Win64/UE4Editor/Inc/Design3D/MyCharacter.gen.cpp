// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Design3D/MyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}
// Cross Module References
	DESIGN3D_API UScriptStruct* Z_Construct_UScriptStruct_FParameter();
	UPackage* Z_Construct_UPackage__Script_Design3D();
	DESIGN3D_API UScriptStruct* Z_Construct_UScriptStruct_FFOVBox();
	DESIGN3D_API UScriptStruct* Z_Construct_UScriptStruct_FLevelNameInfo();
	DESIGN3D_API UScriptStruct* Z_Construct_UScriptStruct_FLevelInfo();
	DESIGN3D_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	DESIGN3D_API UClass* Z_Construct_UClass_AMyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DESIGN3D_API uint32 Get_Z_Construct_UScriptStruct_FParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameter, Z_Construct_UPackage__Script_Design3D(), TEXT("Parameter"), sizeof(FParameter), Get_Z_Construct_UScriptStruct_FParameter_Hash());
	}
	return Singleton;
}
template<> DESIGN3D_API UScriptStruct* StaticStruct<FParameter>()
{
	return FParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParameter(FParameter::StaticStruct, TEXT("/Script/Design3D"), TEXT("Parameter"), false, nullptr, nullptr);
static struct FScriptStruct_Design3D_StaticRegisterNativesFParameter
{
	FScriptStruct_Design3D_StaticRegisterNativesFParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Parameter")),new UScriptStruct::TCppStructOps<FParameter>);
	}
} ScriptStruct_Design3D_StaticRegisterNativesFParameter;
	struct Z_Construct_UScriptStruct_FParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameter>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
		nullptr,
		&NewStructOps,
		"Parameter",
		sizeof(FParameter),
		alignof(FParameter),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Design3D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Parameter"), sizeof(FParameter), Get_Z_Construct_UScriptStruct_FParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParameter_Hash() { return 3714992309U; }
class UScriptStruct* FFOVBox::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DESIGN3D_API uint32 Get_Z_Construct_UScriptStruct_FFOVBox_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFOVBox, Z_Construct_UPackage__Script_Design3D(), TEXT("FOVBox"), sizeof(FFOVBox), Get_Z_Construct_UScriptStruct_FFOVBox_Hash());
	}
	return Singleton;
}
template<> DESIGN3D_API UScriptStruct* StaticStruct<FFOVBox>()
{
	return FFOVBox::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFOVBox(FFOVBox::StaticStruct, TEXT("/Script/Design3D"), TEXT("FOVBox"), false, nullptr, nullptr);
static struct FScriptStruct_Design3D_StaticRegisterNativesFFOVBox
{
	FScriptStruct_Design3D_StaticRegisterNativesFFOVBox()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FOVBox")),new UScriptStruct::TCppStructOps<FFOVBox>);
	}
} ScriptStruct_Design3D_StaticRegisterNativesFFOVBox;
	struct Z_Construct_UScriptStruct_FFOVBox_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFOVBox_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFOVBox_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFOVBox>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFOVBox_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
		nullptr,
		&NewStructOps,
		"FOVBox",
		sizeof(FFOVBox),
		alignof(FFOVBox),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFOVBox_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFOVBox_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFOVBox()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFOVBox_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Design3D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FOVBox"), sizeof(FFOVBox), Get_Z_Construct_UScriptStruct_FFOVBox_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFOVBox_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFOVBox_Hash() { return 1089003059U; }
class UScriptStruct* FLevelNameInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DESIGN3D_API uint32 Get_Z_Construct_UScriptStruct_FLevelNameInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelNameInfo, Z_Construct_UPackage__Script_Design3D(), TEXT("LevelNameInfo"), sizeof(FLevelNameInfo), Get_Z_Construct_UScriptStruct_FLevelNameInfo_Hash());
	}
	return Singleton;
}
template<> DESIGN3D_API UScriptStruct* StaticStruct<FLevelNameInfo>()
{
	return FLevelNameInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelNameInfo(FLevelNameInfo::StaticStruct, TEXT("/Script/Design3D"), TEXT("LevelNameInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Design3D_StaticRegisterNativesFLevelNameInfo
{
	FScriptStruct_Design3D_StaticRegisterNativesFLevelNameInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelNameInfo")),new UScriptStruct::TCppStructOps<FLevelNameInfo>);
	}
} ScriptStruct_Design3D_StaticRegisterNativesFLevelNameInfo;
	struct Z_Construct_UScriptStruct_FLevelNameInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelNameInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelNameInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelNameInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelNameInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
		nullptr,
		&NewStructOps,
		"LevelNameInfo",
		sizeof(FLevelNameInfo),
		alignof(FLevelNameInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelNameInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelNameInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelNameInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Design3D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelNameInfo"), sizeof(FLevelNameInfo), Get_Z_Construct_UScriptStruct_FLevelNameInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelNameInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelNameInfo_Hash() { return 4156820579U; }
class UScriptStruct* FLevelInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DESIGN3D_API uint32 Get_Z_Construct_UScriptStruct_FLevelInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelInfo, Z_Construct_UPackage__Script_Design3D(), TEXT("LevelInfo"), sizeof(FLevelInfo), Get_Z_Construct_UScriptStruct_FLevelInfo_Hash());
	}
	return Singleton;
}
template<> DESIGN3D_API UScriptStruct* StaticStruct<FLevelInfo>()
{
	return FLevelInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelInfo(FLevelInfo::StaticStruct, TEXT("/Script/Design3D"), TEXT("LevelInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Design3D_StaticRegisterNativesFLevelInfo
{
	FScriptStruct_Design3D_StaticRegisterNativesFLevelInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelInfo")),new UScriptStruct::TCppStructOps<FLevelInfo>);
	}
} ScriptStruct_Design3D_StaticRegisterNativesFLevelInfo;
	struct Z_Construct_UScriptStruct_FLevelInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
		nullptr,
		&NewStructOps,
		"LevelInfo",
		sizeof(FLevelInfo),
		alignof(FLevelInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Design3D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelInfo"), sizeof(FLevelInfo), Get_Z_Construct_UScriptStruct_FLevelInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelInfo_Hash() { return 2236279249U; }
	void AMyCharacter::StaticRegisterNativesAMyCharacter()
	{
	}
	UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
	{
		return AMyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacter.h" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_SpringArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_MyCharacter_MetaData[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
		{ "ToolTip", "PlayerController that owns this Camera actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_MyCharacter = { "MyCharacter", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCharacter, MyCharacter), Z_Construct_UClass_AMyCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::NewProp_MyCharacter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_MyCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_MyCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacter_Statics::ClassParams = {
		&AMyCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCharacter, 1980496292);
	template<> DESIGN3D_API UClass* StaticClass<AMyCharacter>()
	{
		return AMyCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCharacter(Z_Construct_UClass_AMyCharacter, &AMyCharacter::StaticClass, TEXT("/Script/Design3D"), TEXT("AMyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
