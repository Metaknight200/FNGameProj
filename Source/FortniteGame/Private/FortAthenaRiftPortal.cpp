#include "FortAthenaRiftPortal.h"

AFortAthenaRiftPortal::AFortAthenaRiftPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
}

void AFortAthenaRiftPortal::TeleportVehicleFacing(AActor* Vehicle, const FVector& TeleportLocation, const FRotator& Rot) {
}

void AFortAthenaRiftPortal::TeleportVehicle(AActor* Vehicle, const FVector& TeleportLocation) {
}


void AFortAthenaRiftPortal::NotifyTeleportedVehicle_Implementation(AActor* VehicleActor) {
}

bool AFortAthenaRiftPortal::IsIgnoredActor(const AActor* QueryActor) const {
    return false;
}

void AFortAthenaRiftPortal::AddIgnoredActor(const AActor* Actor) {
}


