#include "FortAthenaMutator_SurvivalObjectiveData.h"

FFortAthenaMutator_SurvivalObjectiveData::FFortAthenaMutator_SurvivalObjectiveData() {
    // Initialize reflected value fields omitted by the dump.
    this->SpecialActorCompassIconScale = FVector2D::ZeroVector;
    this->SpecialActorMinimapIconScale = FVector2D::ZeroVector;
    this->BuildingActorObjectiveClass = NULL;
    this->ActivationSafeZoneIndex = 0;
    this->bEndMatchOnDestroy = false;
    this->bSpawnOnPOI = false;
    this->bClearAreaOnSpawn = false;
    this->ClearAreaRadiusOverride = 0.00f;
    this->ClearAreaHalfHeightOverride = 0.00f;
    this->bIsSpecialActor = false;
    this->RandomizedPOICount = 0;
    this->SpawnedBuildingActorObjective = NULL;
}

