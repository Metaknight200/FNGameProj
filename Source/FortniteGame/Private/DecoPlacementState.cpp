#include "DecoPlacementState.h"

FDecoPlacementState::FDecoPlacementState() {
    // Initialize reflected value fields omitted by the dump.
    this->AbsoluteRotation = FQuat::Identity;
    this->CreateBuildingLocation = FVector::ZeroVector;
    this->CreateBuildingRotation = FRotator::ZeroRotator;
    this->End = FVector::ZeroVector;
    this->FallbackLocation = FVector::ZeroVector;
    this->GridLocation = FVector::ZeroVector;
    this->Normal = FVector::ZeroVector;
    this->PreviousLocation = FVector::ZeroVector;
    this->RawLocation = FVector::ZeroVector;
    this->Start = FVector::ZeroVector;
    this->CanPlaceState = EFortDecoPlacementQueryResults::CanAdd;
}

