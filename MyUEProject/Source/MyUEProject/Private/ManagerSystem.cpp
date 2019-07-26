#include "ManagerSystem.h"
#include "Engine.h"

UManagerSystem::UManagerSystem()
{

}

void UManagerSystem::Tick(float DeltaTime)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, "ManagerSystem");
	//UKismetSystemLibrary::PrintString(GetWorld(), "ManagerSystem");
}

TStatId UManagerSystem::GetStatId() const
{
	return TStatId();
}
