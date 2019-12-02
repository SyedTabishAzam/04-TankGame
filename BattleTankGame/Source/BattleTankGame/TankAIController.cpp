// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	if (GetPossesedTank() != nullptr)
		UE_LOG(LogTemp, Warning, TEXT("AI Possessed by %s"), *GetPossesedTank()->GetName());

	if (GetPlayerTank() != nullptr)
		UE_LOG(LogTemp, Warning, TEXT("Player Possessed by %s"), *GetPlayerTank()->GetName());
	
}

ATank* ATankAIController::GetPossesedTank() const
{
	return Cast<ATank>(GetPawn());
}

ATank* ATankAIController::GetPlayerTank() const
{
	if(GetWorld()->GetFirstPlayerController())
		return Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	return nullptr;
}

