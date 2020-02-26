// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENECAPTURE_ImageSequenceProtocol_generated_h
#error "ImageSequenceProtocol.generated.h already included, missing '#pragma once' in ImageSequenceProtocol.h"
#endif
#define MOVIESCENECAPTURE_ImageSequenceProtocol_generated_h

#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImageSequenceProtocol(); \
	friend struct Z_Construct_UClass_UImageSequenceProtocol_Statics; \
public: \
	DECLARE_CLASS(UImageSequenceProtocol, UFrameGrabberProtocol, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UImageSequenceProtocol)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUImageSequenceProtocol(); \
	friend struct Z_Construct_UClass_UImageSequenceProtocol_Statics; \
public: \
	DECLARE_CLASS(UImageSequenceProtocol, UFrameGrabberProtocol, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UImageSequenceProtocol)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImageSequenceProtocol(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageSequenceProtocol) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageSequenceProtocol); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageSequenceProtocol); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageSequenceProtocol(UImageSequenceProtocol&&); \
	NO_API UImageSequenceProtocol(const UImageSequenceProtocol&); \
public:


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageSequenceProtocol(UImageSequenceProtocol&&); \
	NO_API UImageSequenceProtocol(const UImageSequenceProtocol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageSequenceProtocol); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageSequenceProtocol); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageSequenceProtocol)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_16_PROLOG
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_21_INCLASS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_21_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UImageSequenceProtocol>();

#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_67_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_67_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompressedImageSequenceProtocol(); \
	friend struct Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics; \
public: \
	DECLARE_CLASS(UCompressedImageSequenceProtocol, UImageSequenceProtocol, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UCompressedImageSequenceProtocol)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUCompressedImageSequenceProtocol(); \
	friend struct Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics; \
public: \
	DECLARE_CLASS(UCompressedImageSequenceProtocol, UImageSequenceProtocol, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UCompressedImageSequenceProtocol)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompressedImageSequenceProtocol(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompressedImageSequenceProtocol) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompressedImageSequenceProtocol); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompressedImageSequenceProtocol); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCompressedImageSequenceProtocol(UCompressedImageSequenceProtocol&&); \
	NO_API UCompressedImageSequenceProtocol(const UCompressedImageSequenceProtocol&); \
public:


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_67_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCompressedImageSequenceProtocol(UCompressedImageSequenceProtocol&&); \
	NO_API UCompressedImageSequenceProtocol(const UCompressedImageSequenceProtocol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompressedImageSequenceProtocol); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompressedImageSequenceProtocol); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompressedImageSequenceProtocol)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_67_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_62_PROLOG
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_67_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_67_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_67_INCLASS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_67_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_67_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_67_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UCompressedImageSequenceProtocol>();

#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_91_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_91_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImageSequenceProtocol_BMP(); \
	friend struct Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics; \
public: \
	DECLARE_CLASS(UImageSequenceProtocol_BMP, UImageSequenceProtocol, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UImageSequenceProtocol_BMP)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_91_INCLASS \
private: \
	static void StaticRegisterNativesUImageSequenceProtocol_BMP(); \
	friend struct Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics; \
public: \
	DECLARE_CLASS(UImageSequenceProtocol_BMP, UImageSequenceProtocol, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UImageSequenceProtocol_BMP)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_91_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImageSequenceProtocol_BMP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageSequenceProtocol_BMP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageSequenceProtocol_BMP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageSequenceProtocol_BMP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageSequenceProtocol_BMP(UImageSequenceProtocol_BMP&&); \
	NO_API UImageSequenceProtocol_BMP(const UImageSequenceProtocol_BMP&); \
public:


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_91_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageSequenceProtocol_BMP(UImageSequenceProtocol_BMP&&); \
	NO_API UImageSequenceProtocol_BMP(const UImageSequenceProtocol_BMP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageSequenceProtocol_BMP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageSequenceProtocol_BMP); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageSequenceProtocol_BMP)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_91_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_86_PROLOG
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_91_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_91_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_91_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_91_INCLASS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_91_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_91_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_91_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_91_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UImageSequenceProtocol_BMP>();

#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_105_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_105_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImageSequenceProtocol_PNG(); \
	friend struct Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics; \
public: \
	DECLARE_CLASS(UImageSequenceProtocol_PNG, UCompressedImageSequenceProtocol, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UImageSequenceProtocol_PNG)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_105_INCLASS \
private: \
	static void StaticRegisterNativesUImageSequenceProtocol_PNG(); \
	friend struct Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics; \
public: \
	DECLARE_CLASS(UImageSequenceProtocol_PNG, UCompressedImageSequenceProtocol, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UImageSequenceProtocol_PNG)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImageSequenceProtocol_PNG(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageSequenceProtocol_PNG) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageSequenceProtocol_PNG); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageSequenceProtocol_PNG); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageSequenceProtocol_PNG(UImageSequenceProtocol_PNG&&); \
	NO_API UImageSequenceProtocol_PNG(const UImageSequenceProtocol_PNG&); \
public:


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_105_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageSequenceProtocol_PNG(UImageSequenceProtocol_PNG&&); \
	NO_API UImageSequenceProtocol_PNG(const UImageSequenceProtocol_PNG&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageSequenceProtocol_PNG); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageSequenceProtocol_PNG); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageSequenceProtocol_PNG)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_105_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_100_PROLOG
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_105_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_105_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_105_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_105_INCLASS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_105_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_105_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_105_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_105_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UImageSequenceProtocol_PNG>();

#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_119_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_119_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImageSequenceProtocol_JPG(); \
	friend struct Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics; \
public: \
	DECLARE_CLASS(UImageSequenceProtocol_JPG, UCompressedImageSequenceProtocol, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UImageSequenceProtocol_JPG)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUImageSequenceProtocol_JPG(); \
	friend struct Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics; \
public: \
	DECLARE_CLASS(UImageSequenceProtocol_JPG, UCompressedImageSequenceProtocol, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UImageSequenceProtocol_JPG)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImageSequenceProtocol_JPG(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageSequenceProtocol_JPG) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageSequenceProtocol_JPG); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageSequenceProtocol_JPG); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageSequenceProtocol_JPG(UImageSequenceProtocol_JPG&&); \
	NO_API UImageSequenceProtocol_JPG(const UImageSequenceProtocol_JPG&); \
public:


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_119_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageSequenceProtocol_JPG(UImageSequenceProtocol_JPG&&); \
	NO_API UImageSequenceProtocol_JPG(const UImageSequenceProtocol_JPG&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageSequenceProtocol_JPG); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageSequenceProtocol_JPG); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageSequenceProtocol_JPG)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_119_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_114_PROLOG
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_119_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_119_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_119_INCLASS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_119_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_119_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_119_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UImageSequenceProtocol_JPG>();

#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_133_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_133_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_133_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImageSequenceProtocol_EXR(); \
	friend struct Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics; \
public: \
	DECLARE_CLASS(UImageSequenceProtocol_EXR, UImageSequenceProtocol, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UImageSequenceProtocol_EXR)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_133_INCLASS \
private: \
	static void StaticRegisterNativesUImageSequenceProtocol_EXR(); \
	friend struct Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics; \
public: \
	DECLARE_CLASS(UImageSequenceProtocol_EXR, UImageSequenceProtocol, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UImageSequenceProtocol_EXR)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_133_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImageSequenceProtocol_EXR(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageSequenceProtocol_EXR) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageSequenceProtocol_EXR); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageSequenceProtocol_EXR); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageSequenceProtocol_EXR(UImageSequenceProtocol_EXR&&); \
	NO_API UImageSequenceProtocol_EXR(const UImageSequenceProtocol_EXR&); \
public:


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_133_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageSequenceProtocol_EXR(UImageSequenceProtocol_EXR&&); \
	NO_API UImageSequenceProtocol_EXR(const UImageSequenceProtocol_EXR&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageSequenceProtocol_EXR); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageSequenceProtocol_EXR); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageSequenceProtocol_EXR)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_133_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_128_PROLOG
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_133_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_133_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_133_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_133_INCLASS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_133_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_133_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_133_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_133_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_133_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UImageSequenceProtocol_EXR>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
