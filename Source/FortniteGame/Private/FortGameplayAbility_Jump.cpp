#include "FortGameplayAbility_Jump.h"
#include "EFortGameplayAbilityActivation.h"

UFortGameplayAbility_Jump::UFortGameplayAbility_Jump() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::NonInstanced;
    this->ActivationType = EFortGameplayAbilityActivation::Triggered;
    this->ActionName = TEXT("Jump");
    this->ExtraActionNames.AddDefaulted(1);
}


