// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LSystems/Predator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePredator() {}
// Cross Module References
	LSYSTEMS_API UClass* Z_Construct_UClass_APredator_NoRegister();
	LSYSTEMS_API UClass* Z_Construct_UClass_APredator();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_LSystems();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void APredator::StaticRegisterNativesAPredator()
	{
	}
	UClass* Z_Construct_UClass_APredator_NoRegister()
	{
		return APredator::StaticClass();
	}
	struct Z_Construct_UClass_APredator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APredator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_LSystems,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APredator_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Predator.h" },
		{ "ModuleRelativePath", "Predator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APredator_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Predator" },
		{ "ModuleRelativePath", "Predator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APredator_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APredator, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APredator_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APredator_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APredator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APredator_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APredator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APredator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APredator_Statics::ClassParams = {
		&APredator::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APredator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APredator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APredator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APredator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APredator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APredator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APredator, 1723752005);
	template<> LSYSTEMS_API UClass* StaticClass<APredator>()
	{
		return APredator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APredator(Z_Construct_UClass_APredator, &APredator::StaticClass, TEXT("/Script/LSystems"), TEXT("APredator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APredator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
