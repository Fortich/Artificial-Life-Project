// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LSYSTEMS_WorldManager_generated_h
#error "WorldManager.generated.h already included, missing '#pragma once' in WorldManager.h"
#endif
#define LSYSTEMS_WorldManager_generated_h

#define LSystems_Source_LSystems_WorldManager_h_12_SPARSE_DATA
#define LSystems_Source_LSystems_WorldManager_h_12_RPC_WRAPPERS
#define LSystems_Source_LSystems_WorldManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define LSystems_Source_LSystems_WorldManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldManager(); \
	friend struct Z_Construct_UClass_AWorldManager_Statics; \
public: \
	DECLARE_CLASS(AWorldManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LSystems"), NO_API) \
	DECLARE_SERIALIZER(AWorldManager)


#define LSystems_Source_LSystems_WorldManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAWorldManager(); \
	friend struct Z_Construct_UClass_AWorldManager_Statics; \
public: \
	DECLARE_CLASS(AWorldManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LSystems"), NO_API) \
	DECLARE_SERIALIZER(AWorldManager)


#define LSystems_Source_LSystems_WorldManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldManager(AWorldManager&&); \
	NO_API AWorldManager(const AWorldManager&); \
public:


#define LSystems_Source_LSystems_WorldManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldManager(AWorldManager&&); \
	NO_API AWorldManager(const AWorldManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorldManager)


#define LSystems_Source_LSystems_WorldManager_h_12_PRIVATE_PROPERTY_OFFSET
#define LSystems_Source_LSystems_WorldManager_h_9_PROLOG
#define LSystems_Source_LSystems_WorldManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LSystems_Source_LSystems_WorldManager_h_12_PRIVATE_PROPERTY_OFFSET \
	LSystems_Source_LSystems_WorldManager_h_12_SPARSE_DATA \
	LSystems_Source_LSystems_WorldManager_h_12_RPC_WRAPPERS \
	LSystems_Source_LSystems_WorldManager_h_12_INCLASS \
	LSystems_Source_LSystems_WorldManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LSystems_Source_LSystems_WorldManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LSystems_Source_LSystems_WorldManager_h_12_PRIVATE_PROPERTY_OFFSET \
	LSystems_Source_LSystems_WorldManager_h_12_SPARSE_DATA \
	LSystems_Source_LSystems_WorldManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	LSystems_Source_LSystems_WorldManager_h_12_INCLASS_NO_PURE_DECLS \
	LSystems_Source_LSystems_WorldManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LSYSTEMS_API UClass* StaticClass<class AWorldManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LSystems_Source_LSystems_WorldManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
