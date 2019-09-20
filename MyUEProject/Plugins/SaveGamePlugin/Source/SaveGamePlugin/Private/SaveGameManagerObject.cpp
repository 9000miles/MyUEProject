#include "SaveGameManagerObject.h"
#include "Engine.h"
#include "LogMacros.h"
#include "DateTime.h"
#include "Kismet/KismetMathLibrary.h"
#include "SaveGameData.h"
#include "Casts.h"
#include "MyUEProjectGameInstance.h"

USaveGameManagerObject* USaveGameManagerObject::Singleton = nullptr;

bool USaveGameManagerObject::GetHasBegunPlay()
{
	if (GetWorld())
	{
		return  GetWorld()->HasBegunPlay();
	}
	else
	{
		return false;
	}
}

void USaveGameManagerObject::Tick(float DeltaTime)
{
	if (Singleton)
		UE_LOG(LogTemp, Log, TEXT("[ <<<<< ] Save Game Data :: == >>  %s [ >>>>> ]"), *UKismetMathLibrary::Now().ToString());
}

TStatId USaveGameManagerObject::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(USingletonObject, STATGROUP_Tickables);
}

USaveGameManagerObject::USaveGameManagerObject()
{

}

USaveGameManagerObject::~USaveGameManagerObject()
{
	Deinitialize();
}

void USaveGameManagerObject::Initialize()
{
	SaveDataMap.Empty();
	GroupSaveDataMap.Empty();
}

//void USaveGameManagerObject::Initialize(FSubsystemCollectionBase& Collection)
//{
//	Super::Initialize(Collection);
//	Initialize();
//}

void USaveGameManagerObject::Deinitialize()
{
	ClearAll();
	Singleton = nullptr;
}

bool USaveGameManagerObject::SaveGameData(const FString& SlotName, const int32 UserIndex)
{
	USaveGameInstance* SaveGameObject = NewObject<USaveGameInstance>(GetTransientPackage(), USaveGameInstance::StaticClass());
	SaveGameObject->SlotName = SlotName;
	SaveGameObject->UserIndex = UserIndex;
	SaveGameObject->DataString = SaveDataMapToString();
	SaveGameObject->SaveDataTime = UKismetMathLibrary::Now().ToString();
	bNeedsToBeSaved = false;

	UE_LOG(LogTemp, Log, TEXT("[ <<<<< ] Save Game Data :: == >>  %s [ >>>>> ]"), *SaveGameObject->DataString);
	return UGameplayStatics::SaveGameToSlot(SaveGameObject, SlotName, UserIndex);
}

void USaveGameManagerObject::LoadGameData(const FString& SlotName, const int32 UserIndex)
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

FString USaveGameManagerObject::SaveDataMapToString()
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

void USaveGameManagerObject::StringToSaveDataMap(FString DataString)
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

		if (Strs.Num() != 4) continue;

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

bool USaveGameManagerObject::AddSaveData(FString DataName, ESaveGameDataType::Type DataType, FString ValueString, FString DataGroup)
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

bool USaveGameManagerObject::SetSaveDataValue(FString DataName, ESaveGameDataType::Type DataType, FString ValueString, FString DataGroup, bool bSetDataGroup)
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

FString USaveGameManagerObject::GetSaveDataValueString(FString DataName, ESaveGameDataType::Type DataType) const
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

USaveGameDataValueBase* USaveGameManagerObject::GetSaveDataValue(FString DataName, ESaveGameDataType::Type DataType) const
{
	static const UEnum* Enum = StaticEnum<ESaveGameDataType::Type>();
	check(Enum);
	FString ClassName = FString(TEXT("SaveGameDataValue_")) + Enum->GetNameStringByValue(int64(DataType));;
	UClass* Class = FindObject<UClass>(ANY_PACKAGE, *ClassName);
	if (!Class)
	{
		if (UObjectRedirector * RenamedClassRedirector = FindObject<UObjectRedirector>(ANY_PACKAGE, *ClassName)) {
			Class = CastChecked<UClass>(RenamedClassRedirector->DestinationObject);
		}
	}
	USaveGameDataValueBase* ValueBase = Cast<USaveGameDataValueBase>(StaticConstructObject_Internal(Class));

	FString DataValue = GetSaveDataValueString(DataName, DataType);
	if (ValueBase && !DataValue.IsEmpty())
	{
		ValueBase->SetValue(DataValue);
	}
	else
	{
		return nullptr;
	}
	return ValueBase;
}

TArray<USaveGameData*> USaveGameManagerObject::GetGroupSaveData(FString DataGroup) const
{
	TArray< USaveGameData*> Result;
	if (GroupSaveDataMap.Contains(DataGroup))
	{
		return GroupSaveDataMap[DataGroup];
	}
	return Result;
}

bool USaveGameManagerObject::RemoveSaveData(FString DataName, ESaveGameDataType::Type DataType)
{
	if (SaveDataMap.Contains(DataName))
	{
		bNeedsToBeSaved = true;
		USaveGameData* SaveData = SaveDataMap.FindAndRemoveChecked(DataName);
		FString DataGroup = SaveData->DataGroup;
		TArray<USaveGameData*> DataArray = GroupSaveDataMap.FindRef(SaveData->DataGroup);
		(&DataArray)->Remove(SaveData);
		if (DataArray.Num() <= 0)
		{
			GroupSortNames.Remove(DataGroup);
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

bool USaveGameManagerObject::DeleteGameData(FString SlotName, int32 UserIndex)
{
	bool Result = UGameplayStatics::DeleteGameInSlot(SlotName, UserIndex);
	return Result;
}

void USaveGameManagerObject::ClearAll()
{
	SaveDataMap.Empty();
	CurSaveGameInstance = nullptr;
	GroupSortNames.Empty();
	bNeedsToBeSaved = false;
	GroupSaveDataMap.Empty();
}

//USaveGameManagerObject* USaveGameManagerObject::GetSaveGameManager(const UObject* ContextObject)
//{
//	UWorld* World = GEngine->GetWorldFromContextObject(ContextObject, EGetWorldErrorMode::LogAndReturnNull);
//
//	const UGameInstance* GI = World ? World->GetGameInstance() : nullptr;
//	Singleton = UGameInstance::GetSubsystem<USaveGameManagerObject>(GI);
//	UE_LOG(LogTemp, Warning, TEXT("----------------------------"));
//	return Singleton;
//}

USaveGameManagerObject* USaveGameManagerObject::GetSaveGameManagerEditor()
{
	if (!Singleton)
	{
		Singleton = NewObject<USaveGameManagerObject>();
	}
	return Singleton;
}

void USaveGameManagerObject::UpdateGroupSaveDataMap()
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



