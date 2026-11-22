#include "KairosHeroBase.h"
#include "Components/SceneCaptureComponent2D.h"

AKairosHeroBase::AKairosHeroBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaptureComponent2D"));
    this->bIsBeingCaptured = false;
    this->SceneCaptureComponent2D = (USceneCaptureComponent2D*)RootComponent;
    this->CurrentAnimationState = EKairosHeroAnimationState::Unknown;
    this->SkeletonType = EKairosHeroSkeletonType::Unknown;
    this->CapturePawn = NULL;
}

bool AKairosHeroBase::EndCapture() {
    return false;
}

bool AKairosHeroBase::BeginCapture(FKairosAnimationFramingInfo FramingInfo, FKairosCaptureParams CaptureParams) {
    return false;
}


