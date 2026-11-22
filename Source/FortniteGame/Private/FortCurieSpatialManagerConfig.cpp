#include "FortCurieSpatialManagerConfig.h"

UFortCurieSpatialManagerConfig::UFortCurieSpatialManagerConfig() {
    this->TickInterval = 0.00f;
    this->OverlapFireApplicationMagnitude = 25.00f;
    this->OverlapElectricityApplicationMagnitude = 100.00f;
    this->ElementOverlapMaximumTestActorsPerFrame = 40;
    this->ElementOverlapMaximumDelayBetweenChecks = 0.25f;
    this->ElementOverlapDefaultExpansion = 32.00f;
    this->GrassWaterContentDecayRate = 0.50f;
    this->FireLandscapePropagationApplicationMagnitude = 20.00f;
    this->ElementSubgridVoxelOverlapThreshold = 4.00f;
    this->ElementGridOverlapVolumeThreshold = 4096.00f;
    this->NavRelevantObjectPoolCap = 32;
    this->AccurateCollisionGridCellMinimum = 24;
    this->MaxNumStormFireConsiderationsPerFrame = 15;
    this->StormFireInteractionTickCheckFreq = 3;
    this->MaxTimeForStormFireInteractionsPerFrame = 0.00f;
    this->StormFireInteractionConsiderationDelay = 1.50f;
    this->StormFireInteractionMagnitude = 100.00f;
    this->MovableActorFireInteractionMagnitude = 25.00f;
    this->AccurateActorOverlapVolumeThreshold = -1.00f;
    this->AccurateActorBoxOverlapVolumeThreshold = 201326592.00f;
    this->bUseAccurateCollisionVoxelization = true;
    this->bAllowStormFireInteractions = false;
    this->bCreateFireInteractsForMovableActors = true;
    this->bAllowBuildingsToInterruptElementGridOverlaps = true;
}


