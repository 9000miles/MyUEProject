// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAVEGAMEPLUGIN_SaveGameInstance_generated_h
#error "SaveGameInstance.generated.h already included, missing '#pragma once' in SaveGameInstance.h"
#endif
#define SAVEGAMEPLUGIN_SaveGameInstance_generated_h

#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameInstance_h_16_RPC_WRAPPERS
#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveGameInstance(); \
	friend struct Z_Construct_UClass_USaveGameInstance_Statics; \
public: \
	DECLARE_CLASS(USaveGameInstance, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveGamePlugin"), NO_API) \
	DECLARE_SERIALIZER(USaveGameInstance)


#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameInstance_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSaveGameInstance(); \
	friend struct Z_Construct_UClass_USaveGameInstance_Statics; \
public: \
	DECLARE_CLASS(USaveGameInstance, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveGamePlugin"), NO_API) \
	DECLARE_SERIALIZER(USaveGameInstance)


#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameInstance_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGameInstance(USaveGameInstance&&); \
	NO_API USaveGameInstance(const USaveGameInstance&); \
public:


#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGameInstance(USaveGameInstance&&); \
	NO_API USaveGameInstance(const USaveGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGameInstance)


#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameInstance_h_16_PRIVATE_PROPERTY_OFFSET
#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameInstance_h_13_PROLOG
#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameInstance_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameInstance_h_16_RPC_WRAPPERS \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameInstance_h_16_INCLASS \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameInstance_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameInstance_h_16_INCLASS_NO_PURE_DECLS \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAVEGAMEPLUGIN_API UClass* StaticClass<class USaveGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
