#include "FortAthenaMutator_SafezoneBlacklist.h"

AFortAthenaMutator_SafezoneBlacklist::AFortAthenaMutator_SafezoneBlacklist(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
}


