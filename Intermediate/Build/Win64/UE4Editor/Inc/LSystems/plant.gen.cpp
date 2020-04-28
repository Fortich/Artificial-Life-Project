// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LSystems/plant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeplant() {}
// Cross Module References
	LSYSTEMS_API UClass* Z_Construct_UClass_Aplant_NoRegister();
	LSYSTEMS_API UClass* Z_Construct_UClass_Aplant();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LSystems();
// End Cross Module References
	void Aplant::StaticRegisterNativesAplant()
	{
	}
	UClass* Z_Construct_UClass_Aplant_NoRegister()
	{
		return Aplant::StaticClass();
	}
	struct Z_Construct_UClass_Aplant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aplant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LSystems,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aplant_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "plant.h" },
		{ "ModuleRelativePath", "plant.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aplant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aplant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aplant_Statics::ClassParams = {
		&Aplant::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_Aplant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aplant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aplant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aplant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aplant, 2681440895);
	template<> LSYSTEMS_API UClass* StaticClass<Aplant>()
	{
		return Aplant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aplant(Z_Construct_UClass_Aplant, &Aplant::StaticClass, TEXT("/Script/LSystems"), TEXT("Aplant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aplant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
