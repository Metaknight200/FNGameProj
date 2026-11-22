#include "FortAthenaLivingWorldEvent.h"

FFortAthenaLivingWorldEvent::FFortAthenaLivingWorldEvent() {
    this->Weight = 0.00f;
    this->bOnlyInSafeZone = false;
    this->ActivationGamePhaseStep = EAthenaGamePhaseStep::None;
    this->ActivationSafeZoneIndex = 0;
    this->ActivationMinDelay = 0.00f;
    this->ActivationMaxDelay = 0.00f;
    this->bCheckForActorDensity = false;
    this->RandomActivationChance = 0.00f;
}

