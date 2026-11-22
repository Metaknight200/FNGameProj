#include "FortGameplayAbility_SpyTech_MysteryGun.h"
#include "EFortGameplayAbilityActivation.h"

UFortGameplayAbility_SpyTech_MysteryGun::UFortGameplayAbility_SpyTech_MysteryGun() {
    this->ActivationType = EFortGameplayAbilityActivation::Triggered;
    this->TextItemSource = TEXT("SpyTech_MysteryGun");
    this->LastGrantedItem = NULL;
}


