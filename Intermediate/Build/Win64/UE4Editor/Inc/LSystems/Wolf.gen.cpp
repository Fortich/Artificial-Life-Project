// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LSystems/Wolf.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWolf() {}
// Cross Module References
	LSYSTEMS_API UClass* Z_Construct_UClass_AWolf_NoRegister();
	LSYSTEMS_API UClass* Z_Construct_UClass_AWolf();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_LSystems();
// End Cross Module References
	void AWolf::StaticRegisterNativesAWolf()
	{
	}
	UClass* Z_Construct_UClass_AWolf_NoRegister()
	{
		return AWolf::StaticClass();
	}
	struct Z_Construct_UClass_AWolf_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWolf_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_LSystems,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWolf_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Wolf.h" },
		{ "ModuleRelativePath", "Wolf.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWolf_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWolf>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWolf_Statics::ClassParams = {
		&AWolf::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWolf_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWolf_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWolf()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWolf_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWolf, 3577674355);
	template<> LSYSTEMS_API UClass* StaticClass<AWolf>()
	{
		return AWolf::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWolf(Z_Construct_UClass_AWolf, &AWolf::StaticClass, TEXT("/Script/LSystems"), TEXT("AWolf"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWolf);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
