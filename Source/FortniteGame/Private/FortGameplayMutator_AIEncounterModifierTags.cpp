#include "FortGameplayMutator_AIEncounterModifierTags.h"

AFortGameplayMutator_AIEncounterModifierTags::AFortGameplayMutator_AIEncounterModifierTags(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->RequiredEncounterAssociatedMissionType = EFortMissionType::Max_None;
}


