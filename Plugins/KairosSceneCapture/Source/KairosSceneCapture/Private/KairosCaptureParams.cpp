#include "KairosCaptureParams.h"

FKairosCaptureParams::FKairosCaptureParams() {
    // Initialize reflected value fields omitted by the dump.
    this->BackgroundColor = FColor(0, 0, 0, 0);
    this->Size = FVector2D::ZeroVector;
    this->FrameRate = 0;
    this->OverrideNumFrames = 0;
}

