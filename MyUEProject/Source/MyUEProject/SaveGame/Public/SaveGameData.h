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
		Int8,
		Int16,
		Int32,
		Int64,
		Float,
		Double,
		Char,
		String,
		Vector2D,
		Vector3,
		Quaternion,
		Transform,
		Color,
		Guid,
		Timespan,
	};
}

/**
 *
 */
UCLASS()
class MYUEPROJECT_API USaveGameData : public UObject
{
	GENERATED_BODY()

public:
	USaveGameData();

	USaveGameData(FString DataName, ESaveGameDataType::Type DataType, FString ValueString, FString DataGroup);

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		FString DataName;

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		TEnumAsByte<ESaveGameDataType::Type> DataType;

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		FString DataGroup;

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		FString ValueString;

public:
	UFUNCTION(BlueprintCallable, Category = "SaveGameData")
		FString DataToString() const;

	virtual FString ToString();
};
