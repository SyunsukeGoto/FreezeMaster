// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Frezze/LoadCsvMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadCsvMap() {}
// Cross Module References
	FREZZE_API UClass* Z_Construct_UClass_ALoadCsvMap_NoRegister();
	FREZZE_API UClass* Z_Construct_UClass_ALoadCsvMap();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Frezze();
	FREZZE_API UFunction* Z_Construct_UFunction_ALoadCsvMap_GetCsvDataByKey();
	FREZZE_API UFunction* Z_Construct_UFunction_ALoadCsvMap_GetKey();
	FREZZE_API UFunction* Z_Construct_UFunction_ALoadCsvMap_LoadCsvData();
// End Cross Module References
	void ALoadCsvMap::StaticRegisterNativesALoadCsvMap()
	{
		UClass* Class = ALoadCsvMap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCsvDataByKey", &ALoadCsvMap::execGetCsvDataByKey },
			{ "GetKey", &ALoadCsvMap::execGetKey },
			{ "LoadCsvData", &ALoadCsvMap::execLoadCsvData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALoadCsvMap_GetCsvDataByKey_Statics
	{
		struct LoadCsvMap_eventGetCsvDataByKey_Parms
		{
			FString key;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALoadCsvMap_GetCsvDataByKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadCsvMap_eventGetCsvDataByKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALoadCsvMap_GetCsvDataByKey_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALoadCsvMap_GetCsvDataByKey_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadCsvMap_eventGetCsvDataByKey_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALoadCsvMap_GetCsvDataByKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALoadCsvMap_GetCsvDataByKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALoadCsvMap_GetCsvDataByKey_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALoadCsvMap_GetCsvDataByKey_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALoadCsvMap_GetCsvDataByKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "CsvReader" },
		{ "ModuleRelativePath", "LoadCsvMap.h" },
		{ "ToolTip", "CSV?f?[?^?\xcc\x83L?[???\xe6\x93\xbe?????\xd6\x90?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALoadCsvMap_GetCsvDataByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALoadCsvMap, nullptr, "GetCsvDataByKey", sizeof(LoadCsvMap_eventGetCsvDataByKey_Parms), Z_Construct_UFunction_ALoadCsvMap_GetCsvDataByKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALoadCsvMap_GetCsvDataByKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALoadCsvMap_GetCsvDataByKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALoadCsvMap_GetCsvDataByKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALoadCsvMap_GetCsvDataByKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALoadCsvMap_GetCsvDataByKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALoadCsvMap_GetKey_Statics
	{
		struct LoadCsvMap_eventGetKey_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALoadCsvMap_GetKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadCsvMap_eventGetKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALoadCsvMap_GetKey_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALoadCsvMap_GetKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALoadCsvMap_GetKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALoadCsvMap_GetKey_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALoadCsvMap_GetKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "CsvReader" },
		{ "ModuleRelativePath", "LoadCsvMap.h" },
		{ "ToolTip", "?L?[???\xe6\x93\xbe?????\xd6\x90?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALoadCsvMap_GetKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALoadCsvMap, nullptr, "GetKey", sizeof(LoadCsvMap_eventGetKey_Parms), Z_Construct_UFunction_ALoadCsvMap_GetKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALoadCsvMap_GetKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALoadCsvMap_GetKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALoadCsvMap_GetKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALoadCsvMap_GetKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALoadCsvMap_GetKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALoadCsvMap_LoadCsvData_Statics
	{
		struct LoadCsvMap_eventLoadCsvData_Parms
		{
			FString fileName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALoadCsvMap_LoadCsvData_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadCsvMap_eventLoadCsvData_Parms, fileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALoadCsvMap_LoadCsvData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALoadCsvMap_LoadCsvData_Statics::NewProp_fileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALoadCsvMap_LoadCsvData_Statics::Function_MetaDataParams[] = {
		{ "Category", "CsvReader" },
		{ "ModuleRelativePath", "LoadCsvMap.h" },
		{ "ToolTip", "CSV?t?@?C?????\xc7\x82\xdd\x8d??\xde\x8a\xd6\x90?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALoadCsvMap_LoadCsvData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALoadCsvMap, nullptr, "LoadCsvData", sizeof(LoadCsvMap_eventLoadCsvData_Parms), Z_Construct_UFunction_ALoadCsvMap_LoadCsvData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALoadCsvMap_LoadCsvData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALoadCsvMap_LoadCsvData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALoadCsvMap_LoadCsvData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALoadCsvMap_LoadCsvData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALoadCsvMap_LoadCsvData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALoadCsvMap_NoRegister()
	{
		return ALoadCsvMap::StaticClass();
	}
	struct Z_Construct_UClass_ALoadCsvMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALoadCsvMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Frezze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALoadCsvMap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALoadCsvMap_GetCsvDataByKey, "GetCsvDataByKey" }, // 3133508722
		{ &Z_Construct_UFunction_ALoadCsvMap_GetKey, "GetKey" }, // 2387326066
		{ &Z_Construct_UFunction_ALoadCsvMap_LoadCsvData, "LoadCsvData" }, // 774833531
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALoadCsvMap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LoadCsvMap.h" },
		{ "ModuleRelativePath", "LoadCsvMap.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALoadCsvMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALoadCsvMap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALoadCsvMap_Statics::ClassParams = {
		&ALoadCsvMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALoadCsvMap_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALoadCsvMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALoadCsvMap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALoadCsvMap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALoadCsvMap, 744147688);
	template<> FREZZE_API UClass* StaticClass<ALoadCsvMap>()
	{
		return ALoadCsvMap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALoadCsvMap(Z_Construct_UClass_ALoadCsvMap, &ALoadCsvMap::StaticClass, TEXT("/Script/Frezze"), TEXT("ALoadCsvMap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALoadCsvMap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
