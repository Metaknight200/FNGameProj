#include "PhaseLevelEntry.h"

FPhaseLevelEntry::FPhaseLevelEntry() {
    // Initialize reflected value fields omitted by the dump.
    this->Location = FVector::ZeroVector;
    this->Rotation = FRotator::ZeroRotator;
    this->bLoadLevelOnScriptStart = false;
    this->bLevelStartsVisible = false;
    this->bUnloadLevelOnPhaseEnd = false;
    this->LevelInstance = NULL;
}

