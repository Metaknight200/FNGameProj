#include "FortAnimInput_STWHoverBoard.h"

FFortAnimInput_STWHoverBoard::FFortAnimInput_STWHoverBoard() {
    // Initialize reflected value fields omitted by the dump.
    this->HoverTransformRotation = FRotator::ZeroRotator;
    this->HoverTransformTranslation = FVector::ZeroVector;
    this->HoverCycleVelocityCurve = NULL;
    this->HoverHeightCurve = NULL;
    this->HoverLeanCurve = NULL;
    this->HoverPitchCurve = NULL;
    this->HoverTransformAlpha = 0.00f;
    this->HoverCycle = 0.00f;
    this->HoverHeight = 0.00f;
    this->HoverLeanAngle = 0.00f;
    this->HoverPitchAngle = 0.00f;
    this->HoverYaw = 0.00f;
    this->HoverYawCurrent = 0.00f;
    this->HoverIdleLeanAlpha = 0.00f;
    this->bIsUsingHoverboard = false;
}

