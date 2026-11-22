#include "FortDecoHelper.h"

AFortDecoHelper::AFortDecoHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DecoPreview = NULL;
    this->PlacementActorClass = NULL;
    this->DecoToolReach = 512.00f;
    this->CurrentAttachmentType = ATTACH_None;
    this->CurrentPlacementType = EPlacementType::Free;
    this->DecoItemDefinition = NULL;
    this->ScaleData[0] = 0.00f;
    this->ScaleData[1] = 0.00f;
    this->bInFallbackPosition = false;
    this->FallbackTinyScale = 0.00f;
    this->CanPlaceState = EFortDecoPlacementQueryResults::NoLocation;
    this->DesiredRelativeRotation = 0.00f;
    this->GridSnapSize = 0.00f;
}

bool AFortDecoHelper::IsInValidPlacementSpot(bool bTestingForVisuals) const {
    return false;
}

bool AFortDecoHelper::GetInFallbackPosition() const {
    return bInFallbackPosition;
}


