#include "FortAbilityTask_PlayAnimAndWait.h"

UFortAbilityTask_PlayAnimAndWait::UFortAbilityTask_PlayAnimAndWait() {
    this->AnimState = EFortSharedAnimationState::Anim_Walk;
    this->bStopWhenAbilityEnds = true;
}

void UFortAbilityTask_PlayAnimAndWait::OnAnimInterrupted() {
}

void UFortAbilityTask_PlayAnimAndWait::OnAnimBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

UFortAbilityTask_PlayAnimAndWait* UFortAbilityTask_PlayAnimAndWait::CreatePlayAnimAndWaitProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FFortGameplayAbilityMontageInfo& PlayMontageInfo, EFortSharedAnimationState NewAnimState, bool NewBStopWhenAbilityEnds) {
    return NULL;
}


