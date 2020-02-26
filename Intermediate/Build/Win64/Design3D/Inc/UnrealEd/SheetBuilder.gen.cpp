// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Builders/SheetBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSheetBuilder() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ESheetAxis();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_USheetBuilder_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_USheetBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder();
// End Cross Module References
	static UEnum* ESheetAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ESheetAxis, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ESheetAxis"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ESheetAxis>()
	{
		return ESheetAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESheetAxis(ESheetAxis_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("ESheetAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_ESheetAxis_Hash() { return 527900448U; }
	UEnum* Z_Construct_UEnum_UnrealEd_ESheetAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESheetAxis"), 0, Get_Z_Construct_UEnum_UnrealEd_ESheetAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AX_Horizontal", (int64)AX_Horizontal },
				{ "AX_XAxis", (int64)AX_XAxis },
				{ "AX_YAxis", (int64)AX_YAxis },
				{ "AX_MAX", (int64)AX_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Builders/SheetBuilder.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"ESheetAxis",
				"ESheetAxis",
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
	void USheetBuilder::StaticRegisterNativesUSheetBuilder()
	{
	}
	UClass* Z_Construct_UClass_USheetBuilder_NoRegister()
	{
		return USheetBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USheetBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_YSegments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_XSegments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USheetBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorBrushBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USheetBuilder_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "BrushSettings" },
		{ "DisplayName", "Plane" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Builders/SheetBuilder.h" },
		{ "ModuleRelativePath", "Classes/Builders/SheetBuilder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USheetBuilder_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Builders/SheetBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USheetBuilder_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USheetBuilder, GroupName), METADATA_PARAMS(Z_Construct_UClass_USheetBuilder_Statics::NewProp_GroupName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USheetBuilder_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USheetBuilder_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ModuleRelativePath", "Classes/Builders/SheetBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USheetBuilder_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USheetBuilder, Axis), Z_Construct_UEnum_UnrealEd_ESheetAxis, METADATA_PARAMS(Z_Construct_UClass_USheetBuilder_Statics::NewProp_Axis_MetaData, ARRAY_COUNT(Z_Construct_UClass_USheetBuilder_Statics::NewProp_Axis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USheetBuilder_Statics::NewProp_YSegments_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/SheetBuilder.h" },
		{ "UIMax", "20" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USheetBuilder_Statics::NewProp_YSegments = { "YSegments", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USheetBuilder, YSegments), METADATA_PARAMS(Z_Construct_UClass_USheetBuilder_Statics::NewProp_YSegments_MetaData, ARRAY_COUNT(Z_Construct_UClass_USheetBuilder_Statics::NewProp_YSegments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USheetBuilder_Statics::NewProp_XSegments_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/SheetBuilder.h" },
		{ "UIMax", "20" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USheetBuilder_Statics::NewProp_XSegments = { "XSegments", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USheetBuilder, XSegments), METADATA_PARAMS(Z_Construct_UClass_USheetBuilder_Statics::NewProp_XSegments_MetaData, ARRAY_COUNT(Z_Construct_UClass_USheetBuilder_Statics::NewProp_XSegments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USheetBuilder_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/SheetBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USheetBuilder_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USheetBuilder, Y), METADATA_PARAMS(Z_Construct_UClass_USheetBuilder_Statics::NewProp_Y_MetaData, ARRAY_COUNT(Z_Construct_UClass_USheetBuilder_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USheetBuilder_Statics::NewProp_X_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/SheetBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USheetBuilder_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USheetBuilder, X), METADATA_PARAMS(Z_Construct_UClass_USheetBuilder_Statics::NewProp_X_MetaData, ARRAY_COUNT(Z_Construct_UClass_USheetBuilder_Statics::NewProp_X_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USheetBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USheetBuilder_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USheetBuilder_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USheetBuilder_Statics::NewProp_YSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USheetBuilder_Statics::NewProp_XSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USheetBuilder_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USheetBuilder_Statics::NewProp_X,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USheetBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USheetBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USheetBuilder_Statics::ClassParams = {
		&USheetBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USheetBuilder_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USheetBuilder_Statics::PropPointers),
		0,
		0x000812A0u,
		METADATA_PARAMS(Z_Construct_UClass_USheetBuilder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USheetBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USheetBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USheetBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USheetBuilder, 4129497555);
	template<> UNREALED_API UClass* StaticClass<USheetBuilder>()
	{
		return USheetBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USheetBuilder(Z_Construct_UClass_USheetBuilder, &USheetBuilder::StaticClass, TEXT("/Script/UnrealEd"), TEXT("USheetBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USheetBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
