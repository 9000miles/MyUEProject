// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SaveGameData.generated.h"

UENUM(BlueprintType)
namespace ESaveGameDataType
{
	enum Type
	{
		None,

		Bool,
		Byte,
		Int32,
		Float,
		String,
		Vector2,
		Vector3,
		Vector4,
		DateTime,
	};
}

UENUM(BlueprintType)
namespace ESaveGameDataSaveStateType
{
	enum Type
	{
		None,

		Saved,
		NotSaved,
		Selected,
	};
}

USTRUCT(BlueprintType)
struct FSaveDataStruct
{
	GENERATED_USTRUCT_BODY()
		UPROPERTY(BlueprintReadOnly, Category = "Save Data Struct")
		bool var_Bool;
	UPROPERTY(BlueprintReadOnly, Category = "Save Data Struct")
		uint8 var_Byte;
	UPROPERTY(BlueprintReadOnly, Category = "Save Data Struct")
		int32 var_Int32;
	UPROPERTY(BlueprintReadOnly, Category = "Save Data Struct")
		float var_Float;
	UPROPERTY(BlueprintReadOnly, Category = "Save Data Struct")
		FString var_String;
	UPROPERTY(BlueprintReadOnly, Category = "Save Data Struct")
		FVector2D var_Vector2;
	UPROPERTY(BlueprintReadOnly, Category = "Save Data Struct")
		FVector var_Vector3;
	UPROPERTY(BlueprintReadOnly, Category = "Save Data Struct")
		FVector4 var_Vector4;
	UPROPERTY(BlueprintReadOnly, Category = "Save Data Struct")
		FDateTime var_DataTime;
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSaveStateChange, ESaveGameDataSaveStateType::Type, SaveStateType);
/**
 *
 */
UCLASS(BlueprintType)
class MYUEPROJECT_API USaveGameData : public UObject
{
	GENERATED_BODY()

public:
	USaveGameData();

	USaveGameData(FString DataName, ESaveGameDataType::Type DataType, ESaveGameDataSaveStateType::Type SaveStateType, FString ValueString, FString DataGroup);

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		FString DataName;

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		TEnumAsByte<ESaveGameDataType::Type> DataType;

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		TEnumAsByte<ESaveGameDataSaveStateType::Type> SaveStateType;

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		FString DataGroup;

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		FString ValueString;

	UPROPERTY(BlueprintAssignable, Category = "SaveGameData")
		FOnSaveStateChange OnSaveStateChenged;

public:
	UFUNCTION(BlueprintCallable, Category = "SaveGameData")
		FString DataToString() const;

	virtual FString ToString();
};
