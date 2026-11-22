#include "ProceduralDebugSettings.h"

FProceduralDebugSettings::FProceduralDebugSettings() {
    // Initialize reflected value fields omitted by the dump.
    this->DebugPointColor = FColor(0, 0, 0, 0);
    this->bShowDebugPointCloud = false;
    this->DebugCullingDistance = 0.00f;
}

