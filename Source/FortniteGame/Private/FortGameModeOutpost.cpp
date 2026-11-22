#include "FortGameModeOutpost.h"
#include "FortGameStateOutpost.h"
#include "FortPlayerControllerOutpost.h"
#include "FortPlayerStateOutpost.h"

AFortGameModeOutpost::AFortGameModeOutpost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AFortGameStateOutpost::StaticClass();
    this->PlayerControllerClass = AFortPlayerControllerOutpost::StaticClass();
    this->PlayerStateClass = AFortPlayerStateOutpost::StaticClass();
    this->GameModeSessionString = TEXT("FORTOUTPOST");
    this->FrameTimeWithoutSleepHistogramBucketsMs.AddDefaulted(7);
    this->GameNetDriverTickFlushCostPerClientBucketsMicroSec.AddDefaulted(6);
    this->DemoNetDriverTickFlushTimeHistogramBucketsMs.AddDefaulted(6);
    this->CPUTimeBuckets.AddDefaulted(6);
    this->CPUPercentPerCoreBuckets.AddDefaulted(9);
    this->ActorsStarvedByClassTimeHistogramBuckets.AddDefaulted(10);
    this->bCriticalMissionEligible = false;
    this->XboxSubsystemNames.AddDefaulted(2);
    this->bSavePlayerBuiltStructuresAtAllTimes = false;
    this->MinTotalContinuousOneHitResourcesDistributedForForcedSave = 10;
    this->MaxContinuousOneHitResourcesDistributedBeforeForcedSave = 100;
    this->bEnableLargeScaleDisassemblyForcedSaves = true;
    this->bEnableUnsupportedStructureDisassembly = false;
    this->bCheckNavMeshAvailability = false;
}

bool AFortGameModeOutpost::DoesOutpostStatusAllowMissionStart() const {
    return false;
}


