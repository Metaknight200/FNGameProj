#include "FortGameModeEmptyDedicated.h"

AFortGameModeEmptyDedicated::AFortGameModeEmptyDedicated(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseSeamlessTravel = false;
    this->FortGameSessionDedicated = NULL;
}


