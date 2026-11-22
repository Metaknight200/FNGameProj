#include "CustomCharacterPartModifier_SlurpLegendsBody.h"

ACustomCharacterPartModifier_SlurpLegendsBody::ACustomCharacterPartModifier_SlurpLegendsBody(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TransformBurst = NULL;
    this->LoopingDrip = NULL;
    this->InterpolationRate = 0.75f;
    this->ShieldOverride = 0.00f;
    this->bUseShieldOverride = false;
    this->AssociatedPS = NULL;
    this->AssociatedAnimInstance = NULL;
    this->BodyMID = NULL;
}

void ACustomCharacterPartModifier_SlurpLegendsBody::SetComponentPointers(UParticleSystemComponent* xFormBurst, UNiagaraComponent* DripLoop) {
}

float ACustomCharacterPartModifier_SlurpLegendsBody::GetCurrentShieldPercentage() const {
    return 0.0f;
}


