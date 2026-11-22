#include "FortAIFaunaAnimInstance_Robert.h"

UFortAIFaunaAnimInstance_Robert::UFortAIFaunaAnimInstance_Robert() {
    this->AIPawn = NULL;
    this->bIdleStartTurn = false;
    this->bEnableHeadTiltDownAdditive = false;
    this->bIsFullBodyInPlace = false;
    this->LocomotionPoseAdditiveAlpha = 0.00f;
    this->PawnIDScale = 2;
    this->HeadTiltDownAdditiveFrequenceySeconds = 20;
    this->ForceFullBodyTransition = 0.50f;
    this->LocomotionPoseAdditiveAlphaInterpRate = 8.00f;
    this->IdleStartTurnInterruptibleThreshold = 0.20f;
    this->bStateRule_TurnIdle_Idle = false;
    this->bStateRule_Idle_TurnIdle = false;
    this->bStateRule_TurnIdle_Moving = false;
    this->bStateRule_TurnMoving_TurnIdle = false;
    this->bStateRule_Idle_Moving = false;
    this->bStateRule_Moving_Idle = false;
    this->bStateRule_TurnMoving_Moving = false;
    this->bStateRule_Moving_TurnMoving = false;
    this->bStateRule_Swimming_Fall = false;
    this->bStateRule_Land_Idle = false;
    this->bStateRule_JumpStart_Apex = false;
    this->bStateRule_SwimIdle_SwimLoco = false;
    this->bStateRule_SwimLoco_SwimIdle = false;
    this->bStateRule_SwimTurn_SwimIdle = false;
    this->bStateRule_SwimTurn_SwimLoco = false;
    this->bAnimRule_NegativeTurnAngle = false;
    this->InterruptibleMaxCheck = 0.95f;
    this->SpeedStopTransition = 10.00f;
    this->SpeedIdleMoveTransition = 100.00f;
    this->SpeedToMoveMin = 5.00f;
    this->StateTimeFromEndThreshold = 0.10f;
}

void UFortAIFaunaAnimInstance_Robert::UpdateStateVariables() {
}

void UFortAIFaunaAnimInstance_Robert::UpdateLocomotionPoseAdditiveAlpha() {
}

void UFortAIFaunaAnimInstance_Robert::UpdateIsFullBodyInPlace() {
}

void UFortAIFaunaAnimInstance_Robert::UpdateIdleStartTurn() {
}

void UFortAIFaunaAnimInstance_Robert::UpdateEnableHeadTiltDownAdditive() {
}

bool UFortAIFaunaAnimInstance_Robert::DetermineIsFullBodyInPlace() {
    return false;
}

bool UFortAIFaunaAnimInstance_Robert::DetermineIdleStartTurn() {
    return false;
}

bool UFortAIFaunaAnimInstance_Robert::DetermineEnableHeadTiltDownAdditive() {
    return false;
}

float UFortAIFaunaAnimInstance_Robert::CalculateLocomotionPoseAdditiveAlpha() {
    return 0.0f;
}


