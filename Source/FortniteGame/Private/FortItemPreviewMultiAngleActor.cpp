#include "FortItemPreviewMultiAngleActor.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"

AFortItemPreviewMultiAngleActor::AFortItemPreviewMultiAngleActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraRotationRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("CameraRotationRootComponent"));
    this->PrimaryCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("PrimaryCameraComponent"));
    this->AutotestFloorMaterial = NULL;
    this->AngleTransitionDuration = 0.00f;
    this->AngleTransitionCurve = NULL;
    this->ActiveCameraAngle = CreateDefaultSubobject<UCameraComponent>(TEXT("ActiveCameraAngle"));
    this->ActiveCameraAngle->SetupAttachment(RootComponent);
    this->CameraRotationRootComponent->SetupAttachment(RootComponent);
    this->PrimaryCameraComponent->SetupAttachment(RootComponent);
}



