#include "VehicleSpringInfo.h"

FVehicleSpringInfo::FVehicleSpringInfo() {
    // Initialize reflected value fields omitted by the dump.
    this->End = FVector::ZeroVector;
    this->ForceDir = FVector::ZeroVector;
    this->ForcePt = FVector::ZeroVector;
    this->GroundPlane = FPlane(0, 0, 0, 0);
    this->RayDir = FVector::ZeroVector;
    this->SpringStartLocalOffset = FVector::ZeroVector;
    this->Start = FVector::ZeroVector;
    this->SpringLength = 0.00f;
    this->SpringStiff = 0.00f;
    this->SpringDamp = 0.00f;
    this->SpringRadius = 0.00f;
    this->MaxAccelChange = 0.00f;
    this->SeatSocketIndex = 0;
    this->bIsLookAhead = false;
    this->bNormalToGroundTriangle = false;
    this->bForceAlongSpringGroundNormal = false;
    this->LookAheadMinSpeed = 0.00f;
    this->LookAheadMaxSpeed = 0.00f;
    this->LookAheadMinStiff = 0.00f;
    this->LookAheadMaxStiff = 0.00f;
    this->SprungMass = 0.00f;
    this->bEnabled = false;
}

