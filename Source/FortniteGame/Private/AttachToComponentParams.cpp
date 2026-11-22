#include "AttachToComponentParams.h"

FAttachToComponentParams::FAttachToComponentParams() {
    this->LocationRule = EAttachmentRule::KeepRelative;
    this->RotationRule = EAttachmentRule::KeepRelative;
    this->ScaleRule = EAttachmentRule::KeepRelative;
    this->bWeldSimulatedBodies = false;
}

