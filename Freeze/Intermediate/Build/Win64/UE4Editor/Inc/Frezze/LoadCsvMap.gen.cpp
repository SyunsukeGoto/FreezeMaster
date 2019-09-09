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
	FREZZE_API UEnum* Z_Construct_UEnum_Frezze_ObjectType();
	UPackage* Z_Construct_UPackage__Script_Frezze();
	FREZZE_API UClass* Z_Construct_UClass_ALoadCsvMap_NoRegister();
	FREZZE_API UClass* Z_Construct_UClass_ALoadCsvMap();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FREZZE_API UFunction* Z_Construct_UFunction_ALoadCsvMap_GetCsv();
	FREZZE_API UFunction* Z_Construct_UFunction_ALoadCsvMap_GetCsvData();
	FREZZE_API UFunction* Z_Construct_UFunction_ALoadCsvMap_GetRow();
	FREZZE_API UFunction* Z_Construct_UFunction_ALoadCsvMap_LoadCsvData();
	FREZZE_API UFunction* Z_Construct_UFunction_ALoadCsvMap_ToObjectType();
// End Cross Module References
	static UEnum* ObjectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Frezze_ObjectType, Z_Construct_UPackage__Script_Frezze(), TEXT("ObjectType"));
		}
		return Singleton;
	}
	template<> FREZZE_API UEnum* StaticEnum<ObjectType>()
	{
		return ObjectType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ObjectType(ObjectType_StaticEnum, TEXT("/Script/Frezze"), TEXT("ObjectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Frezze_ObjectType_Hash() { return 2322154609U; }
	UEnum* Z_Construct_UEnum_Frezze_ObjectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Frezze();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ObjectType"), 0, Get_Z_Construct_UEnum_Frezze_ObjectType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ObjectType::IS_NONE", (int64)ObjectType::IS_NONE },
				{ "ObjectType::IS_WALL_QUBE", (int64)ObjectType::IS_WALL_QUBE },
				{ "ObjectType::IS_GROUND_QUBE", (int64)ObjectType::IS_GROUND_QUBE },
				{ "ObjectType::IS_ICE_QUBE", (int64)ObjectType::IS_ICE_QUBE },
				{ "ObjectType::IS_MISSING_QUBE4", (int64)ObjectType::IS_MISSING_QUBE4 },
				{ "ObjectType::IS_MISSING_QUBE5", (int64)ObjectType::IS_MISSING_QUBE5 },
				{ "ObjectType::IS_MISSING_QUBE6", (int64)ObjectType::IS_MISSING_QUBE6 },
				{ "ObjectType::IS_MISSING_QUBE7", (int64)ObjectType::IS_MISSING_QUBE7 },
				{ "ObjectType::IS_MISSING_QUBE8", (int64)ObjectType::IS_MISSING_QUBE8 },
				{ "ObjectType::IS_MISSING_QUBE9", (int64)ObjectType::IS_MISSING_QUBE9 },
				{ "ObjectType::IS_WATER_QUBE", (int64)ObjectType::IS_WATER_QUBE },
				{ "ObjectType::IS_ICICLE_QUBE", (int64)ObjectType::IS_ICICLE_QUBE },
				{ "ObjectType::IS_FIREBLOCK_QUBE", (int64)ObjectType::IS_FIREBLOCK_QUBE },
				{ "ObjectType::IS_WATERFALL_QUBE", (int64)ObjectType::IS_WATERFALL_QUBE },
				{ "ObjectType::IS_ENEMY_QUBE", (int64)ObjectType::IS_ENEMY_QUBE },
				{ "ObjectType::IS_ENEMY_COLLISION", (int64)ObjectType::IS_ENEMY_COLLISION },
				{ "ObjectType::IS_KEY_BLOCK", (int64)ObjectType::IS_KEY_BLOCK },
				{ "ObjectType::IS_DOOR_QUBE", (int64)ObjectType::IS_DOOR_QUBE },
				{ "ObjectType::IS_KEYICEBLOCK", (int64)ObjectType::IS_KEYICEBLOCK },
				{ "ObjectType::IS_MISSING_GIMMICK19", (int64)ObjectType::IS_MISSING_GIMMICK19 },
				{ "ObjectType::IS_PLAYER", (int64)ObjectType::IS_PLAYER },
				{ "ObjectType::IS_GOAL_QUBE", (int64)ObjectType::IS_GOAL_QUBE },
				{ "ObjectType::IS_NUM", (int64)ObjectType::IS_NUM },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IS_DOOR_QUBE.DisplayName", "DOOR" },
				{ "IS_DOOR_QUBE.ToolTip", "???L???[?u     16" },
				{ "IS_ENEMY_COLLISION.DisplayName", "ENEMYCOLLISION" },
				{ "IS_ENEMY_COLLISION.ToolTip", "?G?L???[?u              14" },
				{ "IS_ENEMY_QUBE.DisplayName", "ENEMY" },
				{ "IS_ENEMY_QUBE.ToolTip", "???L???[?u              13" },
				{ "IS_FIREBLOCK_QUBE.DisplayName", "FIREBLOCK" },
				{ "IS_FIREBLOCK_QUBE.ToolTip", "?X???L???[?u    11" },
				{ "IS_GOAL_QUBE.DisplayName", "GOAL" },
				{ "IS_GOAL_QUBE.ToolTip", "?v???C???[              20" },
				{ "IS_GROUND_QUBE.DisplayName", "GROUNDE" },
				{ "IS_GROUND_QUBE.ToolTip", "?\xc7\x83L???[?u               1" },
				{ "IS_ICE_QUBE.DisplayName", "ICE" },
				{ "IS_ICE_QUBE.ToolTip", "???L???[?u              2" },
				{ "IS_ICICLE_QUBE.DisplayName", "ICICLE_QUBE" },
				{ "IS_ICICLE_QUBE.ToolTip", "???L???[?u              10" },
				{ "IS_KEY_BLOCK.DisplayName", "KEY" },
				{ "IS_KEY_BLOCK.ToolTip", "?G?????L???[?u 15" },
				{ "IS_KEYICEBLOCK.DisplayName", "KEYICEBLOCK" },
				{ "IS_KEYICEBLOCK.ToolTip", "?h?A?L???[?u    17" },
				{ "IS_MISSING_GIMMICK19.DisplayName", "19" },
				{ "IS_MISSING_GIMMICK19.ToolTip", "???h?A                  18" },
				{ "IS_MISSING_QUBE4.DisplayName", "4" },
				{ "IS_MISSING_QUBE4.ToolTip", "?X?L???[?u              3" },
				{ "IS_MISSING_QUBE5.DisplayName", "5" },
				{ "IS_MISSING_QUBE6.DisplayName", "6" },
				{ "IS_MISSING_QUBE7.DisplayName", "7" },
				{ "IS_MISSING_QUBE8.DisplayName", "8" },
				{ "IS_MISSING_QUBE9.DisplayName", "9" },
				{ "IS_NONE.DisplayName", "NONE" },
				{ "IS_NUM.ToolTip", "?S?[???L???[?u  21" },
				{ "IS_PLAYER.DisplayName", "PLAYER" },
				{ "IS_WALL_QUBE.DisplayName", "WALL" },
				{ "IS_WALL_QUBE.ToolTip", "????                    0" },
				{ "IS_WATER_QUBE.DisplayName", "WATER" },
				{ "IS_WATERFALL_QUBE.DisplayName", "WATERFALL" },
				{ "IS_WATERFALL_QUBE.ToolTip", "???L???[?u              12" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "LoadCsvMap.h" },
				{ "ToolTip", "?I?u?W?F?N?g?\xcc\x8e???" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Frezze,
				nullptr,
				"ObjectType",
				"ObjectType",
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
	void ALoadCsvMap::StaticRegisterNativesALoadCsvMap()
	{
		UClass* Class = ALoadCsvMap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCsv", &ALoadCsvMap::execGetCsv },
			{ "GetCsvData", &ALoadCsvMap::execGetCsvData },
			{ "GetRow", &ALoadCsvMap::execGetRow },
			{ "LoadCsvData", &ALoadCsvMap::execLoadCsvData },
			{ "ToObjectType", &ALoadCsvMap::execToObjectType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALoadCsvMap_GetCsv_Statics
	{
		struct LoadCsvMap_eventGetCsv_Parms
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALoadCsvMap_GetCsv_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadCsvMap_eventGetCsv_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALoadCsvMap_GetCsv_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALoadCsvMap_GetCsv_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALoadCsvMap_GetCsv_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALoadCsvMap_GetCsv_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALoadCsvMap_GetCsv_Statics::Function_MetaDataParams[] = {
		{ "Category", "CsvReader" },
		{ "ModuleRelativePath", "LoadCsvMap.h" },
		{ "ToolTip", "/CSV?f?[?^?\xcc\x83L?[???\xe6\x93\xbe?????\xd6\x90?\nUFUNCTION(BlueprintCallable, Category = \"CsvReader\")\n       TArray<FString> GetCsvDataByKey(FString key);\n?\xc7\x82\xdd\x8d?????CSV???\xd4\x82??\xd6\x90?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALoadCsvMap_GetCsv_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALoadCsvMap, nullptr, "GetCsv", sizeof(LoadCsvMap_eventGetCsv_Parms), Z_Construct_UFunction_ALoadCsvMap_GetCsv_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALoadCsvMap_GetCsv_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALoadCsvMap_GetCsv_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALoadCsvMap_GetCsv_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALoadCsvMap_GetCsv()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALoadCsvMap_GetCsv_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALoadCsvMap_GetCsvData_Statics
	{
		struct LoadCsvMap_eventGetCsvData_Parms
		{
			int32 i;
			int32 j;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_j;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_i;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALoadCsvMap_GetCsvData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadCsvMap_eventGetCsvData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ALoadCsvMap_GetCsvData_Statics::NewProp_j = { "j", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadCsvMap_eventGetCsvData_Parms, j), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ALoadCsvMap_GetCsvData_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadCsvMap_eventGetCsvData_Parms, i), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALoadCsvMap_GetCsvData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALoadCsvMap_GetCsvData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALoadCsvMap_GetCsvData_Statics::NewProp_j,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALoadCsvMap_GetCsvData_Statics::NewProp_i,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALoadCsvMap_GetCsvData_Statics::Function_MetaDataParams[] = {
		{ "Category", "CsvReader" },
		{ "ModuleRelativePath", "LoadCsvMap.h" },
		{ "ToolTip", "?n???\xea\x82\xbd?l?\xcc\x94z?????\xe6\x93\xbe?????\xd6\x90?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALoadCsvMap_GetCsvData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALoadCsvMap, nullptr, "GetCsvData", sizeof(LoadCsvMap_eventGetCsvData_Parms), Z_Construct_UFunction_ALoadCsvMap_GetCsvData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALoadCsvMap_GetCsvData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALoadCsvMap_GetCsvData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALoadCsvMap_GetCsvData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALoadCsvMap_GetCsvData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALoadCsvMap_GetCsvData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALoadCsvMap_GetRow_Statics
	{
		struct LoadCsvMap_eventGetRow_Parms
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALoadCsvMap_GetRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadCsvMap_eventGetRow_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALoadCsvMap_GetRow_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALoadCsvMap_GetRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALoadCsvMap_GetRow_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALoadCsvMap_GetRow_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALoadCsvMap_GetRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "CsvReader" },
		{ "ModuleRelativePath", "LoadCsvMap.h" },
		{ "ToolTip", "int?\xc5\x93n???\xea\x82\xbd?l??ObjectType?\xc9\x95\xcf\x8a??????\xd6\x90?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALoadCsvMap_GetRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALoadCsvMap, nullptr, "GetRow", sizeof(LoadCsvMap_eventGetRow_Parms), Z_Construct_UFunction_ALoadCsvMap_GetRow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALoadCsvMap_GetRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALoadCsvMap_GetRow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALoadCsvMap_GetRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALoadCsvMap_GetRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALoadCsvMap_GetRow_Statics::FuncParams);
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
	struct Z_Construct_UFunction_ALoadCsvMap_ToObjectType_Statics
	{
		struct LoadCsvMap_eventToObjectType_Parms
		{
			int32 num;
			ObjectType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_num;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ALoadCsvMap_ToObjectType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadCsvMap_eventToObjectType_Parms, ReturnValue), Z_Construct_UEnum_Frezze_ObjectType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ALoadCsvMap_ToObjectType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ALoadCsvMap_ToObjectType_Statics::NewProp_num = { "num", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoadCsvMap_eventToObjectType_Parms, num), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALoadCsvMap_ToObjectType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALoadCsvMap_ToObjectType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALoadCsvMap_ToObjectType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALoadCsvMap_ToObjectType_Statics::NewProp_num,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALoadCsvMap_ToObjectType_Statics::Function_MetaDataParams[] = {
		{ "Category", "CsvReader" },
		{ "ModuleRelativePath", "LoadCsvMap.h" },
		{ "ToolTip", "int?\xc5\x93n???\xea\x82\xbd?l??ObjectType?\xc9\x95\xcf\x8a??????\xd6\x90?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALoadCsvMap_ToObjectType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALoadCsvMap, nullptr, "ToObjectType", sizeof(LoadCsvMap_eventToObjectType_Parms), Z_Construct_UFunction_ALoadCsvMap_ToObjectType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALoadCsvMap_ToObjectType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALoadCsvMap_ToObjectType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALoadCsvMap_ToObjectType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALoadCsvMap_ToObjectType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALoadCsvMap_ToObjectType_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_ALoadCsvMap_GetCsv, "GetCsv" }, // 2713545287
		{ &Z_Construct_UFunction_ALoadCsvMap_GetCsvData, "GetCsvData" }, // 1811520956
		{ &Z_Construct_UFunction_ALoadCsvMap_GetRow, "GetRow" }, // 962066189
		{ &Z_Construct_UFunction_ALoadCsvMap_LoadCsvData, "LoadCsvData" }, // 774833531
		{ &Z_Construct_UFunction_ALoadCsvMap_ToObjectType, "ToObjectType" }, // 2998753289
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
	IMPLEMENT_CLASS(ALoadCsvMap, 640325050);
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
