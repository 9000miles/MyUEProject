#include "GameManager.h"
#include "ManagerBase.h"
#include "Engine.h"
#include "UnrealString.h"

UGameManager::UGameManager()
{
}

void UGameManager::Test()
{
	UKismetSystemLibrary::PrintString(GetWorld(), FString::FromInt(Index).Append("*********************************"));
}

void UGameManager::AddManager(FName Name, UManagerBase* Manager)
{
	if (!ManagerMap.Contains(Name))
	{
		ManagerMap.Add(Name, Manager);
	}
}

UManagerBase * UGameManager::GetManager(FName Name)
{
	if (ManagerMap.Contains(Name))
	{
		return *ManagerMap.Find(Name);
	}
	return nullptr;
}

void UGameManager::RemoveManager(FName Name)
{
	if (ManagerMap.Contains(Name))
	{
		ManagerMap.Remove(Name);
	}
}

void UGameManager::RemoveAll()
{
	ManagerMap.Empty();
}

void UGameManager::Tick(float DeltaTime)
{
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, "GameManager");
	UKismetSystemLibrary::PrintString(GetWorld(), "GameManager -----------");
}

TStatId UGameManager::GetStatId() const
{
	return TStatId();
}