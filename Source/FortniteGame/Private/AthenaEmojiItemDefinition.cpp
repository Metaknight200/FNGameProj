#include "AthenaEmojiItemDefinition.h"

UAthenaEmojiItemDefinition::UAthenaEmojiItemDefinition() {
    this->bHolsterWeapon = false;
    this->bMovingEmote = true;
    this->FrameIndex = 0;
    this->FrameCount = 1;
    this->BaseMaterial = NULL;
    this->LifetimeIntroSeconds = 0.00f;
    this->LifetimeMidSeconds = 0.00f;
    this->LifetimeOutroSeconds = 0.00f;
    this->GeneratedMaterial = NULL;
}

void UAthenaEmojiItemDefinition::ConfigureParticleSystem(UParticleSystemComponent* ParticleSystem, TSoftObjectPtr<UTexture2D> OverrideImage) const {
}


