#include "ThreatLocationInfo.h"

FThreatLocationInfo::FThreatLocationInfo() {
    // Initialize reflected value fields omitted by the dump.
    this->CloudLocation = FVector::ZeroVector;
    this->ThreatVolume = FBox(ForceInit);
    this->ThreatVisualsManager = NULL;
    this->bThreatActivated = false;
    this->DeactivationType = EFortThreatDeactivationType::Off;
}

