#include "FortNiagaraCameraLensEffectDirectional.h"

AFortNiagaraCameraLensEffectDirectional::AFortNiagaraCameraLensEffectDirectional(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageDealer = NULL;
    this->bRotateActor = false;
    this->Strength = 0.00f;
}


