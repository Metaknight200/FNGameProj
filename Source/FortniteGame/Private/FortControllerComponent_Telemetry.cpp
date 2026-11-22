#include "FortControllerComponent_Telemetry.h"

UFortControllerComponent_Telemetry::UFortControllerComponent_Telemetry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TotalTeleports = 0;
    this->TotalAmmoCheats = 0;
    this->SpawnTime = 0.00f;
    this->TotalItemsConsumed = 0;
    this->TotalTimesRevived = 0;
    this->bHasLandedFromSkyDiving = false;
    this->SkyDiveLandAsyncQueue = 0;
}


