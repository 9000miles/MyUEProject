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
		String,
		Integer,
		Float,
		Bool,
		Vector,
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
	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		FString DataName;

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		TEnumAsByte<ESaveGameDataType::Type> DataType;

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		FString StringData;

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		int32 Int32Data;

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		float FloatData;

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		bool BoolData;

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		FVector VectorData;

public:

	UFUNCTION(BlueprintCallable, Category = "SaveGameData")
		FString DataToString() const;
};
