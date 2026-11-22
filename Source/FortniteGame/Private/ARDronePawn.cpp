#include "ARDronePawn.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"
#include "MotionControllerComponent.h"
#include "ARScreenCaptureComponent.h"

AARDronePawn::AARDronePawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ARRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ARRoot"));
    this->WebcamRoot = CreateDefaultSubobject<USceneComponent>(TEXT("WebcamRoot"));
    this->WebcamRotRoot = CreateDefaultSubobject<USceneComponent>(TEXT("WebcamRotRoot"));
    this->ScreenRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ScreenRoot"));
    this->MotionBase = CreateDefaultSubobject<USceneComponent>(TEXT("MotionBase0"));
    this->MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionController"));
    this->POVCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("POVCaptureComponent"));
    this->ScreenCaptureComponent = CreateDefaultSubobject<UARScreenCaptureComponent>(TEXT("ScreenCaptureComponent"));
    this->ARCapture = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("ARCapture"));
    this->MediaPlayer = NULL;
    this->MediaPlayerVideoFormatIndex = -1;
    this->WorldToMetersMultiplier = 1.00f;
    this->ARPostProcessMaterial = NULL;
    this->ARPostProcessMID = NULL;
    this->ARCapture->SetupAttachment(WebcamRotRoot);
    this->ARRoot->SetupAttachment(RootComponent);
    this->MotionBase->SetupAttachment(ARRoot);
    this->MotionController->SetupAttachment(MotionBase);
    this->POVCaptureComponent->SetupAttachment(WebcamRotRoot);
    this->ScreenCaptureComponent->SetupAttachment(WebcamRotRoot);
    this->ScreenRoot->SetupAttachment(ARRoot);
    this->WebcamRoot->SetupAttachment(MotionController);
    this->WebcamRotRoot->SetupAttachment(WebcamRoot);
}

void AARDronePawn::StopScaling() {
}

void AARDronePawn::ScaleOut() {
}

void AARDronePawn::ScaleIn() {
}


