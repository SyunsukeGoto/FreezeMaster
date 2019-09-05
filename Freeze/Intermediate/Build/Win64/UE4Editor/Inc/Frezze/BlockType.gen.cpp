// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Frezze/BlockType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockType() {}
// Cross Module References
	FREZZE_API UClass* Z_Construct_UClass_ABlockType_NoRegister();
	FREZZE_API UClass* Z_Construct_UClass_ABlockType();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Frezze();
// End Cross Module References
	void ABlockType::StaticRegisterNativesABlockType()
	{
	}
	UClass* Z_Construct_UClass_ABlockType_NoRegister()
	{
		return ABlockType::StaticClass();
	}
	struct Z_Construct_UClass_ABlockType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlockType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Frezze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockType_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlockType.h" },
		{ "ModuleRelativePath", "BlockType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlockType_Statics::ClassParams = {
		&ABlockType::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABlockType_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABlockType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlockType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlockType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlockType, 1404039927);
	template<> FREZZE_API UClass* StaticClass<ABlockType>()
	{
		return ABlockType::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlockType(Z_Construct_UClass_ABlockType, &ABlockType::StaticClass, TEXT("/Script/Frezze"), TEXT("ABlockType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
