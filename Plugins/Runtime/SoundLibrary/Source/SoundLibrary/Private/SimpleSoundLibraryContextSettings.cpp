#include "SimpleSoundLibraryContextSettings.h"

FSimpleSoundLibraryContextSettings::FSimpleSoundLibraryContextSettings() {
    this->bIs1P = false;
    this->bForceComponentCreation = false;
    this->VolumeMultiplier = 0.00f;
    this->PitchMultiplier = 0.00f;
    this->StartTime = 0.00f;
    this->ConcurrencySettings = NULL;
    this->AttenuationSettings = NULL;
}

