#include "FortGameModeSurvival.h"
#include "FortGameStateSurvival.h"
#include "FortPlayerStateZone.h"

AFortGameModeSurvival::AFortGameModeSurvival(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AFortGameStateSurvival::StaticClass();
    this->PlayerStateClass = AFortPlayerStateZone::StaticClass();
    this->GameModeSessionString = TEXT("FORTSURVIVAL");
    this->FrameTimeWithoutSleepHistogramBucketsMs.AddDefaulted(7);
    this->GameNetDriverTickFlushCostPerClientBucketsMicroSec.AddDefaulted(6);
    this->DemoNetDriverTickFlushTimeHistogramBucketsMs.AddDefaulted(6);
    this->CPUTimeBuckets.AddDefaulted(6);
    this->CPUPercentPerCoreBuckets.AddDefaulted(9);
    this->ActorsStarvedByClassTimeHistogramBuckets.AddDefaulted(10);
    this->XboxSubsystemNames.AddDefaulted(2);
}

void AFortGameModeSurvival::FireEvent_SurvivalVoteReport(const TArray<ABuildingActor*>& ActorsBeingDefended) const {
}

void AFortGameModeSurvival::FireEvent_SurvivalPeriodicReport(EFortReportDayPhase TimeOfReport, const TArray<ABuildingActor*>& ActorsBeingDefended) const {
}


