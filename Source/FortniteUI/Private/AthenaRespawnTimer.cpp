#include "AthenaRespawnTimer.h"

UAthenaRespawnTimer::UAthenaRespawnTimer() {
    this->MinUpdateTime = 0.00f;
    this->CreativeMinUpdateTime = 2.00f;
    this->Text_Time = NULL;
}



void UAthenaRespawnTimer::HandleStartedRespawn(AFortPlayerControllerZone* PlayerController) {
}


void UAthenaRespawnTimer::AddExtensionWidget(UWidget* Widget) {
}


