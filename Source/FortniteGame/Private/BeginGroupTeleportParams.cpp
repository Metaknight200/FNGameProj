#include "BeginGroupTeleportParams.h"

FBeginGroupTeleportParams::FBeginGroupTeleportParams() {
    this->bRespawnPlayers = false;
    this->bForceKillPlayers = false;
    this->bAutoReleaseFromStasis = false;
    this->FadeTime = 0.00f;
    this->HealthAndShieldResetType = ESynchronizedTeleportHealthAndShieldResetType::None;
    this->bResetPlayerInventories = false;
    this->bRandomizePlayerInventories = false;
    this->bReinitializePlayerAbilities = false;
    this->bBlockPickupsDuringTeleport = false;
    this->bFadeSound = false;
}

