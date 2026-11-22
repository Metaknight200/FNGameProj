#include "FortGameModePvE.h"
#include "FortGameStatePvE.h"
#include "FortPlayerControllerPvE.h"
#include "FortPlayerStatePvE.h"

AFortGameModePvE::AFortGameModePvE(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AFortGameStatePvE::StaticClass();
    this->PlayerControllerClass = AFortPlayerControllerPvE::StaticClass();
    this->PlayerStateClass = AFortPlayerStatePvE::StaticClass();
    this->FrameTimeWithoutSleepHistogramBucketsMs.AddDefaulted(7);
    this->GameNetDriverTickFlushCostPerClientBucketsMicroSec.AddDefaulted(6);
    this->DemoNetDriverTickFlushTimeHistogramBucketsMs.AddDefaulted(6);
    this->CPUTimeBuckets.AddDefaulted(6);
    this->CPUPercentPerCoreBuckets.AddDefaulted(9);
    this->ActorsStarvedByClassTimeHistogramBuckets.AddDefaulted(10);
    this->XboxSubsystemNames.AddDefaulted(2);
    this->bIdleKickEnabledByConfig = true;
    this->bIdleKickEnabledByBlueprint = true;
    this->bOnlyIdleKickPublicMatches = false;
    this->bResetDefaultIdleTimeWhenNoLongerSolo = true;
    this->bAnyMovementNotIdleWhilePrivate = true;
    this->bRestrictMaxIdleTime = true;
    this->RestrictedMaxIdleTime = 600.00f;
    this->bSendIdleAnalytics = true;
    this->bWaitForAircraft = false;
    this->bBuildingContainersStartAlreadySearched = false;
    this->bSpawnLootForBuildingContainersThatStartAlreadySearched = false;
    this->bSpawnWeaponsWithMaxPerks = true;
    this->bSpawnTrapsWithMaxPerks = false;
    this->bUseHighPerkSlotValues = false;
    this->bEnableBigBenPvE = false;
    this->BigBenPvEAdjust = 300.00f;
}

void AFortGameModePvE::SetIdleKickEnabled(bool bEnabled) {
}

void AFortGameModePvE::SetIdleDetectionScoreThreshold(EFortIdleDetectionState IdleState, int32 InScoreThreshold) {
}

void AFortGameModePvE::SetIdleDetectionPenaltyTime(float InPenaltyTime) {
}

void AFortGameModePvE::SetIdleDetectionMovementDistance(EFortIdleDetectionState IdleState, float InMovementDistance) {
}

void AFortGameModePvE::SetIdleDetectionMinIdleTime(EFortIdleDetectionState IdleState, float InMinIdleTime) {
}

void AFortGameModePvE::SetIdleDetectionMaxIdleTime(EFortIdleDetectionState IdleState, float InMaxIdleTime) {
}

void AFortGameModePvE::RemoveAllowIdlePlayerLocation(AActor* LocationActor) {
}

void AFortGameModePvE::HandleOnAircraftRegistered(const AFortAircraft* InAircraft) {
}

void AFortGameModePvE::AddAllowIdlePlayerLocation(AActor* LocationActor, float Radius) {
}


