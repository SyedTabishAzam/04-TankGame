// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANKGAME_API ATankPlayerController : public APlayerController
{
	void BeginPlay() override;
	void Tick(float) override;
	void AimTowardsCrosshair();
	GENERATED_BODY()
		ATank* GetPossesedTank() const;
};
