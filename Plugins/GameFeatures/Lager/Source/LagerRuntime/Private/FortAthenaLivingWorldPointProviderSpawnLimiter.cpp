#include "FortAthenaLivingWorldPointProviderSpawnLimiter.h"

FFortAthenaLivingWorldPointProviderSpawnLimiter::FFortAthenaLivingWorldPointProviderSpawnLimiter() {
    this->Behavior = ELivingWorldPointProviderSpawnLimiterBehavior::Lifetime;
    this->bResetLimitWhenEnabling = false;
}

