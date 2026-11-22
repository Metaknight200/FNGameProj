#include "CobaltCombatStormShieldDataEntry.h"

FCobaltCombatStormShieldDataEntry::FCobaltCombatStormShieldDataEntry() {
    // Initialize reflected value fields omitted by the dump.
    this->StormShieldPOILocation = FVector::ZeroVector;
    this->Team0RespawnPoint = FVector2D::ZeroVector;
    this->Team1RespawnPoint = FVector2D::ZeroVector;
    this->bStormShieldActive = false;
    this->StormShieldActor = NULL;
    this->RoundIndex = 0;
    this->LeadingTeam = 0;
    this->TieBreakerTeam = 0;
    this->bAwardedFirstEliminationOfRound = false;
    this->FirstLandTeam = 0;
    this->POICamera = NULL;
    this->NextSupplyDropSpawnTime = 0.00f;
}

