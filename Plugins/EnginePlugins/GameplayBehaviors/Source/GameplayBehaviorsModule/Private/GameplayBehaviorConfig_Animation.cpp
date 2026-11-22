#include "GameplayBehaviorConfig_Animation.h"
#include "GameplayBehavior_AnimationBased.h"

UGameplayBehaviorConfig_Animation::UGameplayBehaviorConfig_Animation() {
    this->BehaviorClass = UGameplayBehavior_AnimationBased::StaticClass();
    this->PlayRate = 1.00f;
    this->bLoop = false;
}


