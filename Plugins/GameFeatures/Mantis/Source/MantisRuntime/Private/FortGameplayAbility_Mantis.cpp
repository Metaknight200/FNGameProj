#include "FortGameplayAbility_Mantis.h"

UFortGameplayAbility_Mantis::UFortGameplayAbility_Mantis() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->bDisableMoveCombining = true;
    this->bAllowRootMotionWarping = false;
    this->MantisPawnComponent = NULL;
    this->MontageTask = NULL;
    this->RootMotionTask = NULL;
}

void UFortGameplayAbility_Mantis::OnMontageFinished() {
}

void UFortGameplayAbility_Mantis::OnMontageCancelled() {
}

void UFortGameplayAbility_Mantis::ConfigureRootMotionWarping_Implementation(AActor*& OutTargetActor, bool& bOutAllowTranslationWarp, bool& bOutAllowRotationWarp, bool& bOutSnapshotTargetLocation) {
}



