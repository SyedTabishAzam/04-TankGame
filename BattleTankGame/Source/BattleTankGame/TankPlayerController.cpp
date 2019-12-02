// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController.h"

ATank* ATankPlayerController::GetPossesedTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if(GetPossesedTank()!=nullptr)
		UE_LOG(LogTemp, Warning, TEXT("%s"),* GetPossesedTank()->GetName());
}


void ATankPlayerController::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

	
}

void ATankPlayerController::AimTowardsCrosshair()
{

}