// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SaveGameManager.h"
#include "CommonToolBPFunctionLibrary.generated.h"

/**
 *
 */
UCLASS()
class MYUEPROJECT_API UCommonToolBPFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
		static void DateTimeConvertToString(const FDateTime& InDateTime, FString& DateTimeString)
	{
		FDateTime DateTime;
		FTimespan Timespan = FTimespan(16, 0, 0);
		DateTime = InDateTime - Timespan;
		DateTimeString = DateTime.ToString();
	}

	UFUNCTION(BlueprintCallable)
		static void StringConvertToDateTime(const FString& DateTimeString, FDateTime& OutDateTime)
	{
		FDateTime::Parse(DateTimeString, OutDateTime);
	}

	//UFUNCTION(BlueprintPure, BlueprintCallable)
	//	static USaveGameManager* GetSaveGameManager();

	//{
	//	return USaveGameManager::GetSaveGameManager();
	//}
};
