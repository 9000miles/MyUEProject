#include "..\Public\SaveGameManager.h"
#include "Engine.h"
#include "..\Public\SaveGameData.h"
#include "LogMacros.h"
#include "Runtime\Engine\Classes\Kismet\KismetMathLibrary.h"
#include "Runtime\Core\Public\Misc\DateTime.h"

USaveGameManager::USaveGameManager()
{
	//SaveGameClass = USaveGameInstance::GetClass();
}

void USaveGameManager::Initialize(FSubsystemCollectionBase& Collection)
{
}

void USaveGameManager::Deinitialize()
{
}

bool USaveGameManager::SaveGameData(const FString& SlotName, const int32 UserIndex)
{
	USaveGameInstance* SaveGameObject = NewObject<USaveGameInstance>(GetTransientPackage(), USaveGameInstance::StaticClass());
	SaveGameObject->SlotName = SlotName;
	SaveGameObject->UserIndex = UserIndex;
	SaveGameObject->DataString = SaveDataMapToString();

	FString TimeStr = FString();
	FDateTime NowTime = UKismetMathLibrary::Now();
	TimeStr.Append(FString::Printf(TEXT("%d"), NowTime.GetYear()))
		.Append("-")
		.Append(FString::Printf(TEXT("%d"), NowTime.GetMonth()))
		.Append("-")
		.Append(FString::Printf(TEXT("%d"), NowTime.GetDay()))
		.Append("-")
		.Append(FString::Printf(TEXT("%d"), NowTime.GetHour()))
		.Append("-")
		.Append(FString::Printf(TEXT("%d"), NowTime.GetMinute()))
		.Append("-")
		.Append(FString::Printf(TEXT("%d"), NowTime.GetSecond()))
		.Append("-")
		.Append(FString::Printf(TEXT("%d"), NowTime.GetMillisecond()));
	SaveGameObject->SaveDataTime = TimeStr;

	return UGameplayStatics::SaveGameToSlot(SaveGameObject, SlotName, UserIndex);
}

void USaveGameManager::LoadGameData(const FString& SlotName, const int32 UserIndex)
{
	USaveGame* SaveGameObject = UGameplayStatics::LoadGameFromSlot(SlotName, UserIndex);
	CurSaveGameInstance = Cast< USaveGameInstance>(SaveGameObject);

	StringToSaveDataMap(CurSaveGameInstance->DataString);
}

FString USaveGameManager::SaveDataMapToString()
{
	FString ResultData = FString();
	for (TMap<FString, USaveGameData*>::TIterator It(SaveDataMap); It; ++It)
	{
		USaveGameData* const Data = It.Value();
		if (Data != nullptr)
		{
			ResultData.Append(Data->DataToString());
		}
	}
	return ResultData;
}

void USaveGameManager::StringToSaveDataMap(FString DataString)
{
	SaveDataMap.Empty();

	TArray<FString> Datas;
	DataString.ParseIntoArray(Datas, TEXT(";"));
	for (int32 Index = 0; Index < Datas.Num(); ++Index)
	{
		TArray<FString> Strs;
		FString Data = Datas[Index];
		Data.ParseIntoArray(Strs, TEXT(","));

		USaveGameData* GameData = NewObject<USaveGameData>();
		GameData->DataName = Strs[0];

		static const UEnum* EnumTemp = StaticEnum<ESaveGameDataType::Type>();
		int32 EnumIndex = EnumTemp->GetValueByNameString(*Strs[1]);
		GameData->DataType = ESaveGameDataType::Type(EnumIndex);

		GameData->ValueString = Strs[2];

		GameData->DataGroup = Strs[3];
	}
}

bool USaveGameManager::AddSaveData(FString DataName, ESaveGameDataType::Type DataType, FString ValueString, FString DataGroup)
{
	if (DataType == ESaveGameDataType::None) return false;

	if (!SaveDataMap.Contains(DataName))
	{
		USaveGameData* SaveData = NewObject<USaveGameData>();
		//USaveGameData* SaveData = NewObject<USaveGameData>(DataName, DataType, ValueString, DataGroup);
		SaveData->DataName = DataName;
		SaveData->DataType = DataType;
		SaveData->ValueString = ValueString;
		SaveData->DataGroup = DataGroup;

		SaveDataMap.Add(DataName, SaveData);

		AddGroupSaveDataMap(DataGroup, SaveData);
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("This DataName %s is Contains in Map"), *DataName);
		return false;
	}

	return true;
}

bool USaveGameManager::SetSaveDataValue(FString DataName, ESaveGameDataType::Type DataType, FString ValueString, FString DataGroup, bool bSetDataGroup)
{
	if (DataType == ESaveGameDataType::None) return false;

	if (SaveDataMap.Contains(DataName))
	{
		USaveGameData** Data = SaveDataMap.Find(DataName);
		if (DataType == (*Data)->DataType)
		{
			(*Data)->ValueString = ValueString;

			if (bSetDataGroup)
			{
				(*Data)->DataGroup = DataGroup;
				ChangeSaveDataGroup(*Data, DataGroup);
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("This DataName %s is Contains in Map"), *DataName);
		return false;
	}

	return true;
}

FString USaveGameManager::GetSaveDataValue(FString DataName, ESaveGameDataType::Type DataType) const
{
	FString Result = FString();
	if (SaveDataMap.Contains(DataName))
	{
		USaveGameData* const * Data = SaveDataMap.Find(DataName);
		if (DataType == (*Data)->DataType)
		{
			return (*Data)->ValueString;
		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("This DataName %s is Contains in Map"), *DataName);
	}
	return Result;
}

TArray< USaveGameData*> USaveGameManager::GetGroupSaveData(FString DataGroup) const
{
	TArray< USaveGameData*> Result;
	if (GroupSaveDataMap.Contains(DataGroup))
	{
		return GroupSaveDataMap[DataGroup];
	}
	return Result;
}

bool USaveGameManager::RemoveSaveData(FString DataName, ESaveGameDataType::Type DataType) const
{
	if (SaveDataMap.Contains(DataName))
	{
		//SaveDataMap.FindChecked(DataName);
		//SaveDataMap.Remove(DataName);
		////SaveDataMap.Remove(DataName);
		//USaveGameData* SaveData = SaveDataMap.FindAndRemoveChecked(DataName);
		//TArray<USaveGameData *> DataArray = GroupSaveDataMap.FindRef(SaveData->DataGroup);
		//(&DataArray)->Remove(SaveData);
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("This DataName %s is Contains in Map"), *DataName);
		return false;
	}

	return true;
}

bool USaveGameManager::RemoveGameData(FString DataName)
{
	return true;

}

bool USaveGameManager::DeleteGameData(FString SlotName, int32 UserIndex)
{
	return true;
}

void USaveGameManager::Tick(float DeltaTime)
{
}

TStatId USaveGameManager::GetStatId() const
{
	return TStatId();
}

void USaveGameManager::AddGroupSaveDataMap(FString DataGroup, USaveGameData * SaveData)
{
	if (GroupSaveDataMap.Contains(DataGroup))
	{
		GroupSaveDataMap[DataGroup].Add(SaveData);
	}
	else
	{
		TArray<USaveGameData*> GroupArray;
		GroupArray.Add(SaveData);
		GroupSaveDataMap.Add(DataGroup, GroupArray);
	}
}

void USaveGameManager::ChangeSaveDataGroup(USaveGameData* SaveData, FString DataGroup)
{
	if (GroupSaveDataMap.Contains(SaveData->DataGroup))
	{
		TArray<USaveGameData*>* GroupArray = GroupSaveDataMap.Find(SaveData->DataGroup);
		bool bContains;
		FString NameStr = SaveData->DataName;
		bContains = GroupArray->ContainsByPredicate([=](USaveGameData* DataSave) {
			return DataSave->DataName.Compare(NameStr);
		});

		if (bContains)
		{
			//USaveGameData** mSaveData = GroupArray->FindByKey(SaveData->DataName);
			USaveGameData** mSaveData = GroupArray->FindByPredicate([=](const  USaveGameData* InSaveData)
			{
				return InSaveData->DataName == SaveData->DataName;
			});

			(*mSaveData)->DataGroup = DataGroup;
			GroupArray->Remove(*mSaveData);

			AddGroupSaveDataMap(DataGroup, SaveData);

			if (GroupArray->Num() <= 0)
			{
				GroupSaveDataMap.Remove(DataGroup);
			}
		}
	}
	else
	{
		AddGroupSaveDataMap(SaveData->DataGroup, SaveData);
	}


}

