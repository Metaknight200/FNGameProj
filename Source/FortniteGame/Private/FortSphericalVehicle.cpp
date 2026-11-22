#include "FortSphericalVehicle.h"
#include "FortVehiclePontoonsComponent.h"

AFortSphericalVehicle::AFortSphericalVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PontoonsComponent = CreateDefaultSubobject<UFortVehiclePontoonsComponent>(TEXT("VehiclePontoonsComponent"));
    this->FortSphericalVehicleConfigsClass = NULL;
}

void AFortSphericalVehicle::TickSpawnEffects(float DeltaTime, float Val, float ForwardSpeedKmH) {
}



