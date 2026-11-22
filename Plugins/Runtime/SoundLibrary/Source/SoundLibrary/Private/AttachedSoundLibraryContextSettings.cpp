#include "AttachedSoundLibraryContextSettings.h"

FAttachedSoundLibraryContextSettings::FAttachedSoundLibraryContextSettings() {
    // Initialize reflected value fields omitted by the dump.
    this->Location = FVector::ZeroVector;
    this->LocationType = EAttachLocation::KeepRelativeOffset;
    this->VolumeMultiplier = 0.00f;
    this->PitchMultiplier = 0.00f;
    this->StartTime = 0.00f;
    this->ConcurrencySettings = NULL;
    this->AttenuationSettings = NULL;
    this->bStopWhenAttachedDestroyed = false;
    this->bAutoDestroy = false;
}

