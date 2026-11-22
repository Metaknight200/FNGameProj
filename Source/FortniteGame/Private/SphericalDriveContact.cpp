#include "SphericalDriveContact.h"

FSphericalDriveContact::FSphericalDriveContact() {
    // Initialize reflected value fields omitted by the dump.
    this->Impulse = FVector::ZeroVector;
    this->Location = FVector::ZeroVector;
    this->Normal = FVector::ZeroVector;
    this->Traction = 0.00f;
    this->bIsBouncy = false;
}

