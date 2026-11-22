#include "FortGameModeDeployableBase.h"
#include "FortGameStateDeployableBase.h"
#include "FortPlayerControllerDeployableBase.h"
#include "FortPlayerStateDeployableBase.h"

AFortGameModeDeployableBase::AFortGameModeDeployableBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AFortGameStateDeployableBase::StaticClass();
    this->PlayerControllerClass = AFortPlayerControllerDeployableBase::StaticClass();
    this->PlayerStateClass = AFortPlayerStateDeployableBase::StaticClass();
    this->GameModeSessionString = TEXT("FORTDEPLOYABLEBASEPVE");
    this->FrameTimeWithoutSleepHistogramBucketsMs.AddDefaulted(7);
    this->GameNetDriverTickFlushCostPerClientBucketsMicroSec.AddDefaulted(6);
    this->DemoNetDriverTickFlushTimeHistogramBucketsMs.AddDefaulted(6);
    this->CPUTimeBuckets.AddDefaulted(6);
    this->CPUPercentPerCoreBuckets.AddDefaulted(9);
    this->ActorsStarvedByClassTimeHistogramBuckets.AddDefaulted(10);
    this->XboxSubsystemNames.AddDefaulted(2);
}


