#include "SaveGameManager.h"
#include "Engine.h"
#include "LogMacros.h"
#include "DateTime.h"
#include "Kismet/KismetMathLibrary.h"
#include "SaveGameData.h"
#include "SaveGameDataValue_Byte.h"
#include "SaveGameDataValue_Bool.h"
#include "SaveGameDataValue_Int32.h"
#include "SaveGameDataValue_Float.h"
#include "SaveGameDataValue_String.h"
#include "SaveGameDataValue_Vector2.h"
#include "SaveGameDataValue_Vector3.h"
#include "SaveGameDataValue_Vector4.h"
#include "SaveGameDataValue_DateTime.h"
#include "Casts.h"

USaveGameManager* USaveGameManager::Singleton = nullptr;

USaveGameManager::USaveGameManager()
{
}

void USaveGameManager::Initialize(FSubsystemCollectionBase& Collection)
{
	SaveDataMap.Empty();
	GroupSaveDataMap.Empty();
}

void USaveGameManager::Deinitialize()
{
	SaveDataMap.Empty();
	GroupSaveDataMap.Empty();
}

bool USaveGameManager::SaveGameData(const FString& SlotName, const int32 UserIndex)
{
	USaveGameInstance* SaveGameObject = NewObject<USaveGameInstance>(GetTransientPackage(), USaveGameInstance::StaticClass());
	SaveGameObject->SlotName = SlotName;
	SaveGameObject->UserIndex = UserIndex;
	SaveGameObject->DataString = SaveDataMapToString();

	FString NowTimeStr = FString();
	FDateTime NowTime = UKismetMathLibrary::Now();
	NowTimeStr.Append(FString::Printf(TEXT("%d"), NowTime.GetYear()))
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
	SaveGameObject->SaveDataTime = NowTimeStr;
	bNeedsToBeSaved = false;

	UE_LOG(LogTemp, Log, TEXT("[ <<<<< ] Save Game Data :: == >>  %s [ >>>>> ]"), *SaveGameObject->DataString);
	return UGameplayStatics::SaveGameToSlot(SaveGameObject, SlotName, UserIndex);
}

void USaveGameManager::LoadGameData(const FString& SlotName, const int32 UserIndex)
{
	if (!UGameplayStatics::DoesSaveGameExist(SlotName, UserIndex))
	{
		ClearAll();
		UE_LOG(LogTemp, Error, TEXT("This %s SaveGame is not Exist"), *SlotName);
		return;
	}

	USaveGame* SaveGameObject = UGameplayStatics::LoadGameFromSlot(SlotName, UserIndex);
	if (!SaveGameObject)
	{
		ClearAll();
		UE_LOG(LogTemp, Error, TEXT("LoadGameFromSlot %s failed"), *SlotName);
		return;
	}

	CurSaveGameInstance = Cast< USaveGameInstance>(SaveGameObject);
	if (!CurSaveGameInstance)
	{
		ClearAll();
		UE_LOG(LogTemp, Error, TEXT("Cast to USaveGameInstance failed"));
		return;
	}

	StringToSaveDataMap(CurSaveGameInstance->DataString);
	UE_LOG(LogTemp, Log, TEXT("[ >>>>> ] Load Game Data :: == >>  %s [ <<<<< ]"), *CurSaveGameInstance->DataString);
}

FString USaveGameManager::SaveDataMapToString()
{
	FString ResultData = FString();
	for (TMap<FString, USaveGameData*>::TIterator It(SaveDataMap); It; ++It)
	{
		USaveGameData* const Data = It.Value();
		Data->SaveStateType = ESaveGameDataSaveStateType::Saved;
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
	GroupSortNames.Empty();
	GroupSaveDataMap.Empty();

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
		GameData->SaveStateType = ESaveGameDataSaveStateType::Saved;

		GameData->ValueString = Strs[2];
		GameData->DataGroup = Strs[3];

		SaveDataMap.Add(GameData->DataName, GameData);
	}

	bNeedsToBeSaved = false;
	UpdateGroupSaveDataMap();
}

bool USaveGameManager::AddSaveData(FString DataName, ESaveGameDataType::Type DataType, FString ValueString, FString DataGroup)
{
	if (DataType == ESaveGameDataType::None) return false;

	if (!SaveDataMap.Contains(DataName))
	{
		USaveGameData* SaveData = NewObject<USaveGameData>();
		SaveData->DataName = DataName;
		SaveData->DataType = DataType;
		SaveData->SaveStateType = ESaveGameDataSaveStateType::NotSaved;
		SaveData->ValueString = ValueString;
		SaveData->DataGroup = DataGroup;

		SaveDataMap.Add(DataName, SaveData);
		bNeedsToBeSaved = true;

		UpdateGroupSaveDataMap();
		return true;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("This DataName %s is Contains in Map"), *DataName);
		return false;
	}

	return false;
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
			(*Data)->SaveStateType = ESaveGameDataSaveStateType::NotSaved;

			bNeedsToBeSaved = true;
			if (bSetDataGroup)
			{
				(*Data)->DataGroup = DataGroup;
				UpdateGroupSaveDataMap();
				return true;
			}
		}
	}
	else
	{
		bNeedsToBeSaved = false;
		UE_LOG(LogTemp, Warning, TEXT("This DataName %s is Not Contains in Map"), *DataName);
		return false;
	}

	return false;
}

FString USaveGameManager::GetSaveDataValueString(FString DataName, ESaveGameDataType::Type DataType) const
{
	FString Result = FString();
	if (SaveDataMap.Contains(DataName))
	{
		USaveGameData* const* Data = SaveDataMap.Find(DataName);
		if (DataType == (*Data)->DataType)
		{
			return (*Data)->ValueString;
		}
		else if (DataType == ESaveGameDataType::None)
		{
			return (*Data)->ValueString;
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("This DataName %s is Not Contains in Map"), *DataName);
	}
	return Result;
}

USaveGameDataValueBase* USaveGameManager::GetSaveDataValue(FString DataName, ESaveGameDataType::Type DataType) const
{
	static const UEnum* Enum = StaticEnum<ESaveGameDataType::Type>();
	check(Enum);
	FString ClassName = FString(TEXT("USaveGameDataValue_")) + Enum->GetNameStringByValue(int64(DataType));;

	//StaticLoadClass();
	//LoadClass();
	USaveGameDataValueBase* ValueBase = FindObject<USaveGameDataValueBase>(ANY_PACKAGE, *ClassName);
	if (!ValueBase)
	{
		if (UObjectRedirector * RenamedClassRedirector = FindObject<UObjectRedirector>(ANY_PACKAGE, *ClassName)) {
			ValueBase = CastChecked<USaveGameDataValueBase>(RenamedClassRedirector->DestinationObject);
		}
	}

	//USaveGameDataValueBase* ValueBase = NewObject<USaveGameDataValueBase>();
	//switch (DataType)
	//{
	//case ESaveGameDataType::None:
	//	break;
	//case ESaveGameDataType::Bool:
	//	ValueBase = NewObject<USaveGameDataValue_Bool>();
	//	break;
	//case ESaveGameDataType::Byte:
	//	ValueBase = NewObject<USaveGameDataValue_Byte>();
	//	break;
	//case ESaveGameDataType::Int32:
	//	ValueBase = NewObject<USaveGameDataValue_Int32>();
	//	break;
	//case ESaveGameDataType::Float:
	//	ValueBase = NewObject<USaveGameDataValue_Float>();
	//	break;
	//case ESaveGameDataType::String:
	//	ValueBase = NewObject<USaveGameDataValue_String>();
	//	break;
	//case ESaveGameDataType::Vector2:
	//	ValueBase = NewObject<USaveGameDataValue_Vector2>();
	//	break;
	//case ESaveGameDataType::Vector3:
	//	ValueBase = NewObject<USaveGameDataValue_Vector3>();
	//	break;
	//case ESaveGameDataType::Vector4:
	//	ValueBase = NewObject<USaveGameDataValue_Vector4>();
	//	break;
	//case ESaveGameDataType::DateTime:
	//	ValueBase = NewObject<USaveGameDataValue_DateTime>();
	//	break;
	//default:
	//	break;
	//}

	if (ValueBase)
	{
		ValueBase->SetValue(*GetSaveDataValueString(DataName, DataType));
	}
	return ValueBase;
}

TArray<USaveGameData*> USaveGameManager::GetGroupSaveData(FString DataGroup) const
{
	TArray< USaveGameData*> Result;
	if (GroupSaveDataMap.Contains(DataGroup))
	{
		return GroupSaveDataMap[DataGroup];
	}
	return Result;
}

bool USaveGameManager::RemoveSaveData(FString DataName, ESaveGameDataType::Type DataType)
{
	if (SaveDataMap.Contains(DataName))
	{
		bNeedsToBeSaved = true;
		USaveGameData* SaveData = SaveDataMap.FindAndRemoveChecked(DataName);
		TArray<USaveGameData*> DataArray = GroupSaveDataMap.FindRef(SaveData->DataGroup);
		(&DataArray)->Remove(SaveData);
		GroupSortNames.Remove(DataName);
		if (DataArray.Num() <= 0)
		{
			GroupSaveDataMap.Remove(SaveData->DataGroup);
		}
		return true;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("This DataName %s is Not Contains in Map"), *DataName);
		return false;
	}

	return false;
}

bool USaveGameManager::DeleteGameData(FString SlotName, int32 UserIndex)
{
	bool Result = UGameplayStatics::DeleteGameInSlot(SlotName, UserIndex);
	return Result;
}

void USaveGameManager::ClearAll()
{
	SaveDataMap.Empty();
	CurSaveGameInstance = nullptr;
	GroupSortNames.Empty();
	bNeedsToBeSaved = false;
	GroupSaveDataMap.Empty();
}

USaveGameManager* USaveGameManager::GetSaveGameManager()
{
	if (Singleton)
	{
		return Singleton;
	}
	else
	{
		//UE_LOG(LogAssetManager, Fatal, TEXT("Cannot use AssetManager if no AssetManagerClassName is defined!"));
		return NewObject<USaveGameManager>(); // never calls this
	}
}

void USaveGameManager::Tick(float DeltaTime)
{
}

TStatId USaveGameManager::GetStatId() const
{
	return TStatId();
}

void USaveGameManager::UpdateGroupSaveDataMap()
{
	GroupSortNames.Empty();
	GroupSaveDataMap.Empty();

	for (TMap<FString, USaveGameData*>::TIterator It(SaveDataMap); It; ++It)
	{
		USaveGameData* const Data = It.Value();
		if (Data != nullptr)
		{
			if (!GroupSaveDataMap.Contains(Data->DataGroup))
			{
				TArray<USaveGameData*> GroupArray;
				(&GroupArray)->Add(Data);
				GroupSaveDataMap.Add(Data->DataGroup, GroupArray);
			}
			else
			{
				GroupSaveDataMap[Data->DataGroup].Add(Data);
			}
		}
	}

	GroupSaveDataMap.KeySort([](const FString& StrA, const FString& StrB) {	return StrA < StrB; });

	for (TMap<FString, TArray< USaveGameData*>>::TIterator It(GroupSaveDataMap); It; ++It)
	{
		GroupSortNames.Add(It.Key());
		It.Value().Sort([](const USaveGameData& DataA, const USaveGameData& DataB) {return DataA.DataName < DataB.DataName; });
	}
}



