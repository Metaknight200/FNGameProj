#include "FortAIFaunaAnimInstance_Labrador.h"

UFortAIFaunaAnimInstance_Labrador::UFortAIFaunaAnimInstance_Labrador() {
    this->bHighVelocity = false;
    this->bIsInterruptible = false;
    this->bLocoToIdle = false;
    this->bIdleToLoco = false;
    this->bJumpStartToJumpLoop = false;
    this->bJumpLandToMovement = false;
    this->bIsRunning = false;
    this->bIdleToFalling = false;
    this->bToppledOnGround = false;
    this->bTransitionToLand = false;
    this->TargetDistance = 0.00f;
    this->bTargetIsClose = false;
    this->bIsInTractorBeam = false;
    this->bIsFloating = false;
    this->bIsToppled = false;
    this->bIsLeaking = false;
    this->MinHighVelocityMagnitude = 3000.00f;
    this->MaxInterruptibleCurveValue = 0.95f;
    this->LocoIdleTransitionThreshold = 10.00f;
    this->RunSpeedThreshold = 100.00f;
    this->JumpLandToMovementInterruptibleThreshold = 0.40f;
    this->MinTargetIsCloseDistance = 1000.00f;
    this->CurveName_Interruptible = TEXT("Interruptible");
}


