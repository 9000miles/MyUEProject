// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SaveGameDataValueBase.h"
#include "SaveGameDataValue_DateTime.generated.h"

/**
 *
 */
UCLASS(BlueprintType)
class MYUEPROJECT_API USaveGameDataValue_DateTime : public USaveGameDataValueBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "Save Game Data Value")
		FDateTime DateTime;

	virtual void SetValue(FString Value) override
	{
		FDateTime InDateTime;
		bool bSuccessful = false;
		bSuccessful = FDateTime::Parse(Value, InDateTime);
		if (bSuccessful)
			DateTime = InDateTime;
	}
};
