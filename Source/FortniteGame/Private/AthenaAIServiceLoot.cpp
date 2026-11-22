#include "AthenaAIServiceLoot.h"

UAthenaAIServiceLoot::UAthenaAIServiceLoot() {
    this->CachedWorldItem = NULL;
    this->BotBuildingContainerBlacklistDataTable = NULL;
}

void UAthenaAIServiceLoot::UpdateSupplyDropStatus() {
}

void UAthenaAIServiceLoot::UpdateMovingLoots() {
}

void UAthenaAIServiceLoot::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}


