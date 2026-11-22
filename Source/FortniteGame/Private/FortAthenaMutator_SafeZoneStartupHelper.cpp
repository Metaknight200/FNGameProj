#include "FortAthenaMutator_SafeZoneStartupHelper.h"

AFortAthenaMutator_SafeZoneStartupHelper::AFortAthenaMutator_SafeZoneStartupHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->OverrideSafeZoneType = ESafeZoneStartUp::StartsWithWarmUp;
}


