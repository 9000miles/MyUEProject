// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyUEProject_init() {}
	MYUEPROJECT_API UFunction* Z_Construct_UDelegateFunction_MyUEProject_InputAxisValueDelegate_Com__DelegateSignature();
	MYUEPROJECT_API UFunction* Z_Construct_UDelegateFunction_MyUEProject_InputAxisValueDelegate_Con__DelegateSignature();
	MYUEPROJECT_API UFunction* Z_Construct_UDelegateFunction_MyUEProject_OnSaveStateChange__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MyUEProject()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MyUEProject_InputAxisValueDelegate_Com__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MyUEProject_InputAxisValueDelegate_Con__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MyUEProject_OnSaveStateChange__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyUEProject",
				SingletonFuncArray,
				ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8D51B029,
				0xEF6754AF,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
