#include "DagwoodRuntimeModifiers.h"

FDagwoodRuntimeModifiers::FDagwoodRuntimeModifiers() {
    this->bDamageFriendlyFire = false;
    this->bDamageOtherVehicles = false;
    this->bDamageOwnVehicle = false;
    this->GravityMultiplier = 0.00f;
    this->MaxInclineAngle = 0.00f;
    this->MaxTiltAngle = 0.00f;
    this->TireModVersion = 0;
    this->DataVersion = 0;
}

