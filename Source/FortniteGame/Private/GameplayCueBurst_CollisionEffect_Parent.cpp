#include "GameplayCueBurst_CollisionEffect_Parent.h"

UGameplayCueBurst_CollisionEffect_Parent::UGameplayCueBurst_CollisionEffect_Parent() {
    this->DefaultSoundAsset = NULL;
    this->SmallSoundAsset = NULL;
    this->AverageSoundAsset = NULL;
    this->MediumSoundAsset = NULL;
    this->LargeSoundAsset = NULL;
    this->ZeroGSoundAsset = NULL;
}

AActor* UGameplayCueBurst_CollisionEffect_Parent::GetTargetActor() const {
    return NULL;
}


