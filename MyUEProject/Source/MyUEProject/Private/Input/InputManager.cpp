// Fill out your copyright notice in the Description page of Project Settings.


#include "..\..\Public\Input\InputManager.h"

// Sets default values
AInputManager::AInputManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInputManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInputManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

