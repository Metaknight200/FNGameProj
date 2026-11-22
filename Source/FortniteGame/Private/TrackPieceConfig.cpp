#include "TrackPieceConfig.h"

FTrackPieceConfig::FTrackPieceConfig() {
    // Initialize reflected value fields omitted by the dump.
    this->Rotation = FRotator::ZeroRotator;
    this->Scale = FVector::ZeroVector;
    this->Type = ETrackPieceType::None;
}

