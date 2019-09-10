// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FREZZE_BlockType_generated_h
#error "BlockType.generated.h already included, missing '#pragma once' in BlockType.h"
#endif
#define FREZZE_BlockType_generated_h

#define Freeze_Source_Frezze_BlockType_h_12_RPC_WRAPPERS
#define Freeze_Source_Frezze_BlockType_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Freeze_Source_Frezze_BlockType_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlockType(); \
	friend struct Z_Construct_UClass_ABlockType_Statics; \
public: \
	DECLARE_CLASS(ABlockType, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Frezze"), NO_API) \
	DECLARE_SERIALIZER(ABlockType)


#define Freeze_Source_Frezze_BlockType_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABlockType(); \
	friend struct Z_Construct_UClass_ABlockType_Statics; \
public: \
	DECLARE_CLASS(ABlockType, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Frezze"), NO_API) \
	DECLARE_SERIALIZER(ABlockType)


#define Freeze_Source_Frezze_BlockType_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlockType(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlockType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlockType); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlockType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlockType(ABlockType&&); \
	NO_API ABlockType(const ABlockType&); \
public:


#define Freeze_Source_Frezze_BlockType_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlockType(ABlockType&&); \
	NO_API ABlockType(const ABlockType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlockType); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlockType); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlockType)


#define Freeze_Source_Frezze_BlockType_h_12_PRIVATE_PROPERTY_OFFSET
#define Freeze_Source_Frezze_BlockType_h_9_PROLOG
#define Freeze_Source_Frezze_BlockType_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Freeze_Source_Frezze_BlockType_h_12_PRIVATE_PROPERTY_OFFSET \
	Freeze_Source_Frezze_BlockType_h_12_RPC_WRAPPERS \
	Freeze_Source_Frezze_BlockType_h_12_INCLASS \
	Freeze_Source_Frezze_BlockType_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Freeze_Source_Frezze_BlockType_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Freeze_Source_Frezze_BlockType_h_12_PRIVATE_PROPERTY_OFFSET \
	Freeze_Source_Frezze_BlockType_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Freeze_Source_Frezze_BlockType_h_12_INCLASS_NO_PURE_DECLS \
	Freeze_Source_Frezze_BlockType_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FREZZE_API UClass* StaticClass<class ABlockType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Freeze_Source_Frezze_BlockType_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
