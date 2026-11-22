#include "FortAnimInput_TurnCorrection.h"

FFortAnimInput_TurnCorrection::FFortAnimInput_TurnCorrection() {
    this->YawCorrectionOffset = 0.00f;
    this->MaxYawCorrectionOffset = 0.00f;
    this->CharacterMeshYawOffset = 0.00f;
    this->CurveMultiplier = 0.00f;
    this->CharacterInitialWorldYaw = 0.00f;
    this->CharacterWorldYawLastFrame = 0.00f;
    this->AccumulatedAnimationYaw = 0.00f;
    this->TotalYawFromCurve = 0.00f;
    this->RotationCurveYawLastFrame = 0.00f;
    this->bEnableDebug = false;
    this->bIsTurnFinished = false;
}

