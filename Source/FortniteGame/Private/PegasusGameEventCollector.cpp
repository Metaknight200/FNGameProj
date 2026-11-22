#include "PegasusGameEventCollector.h"

UPegasusGameEventCollector::UPegasusGameEventCollector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InventoryChangesTimeSpan = 15.00f;
    this->EndSkydivePlayerCheckRadius = 6700.00f;
    this->WeaponExecutedTimeSpan = 12.00f;
    this->BuildingBeginPlayTimeSpan = 7.00f;
    this->ExpensiveTestInterval = 5.00f;
    this->SquadCohesionTestRadius = 765.00f;
    this->PlayerResourceEventsTimeSpan = 30.00f;
    this->EliminationEventsTimeSpan = 7.00f;
}

void UPegasusGameEventCollector::HandleOwnerVehicleStateChange(AFortPlayerPawn* Sender, AActor* NewVehicle, AActor* OldVehicle) {
}

void UPegasusGameEventCollector::HandleOwnerEndSkyDiving() {
}

void UPegasusGameEventCollector::HandleOwnerBeginSkyDiving() {
}

void UPegasusGameEventCollector::HandleOwnerAthenaPlaceChanged(AFortPlayerStateAthena* Sender, int32 NewPlace) {
}


