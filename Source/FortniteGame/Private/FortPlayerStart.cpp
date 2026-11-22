#include "FortPlayerStart.h"

AFortPlayerStart::AFortPlayerStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClaimingController = NULL;
    this->ExpirationCheckInterval = 1.00f;
    this->StartParticleComponent = NULL;
}


