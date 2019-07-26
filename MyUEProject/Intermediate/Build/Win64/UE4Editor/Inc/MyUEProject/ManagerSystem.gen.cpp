// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyUEProject/Public/ManagerSystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManagerSystem() {}
// Cross Module References
	MYUEPROJECT_API UClass* Z_Construct_UClass_UManagerSystem_NoRegister();
	MYUEPROJECT_API UClass* Z_Construct_UClass_UManagerSystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_MyUEProject();
	MYUEPROJECT_API UFunction* Z_Construct_UFunction_UManagerSystem_GetManagerSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UManagerSystem::StaticRegisterNativesUManagerSystem()
	{
		UClass* Class = UManagerSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetManagerSystem", &UManagerSystem::execGetManagerSystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManagerSystem_GetManagerSystem_Statics
	{
		struct ManagerSystem_eventGetManagerSystem_Parms
		{
			const UObject* ContextObject;
			UManagerSystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManagerSystem_GetManagerSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManagerSystem_eventGetManagerSystem_Parms, ReturnValue), Z_Construct_UClass_UManagerSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManagerSystem_GetManagerSystem_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManagerSystem_GetManagerSystem_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManagerSystem_eventGetManagerSystem_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UManagerSystem_GetManagerSystem_Statics::NewProp_ContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UManagerSystem_GetManagerSystem_Statics::NewProp_ContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManagerSystem_GetManagerSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManagerSystem_GetManagerSystem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManagerSystem_GetManagerSystem_Statics::NewProp_ContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManagerSystem_GetManagerSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "ManagerSystem" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use 'Get Manager System' instead" },
		{ "ModuleRelativePath", "Public/ManagerSystem.h" },
		{ "ToolTip", "Get the global manager system" },
		{ "WorldContext", "ContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManagerSystem_GetManagerSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManagerSystem, nullptr, "GetManagerSystem", sizeof(ManagerSystem_eventGetManagerSystem_Parms), Z_Construct_UFunction_UManagerSystem_GetManagerSystem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UManagerSystem_GetManagerSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManagerSystem_GetManagerSystem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UManagerSystem_GetManagerSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManagerSystem_GetManagerSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManagerSystem_GetManagerSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManagerSystem_NoRegister()
	{
		return UManagerSystem::StaticClass();
	}
	struct Z_Construct_UClass_UManagerSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManagerSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MyUEProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManagerSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManagerSystem_GetManagerSystem, "GetManagerSystem" }, // 3613269093
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManagerSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ManagerSystem.h" },
		{ "ModuleRelativePath", "Public/ManagerSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManagerSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManagerSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UManagerSystem_Statics::ClassParams = {
		&UManagerSystem::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_UManagerSystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UManagerSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManagerSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UManagerSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManagerSystem, 1870233245);
	template<> MYUEPROJECT_API UClass* StaticClass<UManagerSystem>()
	{
		return UManagerSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManagerSystem(Z_Construct_UClass_UManagerSystem, &UManagerSystem::StaticClass, TEXT("/Script/MyUEProject"), TEXT("UManagerSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManagerSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
