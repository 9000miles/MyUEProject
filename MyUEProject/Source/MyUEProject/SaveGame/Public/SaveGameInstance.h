// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "NoExportTypes.h"
#include "SaveGameInstance.generated.h"

/**
 *
 */
UCLASS()
class MYUEPROJECT_API USaveGameInstance : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "SaveGameInstance")
		FString SlotName;

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameInstance")
		int32 UserIndex;

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameInstance")
		FString DataString;

	UPROPERTY(BlueprintReadOnly, Category = "SaveGameInstance")
		FString SaveDataTime;
};
