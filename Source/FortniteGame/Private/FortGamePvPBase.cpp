#include "FortGamePvPBase.h"
#include "FortPlayerControllerAthena.h"
#include "FortUIPvP.h"

AFortGamePvPBase::AFortGamePvPBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = AFortPlayerControllerAthena::StaticClass();
    this->HUDClass = AFortUIPvP::StaticClass();
    this->GameModeSessionString = TEXT("FORTPVP");
    this->TeamInfoClass = NULL;
    this->FrameTimeWithoutSleepHistogramBucketsMs.AddDefaulted(7);
    this->GameNetDriverTickFlushCostPerClientBucketsMicroSec.AddDefaulted(6);
    this->DemoNetDriverTickFlushTimeHistogramBucketsMs.AddDefaulted(6);
    this->CPUTimeBuckets.AddDefaulted(6);
    this->CPUPercentPerCoreBuckets.AddDefaulted(9);
    this->ActorsStarvedByClassTimeHistogramBuckets.AddDefaulted(10);
    this->bCriticalMissionEligible = false;
    this->XboxSubsystemNames.AddDefaulted(2);
    this->NumTeams = 0;
}


