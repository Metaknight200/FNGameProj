#include "FortAthenaMutator_CustomCharacterParts.h"

AFortAthenaMutator_CustomCharacterParts::AFortAthenaMutator_CustomCharacterParts(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
}

bool AFortAthenaMutator_CustomCharacterParts::GetPartOverridesForPlayer_Implementation(TArray<FPartOverrideData>& OutOverrideParts, const AFortPlayerController* FortPlayerController) const {
    return false;
}


