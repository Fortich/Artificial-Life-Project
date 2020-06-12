// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LSYSTEMS_PredatorPawn_generated_h
#error "PredatorPawn.generated.h already included, missing '#pragma once' in PredatorPawn.h"
#endif
#define LSYSTEMS_PredatorPawn_generated_h

#define LSystems_Source_LSystems_PredatorPawn_h_14_SPARSE_DATA
#define LSystems_Source_LSystems_PredatorPawn_h_14_RPC_WRAPPERS
#define LSystems_Source_LSystems_PredatorPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define LSystems_Source_LSystems_PredatorPawn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPredatorPawn(); \
	friend struct Z_Construct_UClass_APredatorPawn_Statics; \
public: \
	DECLARE_CLASS(APredatorPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LSystems"), NO_API) \
	DECLARE_SERIALIZER(APredatorPawn)


#define LSystems_Source_LSystems_PredatorPawn_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPredatorPawn(); \
	friend struct Z_Construct_UClass_APredatorPawn_Statics; \
public: \
	DECLARE_CLASS(APredatorPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LSystems"), NO_API) \
	DECLARE_SERIALIZER(APredatorPawn)


#define LSystems_Source_LSystems_PredatorPawn_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APredatorPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APredatorPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APredatorPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APredatorPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APredatorPawn(APredatorPawn&&); \
	NO_API APredatorPawn(const APredatorPawn&); \
public:


#define LSystems_Source_LSystems_PredatorPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APredatorPawn(APredatorPawn&&); \
	NO_API APredatorPawn(const APredatorPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APredatorPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APredatorPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APredatorPawn)


#define LSystems_Source_LSystems_PredatorPawn_h_14_PRIVATE_PROPERTY_OFFSET
#define LSystems_Source_LSystems_PredatorPawn_h_11_PROLOG
#define LSystems_Source_LSystems_PredatorPawn_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LSystems_Source_LSystems_PredatorPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	LSystems_Source_LSystems_PredatorPawn_h_14_SPARSE_DATA \
	LSystems_Source_LSystems_PredatorPawn_h_14_RPC_WRAPPERS \
	LSystems_Source_LSystems_PredatorPawn_h_14_INCLASS \
	LSystems_Source_LSystems_PredatorPawn_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LSystems_Source_LSystems_PredatorPawn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LSystems_Source_LSystems_PredatorPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	LSystems_Source_LSystems_PredatorPawn_h_14_SPARSE_DATA \
	LSystems_Source_LSystems_PredatorPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	LSystems_Source_LSystems_PredatorPawn_h_14_INCLASS_NO_PURE_DECLS \
	LSystems_Source_LSystems_PredatorPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LSYSTEMS_API UClass* StaticClass<class APredatorPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LSystems_Source_LSystems_PredatorPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
