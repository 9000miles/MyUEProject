// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef BLUEPRINTREFLECTIONPLUGIN_BlueprintReflectionFunctions_generated_h
#error "BlueprintReflectionFunctions.generated.h already included, missing '#pragma once' in BlueprintReflectionFunctions.h"
#endif
#define BLUEPRINTREFLECTIONPLUGIN_BlueprintReflectionFunctions_generated_h

#define AboutCG_Plugins_BlueprintReflection_Source_BlueprintReflectionPlugin_Classes_BlueprintReflectionFunctions_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConstructObjectFromClassName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UBlueprintReflectionFunctions::ConstructObjectFromClassName(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructObjectFromClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UBlueprintReflectionFunctions::ConstructObjectFromClass(Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClassByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=UBlueprintReflectionFunctions::GetClassByName(Z_Param_Name); \
		P_NATIVE_END; \
	}


#define AboutCG_Plugins_BlueprintReflection_Source_BlueprintReflectionPlugin_Classes_BlueprintReflectionFunctions_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConstructObjectFromClassName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UBlueprintReflectionFunctions::ConstructObjectFromClassName(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructObjectFromClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UBlueprintReflectionFunctions::ConstructObjectFromClass(Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClassByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=UBlueprintReflectionFunctions::GetClassByName(Z_Param_Name); \
		P_NATIVE_END; \
	}


#define AboutCG_Plugins_BlueprintReflection_Source_BlueprintReflectionPlugin_Classes_BlueprintReflectionFunctions_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintReflectionFunctions(); \
	friend struct Z_Construct_UClass_UBlueprintReflectionFunctions_Statics; \
public: \
	DECLARE_CLASS(UBlueprintReflectionFunctions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintReflectionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintReflectionFunctions)


#define AboutCG_Plugins_BlueprintReflection_Source_BlueprintReflectionPlugin_Classes_BlueprintReflectionFunctions_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintReflectionFunctions(); \
	friend struct Z_Construct_UClass_UBlueprintReflectionFunctions_Statics; \
public: \
	DECLARE_CLASS(UBlueprintReflectionFunctions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintReflectionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintReflectionFunctions)


#define AboutCG_Plugins_BlueprintReflection_Source_BlueprintReflectionPlugin_Classes_BlueprintReflectionFunctions_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintReflectionFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintReflectionFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintReflectionFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintReflectionFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintReflectionFunctions(UBlueprintReflectionFunctions&&); \
	NO_API UBlueprintReflectionFunctions(const UBlueprintReflectionFunctions&); \
public:


#define AboutCG_Plugins_BlueprintReflection_Source_BlueprintReflectionPlugin_Classes_BlueprintReflectionFunctions_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintReflectionFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintReflectionFunctions(UBlueprintReflectionFunctions&&); \
	NO_API UBlueprintReflectionFunctions(const UBlueprintReflectionFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintReflectionFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintReflectionFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintReflectionFunctions)


#define AboutCG_Plugins_BlueprintReflection_Source_BlueprintReflectionPlugin_Classes_BlueprintReflectionFunctions_h_15_PRIVATE_PROPERTY_OFFSET
#define AboutCG_Plugins_BlueprintReflection_Source_BlueprintReflectionPlugin_Classes_BlueprintReflectionFunctions_h_13_PROLOG
#define AboutCG_Plugins_BlueprintReflection_Source_BlueprintReflectionPlugin_Classes_BlueprintReflectionFunctions_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AboutCG_Plugins_BlueprintReflection_Source_BlueprintReflectionPlugin_Classes_BlueprintReflectionFunctions_h_15_PRIVATE_PROPERTY_OFFSET \
	AboutCG_Plugins_BlueprintReflection_Source_BlueprintReflectionPlugin_Classes_BlueprintReflectionFunctions_h_15_RPC_WRAPPERS \
	AboutCG_Plugins_BlueprintReflection_Source_BlueprintReflectionPlugin_Classes_BlueprintReflectionFunctions_h_15_INCLASS \
	AboutCG_Plugins_BlueprintReflection_Source_BlueprintReflectionPlugin_Classes_BlueprintReflectionFunctions_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AboutCG_Plugins_BlueprintReflection_Source_BlueprintReflectionPlugin_Classes_BlueprintReflectionFunctions_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AboutCG_Plugins_BlueprintReflection_Source_BlueprintReflectionPlugin_Classes_BlueprintReflectionFunctions_h_15_PRIVATE_PROPERTY_OFFSET \
	AboutCG_Plugins_BlueprintReflection_Source_BlueprintReflectionPlugin_Classes_BlueprintReflectionFunctions_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AboutCG_Plugins_BlueprintReflection_Source_BlueprintReflectionPlugin_Classes_BlueprintReflectionFunctions_h_15_INCLASS_NO_PURE_DECLS \
	AboutCG_Plugins_BlueprintReflection_Source_BlueprintReflectionPlugin_Classes_BlueprintReflectionFunctions_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTREFLECTIONPLUGIN_API UClass* StaticClass<class UBlueprintReflectionFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AboutCG_Plugins_BlueprintReflection_Source_BlueprintReflectionPlugin_Classes_BlueprintReflectionFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
