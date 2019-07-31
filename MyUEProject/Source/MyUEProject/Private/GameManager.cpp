#include "GameManager.h"
#include "ManagerBase.h"
#include "Engine.h"
#include "UnrealString.h"

UGameManager::UGameManager()
{
}

void UGameManager::Test()
{
	float a = 0.0f;
	int32 b = 2;

	UKismetSystemLibrary::PrintString(GetWorld(), FString::FromInt(Index).Append("*********************************"));
}

void UGameManager::Initialize(FSubsystemCollectionBase& Collection)
{
	RemoveAll();
	InitManagerMap();
}

void UGameManager::Deinitialize()
{
	RemoveAll();
}

void UGameManager::InitManagerMap()
{
	for (TMap<FName, UManagerBase*>::TIterator It(ManagerMap); It; ++It)
	{
		UManagerBase* const Manager = It.Value();
		if (Manager != nullptr)
		{
			Manager->InitManager();
		}
	}
}

void UGameManager::AddManager(FName Name, UManagerBase* Manager)
{
	if (Name.IsNone())
	{
		UKismetSystemLibrary::PrintString(GetWorld(), "Name cannot be None");
		return;
	}

	if (!ManagerMap.Contains(Name))
	{
		Manager->InitManager();
		ManagerMap.Add(Name, Manager);
	}
}

UManagerBase* UGameManager::GetManager(FName Name)
{
	if (ManagerMap.Contains(Name))
	{
		UManagerBase* Manager = *ManagerMap.Find(Name);
		Manager->CheckActor();
		return Manager;
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
	//UKismetSystemLibrary::PrintString(GetWorld(), "GameManager -----------");
}

TStatId UGameManager::GetStatId() const
{
	return TStatId();
}