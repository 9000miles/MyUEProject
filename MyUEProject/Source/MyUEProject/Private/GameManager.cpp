#include "GameManager.h"
#include "Engine.h"
#include "UnrealString.h"

UGameManager::UGameManager()
{
}

void UGameManager::Test()
{
	UKismetSystemLibrary::PrintString(GetWorld(), FString::FromInt(Index).Append("*********************************"));
}

void UGameManager::AddManager(FString ManagerName)
{
	//Managers.AddUnique(GetWorld()->SpawnActor(, FTransform()));
}

void UGameManager::RemoveManager(FString ManagerName)
{
}

void UGameManager::RemoveAll()
{
	//Managers.RemoveAll();
}

void UGameManager::TickManager()
{
	for (int Index = 0; Index < Managers.Num(); Index++)
	{
	}
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