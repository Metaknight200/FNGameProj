#include "FortControllerComponent_SkydiveFeedback.h"

UFortControllerComponent_SkydiveFeedback::UFortControllerComponent_SkydiveFeedback(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkydiveCamShake = NULL;
    this->SkydiveCamShakeClass = NULL;
    this->DropSpeedForMinShakeMultiplier = 0.00f;
    this->DropSpeedForMaxShakeMultiplier = 0.00f;
    this->DropSpeedBlendExponent = 0.00f;
    this->CachedSkydiveDropSpeedMin = -1.00f;
    this->CachedSkydiveDropSpeedMax = -1.00f;
}


