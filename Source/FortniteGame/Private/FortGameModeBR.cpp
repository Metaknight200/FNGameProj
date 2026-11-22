#include "FortGameModeBR.h"
#include "FortGameStateBR.h"

AFortGameModeBR::AFortGameModeBR(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AFortGameStateBR::StaticClass();
    this->FrameTimeWithoutSleepHistogramBucketsMs.AddDefaulted(7);
    this->GameNetDriverTickFlushCostPerClientBucketsMicroSec.AddDefaulted(6);
    this->DemoNetDriverTickFlushTimeHistogramBucketsMs.AddDefaulted(6);
    this->CPUTimeBuckets.AddDefaulted(6);
    this->CPUPercentPerCoreBuckets.AddDefaulted(9);
    this->ActorsStarvedByClassTimeHistogramBuckets.AddDefaulted(10);
    this->StarvedActorClassList.AddDefaulted(3);
    this->XboxSubsystemNames.AddDefaulted(2);
    this->PlatformOSSNamesToUploadStatsV2.AddDefaulted(6);
    this->SupportedAthenaLootTierGroups.AddDefaulted(57);
}


