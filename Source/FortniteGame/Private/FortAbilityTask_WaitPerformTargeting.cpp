#include "FortAbilityTask_WaitPerformTargeting.h"

UFortAbilityTask_WaitPerformTargeting::UFortAbilityTask_WaitPerformTargeting() {
    this->TargetingPreset = NULL;
    this->bForceTargetingOnServer = false;
    this->bUseAsyncTargeting = false;
}

UFortAbilityTask_WaitPerformTargeting* UFortAbilityTask_WaitPerformTargeting::WaitPerformTargetingWithTargets(UGameplayAbility* OwningAbility, FName TaskInstanceName, UTargetingPreset* NewTargetingPreset, bool NewBForceTargetingOnServer, bool NewBUseAsyncTargeting, const TArray<AActor*> InTargets) {
    return NULL;
}

UFortAbilityTask_WaitPerformTargeting* UFortAbilityTask_WaitPerformTargeting::WaitPerformTargeting(UGameplayAbility* OwningAbility, FName TaskInstanceName, UTargetingPreset* NewTargetingPreset, bool NewBForceTargetingOnServer, bool NewBUseAsyncTargeting) {
    return NULL;
}

void UFortAbilityTask_WaitPerformTargeting::OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag) {
}

void UFortAbilityTask_WaitPerformTargeting::OnTargetDataCancelledCallback() {
}


