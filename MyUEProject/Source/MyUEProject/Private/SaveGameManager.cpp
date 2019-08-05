#include "SaveGameManager.h"
#include "Engine.h"
#include "UnrealString.h"

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

void USaveGameManager::SaveGameData(FString SlotName, int32 UserIndex)
{
	//NewObject<USaveGame>(GetTransientPackage(), USaveGameInstance);
}

void USaveGameManager::LoadGameData(FString SlotName, int32 UserIndex)
{

}

FString USaveGameManager::SaveDataMapToString()
{
	return FString();
}

void USaveGameManager::StringToSaveDataMap(FString DataString)
{

}

void USaveGameManager::AddStringSaveData(FString DataName, ESaveGameDataType::Type DataType, FString StringData)
{

}

void USaveGameManager::AddInt32SaveData(FString DataName, ESaveGameDataType::Type DataType, int32 Int32Data)
{

}

void USaveGameManager::AddFloatSaveData(FString DataName, ESaveGameDataType::Type DataType, float FloatData)
{

}

void USaveGameManager::AddBoolSaveData(FString DataName, ESaveGameDataType::Type DataType, bool BoolData)
{

}

void USaveGameManager::AddVectorSaveData(FString DataName, ESaveGameDataType::Type DataType, FVector VectorData)
{

}

void USaveGameManager::SetStringSaveData(FString DataName, ESaveGameDataType::Type DataType, FString StringData)
{

}

void USaveGameManager::SetInt32SaveData(FString DataName, ESaveGameDataType::Type DataType, int32 Int32Data)
{

}

void USaveGameManager::SetFloatSaveData(FString DataName, ESaveGameDataType::Type DataType, float FloatData)
{

}

void USaveGameManager::SetBoolSaveData(FString DataName, ESaveGameDataType::Type DataType, bool BoolData)
{

}

void USaveGameManager::SetVectorSaveData(FString DataName, ESaveGameDataType::Type DataType, FVector VectorData)
{

}

USaveGameData* USaveGameManager::GetSaveData(FString SlotName, ESaveGameDataType::Type DataType) const
{
	return nullptr;
}

void USaveGameManager::RemoveGameData(FString SlotName)
{

}

void USaveGameManager::DeleteGameData(FString SlotName, int32 UserIndex)
{

}

void USaveGameManager::Tick(float DeltaTime)
{
}

TStatId USaveGameManager::GetStatId() const
{
	return TStatId();
}