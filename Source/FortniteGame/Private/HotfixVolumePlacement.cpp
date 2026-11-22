#include "HotfixVolumePlacement.h"

FHotfixVolumePlacement::FHotfixVolumePlacement() {
    // Initialize reflected value fields omitted by the dump.
    this->Center = FVector::ZeroVector;
    this->Extent = FVector::ZeroVector;
    this->bNeededOnClient = false;
}

