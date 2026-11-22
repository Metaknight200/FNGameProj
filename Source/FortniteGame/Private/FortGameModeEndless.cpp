#include "FortGameModeEndless.h"
#include "FortGameStateEndless.h"

AFortGameModeEndless::AFortGameModeEndless(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AFortGameStateEndless::StaticClass();
    this->FrameTimeWithoutSleepHistogramBucketsMs.AddDefaulted(7);
    this->GameNetDriverTickFlushCostPerClientBucketsMicroSec.AddDefaulted(6);
    this->DemoNetDriverTickFlushTimeHistogramBucketsMs.AddDefaulted(6);
    this->CPUTimeBuckets.AddDefaulted(6);
    this->CPUPercentPerCoreBuckets.AddDefaulted(9);
    this->ActorsStarvedByClassTimeHistogramBuckets.AddDefaulted(10);
    this->XboxSubsystemNames.AddDefaulted(2);
}


