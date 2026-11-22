#include "FortAIFaunaAnimInstance_Grandma.h"

UFortAIFaunaAnimInstance_Grandma::UFortAIFaunaAnimInstance_Grandma() {
    this->AIPawn = NULL;
    this->MeshScale = 1.00f;
    this->bShouldPlayFullBodyInPlace = false;
    this->BlinkAlpha = 0.00f;
    this->WalkRunPlayRate = 1.00f;
    this->LocomotionPoseAdditiveAlpha = 1.00f;
    this->bEnableSniffAdditive = false;
    this->bEnableAlertAdditive = false;
    this->bIdleStartTurn = false;
    this->MaxSpeedFullBodyInPlace = 5.00f;
    this->MinCurveValueFullBodyInPlace = 0.50f;
    this->LocomotionPoseAdditiveAlphaInterpRate = 8.00f;
    this->SniffAdditiveFrequenceySeconds = 20;
    this->AlertAdditiveFrequenceySeconds = 10;
    this->PawnIDScale = 2;
    this->ShouldPlayFullBodyInPlaceCurveName = TEXT("ForceFullBody");
    this->BlinkAlphaCurveName = TEXT("DisableBlink");
    this->IdleStartTurnInterruptibleThreshold = 0.20f;
    this->bIsMovingOnGroundORIsSurfaceSwimming = false;
    this->bStateRule_DefaultJump_ToJumpApex = false;
    this->bStateRule_TurnIdle_Idle = false;
    this->bStateRule_TurnIdle_Moving = false;
    this->bStateRule_Moving_TurnIdle = false;
    this->bStateRule_TurnMoving_Moving = false;
    this->bStateRule_Moving_TurnMoving = false;
    this->bStateRule_Idle_Moving = false;
    this->bStateRule_Moving_Idle = false;
    this->bStateRule_JumpLand_Idle = false;
    this->bStateRule_JumpLand_Moving = false;
    this->bStateRule_JumpStart_JumpApex = false;
    this->bStateRule_SwimIdle_SwimLoco = false;
    this->bStateRule_SwimLoco_SwimIdle = false;
    this->bStateRule_SwimTurn_SwimIdle = false;
    this->bStateRule_SwimTurn_SwimLoco = false;
    this->bAnimRule_NegativeTurnAngle = false;
    this->InterruptibleMaxCheck = 0.95f;
    this->SpeedStopTransition = 5.00f;
    this->SpeedIdleMoveTransition = 200.00f;
    this->SpeedMovingTurnIdleTransition = 25.00f;
    this->SpeedToMoveMin = 10.00f;
    this->StateTimeFromEndThreshold = 0.10f;
    this->SpeedIdleStartTurnThreshold = 100.00f;
}

void UFortAIFaunaAnimInstance_Grandma::UpdateStateVariables() {
}

void UFortAIFaunaAnimInstance_Grandma::UpdateShouldPlayFullBodyInPlace() {
}

void UFortAIFaunaAnimInstance_Grandma::UpdateMovingRates() {
}

void UFortAIFaunaAnimInstance_Grandma::UpdateMeshScale() {
}

void UFortAIFaunaAnimInstance_Grandma::UpdateLocomotionPoseAlpha() {
}

void UFortAIFaunaAnimInstance_Grandma::UpdateIdleStartTurn() {
}

void UFortAIFaunaAnimInstance_Grandma::UpdateEnableSniffAdditive() {
}

void UFortAIFaunaAnimInstance_Grandma::UpdateEnableAlertAdditive() {
}

void UFortAIFaunaAnimInstance_Grandma::UpdateBlinkAlpha() {
}

bool UFortAIFaunaAnimInstance_Grandma::DetermineShouldPlayFullBodyInPlace() {
    return false;
}

bool UFortAIFaunaAnimInstance_Grandma::DetermineIdleStartTurn() {
    return false;
}

bool UFortAIFaunaAnimInstance_Grandma::DetermineEnableSniffAdditive() {
    return false;
}

bool UFortAIFaunaAnimInstance_Grandma::DetermineEnableAlertAdditive() {
    return false;
}

float UFortAIFaunaAnimInstance_Grandma::CalculateWalkRunPlayRate() {
    return 0.0f;
}

float UFortAIFaunaAnimInstance_Grandma::CalculateMeshScale() {
    return 0.0f;
}

float UFortAIFaunaAnimInstance_Grandma::CalculateLocomotionPoseAlpha() {
    return 0.0f;
}

float UFortAIFaunaAnimInstance_Grandma::CalculateBlinkAlpha() {
    return 0.0f;
}


