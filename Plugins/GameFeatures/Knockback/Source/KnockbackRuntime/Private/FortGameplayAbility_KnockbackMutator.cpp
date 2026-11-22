#include "FortGameplayAbility_KnockbackMutator.h"
#include "FortAthenaMutator_Knockback.h"

UFortGameplayAbility_KnockbackMutator::UFortGameplayAbility_KnockbackMutator() {
    this->CachedMutator = NULL;
    this->MutatorClassToGet = AFortAthenaMutator_Knockback::StaticClass();
}

void UFortGameplayAbility_KnockbackMutator::SaveKnockbackData(const FKnockbackMutatorData& InKnockbackData) {
}

AFortAthenaMutator_Knockback* UFortGameplayAbility_KnockbackMutator::GetCachedMutator() {
    return NULL;
}


