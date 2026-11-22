#include "FortSoundCameraLensEffect.h"

AFortSoundCameraLensEffect::AFortSoundCameraLensEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IndicatorType = EFortSoundIndicatorTypes::Generic;
    this->SnapToSections = 0;
    this->MaxAudibleDistanceOnSpawn = 0.00f;
    this->InstigatingActor = NULL;
    this->IconOverride = NULL;
}

void AFortSoundCameraLensEffect::SetType(EFortSoundIndicatorTypes NewType) {
}

void AFortSoundCameraLensEffect::SetTintOverride(FLinearColor Color) {
}

void AFortSoundCameraLensEffect::SetStrengthCurve(const FRuntimeFloatCurve& Curve) {
}

void AFortSoundCameraLensEffect::SetInstigatingActor(const AActor* NewInstigator) {
}

void AFortSoundCameraLensEffect::SetIconOverride(UTexture* NewIcon) {
}

void AFortSoundCameraLensEffect::SetIcon(UTexture* NewIcon) {
}





