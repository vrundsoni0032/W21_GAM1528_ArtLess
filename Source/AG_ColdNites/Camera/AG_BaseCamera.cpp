#include "AG_BaseCamera.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

AAG_BaseCamera::AAG_BaseCamera()
{
	PrimaryActorTick.bCanEverTick = true;

	DefaultCameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Default Camera Arm"));
	DefaultCameraArm->SetUsingAbsoluteRotation(true);
	DefaultCameraArm->TargetArmLength = 4500.f;
	DefaultCameraArm->bDoCollisionTest = false;

	DefaultCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Default Camera"));
	DefaultCamera->SetupAttachment(DefaultCameraArm, USpringArmComponent::SocketName);
	DefaultCamera->bUsePawnControlRotation = false;
	DefaultCamera->bConstrainAspectRatio = true;
	DefaultCamera->SetFieldOfView(30.0f);
	//DefaultCamera->SetProjectionMode(ECameraProjectionMode::Orthographic); ---> Down the line will not allow many postprocessing effects and depth effect
	Tags.Add("Camera");
}

void AAG_BaseCamera::BeginPlay()
{
	Super::BeginPlay();

}

void AAG_BaseCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
