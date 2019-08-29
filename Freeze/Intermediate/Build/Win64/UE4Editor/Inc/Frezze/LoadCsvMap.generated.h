// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FREZZE_LoadCsvMap_generated_h
#error "LoadCsvMap.generated.h already included, missing '#pragma once' in LoadCsvMap.h"
#endif
#define FREZZE_LoadCsvMap_generated_h

#define Freeze_Source_Frezze_LoadCsvMap_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetKey) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetKey(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCsvDataByKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetCsvDataByKey(Z_Param_key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadCsvData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadCsvData(Z_Param_fileName); \
		P_NATIVE_END; \
	}


#define Freeze_Source_Frezze_LoadCsvMap_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetKey) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetKey(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCsvDataByKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetCsvDataByKey(Z_Param_key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadCsvData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadCsvData(Z_Param_fileName); \
		P_NATIVE_END; \
	}


#define Freeze_Source_Frezze_LoadCsvMap_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALoadCsvMap(); \
	friend struct Z_Construct_UClass_ALoadCsvMap_Statics; \
public: \
	DECLARE_CLASS(ALoadCsvMap, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Frezze"), NO_API) \
	DECLARE_SERIALIZER(ALoadCsvMap)


#define Freeze_Source_Frezze_LoadCsvMap_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALoadCsvMap(); \
	friend struct Z_Construct_UClass_ALoadCsvMap_Statics; \
public: \
	DECLARE_CLASS(ALoadCsvMap, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Frezze"), NO_API) \
	DECLARE_SERIALIZER(ALoadCsvMap)


#define Freeze_Source_Frezze_LoadCsvMap_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALoadCsvMap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALoadCsvMap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALoadCsvMap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALoadCsvMap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALoadCsvMap(ALoadCsvMap&&); \
	NO_API ALoadCsvMap(const ALoadCsvMap&); \
public:


#define Freeze_Source_Frezze_LoadCsvMap_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALoadCsvMap(ALoadCsvMap&&); \
	NO_API ALoadCsvMap(const ALoadCsvMap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALoadCsvMap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALoadCsvMap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALoadCsvMap)


#define Freeze_Source_Frezze_LoadCsvMap_h_12_PRIVATE_PROPERTY_OFFSET
#define Freeze_Source_Frezze_LoadCsvMap_h_9_PROLOG
#define Freeze_Source_Frezze_LoadCsvMap_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Freeze_Source_Frezze_LoadCsvMap_h_12_PRIVATE_PROPERTY_OFFSET \
	Freeze_Source_Frezze_LoadCsvMap_h_12_RPC_WRAPPERS \
	Freeze_Source_Frezze_LoadCsvMap_h_12_INCLASS \
	Freeze_Source_Frezze_LoadCsvMap_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Freeze_Source_Frezze_LoadCsvMap_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Freeze_Source_Frezze_LoadCsvMap_h_12_PRIVATE_PROPERTY_OFFSET \
	Freeze_Source_Frezze_LoadCsvMap_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Freeze_Source_Frezze_LoadCsvMap_h_12_INCLASS_NO_PURE_DECLS \
	Freeze_Source_Frezze_LoadCsvMap_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FREZZE_API UClass* StaticClass<class ALoadCsvMap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Freeze_Source_Frezze_LoadCsvMap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
