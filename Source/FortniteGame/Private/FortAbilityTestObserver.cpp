#include "FortAbilityTestObserver.h"

AFortAbilityTestObserver::AFortAbilityTestObserver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AFortAbilityTestObserver::WasAbilityTagActivated(const FGameplayTag& AbilityTag) const {
    return false;
}

bool AFortAbilityTestObserver::WasAbilityActivated(UGameplayAbility* Ability) const {
    return false;
}

void AFortAbilityTestObserver::StopObserving() {
}

void AFortAbilityTestObserver::StartObserving(APawn* Pawn) {
}


