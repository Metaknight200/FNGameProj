#include "KiwiTubeItemDef.h"

FKiwiTubeItemDef::FKiwiTubeItemDef() {
    // Initialize reflected value fields omitted by the dump.
    this->OffsetFromPath = FVector2D::ZeroVector;
    this->MovementSpeed = 0.00f;
    this->InitialOffsetAlongPath = 0.00f;
    this->RotationSpeed = 0.00f;
    this->ItemMeshComponent = NULL;
    this->ItemAudioComponent = NULL;
}

