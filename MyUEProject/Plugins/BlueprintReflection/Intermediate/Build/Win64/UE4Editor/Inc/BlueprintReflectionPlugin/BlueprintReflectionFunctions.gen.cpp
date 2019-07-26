// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintReflectionPlugin/Classes/BlueprintReflectionFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintReflectionFunctions() {}
// Cross Module References
	BLUEPRINTREFLECTIONPLUGIN_API UClass* Z_Construct_UClass_UBlueprintReflectionFunctions_NoRegister();
	BLUEPRINTREFLECTIONPLUGIN_API UClass* Z_Construct_UClass_UBlueprintReflectionFunctions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BlueprintReflectionPlugin();
	BLUEPRINTREFLECTIONPLUGIN_API UFunction* Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BLUEPRINTREFLECTIONPLUGIN_API UFunction* Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClassName();
	BLUEPRINTREFLECTIONPLUGIN_API UFunction* Z_Construct_UFunction_UBlueprintReflectionFunctions_GetClassByName();
// End Cross Module References
	void UBlueprintReflectionFunctions::StaticRegisterNativesUBlueprintReflectionFunctions()
	{
		UClass* Class = UBlueprintReflectionFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstructObjectFromClass", &UBlueprintReflectionFunctions::execConstructObjectFromClass },
			{ "ConstructObjectFromClassName", &UBlueprintReflectionFunctions::execConstructObjectFromClassName },
			{ "GetClassByName", &UBlueprintReflectionFunctions::execGetClassByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClass_Statics
	{
		struct BlueprintReflectionFunctions_eventConstructObjectFromClass_Parms
		{
			TSubclassOf<UObject>  Class;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintReflectionFunctions_eventConstructObjectFromClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintReflectionFunctions_eventConstructObjectFromClass_Parms, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClass_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reflection" },
		{ "Keywords", "new create object" },
		{ "ModuleRelativePath", "Classes/BlueprintReflectionFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintReflectionFunctions, nullptr, "ConstructObjectFromClass", sizeof(BlueprintReflectionFunctions_eventConstructObjectFromClass_Parms), Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClassName_Statics
	{
		struct BlueprintReflectionFunctions_eventConstructObjectFromClassName_Parms
		{
			FString Name;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClassName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintReflectionFunctions_eventConstructObjectFromClassName_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClassName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintReflectionFunctions_eventConstructObjectFromClassName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClassName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClassName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClassName_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClassName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reflection" },
		{ "Keywords", "new create object class name" },
		{ "ModuleRelativePath", "Classes/BlueprintReflectionFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClassName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintReflectionFunctions, nullptr, "ConstructObjectFromClassName", sizeof(BlueprintReflectionFunctions_eventConstructObjectFromClassName_Parms), Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClassName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClassName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClassName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClassName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClassName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClassName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintReflectionFunctions_GetClassByName_Statics
	{
		struct BlueprintReflectionFunctions_eventGetClassByName_Parms
		{
			FString Name;
			UClass* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlueprintReflectionFunctions_GetClassByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintReflectionFunctions_eventGetClassByName_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintReflectionFunctions_GetClassByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintReflectionFunctions_eventGetClassByName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintReflectionFunctions_GetClassByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintReflectionFunctions_GetClassByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintReflectionFunctions_GetClassByName_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintReflectionFunctions_GetClassByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reflection" },
		{ "Keywords", "class name" },
		{ "ModuleRelativePath", "Classes/BlueprintReflectionFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintReflectionFunctions_GetClassByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintReflectionFunctions, nullptr, "GetClassByName", sizeof(BlueprintReflectionFunctions_eventGetClassByName_Parms), Z_Construct_UFunction_UBlueprintReflectionFunctions_GetClassByName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintReflectionFunctions_GetClassByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintReflectionFunctions_GetClassByName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintReflectionFunctions_GetClassByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintReflectionFunctions_GetClassByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintReflectionFunctions_GetClassByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlueprintReflectionFunctions_NoRegister()
	{
		return UBlueprintReflectionFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintReflectionFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintReflectionFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintReflectionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintReflectionFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClass, "ConstructObjectFromClass" }, // 3500951620
		{ &Z_Construct_UFunction_UBlueprintReflectionFunctions_ConstructObjectFromClassName, "ConstructObjectFromClassName" }, // 2667472834
		{ &Z_Construct_UFunction_UBlueprintReflectionFunctions_GetClassByName, "GetClassByName" }, // 227832588
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintReflectionFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintReflectionFunctions.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/BlueprintReflectionFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintReflectionFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintReflectionFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintReflectionFunctions_Statics::ClassParams = {
		&UBlueprintReflectionFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintReflectionFunctions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintReflectionFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintReflectionFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintReflectionFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintReflectionFunctions, 1610071690);
	template<> BLUEPRINTREFLECTIONPLUGIN_API UClass* StaticClass<UBlueprintReflectionFunctions>()
	{
		return UBlueprintReflectionFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintReflectionFunctions(Z_Construct_UClass_UBlueprintReflectionFunctions, &UBlueprintReflectionFunctions::StaticClass, TEXT("/Script/BlueprintReflectionPlugin"), TEXT("UBlueprintReflectionFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintReflectionFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
