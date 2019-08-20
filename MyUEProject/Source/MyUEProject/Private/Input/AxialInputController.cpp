#include "AxialInputController.h"
#include "InputManager.h"
#include "GameManager.h"

void AAxialInputController::BeginPlay()
{
	//AInputManager* InputManager = Cast<AInputManager>(UGameManager::GetGameManager(GetWorld())->GetManager(AInputManager::StaticClass()));
	//InputManager->RegistorTarget(this);
	//VerticalInput = this->AddComponent<UInputAxisComponent>();
	//VerticalInput.OnAxisValue.Add([](float Value)
	//{
	//	OnAxisValue.Broadcast(Value, 0);
	//});

	//HorzontalInput = this->AddComponent<UInputAxisComponent>();
	//HorzontalInput.OnAxisValue.Add([](float Value)
	//{
	//	OnAxisValue.Broadcast(0, Value);
	//});
}


void AAxialInputController::Destroyed()
{
	//AInputManager* InputManager = Cast<AInputManager>(UGameManager::GetGameManager(GetWorld())->GetManager(AInputManager::StaticClass()));
	//InputManager->UnregistorTarget(this);
}
//
//void AAxialInputController::ReceiveKey(EInputKey::Type Key, bool Pressed)
//{
//	VerticalInput.InputKey(Key == EInputKey::Direction_Right, Key == EInputKey::Direction_Left, Pressed);
//	HorzontalInput.InputKey(Key == EInputKey::Direction_Right, Key == EInputKey::Direction_Left, Pressed);
//}
//
//void AAxialInputController::ReceiveAxis(float MoveForwardAxis, float MoveRightAxis, float LookUpAxis, float LookRateAxis)
//{
//	VerticalInput.InputAxis(MoveForwardAxis);
//	HorzontalInput.InputAxis(MoveRightAxis);
//}


