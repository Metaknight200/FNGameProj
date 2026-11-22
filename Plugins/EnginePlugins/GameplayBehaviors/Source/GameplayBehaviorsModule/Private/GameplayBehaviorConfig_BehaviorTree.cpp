#include "GameplayBehaviorConfig_BehaviorTree.h"
#include "GameplayBehavior_BehaviorTree.h"

UGameplayBehaviorConfig_BehaviorTree::UGameplayBehaviorConfig_BehaviorTree() {
    this->BehaviorClass = UGameplayBehavior_BehaviorTree::StaticClass();
    this->bRevertToPreviousBTOnFinish = true;
}


