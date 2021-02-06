// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AG_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class AG_COLDNITES_API AAG_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	//Reference to the UMG asset in the editor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget> PauseMenuOverlayAsset;

	//Variable to hold the widget after creating it
	UUserWidget* PauseMenuOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget> ResOptionsMenuOverlayAsset;

	UUserWidget* ResOptionsMenuOverlay;
	
	bool bPauseMenuVisible;
	bool bResOptionsMenuVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Widgets")
	bool bMainMenuVisible;

protected:
	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "PauseMenu")
	void HidePauseMenu();
	void ShowPauseMenu();
	void TogglePauseMenu();


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ResOptionsMenu")
	void ShowResOptionsMenu();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ResOptionsMenu")
	void HideResOptionsMenu();
};