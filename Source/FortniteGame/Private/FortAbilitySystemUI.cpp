#include "FortAbilitySystemUI.h"
#include "Templates/SubclassOf.h"

UFortAbilitySystemUI::UFortAbilitySystemUI() {
}

FFortGameplayEffectDescription UFortAbilitySystemUI::GetStaticGameplayEffectDescription(const UGameplayEffect* Effect, float Level) {
    return FFortGameplayEffectDescription{};
}

UGameplayEffect* UFortAbilitySystemUI::GetDefaultObjectOfGameplayEffectType(TSubclassOf<UGameplayEffect> EffectType) {
    return NULL;
}


