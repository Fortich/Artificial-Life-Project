// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LSYSTEMS_plant_generated_h
#error "plant.generated.h already included, missing '#pragma once' in plant.h"
#endif
#define LSYSTEMS_plant_generated_h

#define LSystems_Source_LSystems_plant_h_15_SPARSE_DATA
#define LSystems_Source_LSystems_plant_h_15_RPC_WRAPPERS
#define LSystems_Source_LSystems_plant_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define LSystems_Source_LSystems_plant_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAplant(); \
	friend struct Z_Construct_UClass_Aplant_Statics; \
public: \
	DECLARE_CLASS(Aplant, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LSystems"), NO_API) \
	DECLARE_SERIALIZER(Aplant)


#define LSystems_Source_LSystems_plant_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAplant(); \
	friend struct Z_Construct_UClass_Aplant_Statics; \
public: \
	DECLARE_CLASS(Aplant, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LSystems"), NO_API) \
	DECLARE_SERIALIZER(Aplant)


#define LSystems_Source_LSystems_plant_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Aplant(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Aplant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aplant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aplant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aplant(Aplant&&); \
	NO_API Aplant(const Aplant&); \
public:


#define LSystems_Source_LSystems_plant_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aplant(Aplant&&); \
	NO_API Aplant(const Aplant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aplant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aplant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Aplant)


#define LSystems_Source_LSystems_plant_h_15_PRIVATE_PROPERTY_OFFSET
#define LSystems_Source_LSystems_plant_h_12_PROLOG
#define LSystems_Source_LSystems_plant_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LSystems_Source_LSystems_plant_h_15_PRIVATE_PROPERTY_OFFSET \
	LSystems_Source_LSystems_plant_h_15_SPARSE_DATA \
	LSystems_Source_LSystems_plant_h_15_RPC_WRAPPERS \
	LSystems_Source_LSystems_plant_h_15_INCLASS \
	LSystems_Source_LSystems_plant_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LSystems_Source_LSystems_plant_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LSystems_Source_LSystems_plant_h_15_PRIVATE_PROPERTY_OFFSET \
	LSystems_Source_LSystems_plant_h_15_SPARSE_DATA \
	LSystems_Source_LSystems_plant_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	LSystems_Source_LSystems_plant_h_15_INCLASS_NO_PURE_DECLS \
	LSystems_Source_LSystems_plant_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LSYSTEMS_API UClass* StaticClass<class Aplant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LSystems_Source_LSystems_plant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
