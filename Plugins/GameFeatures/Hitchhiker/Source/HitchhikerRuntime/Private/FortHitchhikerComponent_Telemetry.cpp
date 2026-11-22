#include "FortHitchhikerComponent_Telemetry.h"

UFortHitchhikerComponent_Telemetry::UFortHitchhikerComponent_Telemetry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWasInfectedAtSpawn = false;
    this->InfectionCount = 0;
    this->DeinfectionCount = 0;
}

void UFortHitchhikerComponent_Telemetry::SetWasInfectedAtSpawn(bool bInfectedAtSpawn) {
}

void UFortHitchhikerComponent_Telemetry::OnInfected() {
}

void UFortHitchhikerComponent_Telemetry::OnDeinfected() {
}


