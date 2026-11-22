#include "FortAthenaUmamiKidnapDigestedSkillSet.h"

UFortAthenaUmamiKidnapDigestedSkillSet::UFortAthenaUmamiKidnapDigestedSkillSet() {
    this->bEnabled = true;
    this->bEnableHighPriorityTarget = true;
    this->bEnableLowPriorityTarget = true;
    this->bEnablePawnTarget = true;
    this->bIgnorePawnsWithNoRangedWeapons = true;
    this->bIgnoreFortAIPawns = false;
    this->DesiredZOffsetFromTarget = 2000.00f;
    this->MinTimeToReleaseKidnappedPawn = 15.00f;
    this->MaxTimeToReleaseKidnappedPawn = 20.00f;
    this->MinTimeToReleaseKidnappedObject = 50.00f;
    this->MaxTimeToReleaseKidnappedObject = 70.00f;
    this->ReleaseKidnappedPawnAfterNumberOfPoints = 1;
    this->ReleaseKidnappedObjectAfterNumberOfPoints = 1;
    this->ReleaseKidnappedIfWithinDistanceFromStorm = 5000.00f;
    this->TimeBetweenPawnKidnaps = 120.00f;
    this->TimeBetweenObjectKidnaps = 60.00f;
    this->KidnapBlacklistTime = 20.00f;
    this->GlobalKidnapDelay = 0.00f;
    this->GlobalPawnKidnapDelay = 0.00f;
    this->GlobalObjectKidnapDelay = 0.00f;
    this->GlobalNPCKidnapDelay = 120.00f;
    this->StartingNPCKidnapDelay = 180.00f;
    this->MinimumPlayersToEnableFullKidnap = 60;
    this->bEnableFullKidnapAfterOneKidnap = true;
    this->WeightDeltaForPawnsInStorm = 1000.00f;
    this->MinimumDistanceFromLastFailedRetrieval = 500.00f;
    this->MaximumDistanceForHighPriorityTrackedObject = 10000.00f;
    this->MaximumDistanceForLowPriorityTrackedObject = 3000.00f;
    this->MinDelayForLowPriorityTrackedObjectKidnap = 20.00f;
    this->MaxDelayForLowPriorityTrackedObjectKidnap = 30.00f;
    this->LowPriorityTrackedObjectWinPercentage = 0.50f;
    this->UnrestrictedObjectKidnapWinPercentage = 0.90f;
    this->bKidnapEnableBlacklistByGameplayTagBeforeBeam = true;
    this->MinimumDotWithTargetBeforeBeam = 0.25f;
    this->MinimumDistanceFromStormWhenEscapingForPawn = 4000.00f;
    this->EscapeCircleRadiusForPawn = 25000.00f;
    this->EscapeCircleExclusionRadiusForPawn = 0.60f;
    this->MinEscapeZExtendForPawn = 4200.00f;
    this->MaxEscapeZExtendForPawn = 4200.00f;
    this->MinimumDistanceFromStormWhenEscapingForObject = 4000.00f;
    this->EscapeCircleRadiusForObject = 25000.00f;
    this->EscapeCircleExclusionRadiusForObject = 0.60f;
    this->MinEscapeZExtendForObject = 4200.00f;
    this->MaxEscapeZExtendForObject = 4200.00f;
    this->MaximumTimeToTryToKidnap = 10.00f;
    this->MaximumTryToKidnapBlockedCount = 1;
    this->bEnableGraveyard = true;
    this->GraveyardPercentageForObject = 0.70f;
    this->GraveyardPercentageForCreatures = 0.50f;
    this->GraveyardPercentageForPlayers = 0.40f;
    this->GraveyardMinDistanceFromStorm = 30000.00f;
    this->GraveyardMinDistanceFromKidnapOrigin = 5000.00f;
    this->MinGraveyardDistanceFromKidnapCentre = 11500.00f;
    this->MaxGraveyardDistanceFromKidnapCentre = 18500.00f;
}


