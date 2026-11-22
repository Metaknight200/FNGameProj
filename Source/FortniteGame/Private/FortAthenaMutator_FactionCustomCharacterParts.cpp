#include "FortAthenaMutator_FactionCustomCharacterParts.h"

AFortAthenaMutator_FactionCustomCharacterParts::AFortAthenaMutator_FactionCustomCharacterParts(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

uint8 AFortAthenaMutator_FactionCustomCharacterParts::GetFactionForPlayer_Implementation(const AFortPlayerControllerAthena* PlayerController) const {
    return 0;
}


