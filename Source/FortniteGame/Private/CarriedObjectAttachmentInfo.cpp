#include "CarriedObjectAttachmentInfo.h"

FCarriedObjectAttachmentInfo::FCarriedObjectAttachmentInfo() {
    // Initialize reflected value fields omitted by the dump.
    this->RelativeRotation = FRotator::ZeroRotator;
    this->RelativeTranslation = FVector::ZeroVector;
    this->AttachParent = NULL;
}

