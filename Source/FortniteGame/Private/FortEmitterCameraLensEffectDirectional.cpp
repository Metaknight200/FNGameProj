#include "FortEmitterCameraLensEffectDirectional.h"

AFortEmitterCameraLensEffectDirectional::AFortEmitterCameraLensEffectDirectional(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageDealer = NULL;
    this->bRotateActor = true;
    this->Strength = 0.00f;
}


