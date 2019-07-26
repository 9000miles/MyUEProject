// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSavePlugin/Classes/GameSaveBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSaveBPLibrary() {}
// Cross Module References
	GAMESAVEPLUGIN_API UClass* Z_Construct_UClass_UGameSaveBPLibrary_NoRegister();
	GAMESAVEPLUGIN_API UClass* Z_Construct_UClass_UGameSaveBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GameSavePlugin();
	GAMESAVEPLUGIN_API UFunction* Z_Construct_UFunction_UGameSaveBPLibrary_GetSaveDataManager();
	GAMESAVEPLUGIN_API UClass* Z_Construct_UClass_USaveDataManager_NoRegister();
// End Cross Module References
	void UGameSaveBPLibrary::StaticRegisterNativesUGameSaveBPLibrary()
	{
		UClass* Class = UGameSaveBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSaveDataManager", &UGameSaveBPLibrary::execGetSaveDataManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameSaveBPLibrary_GetSaveDataManager_Statics
	{
		struct GameSaveBPLibrary_eventGetSaveDataManager_Parms
		{
			USaveDataManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameSaveBPLibrary_GetSaveDataManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSaveBPLibrary_eventGetSaveDataManager_Parms, ReturnValue), Z_Construct_UClass_USaveDataManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveBPLibrary_GetSaveDataManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveBPLibrary_GetSaveDataManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSaveBPLibrary_GetSaveDataManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameSaveLibrary" },
		{ "ModuleRelativePath", "Classes/GameSaveBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveBPLibrary_GetSaveDataManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveBPLibrary, nullptr, "GetSaveDataManager", sizeof(GameSaveBPLibrary_eventGetSaveDataManager_Parms), Z_Construct_UFunction_UGameSaveBPLibrary_GetSaveDataManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameSaveBPLibrary_GetSaveDataManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSaveBPLibrary_GetSaveDataManager_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSaveBPLibrary_GetSaveDataManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSaveBPLibrary_GetSaveDataManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSaveBPLibrary_GetSaveDataManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameSaveBPLibrary_NoRegister()
	{
		return UGameSaveBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGameSaveBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSaveBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSavePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameSaveBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameSaveBPLibrary_GetSaveDataManager, "GetSaveDataManager" }, // 12080326
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSaveBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameSaveBPLibrary.h" },
		{ "ModuleRelativePath", "Classes/GameSaveBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSaveBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSaveBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameSaveBPLibrary_Statics::ClassParams = {
		&UGameSaveBPLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSaveBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameSaveBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSaveBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameSaveBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameSaveBPLibrary, 2568929034);
	template<> GAMESAVEPLUGIN_API UClass* StaticClass<UGameSaveBPLibrary>()
	{
		return UGameSaveBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameSaveBPLibrary(Z_Construct_UClass_UGameSaveBPLibrary, &UGameSaveBPLibrary::StaticClass, TEXT("/Script/GameSavePlugin"), TEXT("UGameSaveBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSaveBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
