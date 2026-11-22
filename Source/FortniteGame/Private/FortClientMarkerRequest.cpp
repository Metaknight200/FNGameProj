#include "FortClientMarkerRequest.h"

FFortClientMarkerRequest::FFortClientMarkerRequest() {
    // Initialize reflected value fields omitted by the dump.
    this->BasePosition = FVector::ZeroVector;
    this->BasePositionOffset = FVector::ZeroVector;
    this->WorldNormal = FVector::ZeroVector;
    this->InstanceID = 0;
    this->MarkerType = EFortWorldMarkerType::None;
    this->MarkedActor = NULL;
    this->bIncludeSquad = false;
    this->bUseHoveredMarkerDetail = false;
}

