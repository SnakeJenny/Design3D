// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportInteraction/Public/ViewportInteractionDragOperations.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportInteractionDragOperations() {}
// Cross Module References
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UTranslationDragOperation_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UTranslationDragOperation();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportDragOperation();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UPlaneTranslationDragOperation_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UPlaneTranslationDragOperation();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_URotateOnAngleDragOperation_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_URotateOnAngleDragOperation();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UScaleDragOperation_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UScaleDragOperation();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UUniformScaleDragOperation_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UUniformScaleDragOperation();
// End Cross Module References
	void UTranslationDragOperation::StaticRegisterNativesUTranslationDragOperation()
	{
	}
	UClass* Z_Construct_UClass_UTranslationDragOperation_NoRegister()
	{
		return UTranslationDragOperation::StaticClass();
	}
	struct Z_Construct_UClass_UTranslationDragOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTranslationDragOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UViewportDragOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationDragOperation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewportInteractionDragOperations.h" },
		{ "ModuleRelativePath", "Public/ViewportInteractionDragOperations.h" },
		{ "ToolTip", "Gizmo translation on one axis." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTranslationDragOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTranslationDragOperation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTranslationDragOperation_Statics::ClassParams = {
		&UTranslationDragOperation::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTranslationDragOperation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTranslationDragOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTranslationDragOperation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTranslationDragOperation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTranslationDragOperation, 3595565294);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UTranslationDragOperation>()
	{
		return UTranslationDragOperation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTranslationDragOperation(Z_Construct_UClass_UTranslationDragOperation, &UTranslationDragOperation::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UTranslationDragOperation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTranslationDragOperation);
	void UPlaneTranslationDragOperation::StaticRegisterNativesUPlaneTranslationDragOperation()
	{
	}
	UClass* Z_Construct_UClass_UPlaneTranslationDragOperation_NoRegister()
	{
		return UPlaneTranslationDragOperation::StaticClass();
	}
	struct Z_Construct_UClass_UPlaneTranslationDragOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlaneTranslationDragOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UViewportDragOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneTranslationDragOperation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewportInteractionDragOperations.h" },
		{ "ModuleRelativePath", "Public/ViewportInteractionDragOperations.h" },
		{ "ToolTip", "Gizmo translation on two axes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlaneTranslationDragOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaneTranslationDragOperation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlaneTranslationDragOperation_Statics::ClassParams = {
		&UPlaneTranslationDragOperation::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlaneTranslationDragOperation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlaneTranslationDragOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlaneTranslationDragOperation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlaneTranslationDragOperation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlaneTranslationDragOperation, 2360877767);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UPlaneTranslationDragOperation>()
	{
		return UPlaneTranslationDragOperation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlaneTranslationDragOperation(Z_Construct_UClass_UPlaneTranslationDragOperation, &UPlaneTranslationDragOperation::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UPlaneTranslationDragOperation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaneTranslationDragOperation);
	void URotateOnAngleDragOperation::StaticRegisterNativesURotateOnAngleDragOperation()
	{
	}
	UClass* Z_Construct_UClass_URotateOnAngleDragOperation_NoRegister()
	{
		return URotateOnAngleDragOperation::StaticClass();
	}
	struct Z_Construct_UClass_URotateOnAngleDragOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URotateOnAngleDragOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UViewportDragOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URotateOnAngleDragOperation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewportInteractionDragOperations.h" },
		{ "ModuleRelativePath", "Public/ViewportInteractionDragOperations.h" },
		{ "ToolTip", "Rotation around one axis based on input angle." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URotateOnAngleDragOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URotateOnAngleDragOperation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URotateOnAngleDragOperation_Statics::ClassParams = {
		&URotateOnAngleDragOperation::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URotateOnAngleDragOperation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URotateOnAngleDragOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URotateOnAngleDragOperation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URotateOnAngleDragOperation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URotateOnAngleDragOperation, 1649032552);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<URotateOnAngleDragOperation>()
	{
		return URotateOnAngleDragOperation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URotateOnAngleDragOperation(Z_Construct_UClass_URotateOnAngleDragOperation, &URotateOnAngleDragOperation::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("URotateOnAngleDragOperation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URotateOnAngleDragOperation);
	void UScaleDragOperation::StaticRegisterNativesUScaleDragOperation()
	{
	}
	UClass* Z_Construct_UClass_UScaleDragOperation_NoRegister()
	{
		return UScaleDragOperation::StaticClass();
	}
	struct Z_Construct_UClass_UScaleDragOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScaleDragOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UViewportDragOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScaleDragOperation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewportInteractionDragOperations.h" },
		{ "ModuleRelativePath", "Public/ViewportInteractionDragOperations.h" },
		{ "ToolTip", "Scale on one axis." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScaleDragOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScaleDragOperation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScaleDragOperation_Statics::ClassParams = {
		&UScaleDragOperation::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScaleDragOperation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UScaleDragOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScaleDragOperation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScaleDragOperation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScaleDragOperation, 273301780);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UScaleDragOperation>()
	{
		return UScaleDragOperation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScaleDragOperation(Z_Construct_UClass_UScaleDragOperation, &UScaleDragOperation::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UScaleDragOperation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScaleDragOperation);
	void UUniformScaleDragOperation::StaticRegisterNativesUUniformScaleDragOperation()
	{
	}
	UClass* Z_Construct_UClass_UUniformScaleDragOperation_NoRegister()
	{
		return UUniformScaleDragOperation::StaticClass();
	}
	struct Z_Construct_UClass_UUniformScaleDragOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUniformScaleDragOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UViewportDragOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformScaleDragOperation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewportInteractionDragOperations.h" },
		{ "ModuleRelativePath", "Public/ViewportInteractionDragOperations.h" },
		{ "ToolTip", "Scale on all axes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUniformScaleDragOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUniformScaleDragOperation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUniformScaleDragOperation_Statics::ClassParams = {
		&UUniformScaleDragOperation::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUniformScaleDragOperation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUniformScaleDragOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUniformScaleDragOperation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUniformScaleDragOperation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUniformScaleDragOperation, 2297864419);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UUniformScaleDragOperation>()
	{
		return UUniformScaleDragOperation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUniformScaleDragOperation(Z_Construct_UClass_UUniformScaleDragOperation, &UUniformScaleDragOperation::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UUniformScaleDragOperation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUniformScaleDragOperation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
