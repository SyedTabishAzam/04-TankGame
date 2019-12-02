// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UIMenu.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANKGAME_API UUIMenu : public UUserWidget
{
	GENERATED_BODY()public:
		UUIMenu(const FObjectInitializer& ObjectInitializer);

		virtual void NativeConstruct() override;

		// Optionally override the tick event
		virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
};
