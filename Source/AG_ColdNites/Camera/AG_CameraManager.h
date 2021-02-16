#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AG_CameraManager.generated.h"

UCLASS()
class AG_COLDNITES_API AAG_CameraManager : public AActor
{
	GENERATED_BODY()
	
public:	
	AAG_CameraManager();
	
protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AG_CameraComponent")
		TArray<class AActor*> Cameras;
};
