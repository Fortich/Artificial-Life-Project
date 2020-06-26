// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LSystems/PredatorPredator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePredatorPredator() {}
// Cross Module References
	LSYSTEMS_API UClass* Z_Construct_UClass_APredatorPredator_NoRegister();
	LSYSTEMS_API UClass* Z_Construct_UClass_APredatorPredator();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_LSystems();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void APredatorPredator::StaticRegisterNativesAPredatorPredator()
	{
	}
	UClass* Z_Construct_UClass_APredatorPredator_NoRegister()
	{
		return APredatorPredator::StaticClass();
	}
	struct Z_Construct_UClass_APredatorPredator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyBoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyBoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APredatorPredator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_LSystems,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APredatorPredator_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PredatorPredator.h" },
		{ "ModuleRelativePath", "PredatorPredator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APredatorPredator_Statics::NewProp_MyBoxComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PredatorPredator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APredatorPredator_Statics::NewProp_MyBoxComponent = { "MyBoxComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APredatorPredator, MyBoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APredatorPredator_Statics::NewProp_MyBoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APredatorPredator_Statics::NewProp_MyBoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APredatorPredator_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "PredatorPredator" },
		{ "ModuleRelativePath", "PredatorPredator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APredatorPredator_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APredatorPredator, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APredatorPredator_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APredatorPredator_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APredatorPredator_Statics::NewProp_MyMesh_MetaData[] = {
		{ "Category", "PredatorPredator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PredatorPredator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APredatorPredator_Statics::NewProp_MyMesh = { "MyMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APredatorPredator, MyMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APredatorPredator_Statics::NewProp_MyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APredatorPredator_Statics::NewProp_MyMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APredatorPredator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APredatorPredator_Statics::NewProp_MyBoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APredatorPredator_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APredatorPredator_Statics::NewProp_MyMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APredatorPredator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APredatorPredator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APredatorPredator_Statics::ClassParams = {
		&APredatorPredator::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APredatorPredator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APredatorPredator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APredatorPredator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APredatorPredator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APredatorPredator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APredatorPredator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APredatorPredator, 2492885208);
	template<> LSYSTEMS_API UClass* StaticClass<APredatorPredator>()
	{
		return APredatorPredator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APredatorPredator(Z_Construct_UClass_APredatorPredator, &APredatorPredator::StaticClass, TEXT("/Script/LSystems"), TEXT("APredatorPredator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APredatorPredator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
